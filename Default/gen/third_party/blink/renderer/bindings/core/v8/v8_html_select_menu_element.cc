// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_html_select_menu_element.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_option_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/forms/html_form_element.h"
#include "third_party/blink/renderer/core/html/forms/html_option_element.h"
#include "third_party/blink/renderer/core/html/forms/html_select_menu_element.h"
#include "third_party/blink/renderer/core/html/forms/validity_state.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8HTMLSelectMenuElement::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow() && RuntimeEnabledFeatures::HTMLSelectMenuElementEnabled();
}

// Construction of WrapperTypeInfo may require non-trivial initialization due
// to cross-component address resolution in order to load the pointer to the
// parent interface's WrapperTypeInfo.  We ignore this issue because the issue
// happens only on component builds and the official release builds
// (statically-linked builds) are never affected by this issue.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif

const WrapperTypeInfo V8HTMLSelectMenuElement::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8HTMLSelectMenuElement::InstallInterfaceTemplate,
    nullptr,
    "HTMLSelectMenuElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& HTMLSelectMenuElement::wrapper_type_info_ =
    V8HTMLSelectMenuElement::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLSelectMenuElement>::value,
    "HTMLSelectMenuElement inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&HTMLSelectMenuElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLSelectMenuElement is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_html_select_menu_element {

void OpenAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_open_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.open.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->open();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void SelectedOptionAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_selectedOption_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.selectedOption.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->selectedOption();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ValueAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_value_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.value.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->valueForBinding();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void ValueAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_value_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.value.set");



v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "HTMLSelectMenuElement";
const char* const property_name = "value";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<IDLString>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setValueForBinding(arg1_value);

}

void DisabledAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_disabled_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.disabled.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->FastHasAttribute(html_names::kDisabledAttr);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void DisabledAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_disabled_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.disabled.set");

const char* const class_like_name = "HTMLSelectMenuElement";
const char* const property_name = "disabled";
bindings::PerformAttributeSetCEReactionsReflectTypeBoolean(info, html_names::kDisabledAttr, class_like_name, property_name);
}

void FormAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_form_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.form.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->formOwner();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void NameAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_name_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.name.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->GetNameAttribute();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void NameAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_name_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.name.set");

const char* const class_like_name = "HTMLSelectMenuElement";
const char* const property_name = "name";
bindings::PerformAttributeSetCEReactionsReflectTypeString(info, html_names::kNameAttr, class_like_name, property_name);
}

void TypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_type_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.type.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->type();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void RequiredAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_required_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.required.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->FastHasAttribute(html_names::kRequiredAttr);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void RequiredAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_required_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.required.set");

const char* const class_like_name = "HTMLSelectMenuElement";
const char* const property_name = "required";
bindings::PerformAttributeSetCEReactionsReflectTypeBoolean(info, html_names::kRequiredAttr, class_like_name, property_name);
}

void WillValidateAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_willValidate_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.willValidate.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->willValidate();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void ValidityAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_validity_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.validity.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->validity();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ValidationMessageAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_validationMessage_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.validationMessage.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->validationMessage();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void LabelsAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_labels_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.labels.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->labels();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_constructor");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.constructor");

v8::Isolate* isolate = info.GetIsolate();
if (!info.IsConstructCall()) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "HTMLSelectMenuElement";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
exception_state.ThrowTypeError(ExceptionMessages::ConstructorCalledAsFunction());
return;
}
if (ConstructorMode::Current(isolate) == ConstructorMode::kWrapExistingObject) {
  v8::Local<v8::Object> v8_receiver = info.This();
bindings::V8SetReturnValue(info, v8_receiver);
return;
}



// [HTMLConstructor]
V8HTMLConstructor::HtmlConstructor(info, *V8HTMLSelectMenuElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLSelectMenuElement);
}

void CheckValidityOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_checkValidity");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.checkValidity");







v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->checkValidity();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void ReportValidityOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_reportValidity");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.reportValidity");







v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->reportValidity();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void SetCustomValidityOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSelectMenuElement_setCustomValidity");
BLINK_BINDINGS_TRACE_EVENT("HTMLSelectMenuElement.setCustomValidity");




if (UNLIKELY(info.Length() < 1)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "HTMLSelectMenuElement";
const char* const property_name = "setCustomValidity";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
HTMLSelectMenuElement* blink_receiver = V8HTMLSelectMenuElement::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_error;
if (LIKELY(info[0]->IsString())) {
  arg1_error.Init(info[0].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "HTMLSelectMenuElement";
const char* const property_name = "setCustomValidity";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_error = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
blink_receiver->setCustomValidity(arg1_error);

}


}  // namespace v8_html_select_menu_element

using namespace v8_html_select_menu_element;

}  // namespace 

void V8HTMLSelectMenuElement::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8HTMLSelectMenuElement::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

interface_function_template->SetCallHandler(ConstructorCallback);
interface_function_template->SetLength(0);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8HTMLSelectMenuElement::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"open", OpenAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"selectedOption", SelectedOptionAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"value", ValueAttributeGetCallback, ValueAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"disabled", DisabledAttributeGetCallback, DisabledAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"form", FormAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"name", NameAttributeGetCallback, NameAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"type", TypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"required", RequiredAttributeGetCallback, RequiredAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"willValidate", WillValidateAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"validity", ValidityAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"validationMessage", ValidationMessageAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"labels", LabelsAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"checkValidity", CheckValidityOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"reportValidity", ReportValidityOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"setCustomValidity", SetCustomValidityOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
