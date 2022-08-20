// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/test_data_source.h"

#include <memory>

#include "base/base_paths.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/memory/ref_counted_memory.h"
#include "base/path_service.h"
#include "base/strings/string_util.h"
#include "base/task/task_traits.h"
#include "base/task/thread_pool.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/common/chrome_paths.h"
#include "chrome/common/url_constants.h"
#include "chrome/common/webui_url_constants.h"
#include "content/public/browser/url_data_source.h"
#include "content/public/common/url_constants.h"
#include "services/network/public/mojom/content_security_policy.mojom.h"

namespace {
const char kModuleQuery[] = "module=";
}  // namespace

TestDataSource::TestDataSource(std::string root) {
  base::FilePath test_data;
  CHECK(base::PathService::Get(chrome::DIR_TEST_DATA, &test_data));
  src_root_ = test_data.AppendASCII(root).NormalizePathSeparators();
  DCHECK(test_data.IsParent(src_root_));

  base::FilePath exe_dir;
  base::PathService::Get(base::DIR_EXE, &exe_dir);
  gen_root_ = exe_dir.AppendASCII("gen/chrome/test/data/" + root)
                  .NormalizePathSeparators();
  DCHECK(exe_dir.IsParent(gen_root_));

  custom_paths_ = {
      {"/chai.js", "third_party/chaijs/chai.js"},
      {"/mocha.js", "third_party/mocha/mocha.js"},
      {"/test_loader.html", "ui/webui/resources/html/test_loader.html"},
      {"/test_loader.js", "ui/webui/resources/js/test_loader.js"},
      {"/test_loader_util.js", "ui/webui/resources/js/test_loader_util.js"},
  };
}

TestDataSource::~TestDataSource() = default;

std::string TestDataSource::GetSource() {
  return "test";
}

void TestDataSource::StartDataRequest(
    const GURL& url,
    const content::WebContents::Getter& wc_getter,
    content::URLDataSource::GotDataCallback callback) {
  const std::string path = content::URLDataSource::URLToRequestPath(url);
  base::ThreadPool::PostTask(
      FROM_HERE, {base::MayBlock(), base::TaskPriority::USER_BLOCKING},
      base::BindOnce(&TestDataSource::ReadFile, base::Unretained(this), path,
                     std::move(callback)));
}

std::string TestDataSource::GetMimeType(const GURL& url) {
  if (base::EndsWith(url.path_piece(), ".html",
                     base::CompareCase::INSENSITIVE_ASCII) ||
      base::StartsWith(url.query_piece(), kModuleQuery,
                       base::CompareCase::INSENSITIVE_ASCII)) {
    // Direct request for HTML, or autogenerated HTML response for module query.
    return "text/html";
  }
  // The test data source currently only serves HTML and JS.
  CHECK(base::EndsWith(url.path_piece(), ".js",
                       base::CompareCase::INSENSITIVE_ASCII))
      << "Tried to read file with unexpected type from test data source: "
      << url.path_piece();
  return "application/javascript";
}

bool TestDataSource::ShouldServeMimeTypeAsContentTypeHeader() {
  return true;
}

bool TestDataSource::AllowCaching() {
  return false;
}

std::string TestDataSource::GetContentSecurityPolicy(
    network::mojom::CSPDirectiveName directive) {
  if (directive == network::mojom::CSPDirectiveName::ScriptSrc) {
    return "script-src chrome://* 'self';";
  } else if (directive == network::mojom::CSPDirectiveName::WorkerSrc) {
    return "worker-src blob: 'self';";
  } else if (directive ==
                 network::mojom::CSPDirectiveName::RequireTrustedTypesFor ||
             directive == network::mojom::CSPDirectiveName::TrustedTypes) {
    return std::string();
  } else if (directive == network::mojom::CSPDirectiveName::FrameAncestors) {
    return "frame-ancestors chrome://* 'self';";
  } else if (directive == network::mojom::CSPDirectiveName::FrameSrc) {
    return "frame-src chrome://test/;";
  } else if (directive == network::mojom::CSPDirectiveName::ChildSrc) {
    return "child-src chrome://test/;";
  }

  return content::URLDataSource::GetContentSecurityPolicy(directive);
}

GURL TestDataSource::GetURLForPath(const std::string& path) {
  return GURL(std::string(content::kChromeUIScheme) + "://" + GetSource() +
              "/" + path);
}

void TestDataSource::ReadFile(
    const std::string& path,
    content::URLDataSource::GotDataCallback callback) {
  std::string content;

  GURL url = GetURLForPath(path);
  CHECK(url.is_valid());

  // First check if a custom path mapping exists for the requested URL.
  auto it = custom_paths_.find(url.path());
  if (it != custom_paths_.end()) {
    base::FilePath src_root;
    CHECK(base::PathService::Get(base::DIR_SOURCE_ROOT, &src_root));
    base::FilePath file_path =
        src_root.AppendASCII(it->second).NormalizePathSeparators();
    CHECK(base::ReadFileToString(file_path, &content))
        << url.spec() << "=" << file_path.value();
    scoped_refptr<base::RefCountedString> response =
        base::RefCountedString::TakeString(&content);
    std::move(callback).Run(response.get());
    return;
  }

  if (base::StartsWith(url.query(), kModuleQuery,
                       base::CompareCase::INSENSITIVE_ASCII)) {
    std::string js_path = url.query().substr(strlen(kModuleQuery));

    base::FilePath file_path =
        src_root_.Append(base::FilePath::FromUTF8Unsafe(js_path));
    // Do some basic validation of the JS file path provided in the query.
    CHECK_EQ(file_path.Extension(), FILE_PATH_LITERAL(".js"));

    base::FilePath file_path2 =
        gen_root_.Append(base::FilePath::FromUTF8Unsafe(js_path));
    CHECK(base::PathExists(file_path) || base::PathExists(file_path2))
        << url.spec() << "=" << file_path.value();
    content = "<script type=\"module\" src=\"" + js_path + "\"></script>";
  } else {
    // Strip the query
    size_t query_length = url.query().length();
    std::string no_query_path =
        query_length == 0 ? path
                          : path.substr(0, path.length() - query_length - 1);

    // Try the |gen_root_| folder first, covering cases where the test file is
    // generated at build time. We do this first as if a test file exists under
    // the same name in the src and gen directories, the generated file is
    // generally the desired file (for example, may have been preprocessed).
    base::FilePath gen_root_file_path =
        gen_root_.Append(base::FilePath::FromUTF8Unsafe(no_query_path));
    if (base::PathExists(gen_root_file_path)) {
      CHECK(base::ReadFileToString(gen_root_file_path, &content))
          << url.spec() << "=" << gen_root_file_path.value();
    } else {
      // Then try the |src_root_| folder, covering cases where the test file is
      // generated at build time.
      base::FilePath src_root_file_path =
          src_root_.Append(base::FilePath::FromUTF8Unsafe(no_query_path));
      CHECK(base::ReadFileToString(src_root_file_path, &content))
          << url.spec() << "=" << src_root_file_path.value();
    }
  }

  scoped_refptr<base::RefCountedString> response =
      base::RefCountedString::TakeString(&content);
  std::move(callback).Run(response.get());
}
