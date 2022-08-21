// third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BUCKETS_BUCKET_MANAGER_HOST_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BUCKETS_BUCKET_MANAGER_HOST_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-blink.h"
#include "third_party/blink/renderer/modules/modules_export.h"


namespace blink {
namespace mojom {
namespace blink {


class MODULES_EXPORT BucketHostInterceptorForTesting : public BucketHost {
  virtual BucketHost* GetForwardingInterface() = 0;
  void Persist(PersistCallback callback) override;
  void Persisted(PersistedCallback callback) override;
  void Estimate(EstimateCallback callback) override;
  void Durability(DurabilityCallback callback) override;
  void SetExpires(::base::Time expires, SetExpiresCallback callback) override;
  void Expires(ExpiresCallback callback) override;
  void GetIdbFactory(::mojo::PendingReceiver<::blink::mojom::blink::IDBFactory> idb_factory) override;
  void GetLockManager(::mojo::PendingReceiver<::blink::mojom::blink::LockManager> lock_manager) override;
};
class MODULES_EXPORT BucketHostAsyncWaiter {
 public:
  explicit BucketHostAsyncWaiter(BucketHost* proxy);

  BucketHostAsyncWaiter(const BucketHostAsyncWaiter&) = delete;
  BucketHostAsyncWaiter& operator=(const BucketHostAsyncWaiter&) = delete;

  ~BucketHostAsyncWaiter();
  void Persist(
      bool* out_persisted, bool* out_success);
  void Persisted(
      bool* out_persisted, bool* out_success);
  void Estimate(
      int64_t* out_current_usage, int64_t* out_current_quota, bool* out_success);
  void Durability(
      BucketDurability* out_durability, bool* out_success);
  void SetExpires(
      ::base::Time expires, bool* out_success);
  void Expires(
      absl::optional<::base::Time>* out_expires, bool* out_success);

 private:
  BucketHost* const proxy_;
};


class MODULES_EXPORT BucketManagerHostInterceptorForTesting : public BucketManagerHost {
  virtual BucketManagerHost* GetForwardingInterface() = 0;
  void OpenBucket(const WTF::String& name, BucketPoliciesPtr policy, OpenBucketCallback callback) override;
  void Keys(KeysCallback callback) override;
  void DeleteBucket(const WTF::String& name, DeleteBucketCallback callback) override;
};
class MODULES_EXPORT BucketManagerHostAsyncWaiter {
 public:
  explicit BucketManagerHostAsyncWaiter(BucketManagerHost* proxy);

  BucketManagerHostAsyncWaiter(const BucketManagerHostAsyncWaiter&) = delete;
  BucketManagerHostAsyncWaiter& operator=(const BucketManagerHostAsyncWaiter&) = delete;

  ~BucketManagerHostAsyncWaiter();
  void OpenBucket(
      const WTF::String& name, BucketPoliciesPtr policy, ::mojo::PendingRemote<BucketHost>* out_remote);
  void Keys(
      WTF::Vector<WTF::String>* out_buckets, bool* out_success);
  void DeleteBucket(
      const WTF::String& name, bool* out_success);

 private:
  BucketManagerHost* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BUCKETS_BUCKET_MANAGER_HOST_MOJOM_BLINK_TEST_UTILS_H_