// components/services/quarantine/public/mojom/quarantine.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_QUARANTINE_PUBLIC_MOJOM_QUARANTINE_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_QUARANTINE_PUBLIC_MOJOM_QUARANTINE_MOJOM_TEST_UTILS_H_

#include "components/services/quarantine/public/mojom/quarantine.mojom.h"


namespace quarantine {
namespace mojom {


class  QuarantineInterceptorForTesting : public Quarantine {
  virtual Quarantine* GetForwardingInterface() = 0;
  void QuarantineFile(const ::base::FilePath& full_path, const ::GURL& source_url, const ::GURL& referrer_url, const std::string& client_guid, QuarantineFileCallback callback) override;
};
class  QuarantineAsyncWaiter {
 public:
  explicit QuarantineAsyncWaiter(Quarantine* proxy);

  QuarantineAsyncWaiter(const QuarantineAsyncWaiter&) = delete;
  QuarantineAsyncWaiter& operator=(const QuarantineAsyncWaiter&) = delete;

  ~QuarantineAsyncWaiter();
  void QuarantineFile(
      const ::base::FilePath& full_path, const ::GURL& source_url, const ::GURL& referrer_url, const std::string& client_guid, QuarantineFileResult* out_result);

 private:
  Quarantine* const proxy_;
};




}  // namespace mojom
}  // namespace quarantine

#endif  // COMPONENTS_SERVICES_QUARANTINE_PUBLIC_MOJOM_QUARANTINE_MOJOM_TEST_UTILS_H_