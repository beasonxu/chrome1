// third_party/blink/public/mojom/choosers/popup_menu.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/choosers/popup_menu.mojom.h"

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

#include "third_party/blink/public/mojom/choosers/popup_menu.mojom-params-data.h"
#include "third_party/blink/public/mojom/choosers/popup_menu.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/choosers/popup_menu.mojom-import-headers.h"
#include "third_party/blink/public/mojom/choosers/popup_menu.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_POPUP_MENU_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_POPUP_MENU_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
MenuItem::MenuItem()
    : label(),
      tool_tip(),
      type(MenuItem_Type::kOption),
      action(0U),
      text_direction(mojo::internal::ConvertEnumValue<::mojo_base::mojom::TextDirection, ::base::i18n::TextDirection>(::mojo_base::mojom::TextDirection::LEFT_TO_RIGHT)),
      has_text_direction_override(false),
      enabled(false),
      checked(false) {}

MenuItem::MenuItem(
    const absl::optional<std::string>& label_in,
    const absl::optional<std::string>& tool_tip_in,
    MenuItem::Type type_in,
    uint32_t action_in,
    ::base::i18n::TextDirection text_direction_in,
    bool has_text_direction_override_in,
    bool enabled_in,
    bool checked_in)
    : label(std::move(label_in)),
      tool_tip(std::move(tool_tip_in)),
      type(std::move(type_in)),
      action(std::move(action_in)),
      text_direction(std::move(text_direction_in)),
      has_text_direction_override(std::move(has_text_direction_override_in)),
      enabled(std::move(enabled_in)),
      checked(std::move(checked_in)) {}

MenuItem::~MenuItem() = default;

void MenuItem::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "label"), this->label,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<std::string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "tool_tip"), this->tool_tip,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<std::string>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "type"), this->type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type MenuItem::Type>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "action"), this->action,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "text_direction"), this->text_direction,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::i18n::TextDirection>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "has_text_direction_override"), this->has_text_direction_override,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "enabled"), this->enabled,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "checked"), this->checked,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool MenuItem::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PopupMenuClient::Name_[] = "blink.mojom.PopupMenuClient";

PopupMenuClient::IPCStableHashFunction PopupMenuClient::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kPopupMenuClient_DidAcceptIndices_Name: {
      return &PopupMenuClient::DidAcceptIndices_Sym::IPCStableHash;
    }
    case internal::kPopupMenuClient_DidCancel_Name: {
      return &PopupMenuClient::DidCancel_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PopupMenuClient::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kPopupMenuClient_DidAcceptIndices_Name:
            return "Receive blink::mojom::PopupMenuClient::DidAcceptIndices";
      case internal::kPopupMenuClient_DidCancel_Name:
            return "Receive blink::mojom::PopupMenuClient::DidCancel";
    }
  } else {
    switch (message.name()) {
      case internal::kPopupMenuClient_DidAcceptIndices_Name:
            return "Receive reply blink::mojom::PopupMenuClient::DidAcceptIndices";
      case internal::kPopupMenuClient_DidCancel_Name:
            return "Receive reply blink::mojom::PopupMenuClient::DidCancel";
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
uint32_t PopupMenuClient::DidAcceptIndices_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PopupMenuClient::DidAcceptIndices");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PopupMenuClient::DidCancel_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PopupMenuClient::DidCancel");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

PopupMenuClientProxy::PopupMenuClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PopupMenuClientProxy::DidAcceptIndices(
    const std::vector<int32_t>& in_indices) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PopupMenuClient::DidAcceptIndices", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("indices"), in_indices,
                        "<value of type const std::vector<int32_t>&>");
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
      internal::kPopupMenuClient_DidAcceptIndices_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PopupMenuClient_DidAcceptIndices_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->indices)::BaseType>
      indices_fragment(params.message());
  const mojo::internal::ContainerValidateParams indices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_indices, indices_fragment, &indices_validate_params);
  params->indices.Set(
      indices_fragment.is_null() ? nullptr : indices_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->indices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null indices in PopupMenuClient.DidAcceptIndices request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PopupMenuClient::Name_);
  message.set_method_name("DidAcceptIndices");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PopupMenuClientProxy::DidCancel(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::PopupMenuClient::DidCancel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPopupMenuClient_DidCancel_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PopupMenuClient_DidCancel_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PopupMenuClient::Name_);
  message.set_method_name("DidCancel");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool PopupMenuClientStubDispatch::Accept(
    PopupMenuClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPopupMenuClient_DidAcceptIndices_Name: {

      DCHECK(message->is_serialized());
      internal::PopupMenuClient_DidAcceptIndices_Params_Data* params =
          reinterpret_cast<internal::PopupMenuClient_DidAcceptIndices_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::vector<int32_t> p_indices{};
      PopupMenuClient_DidAcceptIndices_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadIndices(&p_indices))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PopupMenuClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidAcceptIndices(
std::move(p_indices));
      return true;
    }
    case internal::kPopupMenuClient_DidCancel_Name: {

      DCHECK(message->is_serialized());
      internal::PopupMenuClient_DidCancel_Params_Data* params =
          reinterpret_cast<internal::PopupMenuClient_DidCancel_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      PopupMenuClient_DidCancel_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PopupMenuClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidCancel();
      return true;
    }
  }
  return false;
}

// static
bool PopupMenuClientStubDispatch::AcceptWithResponder(
    PopupMenuClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kPopupMenuClient_DidAcceptIndices_Name: {
      break;
    }
    case internal::kPopupMenuClient_DidCancel_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kPopupMenuClientValidationInfo[] = {
    {&internal::PopupMenuClient_DidAcceptIndices_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PopupMenuClient_DidCancel_Params_Data::Validate,
     nullptr /* no response */},
};

bool PopupMenuClientRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::PopupMenuClient::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kPopupMenuClientValidationInfo);
}



}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::MenuItem::DataView, ::blink::mojom::MenuItemPtr>::Read(
    ::blink::mojom::MenuItem::DataView input,
    ::blink::mojom::MenuItemPtr* output) {
  bool success = true;
  ::blink::mojom::MenuItemPtr result(::blink::mojom::MenuItem::New());
  
      if (success && !input.ReadLabel(&result->label))
        success = false;
      if (success && !input.ReadToolTip(&result->tool_tip))
        success = false;
      if (success && !input.ReadType(&result->type))
        success = false;
      if (success)
        result->action = input.action();
      if (success && !input.ReadTextDirection(&result->text_direction))
        success = false;
      if (success)
        result->has_text_direction_override = input.has_text_direction_override();
      if (success)
        result->enabled = input.enabled();
      if (success)
        result->checked = input.checked();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void PopupMenuClientInterceptorForTesting::DidAcceptIndices(const std::vector<int32_t>& indices) {
  GetForwardingInterface()->DidAcceptIndices(std::move(indices));
}
void PopupMenuClientInterceptorForTesting::DidCancel() {
  GetForwardingInterface()->DidCancel();
}
PopupMenuClientAsyncWaiter::PopupMenuClientAsyncWaiter(
    PopupMenuClient* proxy) : proxy_(proxy) {}

PopupMenuClientAsyncWaiter::~PopupMenuClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif