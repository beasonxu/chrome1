// services/audio/public/mojom/device_notifications.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/audio/public/mojom/device_notifications.mojom.h"

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

#include "services/audio/public/mojom/device_notifications.mojom-params-data.h"
#include "services/audio/public/mojom/device_notifications.mojom-shared-message-ids.h"

#include "services/audio/public/mojom/device_notifications.mojom-import-headers.h"
#include "services/audio/public/mojom/device_notifications.mojom-test-utils.h"


#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_JUMBO_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_JUMBO_H_
#endif



namespace audio {
namespace mojom {
const char DeviceListener::Name_[] = "audio.mojom.DeviceListener";

DeviceListener::IPCStableHashFunction DeviceListener::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kDeviceListener_DevicesChanged_Name: {
      return &DeviceListener::DevicesChanged_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* DeviceListener::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kDeviceListener_DevicesChanged_Name:
            return "Receive audio::mojom::DeviceListener::DevicesChanged";
    }
  } else {
    switch (message.name()) {
      case internal::kDeviceListener_DevicesChanged_Name:
            return "Receive reply audio::mojom::DeviceListener::DevicesChanged";
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
uint32_t DeviceListener::DevicesChanged_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)audio::mojom::DeviceListener::DevicesChanged");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

DeviceListenerProxy::DeviceListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceListenerProxy::DevicesChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send audio::mojom::DeviceListener::DevicesChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDeviceListener_DevicesChanged_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::audio::mojom::internal::DeviceListener_DevicesChanged_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DeviceListener::Name_);
  message.set_method_name("DevicesChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool DeviceListenerStubDispatch::Accept(
    DeviceListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDeviceListener_DevicesChanged_Name: {

      DCHECK(message->is_serialized());
      internal::DeviceListener_DevicesChanged_Params_Data* params =
          reinterpret_cast<internal::DeviceListener_DevicesChanged_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      DeviceListener_DevicesChanged_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DeviceListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DevicesChanged();
      return true;
    }
  }
  return false;
}

// static
bool DeviceListenerStubDispatch::AcceptWithResponder(
    DeviceListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kDeviceListener_DevicesChanged_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kDeviceListenerValidationInfo[] = {
    {&internal::DeviceListener_DevicesChanged_Params_Data::Validate,
     nullptr /* no response */},
};

bool DeviceListenerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::audio::mojom::DeviceListener::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kDeviceListenerValidationInfo);
}

const char DeviceNotifier::Name_[] = "audio.mojom.DeviceNotifier";

DeviceNotifier::IPCStableHashFunction DeviceNotifier::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kDeviceNotifier_RegisterListener_Name: {
      return &DeviceNotifier::RegisterListener_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* DeviceNotifier::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kDeviceNotifier_RegisterListener_Name:
            return "Receive audio::mojom::DeviceNotifier::RegisterListener";
    }
  } else {
    switch (message.name()) {
      case internal::kDeviceNotifier_RegisterListener_Name:
            return "Receive reply audio::mojom::DeviceNotifier::RegisterListener";
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
uint32_t DeviceNotifier::RegisterListener_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)audio::mojom::DeviceNotifier::RegisterListener");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

DeviceNotifierProxy::DeviceNotifierProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceNotifierProxy::RegisterListener(
    ::mojo::PendingRemote<DeviceListener> in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send audio::mojom::DeviceNotifier::RegisterListener", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("listener"), in_listener,
                        "<value of type ::mojo::PendingRemote<DeviceListener>>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kDeviceNotifier_RegisterListener_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::audio::mojom::internal::DeviceNotifier_RegisterListener_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::audio::mojom::DeviceListenerInterfaceBase>>(
      in_listener, &params->listener, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in DeviceNotifier.RegisterListener request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DeviceNotifier::Name_);
  message.set_method_name("RegisterListener");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool DeviceNotifierStubDispatch::Accept(
    DeviceNotifier* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDeviceNotifier_RegisterListener_Name: {

      DCHECK(message->is_serialized());
      internal::DeviceNotifier_RegisterListener_Params_Data* params =
          reinterpret_cast<internal::DeviceNotifier_RegisterListener_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingRemote<DeviceListener> p_listener{};
      DeviceNotifier_RegisterListener_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_listener =
            input_data_view.TakeListener<decltype(p_listener)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DeviceNotifier::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterListener(
std::move(p_listener));
      return true;
    }
  }
  return false;
}

// static
bool DeviceNotifierStubDispatch::AcceptWithResponder(
    DeviceNotifier* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kDeviceNotifier_RegisterListener_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kDeviceNotifierValidationInfo[] = {
    {&internal::DeviceNotifier_RegisterListener_Params_Data::Validate,
     nullptr /* no response */},
};

bool DeviceNotifierRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::audio::mojom::DeviceNotifier::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kDeviceNotifierValidationInfo);
}



}  // namespace mojom
}  // namespace audio


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace audio {
namespace mojom {


void DeviceListenerInterceptorForTesting::DevicesChanged() {
  GetForwardingInterface()->DevicesChanged();
}
DeviceListenerAsyncWaiter::DeviceListenerAsyncWaiter(
    DeviceListener* proxy) : proxy_(proxy) {}

DeviceListenerAsyncWaiter::~DeviceListenerAsyncWaiter() = default;




void DeviceNotifierInterceptorForTesting::RegisterListener(::mojo::PendingRemote<DeviceListener> listener) {
  GetForwardingInterface()->RegisterListener(std::move(listener));
}
DeviceNotifierAsyncWaiter::DeviceNotifierAsyncWaiter(
    DeviceNotifier* proxy) : proxy_(proxy) {}

DeviceNotifierAsyncWaiter::~DeviceNotifierAsyncWaiter() = default;






}  // namespace mojom
}  // namespace audio


#if defined(__clang__)
#pragma clang diagnostic pop
#endif