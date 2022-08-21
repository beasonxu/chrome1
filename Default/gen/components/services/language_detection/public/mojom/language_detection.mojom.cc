// components/services/language_detection/public/mojom/language_detection.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/services/language_detection/public/mojom/language_detection.mojom.h"

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

#include "components/services/language_detection/public/mojom/language_detection.mojom-params-data.h"
#include "components/services/language_detection/public/mojom/language_detection.mojom-shared-message-ids.h"

#include "components/services/language_detection/public/mojom/language_detection.mojom-import-headers.h"
#include "components/services/language_detection/public/mojom/language_detection.mojom-test-utils.h"


#ifndef COMPONENTS_SERVICES_LANGUAGE_DETECTION_PUBLIC_MOJOM_LANGUAGE_DETECTION_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_LANGUAGE_DETECTION_PUBLIC_MOJOM_LANGUAGE_DETECTION_MOJOM_JUMBO_H_
#endif



namespace language_detection {
namespace mojom {
const char LanguageDetectionService::Name_[] = "language_detection.mojom.LanguageDetectionService";

LanguageDetectionService::IPCStableHashFunction LanguageDetectionService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kLanguageDetectionService_DetermineLanguage_Name: {
      return &LanguageDetectionService::DetermineLanguage_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* LanguageDetectionService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kLanguageDetectionService_DetermineLanguage_Name:
            return "Receive language_detection::mojom::LanguageDetectionService::DetermineLanguage";
    }
  } else {
    switch (message.name()) {
      case internal::kLanguageDetectionService_DetermineLanguage_Name:
            return "Receive reply language_detection::mojom::LanguageDetectionService::DetermineLanguage";
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
uint32_t LanguageDetectionService::DetermineLanguage_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)language_detection::mojom::LanguageDetectionService::DetermineLanguage");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class LanguageDetectionService_DetermineLanguage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LanguageDetectionService_DetermineLanguage_ForwardToCallback(
      LanguageDetectionService::DetermineLanguageCallback callback
      ) : callback_(std::move(callback)) {
  }

  LanguageDetectionService_DetermineLanguage_ForwardToCallback(const LanguageDetectionService_DetermineLanguage_ForwardToCallback&) = delete;
  LanguageDetectionService_DetermineLanguage_ForwardToCallback& operator=(const LanguageDetectionService_DetermineLanguage_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  LanguageDetectionService::DetermineLanguageCallback callback_;
};

LanguageDetectionServiceProxy::LanguageDetectionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LanguageDetectionServiceProxy::DetermineLanguage(
    const ::std::u16string& in_text, DetermineLanguageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send language_detection::mojom::LanguageDetectionService::DetermineLanguage", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("text"), in_text,
                        "<value of type const ::std::u16string&>");
   });
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kLanguageDetectionService_DetermineLanguage_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::language_detection::mojom::internal::LanguageDetectionService_DetermineLanguage_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->text)::BaseType> text_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::BigString16DataView>(
      in_text, text_fragment);
  params->text.Set(
      text_fragment.is_null() ? nullptr : text_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in LanguageDetectionService.DetermineLanguage request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LanguageDetectionService::Name_);
  message.set_method_name("DetermineLanguage");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LanguageDetectionService_DetermineLanguage_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class LanguageDetectionService_DetermineLanguage_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static LanguageDetectionService::DetermineLanguageCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LanguageDetectionService_DetermineLanguage_ProxyToResponder> proxy(
        new LanguageDetectionService_DetermineLanguage_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&LanguageDetectionService_DetermineLanguage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LanguageDetectionService_DetermineLanguage_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  LanguageDetectionService_DetermineLanguage_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "LanguageDetectionService::DetermineLanguageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_language, bool in_is_reliable);
};

bool LanguageDetectionService_DetermineLanguage_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::LanguageDetectionService_DetermineLanguage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LanguageDetectionService_DetermineLanguage_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  std::string p_language{};
  bool p_is_reliable{};
  LanguageDetectionService_DetermineLanguage_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadLanguage(&p_language))
    success = false;
  if (success)
    p_is_reliable = input_data_view.is_reliable();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LanguageDetectionService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_language), 
std::move(p_is_reliable));
  return true;
}

void LanguageDetectionService_DetermineLanguage_ProxyToResponder::Run(
    const std::string& in_language, bool in_is_reliable) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply language_detection::mojom::LanguageDetectionService::DetermineLanguage", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("language"), in_language,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("is_reliable"), in_is_reliable,
                        "<value of type bool>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kLanguageDetectionService_DetermineLanguage_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::language_detection::mojom::internal::LanguageDetectionService_DetermineLanguage_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->language)::BaseType> language_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_language, language_fragment);
  params->language.Set(
      language_fragment.is_null() ? nullptr : language_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->language.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null language in ");
  params->is_reliable = in_is_reliable;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LanguageDetectionService::Name_);
  message.set_method_name("DetermineLanguage");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool LanguageDetectionServiceStubDispatch::Accept(
    LanguageDetectionService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLanguageDetectionService_DetermineLanguage_Name: {
      break;
    }
  }
  return false;
}

// static
bool LanguageDetectionServiceStubDispatch::AcceptWithResponder(
    LanguageDetectionService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kLanguageDetectionService_DetermineLanguage_Name: {

      internal::LanguageDetectionService_DetermineLanguage_Params_Data* params =
          reinterpret_cast<
              internal::LanguageDetectionService_DetermineLanguage_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      ::std::u16string p_text{};
      LanguageDetectionService_DetermineLanguage_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LanguageDetectionService::Name_, 0, false);
        return false;
      }
      LanguageDetectionService::DetermineLanguageCallback callback =
          LanguageDetectionService_DetermineLanguage_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DetermineLanguage(
std::move(p_text), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kLanguageDetectionServiceValidationInfo[] = {
    {&internal::LanguageDetectionService_DetermineLanguage_Params_Data::Validate,
     &internal::LanguageDetectionService_DetermineLanguage_ResponseParams_Data::Validate},
};

bool LanguageDetectionServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::language_detection::mojom::LanguageDetectionService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kLanguageDetectionServiceValidationInfo);
}

bool LanguageDetectionServiceResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::language_detection::mojom::LanguageDetectionService::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kLanguageDetectionServiceValidationInfo);
}


}  // namespace mojom
}  // namespace language_detection


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace language_detection {
namespace mojom {


void LanguageDetectionServiceInterceptorForTesting::DetermineLanguage(const ::std::u16string& text, DetermineLanguageCallback callback) {
  GetForwardingInterface()->DetermineLanguage(std::move(text), std::move(callback));
}
LanguageDetectionServiceAsyncWaiter::LanguageDetectionServiceAsyncWaiter(
    LanguageDetectionService* proxy) : proxy_(proxy) {}

LanguageDetectionServiceAsyncWaiter::~LanguageDetectionServiceAsyncWaiter() = default;

void LanguageDetectionServiceAsyncWaiter::DetermineLanguage(
    const ::std::u16string& text, std::string* out_language, bool* out_is_reliable) {
  base::RunLoop loop;
  proxy_->DetermineLanguage(std::move(text),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_language
,
             bool* out_is_reliable
,
             const std::string& language,
             bool is_reliable) {*out_language = std::move(language);*out_is_reliable = std::move(is_reliable);
            loop->Quit();
          },
          &loop,
          out_language,
          out_is_reliable));
  loop.Run();
}





}  // namespace mojom
}  // namespace language_detection


#if defined(__clang__)
#pragma clang diagnostic pop
#endif