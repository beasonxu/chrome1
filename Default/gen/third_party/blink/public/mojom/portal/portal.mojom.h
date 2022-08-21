// third_party/blink/public/mojom/portal/portal.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_H_

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

#include "third_party/blink/public/mojom/portal/portal.mojom-shared.h"
#include "third_party/blink/public/mojom/portal/portal.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/loader/referrer.mojom-forward.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class PortalProxy;

template <typename ImplRefTraits>
class PortalStub;

class PortalRequestValidator;
class PortalResponseValidator;


class BLINK_COMMON_EXPORT Portal
    : public PortalInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PortalInterfaceBase;
  using Proxy_ = PortalProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortalStub<ImplRefTraits>;

  using RequestValidator_ = PortalRequestValidator;
  using ResponseValidator_ = PortalResponseValidator;
  enum MethodMinVersions : uint32_t {
    kNavigateMinVersion = 0,
    kActivateMinVersion = 0,
    kPostMessageToGuestMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Navigate_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Activate_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct PostMessageToGuest_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Portal() = default;


  using NavigateCallback = base::OnceCallback<void()>;
  
  virtual void Navigate(const ::GURL& url, ::blink::mojom::ReferrerPtr referrer, NavigateCallback callback) = 0;


  using ActivateCallback = base::OnceCallback<void(PortalActivateResult)>;
  
  virtual void Activate(::blink::TransferableMessage data, ::base::TimeTicks activation_time, uint64_t trace_id, ActivateCallback callback) = 0;

  
  virtual void PostMessageToGuest(::blink::TransferableMessage message) = 0;
};

class PortalClientProxy;

template <typename ImplRefTraits>
class PortalClientStub;

class PortalClientRequestValidator;


class BLINK_COMMON_EXPORT PortalClient
    : public PortalClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PortalClientInterfaceBase;
  using Proxy_ = PortalClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortalClientStub<ImplRefTraits>;

  using RequestValidator_ = PortalClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kForwardMessageFromGuestMinVersion = 0,
    kDispatchLoadEventMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct ForwardMessageFromGuest_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DispatchLoadEvent_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PortalClient() = default;

  
  virtual void ForwardMessageFromGuest(::blink::TransferableMessage message, const ::url::Origin& source_origin) = 0;

  
  virtual void DispatchLoadEvent() = 0;
};

class PortalHostProxy;

template <typename ImplRefTraits>
class PortalHostStub;

class PortalHostRequestValidator;


class BLINK_COMMON_EXPORT PortalHost
    : public PortalHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PortalHostInterfaceBase;
  using Proxy_ = PortalHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortalHostStub<ImplRefTraits>;

  using RequestValidator_ = PortalHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPostMessageToHostMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct PostMessageToHost_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PortalHost() = default;

  
  virtual void PostMessageToHost(::blink::TransferableMessage message) = 0;
};



class BLINK_COMMON_EXPORT PortalProxy
    : public Portal {
 public:
  using InterfaceType = Portal;

  explicit PortalProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Navigate(const ::GURL& url, ::blink::mojom::ReferrerPtr referrer, NavigateCallback callback) final;
  
  void Activate(::blink::TransferableMessage data, ::base::TimeTicks activation_time, uint64_t trace_id, ActivateCallback callback) final;
  
  void PostMessageToGuest(::blink::TransferableMessage message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class BLINK_COMMON_EXPORT PortalClientProxy
    : public PortalClient {
 public:
  using InterfaceType = PortalClient;

  explicit PortalClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void ForwardMessageFromGuest(::blink::TransferableMessage message, const ::url::Origin& source_origin) final;
  
  void DispatchLoadEvent() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class BLINK_COMMON_EXPORT PortalHostProxy
    : public PortalHost {
 public:
  using InterfaceType = PortalHost;

  explicit PortalHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void PostMessageToHost(::blink::TransferableMessage message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PortalStubDispatch {
 public:
  static bool Accept(Portal* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Portal* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Portal>>
class PortalStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortalStub() = default;
  ~PortalStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PortalClientStubDispatch {
 public:
  static bool Accept(PortalClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PortalClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PortalClient>>
class PortalClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortalClientStub() = default;
  ~PortalClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PortalHostStubDispatch {
 public:
  static bool Accept(PortalHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PortalHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PortalHost>>
class PortalHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortalHostStub() = default;
  ~PortalHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PortalRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PortalClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PortalHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PortalResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_H_