// third_party/blink/public/mojom/loader/content_security_notifier.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/loader/content_security_notifier.mojom-blink.h"

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

#include "third_party/blink/public/mojom/loader/content_security_notifier.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/content_security_notifier.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/content_security_notifier.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/loader/content_security_notifier.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CONTENT_SECURITY_NOTIFIER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CONTENT_SECURITY_NOTIFIER_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
const char ContentSecurityNotifier::Name_[] = "blink.mojom.ContentSecurityNotifier";

ContentSecurityNotifier::IPCStableHashFunction ContentSecurityNotifier::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Name: {
      return &ContentSecurityNotifier::NotifyContentWithCertificateErrorsRan_Sym::IPCStableHash;
    }
    case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Name: {
      return &ContentSecurityNotifier::NotifyContentWithCertificateErrorsDisplayed_Sym::IPCStableHash;
    }
    case internal::kContentSecurityNotifier_NotifyInsecureContentRan_Name: {
      return &ContentSecurityNotifier::NotifyInsecureContentRan_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ContentSecurityNotifier::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Name:
            return "Receive blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsRan";
      case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Name:
            return "Receive blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsDisplayed";
      case internal::kContentSecurityNotifier_NotifyInsecureContentRan_Name:
            return "Receive blink::mojom::ContentSecurityNotifier::NotifyInsecureContentRan";
    }
  } else {
    switch (message.name()) {
      case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Name:
            return "Receive reply blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsRan";
      case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Name:
            return "Receive reply blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsDisplayed";
      case internal::kContentSecurityNotifier_NotifyInsecureContentRan_Name:
            return "Receive reply blink::mojom::ContentSecurityNotifier::NotifyInsecureContentRan";
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
uint32_t ContentSecurityNotifier::NotifyContentWithCertificateErrorsRan_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsRan");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ContentSecurityNotifier::NotifyContentWithCertificateErrorsDisplayed_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsDisplayed");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ContentSecurityNotifier::NotifyInsecureContentRan_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ContentSecurityNotifier::NotifyInsecureContentRan");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

ContentSecurityNotifierProxy::ContentSecurityNotifierProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContentSecurityNotifierProxy::NotifyContentWithCertificateErrorsRan(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsRan");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentSecurityNotifier::Name_);
  message.set_method_name("NotifyContentWithCertificateErrorsRan");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ContentSecurityNotifierProxy::NotifyContentWithCertificateErrorsDisplayed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::ContentSecurityNotifier::NotifyContentWithCertificateErrorsDisplayed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentSecurityNotifier::Name_);
  message.set_method_name("NotifyContentWithCertificateErrorsDisplayed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ContentSecurityNotifierProxy::NotifyInsecureContentRan(
    const ::blink::KURL& in_origin, const ::blink::KURL& in_insecure_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ContentSecurityNotifier::NotifyInsecureContentRan", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("origin"), in_origin,
                        "<value of type const ::blink::KURL&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("insecure_url"), in_insecure_url,
                        "<value of type const ::blink::KURL&>");
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
      internal::kContentSecurityNotifier_NotifyInsecureContentRan_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ContentSecurityNotifier_NotifyInsecureContentRan_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->origin)::BaseType> origin_fragment(
          params.message());
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_origin, origin_fragment);
  params->origin.Set(
      origin_fragment.is_null() ? nullptr : origin_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in ContentSecurityNotifier.NotifyInsecureContentRan request");
  mojo::internal::MessageFragment<
      typename decltype(params->insecure_url)::BaseType> insecure_url_fragment(
          params.message());
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_insecure_url, insecure_url_fragment);
  params->insecure_url.Set(
      insecure_url_fragment.is_null() ? nullptr : insecure_url_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->insecure_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null insecure_url in ContentSecurityNotifier.NotifyInsecureContentRan request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentSecurityNotifier::Name_);
  message.set_method_name("NotifyInsecureContentRan");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool ContentSecurityNotifierStubDispatch::Accept(
    ContentSecurityNotifier* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Name: {

      DCHECK(message->is_serialized());
      internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Params_Data* params =
          reinterpret_cast<internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentSecurityNotifier::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyContentWithCertificateErrorsRan();
      return true;
    }
    case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Name: {

      DCHECK(message->is_serialized());
      internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Params_Data* params =
          reinterpret_cast<internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentSecurityNotifier::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyContentWithCertificateErrorsDisplayed();
      return true;
    }
    case internal::kContentSecurityNotifier_NotifyInsecureContentRan_Name: {

      DCHECK(message->is_serialized());
      internal::ContentSecurityNotifier_NotifyInsecureContentRan_Params_Data* params =
          reinterpret_cast<internal::ContentSecurityNotifier_NotifyInsecureContentRan_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::blink::KURL p_origin{};
      ::blink::KURL p_insecure_url{};
      ContentSecurityNotifier_NotifyInsecureContentRan_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (success && !input_data_view.ReadInsecureUrl(&p_insecure_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentSecurityNotifier::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyInsecureContentRan(
std::move(p_origin), 
std::move(p_insecure_url));
      return true;
    }
  }
  return false;
}

// static
bool ContentSecurityNotifierStubDispatch::AcceptWithResponder(
    ContentSecurityNotifier* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Name: {
      break;
    }
    case internal::kContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Name: {
      break;
    }
    case internal::kContentSecurityNotifier_NotifyInsecureContentRan_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kContentSecurityNotifierValidationInfo[] = {
    {&internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsRan_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ContentSecurityNotifier_NotifyContentWithCertificateErrorsDisplayed_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ContentSecurityNotifier_NotifyInsecureContentRan_Params_Data::Validate,
     nullptr /* no response */},
};

bool ContentSecurityNotifierRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::ContentSecurityNotifier::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kContentSecurityNotifierValidationInfo);
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


void ContentSecurityNotifierInterceptorForTesting::NotifyContentWithCertificateErrorsRan() {
  GetForwardingInterface()->NotifyContentWithCertificateErrorsRan();
}
void ContentSecurityNotifierInterceptorForTesting::NotifyContentWithCertificateErrorsDisplayed() {
  GetForwardingInterface()->NotifyContentWithCertificateErrorsDisplayed();
}
void ContentSecurityNotifierInterceptorForTesting::NotifyInsecureContentRan(const ::blink::KURL& origin, const ::blink::KURL& insecure_url) {
  GetForwardingInterface()->NotifyInsecureContentRan(std::move(origin), std::move(insecure_url));
}
ContentSecurityNotifierAsyncWaiter::ContentSecurityNotifierAsyncWaiter(
    ContentSecurityNotifier* proxy) : proxy_(proxy) {}

ContentSecurityNotifierAsyncWaiter::~ContentSecurityNotifierAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif