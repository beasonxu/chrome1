// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/modules/webaudio/audio_buffer.h"
#include "third_party/blink/renderer/modules/webaudio/base_audio_context.h"
#include "third_party/blink/renderer/modules/webaudio/convolver_node.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8ConvolverNode::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8ConvolverNode::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8ConvolverNode::InstallInterfaceTemplate,
    nullptr,
    "ConvolverNode",
    V8AudioNode::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ConvolverNode::wrapper_type_info_ =
    V8ConvolverNode::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ConvolverNode>::value,
    "ConvolverNode inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&ConvolverNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ConvolverNode is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_convolver_node {

void BufferAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_buffer_Getter");
BLINK_BINDINGS_TRACE_EVENT("ConvolverNode.buffer.get");


v8::Local<v8::Object> v8_receiver = info.This();
ConvolverNode* blink_receiver = V8ConvolverNode::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->buffer();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void BufferAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_buffer_Setter");
BLINK_BINDINGS_TRACE_EVENT("ConvolverNode.buffer.set");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "ConvolverNode";
const char* const property_name = "buffer";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}


v8::Local<v8::Object> v8_receiver = info.This();
ConvolverNode* blink_receiver = V8ConvolverNode::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
auto&& arg1_value = NativeValueTraits<IDLNullable<AudioBuffer>>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setBuffer(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void NormalizeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_normalize_Getter");
BLINK_BINDINGS_TRACE_EVENT("ConvolverNode.normalize.get");


v8::Local<v8::Object> v8_receiver = info.This();
ConvolverNode* blink_receiver = V8ConvolverNode::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->normalize();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void NormalizeAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_normalize_Setter");
BLINK_BINDINGS_TRACE_EVENT("ConvolverNode.normalize.set");



v8::Local<v8::Object> v8_receiver = info.This();
ConvolverNode* blink_receiver = V8ConvolverNode::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "ConvolverNode";
const char* const property_name = "normalize";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setNormalize(arg1_value);

}

void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_constructor");
BLINK_BINDINGS_TRACE_EVENT("ConvolverNode.constructor");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "ConvolverNode";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
if (!info.IsConstructCall()) {
  exception_state.ThrowTypeError(ExceptionMessages::ConstructorCalledAsFunction());
return;
}
v8::Local<v8::Object> v8_receiver = info.This();
if (ConstructorMode::Current(isolate) == ConstructorMode::kWrapExistingObject) {
  bindings::V8SetReturnValue(info, v8_receiver);
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ConvolverNode_Constructor);

if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}

auto&& arg1_context = NativeValueTraits<BaseAudioContext>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<ConvolverOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_options;
if (info[1]->IsUndefined()) {
  arg2_options = ConvolverOptions::Create();
} else {
  arg2_options = NativeValueTraits<ConvolverOptions>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = ConvolverNode::Create(arg1_context, arg2_options, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8ConvolverNode::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}


}  // namespace v8_convolver_node

using namespace v8_convolver_node;

}  // namespace 

void V8ConvolverNode::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ConvolverNode::GetWrapperTypeInfo();
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

void V8ConvolverNode::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"buffer", BufferAttributeGetCallback, BufferAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"normalize", NormalizeAttributeGetCallback, NormalizeAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
