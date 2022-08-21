// third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink.h"

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

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-params-data.h"
#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
const char AssociatedInterface::Name_[] = "blink.mojom.AssociatedInterface";

AssociatedInterface::IPCStableHashFunction AssociatedInterface::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* AssociatedInterface::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
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
# endif // !BUILDFLAG(IS_FUCHSIA)

AssociatedInterfaceProxy::AssociatedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool AssociatedInterfaceStubDispatch::Accept(
    AssociatedInterface* impl,
    mojo::Message* message) {
  return false;
}

// static
bool AssociatedInterfaceStubDispatch::AcceptWithResponder(
    AssociatedInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}



bool AssociatedInterfaceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::AssociatedInterface::Name_;
  return mojo::internal::ValidateRequestGeneric(message, name, {});
}

const char AssociatedInterfaceProvider::Name_[] = "blink.mojom.AssociatedInterfaceProvider";

AssociatedInterfaceProvider::IPCStableHashFunction AssociatedInterfaceProvider::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
      return &AssociatedInterfaceProvider::GetAssociatedInterface_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* AssociatedInterfaceProvider::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name:
            return "Receive blink::mojom::AssociatedInterfaceProvider::GetAssociatedInterface";
    }
  } else {
    switch (message.name()) {
      case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name:
            return "Receive reply blink::mojom::AssociatedInterfaceProvider::GetAssociatedInterface";
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
uint32_t AssociatedInterfaceProvider::GetAssociatedInterface_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::AssociatedInterfaceProvider::GetAssociatedInterface");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

AssociatedInterfaceProviderProxy::AssociatedInterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AssociatedInterfaceProviderProxy::GetAssociatedInterface(
    const WTF::String& in_name, ::mojo::PendingAssociatedReceiver<AssociatedInterface> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::AssociatedInterfaceProvider::GetAssociatedInterface", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("name"), in_name,
                        "<value of type const WTF::String&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingAssociatedReceiver<AssociatedInterface>>");
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
      internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->name)::BaseType> name_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, name_fragment);
  params->name.Set(
      name_fragment.is_null() ? nullptr : name_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in AssociatedInterfaceProvider.GetAssociatedInterface request");
  mojo::internal::Serialize<::blink::mojom::AssociatedInterfaceAssociatedRequestDataView>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid receiver in AssociatedInterfaceProvider.GetAssociatedInterface request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AssociatedInterfaceProvider::Name_);
  message.set_method_name("GetAssociatedInterface");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool AssociatedInterfaceProviderStubDispatch::Accept(
    AssociatedInterfaceProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {

      DCHECK(message->is_serialized());
      internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data* params =
          reinterpret_cast<internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      WTF::String p_name{};
      ::mojo::PendingAssociatedReceiver<AssociatedInterface> p_receiver{};
      AssociatedInterfaceProvider_GetAssociatedInterface_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadName(&p_name))
        success = false;
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AssociatedInterfaceProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAssociatedInterface(
std::move(p_name), 
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool AssociatedInterfaceProviderStubDispatch::AcceptWithResponder(
    AssociatedInterfaceProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kAssociatedInterfaceProviderValidationInfo[] = {
    {&internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data::Validate,
     nullptr /* no response */},
};

bool AssociatedInterfaceProviderRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::AssociatedInterfaceProvider::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kAssociatedInterfaceProviderValidationInfo);
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {
namespace blink {


AssociatedInterfaceAsyncWaiter::AssociatedInterfaceAsyncWaiter(
    AssociatedInterface* proxy) : proxy_(proxy) {}

AssociatedInterfaceAsyncWaiter::~AssociatedInterfaceAsyncWaiter() = default;




void AssociatedInterfaceProviderInterceptorForTesting::GetAssociatedInterface(const WTF::String& name, ::mojo::PendingAssociatedReceiver<AssociatedInterface> receiver) {
  GetForwardingInterface()->GetAssociatedInterface(std::move(name), std::move(receiver));
}
AssociatedInterfaceProviderAsyncWaiter::AssociatedInterfaceProviderAsyncWaiter(
    AssociatedInterfaceProvider* proxy) : proxy_(proxy) {}

AssociatedInterfaceProviderAsyncWaiter::~AssociatedInterfaceProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif