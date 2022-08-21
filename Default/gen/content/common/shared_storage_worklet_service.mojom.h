// content/common/shared_storage_worklet_service.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_STORAGE_WORKLET_SERVICE_MOJOM_H_
#define CONTENT_COMMON_SHARED_STORAGE_WORKLET_SERVICE_MOJOM_H_

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

#include "content/common/shared_storage_worklet_service.mojom-shared.h"
#include "content/common/shared_storage_worklet_service.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "components/services/storage/shared_storage/public/mojom/shared_storage.mojom-forward.h"
#include "services/network/public/mojom/url_loader_factory.mojom-forward.h"
#include "third_party/blink/public/mojom/shared_storage/shared_storage.mojom.h"
#include "url/mojom/origin.mojom-forward.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "content/common/content_export.h"




namespace shared_storage_worklet {
namespace mojom {

class SharedStorageWorkletServiceClientProxy;

template <typename ImplRefTraits>
class SharedStorageWorkletServiceClientStub;

class SharedStorageWorkletServiceClientRequestValidator;
class SharedStorageWorkletServiceClientResponseValidator;


class CONTENT_EXPORT SharedStorageWorkletServiceClient
    : public SharedStorageWorkletServiceClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = SharedStorageWorkletServiceClientInterfaceBase;
  using Proxy_ = SharedStorageWorkletServiceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedStorageWorkletServiceClientStub<ImplRefTraits>;

  using RequestValidator_ = SharedStorageWorkletServiceClientRequestValidator;
  using ResponseValidator_ = SharedStorageWorkletServiceClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSharedStorageSetMinVersion = 0,
    kSharedStorageAppendMinVersion = 0,
    kSharedStorageDeleteMinVersion = 0,
    kSharedStorageClearMinVersion = 0,
    kSharedStorageGetMinVersion = 0,
    kSharedStorageKeysMinVersion = 0,
    kSharedStorageEntriesMinVersion = 0,
    kSharedStorageLengthMinVersion = 0,
    kConsoleLogMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct SharedStorageSet_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageAppend_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageDelete_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageClear_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageGet_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageKeys_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageEntries_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SharedStorageLength_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ConsoleLog_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~SharedStorageWorkletServiceClient() = default;


  using SharedStorageSetCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void SharedStorageSet(const ::std::u16string& key, const ::std::u16string& value, bool ignore_if_present, SharedStorageSetCallback callback) = 0;


  using SharedStorageAppendCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void SharedStorageAppend(const ::std::u16string& key, const ::std::u16string& value, SharedStorageAppendCallback callback) = 0;


  using SharedStorageDeleteCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void SharedStorageDelete(const ::std::u16string& key, SharedStorageDeleteCallback callback) = 0;


  using SharedStorageClearCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void SharedStorageClear(SharedStorageClearCallback callback) = 0;


  using SharedStorageGetCallback = base::OnceCallback<void(SharedStorageGetStatus, const std::string&, const ::std::u16string&)>;
  
  virtual void SharedStorageGet(const ::std::u16string& key, SharedStorageGetCallback callback) = 0;

  
  virtual void SharedStorageKeys(::mojo::PendingRemote<::shared_storage_worklet::mojom::SharedStorageEntriesListener> listener) = 0;

  
  virtual void SharedStorageEntries(::mojo::PendingRemote<::shared_storage_worklet::mojom::SharedStorageEntriesListener> listener) = 0;


  using SharedStorageLengthCallback = base::OnceCallback<void(bool, const std::string&, uint32_t)>;
  
  virtual void SharedStorageLength(SharedStorageLengthCallback callback) = 0;

  
  virtual void ConsoleLog(const std::string& message) = 0;
};

class SharedStorageWorkletServiceProxy;

template <typename ImplRefTraits>
class SharedStorageWorkletServiceStub;

class SharedStorageWorkletServiceRequestValidator;
class SharedStorageWorkletServiceResponseValidator;


class CONTENT_EXPORT SharedStorageWorkletService
    : public SharedStorageWorkletServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = SharedStorageWorkletServiceInterfaceBase;
  using Proxy_ = SharedStorageWorkletServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedStorageWorkletServiceStub<ImplRefTraits>;

