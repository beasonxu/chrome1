// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_client.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_post_message_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_client_lifecycle_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_client_type.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_context_frame_type.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/service_worker/service_worker_client.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"

namespace blink {



bool V8Client::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsServiceWorkerGlobalScope();
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

const WrapperTypeInfo V8Client::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8Client::InstallInterfaceTemplate,
    nullptr,
    "Client",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ServiceWorkerClient::wrapper_type_info_ =
    V8Client::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ServiceWorkerClient>::value,
    "ServiceWorkerClient inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&ServiceWorkerClient::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ServiceWorkerClient is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_client {

void UrlAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerClient_url_Getter");
BLINK_BINDINGS_TRACE_EVENT("Client.url.get");


v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->url();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void IdAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerClient_id_Getter");
BLINK_BINDINGS_TRACE_EVENT("Client.id.get");


v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->id();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void TypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerClient_type_Getter");
BLINK_BINDINGS_TRACE_EVENT("Client.type.get");


v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->type();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void FrameTypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerClient_frameType_Getter");
BLINK_BINDINGS_TRACE_EVENT("Client.frameType.get");


v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->frameType(script_state);
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void LifecycleStateAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerClient_lifecycleState_Getter");
BLINK_BINDINGS_TRACE_EVENT("Client.lifecycleState.get");


v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->lifecycleState();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void PostMessageOperationOverload1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "Client";
const char* const property_name = "postMessage";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& arg1_message = NativeValueTraits<IDLAny>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_transfer = NativeValueTraits<IDLSequence<IDLObject>>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->postMessage(script_state, arg1_message, arg2_transfer, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void PostMessageOperationOverload2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "Client";
const char* const property_name = "postMessage";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
ServiceWorkerClient* blink_receiver = V8Client::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& arg1_message = NativeValueTraits<IDLAny>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<PostMessageOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_options;
if (info[1]->IsUndefined()) {
  arg2_options = PostMessageOptions::Create();
} else {
  arg2_options = NativeValueTraits<PostMessageOptions>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
blink_receiver->postMessage(script_state, arg1_message, arg2_options, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void PostMessageOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerClient_postMessage");
BLINK_BINDINGS_TRACE_EVENT("Client.postMessage");

scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

const int arg_count = std::min(info.Length(), 2);
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "Client";
const char* const property_name = "postMessage";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
do {  // Dummy loop for use of 'break'.
  if (arg_count == 2) {
  if (info[1]->IsUndefined()) {
  return PostMessageOperationOverload2(info);
}
if (info[1]->IsNullOrUndefined()) {
  return PostMessageOperationOverload2(info);
}
if (info[1]->IsArray() || bindings::IsEsIterableObject(isolate, info[1], exception_state)) {
  return PostMessageOperationOverload1(info);
}
if (UNLIKELY(exception_state.HadException())) {
  return;
}
if (info[1]->IsObject()) {
  return PostMessageOperationOverload2(info);
}
break;
}
if (arg_count == 1) {
  return PostMessageOperationOverload2(info);
}
} while (false);

if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}
exception_state.ThrowTypeError("Overload resolution failed.");
return;
}


}  // namespace v8_client

using namespace v8_client;

}  // namespace 

void V8Client::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8Client::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
InstallContextIndependentProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8Client::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"url", UrlAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"id", IdAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"type", TypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"frameType", FrameTypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"postMessage", PostMessageOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}

void V8Client::InstallContextIndependentProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

if (RuntimeEnabledFeatures::ServiceWorkerClientLifecycleStateEnabled()) {
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"lifecycleState", LifecycleStateAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}






}



}  // namespace blink
