// third_party/blink/public/mojom/storage_access/storage_access_automation.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_STORAGE_ACCESS_STORAGE_ACCESS_AUTOMATION_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_STORAGE_ACCESS_STORAGE_ACCESS_AUTOMATION_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/storage_access/storage_access_automation.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace test {
namespace mojom {


class BLINK_COMMON_EXPORT StorageAccessAutomationInterceptorForTesting : public StorageAccessAutomation {
  virtual StorageAccessAutomation* GetForwardingInterface() = 0;
  void SetStorageAccess(const std::string& origin, const std::string& embedding_origin, bool allowed, SetStorageAccessCallback callback) override;
};
class BLINK_COMMON_EXPORT StorageAccessAutomationAsyncWaiter {
 public:
  explicit StorageAccessAutomationAsyncWaiter(StorageAccessAutomation* proxy);

  StorageAccessAutomationAsyncWaiter(const StorageAccessAutomationAsyncWaiter&) = delete;
  StorageAccessAutomationAsyncWaiter& operator=(const StorageAccessAutomationAsyncWaiter&) = delete;

  ~StorageAccessAutomationAsyncWaiter();
  void SetStorageAccess(
      const std::string& origin, const std::string& embedding_origin, bool allowed, bool* out_success);

 private:
  StorageAccessAutomation* const proxy_;
};




}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_STORAGE_ACCESS_STORAGE_ACCESS_AUTOMATION_MOJOM_TEST_UTILS_H_