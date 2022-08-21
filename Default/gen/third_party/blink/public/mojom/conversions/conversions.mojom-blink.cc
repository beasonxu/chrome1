// third_party/blink/public/mojom/conversions/conversions.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/conversions/conversions.mojom-blink.h"

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

#include "third_party/blink/public/mojom/conversions/conversions.mojom-params-data.h"
#include "third_party/blink/public/mojom/conversions/conversions.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/conversions/conversions.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/conversions/conversions.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONVERSIONS_CONVERSIONS_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONVERSIONS_CONVERSIONS_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
Impression::Impression()
    : attribution_src_token() {}

Impression::Impression(
    const ::blink::AttributionSrcToken& attribution_src_token_in)
    : attribution_src_token(std::move(attribution_src_token_in)) {}

Impression::~Impression() = default;

void Impression::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "attribution_src_token"), this->attribution_src_token,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::blink::AttributionSrcToken&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool Impression::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ConversionHost::Name_[] = "blink.mojom.ConversionHost";

ConversionHost::IPCStableHashFunction ConversionHost::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kConversionHost_RegisterDataHost_Name: {
      return &ConversionHost::RegisterDataHost_Sym::IPCStableHash;
    }
    case internal::kConversionHost_RegisterNavigationDataHost_Name: {
      return &ConversionHost::RegisterNavigationDataHost_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ConversionHost::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kConversionHost_RegisterDataHost_Name:
            return "Receive blink::mojom::ConversionHost::RegisterDataHost";
      case internal::kConversionHost_RegisterNavigationDataHost_Name:
            return "Receive blink::mojom::ConversionHost::RegisterNavigationDataHost";
    }
  } else {
    switch (message.name()) {
      case internal::kConversionHost_RegisterDataHost_Name:
            return "Receive reply blink::mojom::ConversionHost::RegisterDataHost";
      case internal::kConversionHost_RegisterNavigationDataHost_Name:
            return "Receive reply blink::mojom::ConversionHost::RegisterNavigationDataHost";
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
uint32_t ConversionHost::RegisterDataHost_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ConversionHost::RegisterDataHost");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ConversionHost::RegisterNavigationDataHost_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ConversionHost::RegisterNavigationDataHost");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

ConversionHostProxy::ConversionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ConversionHostProxy::RegisterDataHost(
    ::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost> in_data_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ConversionHost::RegisterDataHost", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("data_host"), in_data_host,
                        "<value of type ::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost>>");
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
      internal::kConversionHost_RegisterDataHost_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ConversionHost_RegisterDataHost_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::blink::mojom::AttributionDataHostInterfaceBase>>(
      in_data_host, &params->data_host, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->data_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid data_host in ConversionHost.RegisterDataHost request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ConversionHost::Name_);
  message.set_method_name("RegisterDataHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ConversionHostProxy::RegisterNavigationDataHost(
    ::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost> in_data_host, const ::blink::AttributionSrcToken& in_attribution_src_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ConversionHost::RegisterNavigationDataHost", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("data_host"), in_data_host,
                        "<value of type ::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("attribution_src_token"), in_attribution_src_token,
                        "<value of type const ::blink::AttributionSrcToken&>");
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
      internal::kConversionHost_RegisterNavigationDataHost_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ConversionHost_RegisterNavigationDataHost_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::blink::mojom::AttributionDataHostInterfaceBase>>(
      in_data_host, &params->data_host, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->data_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid data_host in ConversionHost.RegisterNavigationDataHost request");
  mojo::internal::MessageFragment<
      typename decltype(params->attribution_src_token)::BaseType> attribution_src_token_fragment(
          params.message());
  mojo::internal::Serialize<::blink::mojom::AttributionSrcTokenDataView>(
      in_attribution_src_token, attribution_src_token_fragment);
  params->attribution_src_token.Set(
      attribution_src_token_fragment.is_null() ? nullptr : attribution_src_token_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->attribution_src_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null attribution_src_token in ConversionHost.RegisterNavigationDataHost request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ConversionHost::Name_);
  message.set_method_name("RegisterNavigationDataHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool ConversionHostStubDispatch::Accept(
    ConversionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kConversionHost_RegisterDataHost_Name: {

      DCHECK(message->is_serialized());
      internal::ConversionHost_RegisterDataHost_Params_Data* params =
          reinterpret_cast<internal::ConversionHost_RegisterDataHost_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost> p_data_host{};
      ConversionHost_RegisterDataHost_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_data_host =
            input_data_view.TakeDataHost<decltype(p_data_host)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ConversionHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterDataHost(
std::move(p_data_host));
      return true;
    }
    case internal::kConversionHost_RegisterNavigationDataHost_Name: {

      DCHECK(message->is_serialized());
      internal::ConversionHost_RegisterNavigationDataHost_Params_Data* params =
          reinterpret_cast<internal::ConversionHost_RegisterNavigationDataHost_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost> p_data_host{};
      ::blink::AttributionSrcToken p_attribution_src_token{};
      ConversionHost_RegisterNavigationDataHost_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_data_host =
            input_data_view.TakeDataHost<decltype(p_data_host)>();
      }
      if (success && !input_data_view.ReadAttributionSrcToken(&p_attribution_src_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ConversionHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterNavigationDataHost(
std::move(p_data_host), 
std::move(p_attribution_src_token));
      return true;
    }
  }
  return false;
}

// static
bool ConversionHostStubDispatch::AcceptWithResponder(
    ConversionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kConversionHost_RegisterDataHost_Name: {
      break;
    }
    case internal::kConversionHost_RegisterNavigationDataHost_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kConversionHostValidationInfo[] = {
    {&internal::ConversionHost_RegisterDataHost_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ConversionHost_RegisterNavigationDataHost_Params_Data::Validate,
     nullptr /* no response */},
};

bool ConversionHostRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::ConversionHost::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kConversionHostValidationInfo);
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::Impression::DataView, ::blink::mojom::blink::ImpressionPtr>::Read(
    ::blink::mojom::blink::Impression::DataView input,
    ::blink::mojom::blink::ImpressionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ImpressionPtr result(::blink::mojom::blink::Impression::New());
  
      if (success && !input.ReadAttributionSrcToken(&result->attribution_src_token))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {
namespace blink {


void ConversionHostInterceptorForTesting::RegisterDataHost(::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost> data_host) {
  GetForwardingInterface()->RegisterDataHost(std::move(data_host));
}
void ConversionHostInterceptorForTesting::RegisterNavigationDataHost(::mojo::PendingReceiver<::blink::mojom::blink::AttributionDataHost> data_host, const ::blink::AttributionSrcToken& attribution_src_token) {
  GetForwardingInterface()->RegisterNavigationDataHost(std::move(data_host), std::move(attribution_src_token));
}
ConversionHostAsyncWaiter::ConversionHostAsyncWaiter(
    ConversionHost* proxy) : proxy_(proxy) {}

ConversionHostAsyncWaiter::~ConversionHostAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif