// services/device/public/mojom/geolocation_control.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/device/public/mojom/geolocation_control.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/device/public/mojom/geolocation_control.mojom-params-data.h"
#include "services/device/public/mojom/geolocation_control.mojom-shared-message-ids.h"

#include "services/device/public/mojom/geolocation_control.mojom-blink-import-headers.h"
#include "services/device/public/mojom/geolocation_control.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_JUMBO_H_
#endif



namespace device {
namespace mojom {
namespace blink {
const char GeolocationControl::Name_[] = "device.mojom.GeolocationControl";

GeolocationControl::IPCStableHashFunction GeolocationControl::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name: {
      return &GeolocationControl::UserDidOptIntoLocationServices_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* GeolocationControl::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name:
            return "Receive device::mojom::GeolocationControl::UserDidOptIntoLocationServices";
    }
  } else {
    switch (message.name()) {
      case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name:
            return "Receive reply device::mojom::GeolocationControl::UserDidOptIntoLocationServices";
    }
  }
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
uint32_t GeolocationControl::UserDidOptIntoLocationServices_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::GeolocationControl::UserDidOptIntoLocationServices");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

GeolocationControlProxy::GeolocationControlProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GeolocationControlProxy::UserDidOptIntoLocationServices(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send device::mojom::GeolocationControl::UserDidOptIntoLocationServices");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kGeolocationControl_UserDidOptIntoLocationServices_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GeolocationControl::Name_);
  message.set_method_name("UserDidOptIntoLocationServices");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool GeolocationControlStubDispatch::Accept(
    GeolocationControl* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name: {

      DCHECK(message->is_serialized());
      internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data* params =
          reinterpret_cast<internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      GeolocationControl_UserDidOptIntoLocationServices_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GeolocationControl::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UserDidOptIntoLocationServices();
      return true;
    }
  }
  return false;
}

// static
bool GeolocationControlStubDispatch::AcceptWithResponder(
    GeolocationControl* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kGeolocationControlValidationInfo[] = {
    {&internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data::Validate,
     nullptr /* no response */},
};

bool GeolocationControlRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::device::mojom::blink::GeolocationControl::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kGeolocationControlValidationInfo);
}



}  // namespace blink
}  // namespace mojom
}  // namespace device


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace device {
namespace mojom {
namespace blink {


void GeolocationControlInterceptorForTesting::UserDidOptIntoLocationServices() {
  GetForwardingInterface()->UserDidOptIntoLocationServices();
}
GeolocationControlAsyncWaiter::GeolocationControlAsyncWaiter(
    GeolocationControl* proxy) : proxy_(proxy) {}

GeolocationControlAsyncWaiter::~GeolocationControlAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device


#if defined(__clang__)
#pragma clang diagnostic pop
#endif