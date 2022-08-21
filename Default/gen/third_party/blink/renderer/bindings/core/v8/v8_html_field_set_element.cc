// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_html_field_set_element.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/core/html/forms/html_field_set_element.h"
#include "third_party/blink/renderer/core/html/forms/html_form_element.h"
#include "third_party/blink/renderer/core/html/forms/validity_state.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8HTMLFieldSetElement::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow();
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

const WrapperTypeInfo V8HTMLFieldSetElement::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8HTMLFieldSetElement::InstallInterfaceTemplate,
    nullptr,
    "HTMLFieldSetElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& HTMLFieldSetElement::wrapper_type_info_ =
    V8HTMLFieldSetElement::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLFieldSetElement>::value,
    "HTMLFieldSetElement inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&HTMLFieldSetElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLFieldSetElement is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_html_field_set_element {

void DisabledAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_disabled_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.disabled.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->FastHasAttribute(html_names::kDisabledAttr);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void DisabledAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_disabled_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.disabled.set");

const char* const class_like_name = "HTMLFieldSetElement";
const char* const property_name = "disabled";
bindings::PerformAttributeSetCEReactionsReflectTypeBoolean(info, html_names::kDisabledAttr, class_like_name, property_name);
}

void FormAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_form_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.form.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->formOwner();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void NameAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_name_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.name.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->GetNameAttribute();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void NameAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_name_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.name.set");

const char* const class_like_name = "HTMLFieldSetElement";
const char* const property_name = "name";
bindings::PerformAttributeSetCEReactionsReflectTypeString(info, html_names::kNameAttr, class_like_name, property_name);
}

void TypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_type_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.type.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->type();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void ElementsAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_elements_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.elements.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8HTMLFieldSetElement_Elements_AttributeGetter);


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->elements();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void WillValidateAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_willValidate_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.willValidate.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->willValidate();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void ValidityAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_validity_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.validity.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->validity();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ValidationMessageAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_validationMessage_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.validationMessage.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->validationMessage();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_constructor");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.constructor");

v8::Isolate* isolate = info.GetIsolate();
if (!info.IsConstructCall()) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "HTMLFieldSetElement";
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
V8HTMLConstructor::HtmlConstructor(info, *V8HTMLFieldSetElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLFieldSetElement);
}

void CheckValidityOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_checkValidity");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.checkValidity");







v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->checkValidity();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void ReportValidityOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_reportValidity");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.reportValidity");







v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->reportValidity();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void SetCustomValidityOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFieldSetElement_setCustomValidity");
BLINK_BINDINGS_TRACE_EVENT("HTMLFieldSetElement.setCustomValidity");




if (UNLIKELY(info.Length() < 1)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "HTMLFieldSetElement";
const char* const property_name = "setCustomValidity";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
HTMLFieldSetElement* blink_receiver = V8HTMLFieldSetElement::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_error;
if (LIKELY(info[0]->IsString())) {
  arg1_error.Init(info[0].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "HTMLFieldSetElement";
const char* const property_name = "setCustomValidity";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_error = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
blink_receiver->setCustomValidity(arg1_error);

}


}  // namespace v8_html_field_set_element

using namespace v8_html_field_set_element;

}  // namespace 

void V8HTMLFieldSetElement::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8HTMLFieldSetElement::GetWrapperTypeInfo();
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

void V8HTMLFieldSetElement::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"disabled", DisabledAttributeGetCallback, DisabledAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"form", FormAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"name", NameAttributeGetCallback, NameAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"type", TypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"elements", ElementsAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"willValidate", WillValidateAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"validity", ValidityAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"validationMessage", ValidationMessageAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
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
