// third_party/blink/public/mojom/autoplay/autoplay.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/autoplay/autoplay.mojom-blink.h"

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

#include "third_party/blink/public/mojom/autoplay/autoplay.mojom-params-data.h"
#include "third_party/blink/public/mojom/autoplay/autoplay.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/autoplay/autoplay.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/autoplay/autoplay.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
const char AutoplayConfigurationClient::Name_[] = "blink.mojom.AutoplayConfigurationClient";

AutoplayConfigurationClient::IPCStableHashFunction AutoplayConfigurationClient::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name: {
      return &AutoplayConfigurationClient::AddAutoplayFlags_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* AutoplayConfigurationClient::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name:
            return "Receive blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags";
    }
  } else {
    switch (message.name()) {
      case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name:
            return "Receive reply blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags";
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
uint32_t AutoplayConfigurationClient::AddAutoplayFlags_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

AutoplayConfigurationClientProxy::AutoplayConfigurationClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AutoplayConfigurationClientProxy::AddAutoplayFlags(
    const ::scoped_refptr<const ::blink::SecurityOrigin>& in_origin, int32_t in_flags) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("origin"), in_origin,
                        "<value of type const ::scoped_refptr<const ::blink::SecurityOrigin>&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("flags"), in_flags,
                        "<value of type int32_t>");
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
      internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->origin)::BaseType> origin_fragment(
          params.message());
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, origin_fragment);
  params->origin.Set(
      origin_fragment.is_null() ? nullptr : origin_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in AutoplayConfigurationClient.AddAutoplayFlags request");
  params->flags = in_flags;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AutoplayConfigurationClient::Name_);
  message.set_method_name("AddAutoplayFlags");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool AutoplayConfigurationClientStubDispatch::Accept(
    AutoplayConfigurationClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name: {

      DCHECK(message->is_serialized());
      internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data* params =
          reinterpret_cast<internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::scoped_refptr<const ::blink::SecurityOrigin> p_origin{};
      int32_t p_flags{};
      AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (success)
        p_flags = input_data_view.flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AutoplayConfigurationClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddAutoplayFlags(
std::move(p_origin), 
std::move(p_flags));
      return true;
    }
  }
  return false;
}

// static
bool AutoplayConfigurationClientStubDispatch::AcceptWithResponder(
    AutoplayConfigurationClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kAutoplayConfigurationClientValidationInfo[] = {
    {&internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data::Validate,
     nullptr /* no response */},
};

bool AutoplayConfigurationClientRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::AutoplayConfigurationClient::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kAutoplayConfigurationClientValidationInfo);
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


void AutoplayConfigurationClientInterceptorForTesting::AddAutoplayFlags(const ::scoped_refptr<const ::blink::SecurityOrigin>& origin, int32_t flags) {
  GetForwardingInterface()->AddAutoplayFlags(std::move(origin), std::move(flags));
}
AutoplayConfigurationClientAsyncWaiter::AutoplayConfigurationClientAsyncWaiter(
    AutoplayConfigurationClient* proxy) : proxy_(proxy) {}

AutoplayConfigurationClientAsyncWaiter::~AutoplayConfigurationClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif