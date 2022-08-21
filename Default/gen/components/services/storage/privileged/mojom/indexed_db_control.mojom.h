// components/services/storage/privileged/mojom/indexed_db_control.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PRIVILEGED_MOJOM_INDEXED_DB_CONTROL_MOJOM_H_
#define COMPONENTS_SERVICES_STORAGE_PRIVILEGED_MOJOM_INDEXED_DB_CONTROL_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "components/services/storage/privileged/mojom/indexed_db_control.mojom-shared.h"
#include "components/services/storage/privileged/mojom/indexed_db_control.mojom-forward.h"
#include "components/services/storage/privileged/mojom/indexed_db_control_test.mojom-forward.h"
#include "components/services/storage/public/mojom/buckets/bucket_locator.mojom.h"
#include "components/services/storage/public/mojom/buckets/bucket_id.mojom.h"
#include "components/services/storage/public/mojom/storage_policy_update.mojom-forward.h"
#include "components/services/storage/public/mojom/storage_usage_info.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-forward.h"
#include "third_party/blink/public/mojom/storage_key/storage_key.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace storage {
namespace mojom {

class IndexedDBObserverProxy;

template <typename ImplRefTraits>
class IndexedDBObserverStub;

class IndexedDBObserverRequestValidator;


class  IndexedDBObserver
    : public IndexedDBObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = IndexedDBObserverInterfaceBase;
  using Proxy_ = IndexedDBObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = IndexedDBObserverStub<ImplRefTraits>;

  using RequestValidator_ = IndexedDBObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnIndexedDBListChangedMinVersion = 0,
    kOnIndexedDBContentChangedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnIndexedDBListChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnIndexedDBContentChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~IndexedDBObserver() = default;

  
  virtual void OnIndexedDBListChanged(const ::storage::BucketLocator& bucket_locator) = 0;

  
  virtual void OnIndexedDBContentChanged(const ::storage::BucketLocator& bucket_locator, const ::std::u16string& database_name, const ::std::u16string& object_store_name) = 0;
};

class IndexedDBControlProxy;

template <typename ImplRefTraits>
class IndexedDBControlStub;

class IndexedDBControlRequestValidator;
class IndexedDBControlResponseValidator;


class  IndexedDBControl
    : public IndexedDBControlInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = IndexedDBControlInterfaceBase;
  using Proxy_ = IndexedDBControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = IndexedDBControlStub<ImplRefTraits>;

  using RequestValidator_ = IndexedDBControlRequestValidator;
  using ResponseValidator_ = IndexedDBControlResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBindIndexedDBMinVersion = 0,
    kBindIndexedDBForBucketMinVersion = 0,
    kGetUsageMinVersion = 0,
    kDeleteForStorageKeyMinVersion = 0,
    kForceCloseMinVersion = 0,
    kGetConnectionCountMinVersion = 0,
    kDownloadBucketDataMinVersion = 0,
    kGetAllBucketsDetailsMinVersion = 0,
    kSetForceKeepSessionStateMinVersion = 0,
    kAddObserverMinVersion = 0,
    kApplyPolicyUpdatesMinVersion = 0,
    kBindTestInterfaceMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct BindIndexedDB_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindIndexedDBForBucket_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetUsage_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DeleteForStorageKey_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ForceClose_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetConnectionCount_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DownloadBucketData_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetAllBucketsDetails_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetForceKeepSessionState_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AddObserver_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ApplyPolicyUpdates_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindTestInterface_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~IndexedDBControl() = default;

  
  virtual void BindIndexedDB(const ::blink::StorageKey& storage_key, ::mojo::PendingReceiver<::blink::mojom::IDBFactory> receiver) = 0;

  
  virtual void BindIndexedDBForBucket(const ::storage::BucketLocator& bucket_locator, ::mojo::PendingReceiver<::blink::mojom::IDBFactory> receiver) = 0;


  using GetUsageCallback = base::OnceCallback<void(std::vector<::storage::mojom::StorageUsageInfoPtr>)>;
  
  virtual void GetUsage(GetUsageCallback callback) = 0;


  using DeleteForStorageKeyCallback = base::OnceCallback<void(bool)>;
  
  virtual void DeleteForStorageKey(const ::blink::StorageKey& storage_key, DeleteForStorageKeyCallback callback) = 0;


  using ForceCloseCallback = base::OnceCallback<void()>;
  
  virtual void ForceClose(::storage::BucketId bucket_id, ForceCloseReason reason, ForceCloseCallback callback) = 0;


  using GetConnectionCountCallback = base::OnceCallback<void(uint64_t)>;
  
  virtual void GetConnectionCount(::storage::BucketId bucket_id, GetConnectionCountCallback callback) = 0;


  using DownloadBucketDataCallback = base::OnceCallback<void(bool, const ::base::FilePath&, const ::base::FilePath&)>;
  
  virtual void DownloadBucketData(::storage::BucketId bucket_id, DownloadBucketDataCallback callback) = 0;


  using GetAllBucketsDetailsCallback = base::OnceCallback<void(bool, ::base::Value::List)>;
  
  virtual void GetAllBucketsDetails(GetAllBucketsDetailsCallback callback) = 0;

  
  virtual void SetForceKeepSessionState() = 0;

  
  virtual void AddObserver(::mojo::PendingRemote<IndexedDBObserver> observer) = 0;

  
  virtual void ApplyPolicyUpdates(std::vector<::storage::mojom::StoragePolicyUpdatePtr> policy_updates) = 0;

  
  virtual void BindTestInterface(::mojo::PendingReceiver<::storage::mojom::IndexedDBControlTest> receiver) = 0;
};



