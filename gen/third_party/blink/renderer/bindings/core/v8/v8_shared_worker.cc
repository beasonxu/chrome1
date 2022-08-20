// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_handler_non_null.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_string_workeroptions.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/messaging/message_port.h"
#include "third_party/blink/renderer/core/workers/abstract_worker.h"
#include "third_party/blink/renderer/core/workers/shared_worker.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8SharedWorker::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow() && RuntimeEnabledFeatures::SharedWorkerEnabled();
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

const WrapperTypeInfo V8SharedWorker::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8SharedWorker::InstallInterfaceTemplate,
    V8SharedWorker::InstallContextDependentProperties,
    "SharedWorker",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& SharedWorker::wrapper_type_info_ =
    V8SharedWorker::wrapper_type_info_;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, SharedWorker>::value,
    "SharedWorker does not inherit from ActiveScriptWrappable<> despite "
    "the IDL has [ActiveScriptWrappable] extended attribute.");
static_assert(
    !std::is_same<decltype(&SharedWorker::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SharedWorker is not overriding hasPendingActivity() despite "
    "the IDL has [ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_shared_worker {

void PortAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorker_port_Getter");
BLINK_BINDINGS_TRACE_EVENT("SharedWorker.port.get");


v8::Local<v8::Object> v8_receiver = info.This();
SharedWorker* blink_receiver = V8SharedWorker::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->port();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void OnerrorAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorker_onerror_Getter");
BLINK_BINDINGS_TRACE_EVENT("SharedWorker.onerror.get");


v8::Local<v8::Object> v8_receiver = info.This();
SharedWorker* blink_receiver = V8SharedWorker::ToWrappableUnsafe(v8_receiver);
auto&& return_value = AbstractWorker::onerror(*blink_receiver);
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
}

void OnerrorAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorker_onerror_Setter");
BLINK_BINDINGS_TRACE_EVENT("SharedWorker.onerror.set");

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
SharedWorker* blink_receiver = V8SharedWorker::ToWrappableUnsafe(v8_receiver);
AbstractWorker::setOnerror(*blink_receiver, event_handler);
}

void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorker_constructor");
BLINK_BINDINGS_TRACE_EVENT("SharedWorker.constructor");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "SharedWorker";
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


if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
ExecutionContext* execution_context = current_execution_context;
ExecutionContext* execution_context_of_document_tree = current_execution_context;
auto&& arg1_script_url = NativeValueTraits<IDLUSVStringStringContextTrustedScriptURL>::ArgumentValue(isolate, 0, info[0], exception_state, execution_context_of_document_tree);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<V8UnionStringOrWorkerOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_options;
if (info[1]->IsUndefined()) {
  arg2_options = MakeGarbageCollected<V8UnionStringOrWorkerOptions>(WorkerOptions::Create());
} else {
  arg2_options = NativeValueTraits<V8UnionStringOrWorkerOptions>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = SharedWorker::Create(execution_context, arg1_script_url, arg2_options, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8SharedWorker::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}


}  // namespace v8_shared_worker

using namespace v8_shared_worker;

}  // namespace 

void V8SharedWorker::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8SharedWorker::GetWrapperTypeInfo();
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

void V8SharedWorker::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"port", PortAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}


void V8SharedWorker::InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector) {
  using bindings::IDLMemberInstaller;

ScriptState* script_state = ScriptState::From(context);
ExecutionContext* execution_context = ExecutionContext::From(script_state);
if ((execution_context->IsWindow() || execution_context->IsWorkerGlobalScope()) && feature_selector.IsAll()) {
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"onerror", OnerrorAttributeGetCallback, OnerrorAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Isolate* isolate = context->GetIsolate();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_object, prototype_object, interface_object, signature, kAttributeTable);
}






}


}  // namespace blink
