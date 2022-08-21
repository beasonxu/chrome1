// third_party/blink/public/mojom/wake_lock/wake_lock.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom.h"

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

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-params-data.h"
#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-import-headers.h"
#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
const char WakeLockService::Name_[] = "blink.mojom.WakeLockService";

WakeLockService::IPCStableHashFunction WakeLockService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kWakeLockService_GetWakeLock_Name: {
      return &WakeLockService::GetWakeLock_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* WakeLockService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kWakeLockService_GetWakeLock_Name:
            return "Receive blink::mojom::WakeLockService::GetWakeLock";
    }
  } else {
    switch (message.name()) {
      case internal::kWakeLockService_GetWakeLock_Name:
            return "Receive reply blink::mojom::WakeLockService::GetWakeLock";
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
uint32_t WakeLockService::GetWakeLock_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::WakeLockService::GetWakeLock");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

WakeLockServiceProxy::WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WakeLockServiceProxy::GetWakeLock(
    ::device::mojom::WakeLockType in_type, ::device::mojom::WakeLockReason in_reason, const std::string& in_description, ::mojo::PendingReceiver<::device::mojom::WakeLock> in_wake_lock) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::WakeLockService::GetWakeLock", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("type"), in_type,
                        "<value of type ::device::mojom::WakeLockType>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("reason"), in_reason,
                        "<value of type ::device::mojom::WakeLockReason>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("description"), in_description,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("wake_lock"), in_wake_lock,
                        "<value of type ::mojo::PendingReceiver<::device::mojom::WakeLock>>");
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
      internal::kWakeLockService_GetWakeLock_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::WakeLockService_GetWakeLock_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  mojo::internal::Serialize<::device::mojom::WakeLockReason>(
      in_reason, &params->reason);
  mojo::internal::MessageFragment<
      typename decltype(params->description)::BaseType> description_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_description, description_fragment);
  params->description.Set(
      description_fragment.is_null() ? nullptr : description_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->description.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null description in WakeLockService.GetWakeLock request");
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::device::mojom::WakeLockInterfaceBase>>(
      in_wake_lock, &params->wake_lock, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->wake_lock),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid wake_lock in WakeLockService.GetWakeLock request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockService::Name_);
  message.set_method_name("GetWakeLock");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool WakeLockServiceStubDispatch::Accept(
    WakeLockService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWakeLockService_GetWakeLock_Name: {

      DCHECK(message->is_serialized());
      internal::WakeLockService_GetWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLockService_GetWakeLock_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::device::mojom::WakeLockType p_type{};
      ::device::mojom::WakeLockReason p_reason{};
      std::string p_description{};
      ::mojo::PendingReceiver<::device::mojom::WakeLock> p_wake_lock{};
      WakeLockService_GetWakeLock_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadType(&p_type))
        success = false;
      if (success && !input_data_view.ReadReason(&p_reason))
        success = false;
      if (success && !input_data_view.ReadDescription(&p_description))
        success = false;
      if (success) {
        p_wake_lock =
            input_data_view.TakeWakeLock<decltype(p_wake_lock)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetWakeLock(
std::move(p_type), 
std::move(p_reason), 
std::move(p_description), 
std::move(p_wake_lock));
      return true;
    }
  }
  return false;
}

// static
bool WakeLockServiceStubDispatch::AcceptWithResponder(
    WakeLockService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kWakeLockService_GetWakeLock_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kWakeLockServiceValidationInfo[] = {
    {&internal::WakeLockService_GetWakeLock_Params_Data::Validate,
     nullptr /* no response */},
};

bool WakeLockServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::WakeLockService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kWakeLockServiceValidationInfo);
}



}  // namespace mojom
}  // namespace blink


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void WakeLockServiceInterceptorForTesting::GetWakeLock(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::mojo::PendingReceiver<::device::mojom::WakeLock> wake_lock) {
  GetForwardingInterface()->GetWakeLock(std::move(type), std::move(reason), std::move(description), std::move(wake_lock));
}
WakeLockServiceAsyncWaiter::WakeLockServiceAsyncWaiter(
    WakeLockService* proxy) : proxy_(proxy) {}

WakeLockServiceAsyncWaiter::~WakeLockServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif