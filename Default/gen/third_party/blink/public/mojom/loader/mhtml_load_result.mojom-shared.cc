// third_party/blink/public/mojom/loader/mhtml_load_result.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/loader/mhtml_load_result.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/loader/mhtml_load_result.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* MHTMLLoadResultToStringHelper(MHTMLLoadResult value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case MHTMLLoadResult::kSuccess:
      return "kSuccess";
    case MHTMLLoadResult::kEmptyFile:
      return "kEmptyFile";
    case MHTMLLoadResult::kUrlSchemeNotAllowed:
      return "kUrlSchemeNotAllowed";
    case MHTMLLoadResult::kInvalidArchive:
      return "kInvalidArchive";
    case MHTMLLoadResult::kMissingMainResource:
      return "kMissingMainResource";
    default:
      return nullptr;
  }
}

std::string MHTMLLoadResultToString(MHTMLLoadResult value) {
  const char *str = MHTMLLoadResultToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown MHTMLLoadResult value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, MHTMLLoadResult value) {
  return os << MHTMLLoadResultToString(value);
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::MHTMLLoadResult>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::MHTMLLoadResult value) {
  return std::move(context).WriteString(::blink::mojom::MHTMLLoadResultToString(value));
}

} // namespace perfetto