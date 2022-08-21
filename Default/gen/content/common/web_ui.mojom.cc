// content/common/web_ui.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "content/common/web_ui.mojom.h"

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

#include "content/common/web_ui.mojom-params-data.h"
#include "content/common/web_ui.mojom-shared-message-ids.h"

#include "content/common/web_ui.mojom-import-headers.h"
#include "content/common/web_ui.mojom-test-utils.h"


#ifndef CONTENT_COMMON_WEB_UI_MOJOM_JUMBO_H_
#define CONTENT_COMMON_WEB_UI_MOJOM_JUMBO_H_
#endif



namespace content {
namespace mojom {
const char WebUIHost::Name_[] = "content.mojom.WebUIHost";

WebUIHost::IPCStableHashFunction WebUIHost::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kWebUIHost_Send_Name: {
      return &WebUIHost::Send_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* WebUIHost::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kWebUIHost_Send_Name:
            return "Receive content::mojom::WebUIHost::Send";
    }
  } else {
    switch (message.name()) {
      case internal::kWebUIHost_Send_Name:
            return "Receive reply content::mojom::WebUIHost::Send";
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
uint32_t WebUIHost::Send_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)content::mojom::WebUIHost::Send");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

WebUIHostProxy::WebUIHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebUIHostProxy::Send(
    const std::string& in_message, ::base::Value::List in_args) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send content::mojom::WebUIHost::Send", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("message"), in_message,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("args"), in_args,
                        "<value of type ::base::Value::List>");
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
      internal::kWebUIHost_Send_Name, kFlags, 0, 0,
      MOJO_CREATE_MESSAGE_FLAG_UNLIMITED_SIZE, nullptr);
  mojo::internal::MessageFragment<
      ::content::mojom::internal::WebUIHost_Send_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->message)::BaseType> message_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, message_fragment);
  params->message.Set(
      message_fragment.is_null() ? nullptr : message_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in WebUIHost.Send request");
  mojo::internal::MessageFragment<
      typename decltype(params->args)::BaseType> args_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::ListValueDataView>(
      in_args, args_fragment);
  params->args.Set(
      args_fragment.is_null() ? nullptr : args_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null args in WebUIHost.Send request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebUIHost::Name_);
  message.set_method_name("Send");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool WebUIHostStubDispatch::Accept(
    WebUIHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebUIHost_Send_Name: {

      DCHECK(message->is_serialized());
      internal::WebUIHost_Send_Params_Data* params =
          reinterpret_cast<internal::WebUIHost_Send_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::string p_message{};
      ::base::Value::List p_args{};
      WebUIHost_Send_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadMessage(&p_message))
        success = false;
      if (success && !input_data_view.ReadArgs(&p_args))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebUIHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Send(
std::move(p_message), 
std::move(p_args));
      return true;
    }
  }
  return false;
}

// static
bool WebUIHostStubDispatch::AcceptWithResponder(
    WebUIHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kWebUIHost_Send_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kWebUIHostValidationInfo[] = {
    {&internal::WebUIHost_Send_Params_Data::Validate,
     nullptr /* no response */},
};

bool WebUIHostRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::content::mojom::WebUIHost::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kWebUIHostValidationInfo);
}

const char WebUI::Name_[] = "content.mojom.WebUI";

WebUI::IPCStableHashFunction WebUI::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kWebUI_SetProperty_Name: {
      return &WebUI::SetProperty_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* WebUI::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kWebUI_SetProperty_Name:
            return "Receive content::mojom::WebUI::SetProperty";
    }
  } else {
    switch (message.name()) {
      case internal::kWebUI_SetProperty_Name:
            return "Receive reply content::mojom::WebUI::SetProperty";
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
uint32_t WebUI::SetProperty_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)content::mojom::WebUI::SetProperty");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

WebUIProxy::WebUIProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebUIProxy::SetProperty(
    const std::string& in_property_name, const std::string& in_property_value_json) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send content::mojom::WebUI::SetProperty", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("property_name"), in_property_name,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("property_value_json"), in_property_value_json,
                        "<value of type const std::string&>");
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
      internal::kWebUI_SetProperty_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::content::mojom::internal::WebUI_SetProperty_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->property_name)::BaseType> property_name_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_property_name, property_name_fragment);
  params->property_name.Set(
      property_name_fragment.is_null() ? nullptr : property_name_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->property_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null property_name in WebUI.SetProperty request");
  mojo::internal::MessageFragment<
      typename decltype(params->property_value_json)::BaseType> property_value_json_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_property_value_json, property_value_json_fragment);
  params->property_value_json.Set(
      property_value_json_fragment.is_null() ? nullptr : property_value_json_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->property_value_json.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null property_value_json in WebUI.SetProperty request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebUI::Name_);
  message.set_method_name("SetProperty");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool WebUIStubDispatch::Accept(
    WebUI* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebUI_SetProperty_Name: {

      DCHECK(message->is_serialized());
      internal::WebUI_SetProperty_Params_Data* params =
          reinterpret_cast<internal::WebUI_SetProperty_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::string p_property_name{};
      std::string p_property_value_json{};
      WebUI_SetProperty_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadPropertyName(&p_property_name))
        success = false;
      if (success && !input_data_view.ReadPropertyValueJson(&p_property_value_json))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebUI::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetProperty(
std::move(p_property_name), 
std::move(p_property_value_json));
      return true;
    }
  }
  return false;
}

// static
bool WebUIStubDispatch::AcceptWithResponder(
    WebUI* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kWebUI_SetProperty_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kWebUIValidationInfo[] = {
    {&internal::WebUI_SetProperty_Params_Data::Validate,
     nullptr /* no response */},
};

bool WebUIRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::content::mojom::WebUI::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kWebUIValidationInfo);
}



}  // namespace mojom
}  // namespace content


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace content {
namespace mojom {


void WebUIHostInterceptorForTesting::Send(const std::string& message, ::base::Value::List args) {
  GetForwardingInterface()->Send(std::move(message), std::move(args));
}
WebUIHostAsyncWaiter::WebUIHostAsyncWaiter(
    WebUIHost* proxy) : proxy_(proxy) {}

WebUIHostAsyncWaiter::~WebUIHostAsyncWaiter() = default;




void WebUIInterceptorForTesting::SetProperty(const std::string& property_name, const std::string& property_value_json) {
  GetForwardingInterface()->SetProperty(std::move(property_name), std::move(property_value_json));
}
WebUIAsyncWaiter::WebUIAsyncWaiter(
    WebUI* proxy) : proxy_(proxy) {}

WebUIAsyncWaiter::~WebUIAsyncWaiter() = default;






}  // namespace mojom
}  // namespace content


#if defined(__clang__)
#pragma clang diagnostic pop
#endif