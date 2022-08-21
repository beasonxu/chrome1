// third_party/blink/public/mojom/quota/quota_manager_host.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_MANAGER_HOST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_MANAGER_HOST_MOJOM_H_

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

#include "third_party/blink/public/mojom/quota/quota_manager_host.mojom-shared.h"
#include "third_party/blink/public/mojom/quota/quota_manager_host.mojom-forward.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class QuotaChangeListenerProxy;

template <typename ImplRefTraits>
class QuotaChangeListenerStub;

class QuotaChangeListenerRequestValidator;


class BLINK_COMMON_EXPORT QuotaChangeListener
    : public QuotaChangeListenerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = QuotaChangeListenerInterfaceBase;
  using Proxy_ = QuotaChangeListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = QuotaChangeListenerStub<ImplRefTraits>;

  using RequestValidator_ = QuotaChangeListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnQuotaChangeMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnQuotaChange_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~QuotaChangeListener() = default;

  
  virtual void OnQuotaChange() = 0;
};

class QuotaManagerHostProxy;

template <typename ImplRefTraits>
class QuotaManagerHostStub;

class QuotaManagerHostRequestValidator;
class QuotaManagerHostResponseValidator;


class BLINK_COMMON_EXPORT QuotaManagerHost
    : public QuotaManagerHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = QuotaManagerHostInterfaceBase;
  using Proxy_ = QuotaManagerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = QuotaManagerHostStub<ImplRefTraits>;

  using RequestValidator_ = QuotaManagerHostRequestValidator;
  using ResponseValidator_ = QuotaManagerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddChangeListenerMinVersion = 0,
    kQueryStorageUsageAndQuotaMinVersion = 0,
    kRequestStorageQuotaMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AddChangeListener_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct QueryStorageUsageAndQuota_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RequestStorageQuota_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~QuotaManagerHost() = default;


  using AddChangeListenerCallback = base::OnceCallback<void()>;
  
  virtual void AddChangeListener(::mojo::PendingRemote<QuotaChangeListener> listener, AddChangeListenerCallback callback) = 0;


  using QueryStorageUsageAndQuotaCallback = base::OnceCallback<void(::blink::mojom::QuotaStatusCode, int64_t, int64_t, ::blink::mojom::UsageBreakdownPtr)>;
  
  virtual void QueryStorageUsageAndQuota(::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) = 0;


  using RequestStorageQuotaCallback = base::OnceCallback<void(::blink::mojom::QuotaStatusCode, int64_t, int64_t)>;
  
  virtual void RequestStorageQuota(::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) = 0;
};



class BLINK_COMMON_EXPORT QuotaChangeListenerProxy
    : public QuotaChangeListener {
 public:
  using InterfaceType = QuotaChangeListener;

  explicit QuotaChangeListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnQuotaChange() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class BLINK_COMMON_EXPORT QuotaManagerHostProxy
    : public QuotaManagerHost {
 public:
  using InterfaceType = QuotaManagerHost;

  explicit QuotaManagerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AddChangeListener(::mojo::PendingRemote<QuotaChangeListener> listener, AddChangeListenerCallback callback) final;
  
  void QueryStorageUsageAndQuota(::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) final;
  
  void RequestStorageQuota(::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT QuotaChangeListenerStubDispatch {
 public:
  static bool Accept(QuotaChangeListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      QuotaChangeListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<QuotaChangeListener>>
class QuotaChangeListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  QuotaChangeListenerStub() = default;
  ~QuotaChangeListenerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return QuotaChangeListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return QuotaChangeListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT QuotaManagerHostStubDispatch {
 public:
  static bool Accept(QuotaManagerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      QuotaManagerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<QuotaManagerHost>>
class QuotaManagerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  QuotaManagerHostStub() = default;
  ~QuotaManagerHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return QuotaManagerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return QuotaManagerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT QuotaChangeListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT QuotaManagerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT QuotaManagerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_MANAGER_HOST_MOJOM_H_