// services/network/public/mojom/accept_ch_frame_observer.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ACCEPT_CH_FRAME_OBSERVER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ACCEPT_CH_FRAME_OBSERVER_MOJOM_BLINK_H_

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

#include "services/network/public/mojom/accept_ch_frame_observer.mojom-shared.h"
#include "services/network/public/mojom/accept_ch_frame_observer.mojom-blink-forward.h"
#include "services/network/public/mojom/http_request_headers.mojom-blink-forward.h"
#include "services/network/public/mojom/web_client_hints_types.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {

class AcceptCHFrameObserverProxy;

template <typename ImplRefTraits>
class AcceptCHFrameObserverStub;

class AcceptCHFrameObserverRequestValidator;
class AcceptCHFrameObserverResponseValidator;


class BLINK_PLATFORM_EXPORT AcceptCHFrameObserver
    : public AcceptCHFrameObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = AcceptCHFrameObserverInterfaceBase;
  using Proxy_ = AcceptCHFrameObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = AcceptCHFrameObserverStub<ImplRefTraits>;

  using RequestValidator_ = AcceptCHFrameObserverRequestValidator;
  using ResponseValidator_ = AcceptCHFrameObserverResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnAcceptCHFrameReceivedMinVersion = 0,
    kCloneMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnAcceptCHFrameReceived_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Clone_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~AcceptCHFrameObserver() = default;


  using OnAcceptCHFrameReceivedCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void OnAcceptCHFrameReceived(const ::scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::Vector<::network::mojom::blink::WebClientHintsType>& accept_ch_frame, OnAcceptCHFrameReceivedCallback callback) = 0;

  
  virtual void Clone(::mojo::PendingReceiver<AcceptCHFrameObserver> listener) = 0;
};



class BLINK_PLATFORM_EXPORT AcceptCHFrameObserverProxy
    : public AcceptCHFrameObserver {
 public:
  using InterfaceType = AcceptCHFrameObserver;

  explicit AcceptCHFrameObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnAcceptCHFrameReceived(const ::scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::Vector<::network::mojom::blink::WebClientHintsType>& accept_ch_frame, OnAcceptCHFrameReceivedCallback callback) final;
  
  void Clone(::mojo::PendingReceiver<AcceptCHFrameObserver> listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT AcceptCHFrameObserverStubDispatch {
 public:
  static bool Accept(AcceptCHFrameObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AcceptCHFrameObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AcceptCHFrameObserver>>
class AcceptCHFrameObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AcceptCHFrameObserverStub() = default;
  ~AcceptCHFrameObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AcceptCHFrameObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AcceptCHFrameObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AcceptCHFrameObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AcceptCHFrameObserverResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ACCEPT_CH_FRAME_OBSERVER_MOJOM_BLINK_H_