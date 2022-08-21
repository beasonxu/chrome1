// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_css_rotate.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_cssnumericvalue_double.h"
#include "third_party/blink/renderer/core/css/cssom/css_numeric_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_rotate.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8CSSRotate::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow() || execution_context->IsLayoutWorkletGlobalScope() || execution_context->IsPaintWorkletGlobalScope();
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

const WrapperTypeInfo V8CSSRotate::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8CSSRotate::InstallInterfaceTemplate,
    nullptr,
    "CSSRotate",
    V8CSSTransformComponent::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& CSSRotate::wrapper_type_info_ =
    V8CSSRotate::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSRotate>::value,
    "CSSRotate inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&CSSRotate::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSRotate is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_css_rotate {

void AngleAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_angle_Getter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.angle.get");


v8::Local<v8::Object> v8_receiver = info.This();
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->angle();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void AngleAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_angle_Setter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.angle.set");



v8::Local<v8::Object> v8_receiver = info.This();
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "CSSRotate";
const char* const property_name = "angle";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<CSSNumericValue>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setAngle(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void XAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_x_Getter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.x.get");


v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->x();
if (!ToV8Traits<V8UnionCSSNumericValueOrDouble>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void XAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_x_Setter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.x.set");



v8::Local<v8::Object> v8_receiver = info.This();
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "CSSRotate";
const char* const property_name = "x";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<V8UnionCSSNumericValueOrDouble>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setX(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void YAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_y_Getter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.y.get");


v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->y();
if (!ToV8Traits<V8UnionCSSNumericValueOrDouble>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void YAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_y_Setter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.y.set");



v8::Local<v8::Object> v8_receiver = info.This();
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "CSSRotate";
const char* const property_name = "y";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<V8UnionCSSNumericValueOrDouble>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setY(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void ZAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_z_Getter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.z.get");


v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->z();
if (!ToV8Traits<V8UnionCSSNumericValueOrDouble>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void ZAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_z_Setter");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.z.set");



v8::Local<v8::Object> v8_receiver = info.This();
CSSRotate* blink_receiver = V8CSSRotate::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "CSSRotate";
const char* const property_name = "z";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<V8UnionCSSNumericValueOrDouble>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setZ(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void ConstructorOverload1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "CSSRotate";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}

auto&& arg1_angle_value = NativeValueTraits<CSSNumericValue>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = CSSRotate::Create(arg1_angle_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8CSSRotate::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}

void ConstructorOverload2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "CSSRotate";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
if (UNLIKELY(info.Length() < 4)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
return;
}

auto&& arg1_x = NativeValueTraits<V8UnionCSSNumericValueOrDouble>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_y = NativeValueTraits<V8UnionCSSNumericValueOrDouble>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg3_z = NativeValueTraits<V8UnionCSSNumericValueOrDouble>::ArgumentValue(isolate, 2, info[2], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg4_angle = NativeValueTraits<CSSNumericValue>::ArgumentValue(isolate, 3, info[3], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = CSSRotate::Create(arg1_x, arg2_y, arg3_z, arg4_angle, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8CSSRotate::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}

void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_constructor");
BLINK_BINDINGS_TRACE_EVENT("CSSRotate.constructor");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "CSSRotate";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
if (!info.IsConstructCall()) {
  exception_state.ThrowTypeError(ExceptionMessages::ConstructorCalledAsFunction());
return;
}
if (ConstructorMode::Current(isolate) == ConstructorMode::kWrapExistingObject) {
  v8::Local<v8::Object> v8_receiver = info.This();
bindings::V8SetReturnValue(info, v8_receiver);
return;
}

const int arg_count = std::min(info.Length(), 4);
if (arg_count == 4) {
  return ConstructorOverload2(info);
}
if (arg_count == 1) {
  return ConstructorOverload1(info);
}

if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}
exception_state.ThrowTypeError("Overload resolution failed.");
return;
}


}  // namespace v8_css_rotate

using namespace v8_css_rotate;

}  // namespace 

void V8CSSRotate::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8CSSRotate::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

interface_function_template->SetCallHandler(ConstructorCallback);
interface_function_template->SetLength(1);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8CSSRotate::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"angle", AngleAttributeGetCallback, AngleAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"x", XAttributeGetCallback, XAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"y", YAttributeGetCallback, YAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"z", ZAttributeGetCallback, ZAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