class  IndexedDBObserverProxy
    : public IndexedDBObserver {
 public:
  using InterfaceType = IndexedDBObserver;

  explicit IndexedDBObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnIndexedDBListChanged(const ::storage::BucketLocator& bucket_locator) final;
  
  void OnIndexedDBContentChanged(const ::storage::BucketLocator& bucket_locator, const ::std::u16string& database_name, const ::std::u16string& object_store_name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  IndexedDBControlProxy
    : public IndexedDBControl {
 public:
  using InterfaceType = IndexedDBControl;

  explicit IndexedDBControlProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void BindIndexedDB(const ::blink::StorageKey& storage_key, ::mojo::PendingReceiver<::blink::mojom::IDBFactory> receiver) final;
  
  void BindIndexedDBForBucket(const ::storage::BucketLocator& bucket_locator, ::mojo::PendingReceiver<::blink::mojom::IDBFactory> receiver) final;
  
  void GetUsage(GetUsageCallback callback) final;
  
  void DeleteForStorageKey(const ::blink::StorageKey& storage_key, DeleteForStorageKeyCallback callback) final;
  
  void ForceClose(::storage::BucketId bucket_id, ForceCloseReason reason, ForceCloseCallback callback) final;
  
  void GetConnectionCount(::storage::BucketId bucket_id, GetConnectionCountCallback callback) final;
  
  void DownloadBucketData(::storage::BucketId bucket_id, DownloadBucketDataCallback callback) final;
  
  void GetAllBucketsDetails(GetAllBucketsDetailsCallback callback) final;
  
  void SetForceKeepSessionState() final;
  
  void AddObserver(::mojo::PendingRemote<IndexedDBObserver> observer) final;
  
  void ApplyPolicyUpdates(std::vector<::storage::mojom::StoragePolicyUpdatePtr> policy_updates) final;
  
  void BindTestInterface(::mojo::PendingReceiver<::storage::mojom::IndexedDBControlTest> receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  IndexedDBObserverStubDispatch {
 public:
  static bool Accept(IndexedDBObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IndexedDBObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IndexedDBObserver>>
class IndexedDBObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IndexedDBObserverStub() = default;
  ~IndexedDBObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IndexedDBObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IndexedDBObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IndexedDBControlStubDispatch {
 public:
  static bool Accept(IndexedDBControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IndexedDBControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IndexedDBControl>>
class IndexedDBControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IndexedDBControlStub() = default;
  ~IndexedDBControlStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IndexedDBControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IndexedDBControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IndexedDBObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IndexedDBControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IndexedDBControlResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace storage

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_STORAGE_PRIVILEGED_MOJOM_INDEXED_DB_CONTROL_MOJOM_H_