// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/svg/svg_matrix_tear_off.h"
#include "third_party/blink/renderer/core/svg/svg_transform_tear_off.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8SVGTransform::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8SVGTransform::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8SVGTransform::InstallInterfaceTemplate,
    nullptr,
    "SVGTransform",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& SVGTransformTearOff::wrapper_type_info_ =
    V8SVGTransform::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGTransformTearOff>::value,
    "SVGTransformTearOff inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&SVGTransformTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGTransformTearOff is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_svg_transform {

void TypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_type_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.type.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->transformType();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint16_t>());
}


void MatrixAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_matrix_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.matrix.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->matrix();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void AngleAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_angle_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.angle.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->angle();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<float>());
}









void SetMatrixOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setMatrix");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.setMatrix");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGTransform";
const char* const property_name = "setMatrix";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& arg1_matrix = NativeValueTraits<SVGMatrixTearOff>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setMatrix(arg1_matrix, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void SetRotateOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setRotate");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.setRotate");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGTransform";
const char* const property_name = "setRotate";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 3)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& arg1_angle = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_cx = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg3_cy = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 2, info[2], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setRotate(arg1_angle, arg2_cx, arg3_cy, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void SetScaleOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setScale");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.setScale");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGTransform";
const char* const property_name = "setScale";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& arg1_sx = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_sy = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setScale(arg1_sx, arg2_sy, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void SetSkewXOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setSkewX");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.setSkewX");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGTransform";
const char* const property_name = "setSkewX";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& arg1_angle = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setSkewX(arg1_angle, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void SetSkewYOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setSkewY");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.setSkewY");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGTransform";
const char* const property_name = "setSkewY";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& arg1_angle = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setSkewY(arg1_angle, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void SetTranslateOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setTranslate");
BLINK_BINDINGS_TRACE_EVENT("SVGTransform.setTranslate");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGTransform";
const char* const property_name = "setTranslate";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGTransformTearOff* blink_receiver = V8SVGTransform::ToWrappableUnsafe(v8_receiver);
auto&& arg1_tx = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_ty = NativeValueTraits<IDLFloat>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setTranslate(arg1_tx, arg2_ty, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}


}  // namespace v8_svg_transform

using namespace v8_svg_transform;

}  // namespace 

void V8SVGTransform::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8SVGTransform::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8SVGTransform::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"type", TypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"matrix", MatrixAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"angle", AngleAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}



{
  static const IDLMemberInstaller::ConstantValueConfig kConstantValueTable[] = {
{"SVG_TRANSFORM_UNKNOWN", V8SVGTransform::Constant::kSVGTransformUnknown},
{"SVG_TRANSFORM_MATRIX", V8SVGTransform::Constant::kSVGTransformMatrix},
{"SVG_TRANSFORM_TRANSLATE", V8SVGTransform::Constant::kSVGTransformTranslate},
{"SVG_TRANSFORM_SCALE", V8SVGTransform::Constant::kSVGTransformScale},
{"SVG_TRANSFORM_ROTATE", V8SVGTransform::Constant::kSVGTransformRotate},
{"SVG_TRANSFORM_SKEWX", V8SVGTransform::Constant::kSVGTransformSkewx},
{"SVG_TRANSFORM_SKEWY", V8SVGTransform::Constant::kSVGTransformSkewy},
};
IDLMemberInstaller::InstallConstants(isolate, world, instance_template, prototype_template, interface_template, signature, kConstantValueTable);
}



{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"setMatrix", SetMatrixOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"setRotate", SetRotateOperationCallback, 3, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"setScale", SetScaleOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"setSkewX", SetSkewXOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"setSkewY", SetSkewYOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"setTranslate", SetTranslateOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
