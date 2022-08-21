// services/device/public/mojom/geolocation_control.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_H_

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

#include "services/device/public/mojom/geolocation_control.mojom-shared.h"
#include "services/device/public/mojom/geolocation_control.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/platform/web_common.h"




namespace device {
namespace mojom {
namespace blink {

class GeolocationControlProxy;

template <typename ImplRefTraits>
class GeolocationControlStub;

class GeolocationControlRequestValidator;


class BLINK_PLATFORM_EXPORT GeolocationControl
    : public GeolocationControlInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = GeolocationControlInterfaceBase;
  using Proxy_ = GeolocationControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationControlStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationControlRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUserDidOptIntoLocationServicesMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct UserDidOptIntoLocationServices_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~GeolocationControl() = default;

  
  virtual void UserDidOptIntoLocationServices() = 0;
};



class BLINK_PLATFORM_EXPORT GeolocationControlProxy
    : public GeolocationControl {
 public:
  using InterfaceType = GeolocationControl;

  explicit GeolocationControlProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void UserDidOptIntoLocationServices() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT GeolocationControlStubDispatch {
 public:
  static bool Accept(GeolocationControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GeolocationControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GeolocationControl>>
class GeolocationControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationControlStub() = default;
  ~GeolocationControlStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT GeolocationControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_H_