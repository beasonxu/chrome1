// components/services/storage/privileged/mojom/indexed_db_control_test.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PRIVILEGED_MOJOM_INDEXED_DB_CONTROL_TEST_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_STORAGE_PRIVILEGED_MOJOM_INDEXED_DB_CONTROL_TEST_MOJOM_TEST_UTILS_H_

#include "components/services/storage/privileged/mojom/indexed_db_control_test.mojom.h"


namespace storage {
namespace mojom {


class  MockFailureInjectorInterceptorForTesting : public MockFailureInjector {
  virtual MockFailureInjector* GetForwardingInterface() = 0;
  void FailOperation(FailClass failure_class, FailMethod failure_method, int32_t instance_num, int32_t call_num, FailOperationCallback callback) override;
};
class  MockFailureInjectorAsyncWaiter {
 public:
  explicit MockFailureInjectorAsyncWaiter(MockFailureInjector* proxy);

  MockFailureInjectorAsyncWaiter(const MockFailureInjectorAsyncWaiter&) = delete;
  MockFailureInjectorAsyncWaiter& operator=(const MockFailureInjectorAsyncWaiter&) = delete;

  ~MockFailureInjectorAsyncWaiter();
  void FailOperation(
      FailClass failure_class, FailMethod failure_method, int32_t instance_num, int32_t call_num);

 private:
  MockFailureInjector* const proxy_;
};


class  IndexedDBControlTestInterceptorForTesting : public IndexedDBControlTest {
  virtual IndexedDBControlTest* GetForwardingInterface() = 0;
  void GetBaseDataPathForTesting(GetBaseDataPathForTestingCallback callback) override;
  void GetFilePathForTesting(const ::storage::BucketLocator& bucket_locator, GetFilePathForTestingCallback callback) override;
  void ResetCachesForTesting(ResetCachesForTestingCallback callback) override;
  void ForceSchemaDowngradeForTesting(const ::storage::BucketLocator& bucket_locator, ForceSchemaDowngradeForTestingCallback callback) override;
  void HasV2SchemaCorruptionForTesting(const ::storage::BucketLocator& bucket_locator, HasV2SchemaCorruptionForTestingCallback callback) override;
  void WriteToIndexedDBForTesting(const ::storage::BucketLocator& bucket_locator, const std::string& key, const std::string& value, WriteToIndexedDBForTestingCallback callback) override;
  void GetBlobCountForTesting(const ::storage::BucketLocator& bucket_locator, GetBlobCountForTestingCallback callback) override;
  void GetNextBlobNumberForTesting(const ::storage::BucketLocator& bucket_locator, int64_t database_id, GetNextBlobNumberForTestingCallback callback) override;
  void GetPathForBlobForTesting(const ::storage::BucketLocator& bucket_locator, int64_t database_id, int64_t blob_number, GetPathForBlobForTestingCallback callback) override;
  void CompactBackingStoreForTesting(const ::storage::BucketLocator& bucket_locator, CompactBackingStoreForTestingCallback callback) override;
  void BindMockFailureSingletonForTesting(::mojo::PendingReceiver<MockFailureInjector> receiver) override;
  void GetDatabaseKeysForTesting(GetDatabaseKeysForTestingCallback callback) override;
  void ForceInitializeFromFilesForTesting(ForceInitializeFromFilesForTestingCallback callback) override;
};
class  IndexedDBControlTestAsyncWaiter {
 public:
  explicit IndexedDBControlTestAsyncWaiter(IndexedDBControlTest* proxy);

  IndexedDBControlTestAsyncWaiter(const IndexedDBControlTestAsyncWaiter&) = delete;
  IndexedDBControlTestAsyncWaiter& operator=(const IndexedDBControlTestAsyncWaiter&) = delete;

  ~IndexedDBControlTestAsyncWaiter();
  void GetBaseDataPathForTesting(
      ::base::FilePath* out_path);
  void GetFilePathForTesting(
      const ::storage::BucketLocator& bucket_locator, ::base::FilePath* out_path);
  void ResetCachesForTesting(
      );
  void ForceSchemaDowngradeForTesting(
      const ::storage::BucketLocator& bucket_locator, bool* out_downgraded);
  void HasV2SchemaCorruptionForTesting(
      const ::storage::BucketLocator& bucket_locator, V2SchemaCorruptionStatus* out_status);
  void WriteToIndexedDBForTesting(
      const ::storage::BucketLocator& bucket_locator, const std::string& key, const std::string& value);
  void GetBlobCountForTesting(
      const ::storage::BucketLocator& bucket_locator, int64_t* out_num_blobs);
  void GetNextBlobNumberForTesting(
      const ::storage::BucketLocator& bucket_locator, int64_t database_id, int64_t* out_next_blob_number);
  void GetPathForBlobForTesting(
      const ::storage::BucketLocator& bucket_locator, int64_t database_id, int64_t blob_number, ::base::FilePath* out_path);
  void CompactBackingStoreForTesting(
      const ::storage::BucketLocator& bucket_locator);
  void GetDatabaseKeysForTesting(
      std::string* out_schema_version_key, std::string* out_data_version_key);
  void ForceInitializeFromFilesForTesting(
      );

 private:
  IndexedDBControlTest* const proxy_;
};




}  // namespace mojom
}  // namespace storage

#endif  // COMPONENTS_SERVICES_STORAGE_PRIVILEGED_MOJOM_INDEXED_DB_CONTROL_TEST_MOJOM_TEST_UTILS_H_