  using RequestValidator_ = SharedStorageWorkletServiceRequestValidator;
  using ResponseValidator_ = SharedStorageWorkletServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBindSharedStorageWorkletServiceClientMinVersion = 0,
    kAddModuleMinVersion = 0,
    kRunURLSelectionOperationMinVersion = 0,
    kRunOperationMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct BindSharedStorageWorkletServiceClient_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct AddModule_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RunURLSelectionOperation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RunOperation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~SharedStorageWorkletService() = default;

  
  virtual void BindSharedStorageWorkletServiceClient(::mojo::PendingAssociatedRemote<SharedStorageWorkletServiceClient> client) = 0;


  using AddModuleCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void AddModule(::mojo::PendingRemote<::network::mojom::URLLoaderFactory> url_loader_factory, const ::GURL& script_source_url, AddModuleCallback callback) = 0;


  using RunURLSelectionOperationCallback = base::OnceCallback<void(bool, const std::string&, uint32_t)>;
  
  virtual void RunURLSelectionOperation(const std::string& name, const std::vector<::GURL>& urls, const std::vector<uint8_t>& serialized_data, RunURLSelectionOperationCallback callback) = 0;


  using RunOperationCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void RunOperation(const std::string& name, const std::vector<uint8_t>& serialized_data, RunOperationCallback callback) = 0;
};



class CONTENT_EXPORT SharedStorageWorkletServiceClientProxy
    : public SharedStorageWorkletServiceClient {
 public:
  using InterfaceType = SharedStorageWorkletServiceClient;

  explicit SharedStorageWorkletServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void SharedStorageSet(const ::std::u16string& key, const ::std::u16string& value, bool ignore_if_present, SharedStorageSetCallback callback) final;
  
  void SharedStorageAppend(const ::std::u16string& key, const ::std::u16string& value, SharedStorageAppendCallback callback) final;
  
  void SharedStorageDelete(const ::std::u16string& key, SharedStorageDeleteCallback callback) final;
  
  void SharedStorageClear(SharedStorageClearCallback callback) final;
  
  void SharedStorageGet(const ::std::u16string& key, SharedStorageGetCallback callback) final;
  
  void SharedStorageKeys(::mojo::PendingRemote<::shared_storage_worklet::mojom::SharedStorageEntriesListener> listener) final;
  
  void SharedStorageEntries(::mojo::PendingRemote<::shared_storage_worklet::mojom::SharedStorageEntriesListener> listener) final;
  
  void SharedStorageLength(SharedStorageLengthCallback callback) final;
  
  void ConsoleLog(const std::string& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class CONTENT_EXPORT SharedStorageWorkletServiceProxy
    : public SharedStorageWorkletService {
 public:
  using InterfaceType = SharedStorageWorkletService;

  explicit SharedStorageWorkletServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void BindSharedStorageWorkletServiceClient(::mojo::PendingAssociatedRemote<SharedStorageWorkletServiceClient> client) final;
  
  void AddModule(::mojo::PendingRemote<::network::mojom::URLLoaderFactory> url_loader_factory, const ::GURL& script_source_url, AddModuleCallback callback) final;
  
  void RunURLSelectionOperation(const std::string& name, const std::vector<::GURL>& urls, const std::vector<uint8_t>& serialized_data, RunURLSelectionOperationCallback callback) final;
  
  void RunOperation(const std::string& name, const std::vector<uint8_t>& serialized_data, RunOperationCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SharedStorageWorkletServiceClientStubDispatch {
 public:
  static bool Accept(SharedStorageWorkletServiceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedStorageWorkletServiceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedStorageWorkletServiceClient>>
class SharedStorageWorkletServiceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedStorageWorkletServiceClientStub() = default;
  ~SharedStorageWorkletServiceClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedStorageWorkletServiceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedStorageWorkletServiceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SharedStorageWorkletServiceStubDispatch {
 public:
  static bool Accept(SharedStorageWorkletService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedStorageWorkletService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedStorageWorkletService>>
class SharedStorageWorkletServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedStorageWorkletServiceStub() = default;
  ~SharedStorageWorkletServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedStorageWorkletServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedStorageWorkletServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SharedStorageWorkletServiceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SharedStorageWorkletServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SharedStorageWorkletServiceClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SharedStorageWorkletServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace shared_storage_worklet

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_SHARED_STORAGE_WORKLET_SERVICE_MOJOM_H_