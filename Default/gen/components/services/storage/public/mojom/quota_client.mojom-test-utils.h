// components/services/storage/public/mojom/quota_client.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_QUOTA_CLIENT_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_QUOTA_CLIENT_MOJOM_TEST_UTILS_H_

#include "components/services/storage/public/mojom/quota_client.mojom.h"


namespace storage {
namespace mojom {


class  QuotaClientInterceptorForTesting : public QuotaClient {
  virtual QuotaClient* GetForwardingInterface() = 0;
  void GetBucketUsage(const ::storage::BucketLocator& bucket, GetBucketUsageCallback callback) override;
  void GetStorageKeysForType(::blink::mojom::StorageType type, GetStorageKeysForTypeCallback callback) override;
  void DeleteBucketData(const ::storage::BucketLocator& bucket, DeleteBucketDataCallback callback) override;
  void PerformStorageCleanup(::blink::mojom::StorageType type, PerformStorageCleanupCallback callback) override;
};
class  QuotaClientAsyncWaiter {
 public:
  explicit QuotaClientAsyncWaiter(QuotaClient* proxy);

  QuotaClientAsyncWaiter(const QuotaClientAsyncWaiter&) = delete;
  QuotaClientAsyncWaiter& operator=(const QuotaClientAsyncWaiter&) = delete;

  ~QuotaClientAsyncWaiter();
  void GetBucketUsage(
      const ::storage::BucketLocator& bucket, int64_t* out_usage);
  void GetStorageKeysForType(
      ::blink::mojom::StorageType type, std::vector<::blink::StorageKey>* out_storage_keys);
  void DeleteBucketData(
      const ::storage::BucketLocator& bucket, ::blink::mojom::QuotaStatusCode* out_status);
  void PerformStorageCleanup(
      ::blink::mojom::StorageType type);

 private:
  QuotaClient* const proxy_;
};




}  // namespace mojom
}  // namespace storage

#endif  // COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_QUOTA_CLIENT_MOJOM_TEST_UTILS_H_