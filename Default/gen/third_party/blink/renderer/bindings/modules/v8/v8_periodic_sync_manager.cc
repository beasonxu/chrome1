// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_sync_manager.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_sync_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/modules/background_sync/periodic_sync_manager.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8PeriodicSyncManager::IsExposed(ExecutionContext* execution_context) {
  
return (execution_context->IsWindow() || execution_context->IsWorkerGlobalScope()) && RuntimeEnabledFeatures::PeriodicBackgroundSyncEnabled();
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

const WrapperTypeInfo V8PeriodicSyncManager::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8PeriodicSyncManager::InstallInterfaceTemplate,
    nullptr,
    "PeriodicSyncManager",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& PeriodicSyncManager::wrapper_type_info_ =
    V8PeriodicSyncManager::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PeriodicSyncManager>::value,
    "PeriodicSyncManager inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&PeriodicSyncManager::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PeriodicSyncManager is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_periodic_sync_manager {

void GetTagsOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PeriodicSyncManager_getTags");
BLINK_BINDINGS_TRACE_EVENT("PeriodicSyncManager.getTags");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8PeriodicSyncManager::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "PeriodicSyncManager";
const char* const property_name = "getTags";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPeriodicBackgroundSyncGetTags);





PeriodicSyncManager* blink_receiver = V8PeriodicSyncManager::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->getTags(script_state);
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void RegisterOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PeriodicSyncManager_register");
BLINK_BINDINGS_TRACE_EVENT("PeriodicSyncManager.register");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "PeriodicSyncManager";
const char* const property_name = "register";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
if (!V8PeriodicSyncManager::HasInstance(isolate, v8_receiver)) {
  exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPeriodicBackgroundSyncRegister);


if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



PeriodicSyncManager* blink_receiver = V8PeriodicSyncManager::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& arg1_tag = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<BackgroundSyncOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_options;
if (info[1]->IsUndefined()) {
  arg2_options = BackgroundSyncOptions::Create();
} else {
  arg2_options = NativeValueTraits<BackgroundSyncOptions>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->registerPeriodicSync(script_state, arg1_tag, arg2_options, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void UnregisterOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PeriodicSyncManager_unregister");
BLINK_BINDINGS_TRACE_EVENT("PeriodicSyncManager.unregister");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "PeriodicSyncManager";
const char* const property_name = "unregister";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
if (!V8PeriodicSyncManager::HasInstance(isolate, v8_receiver)) {
  exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPeriodicBackgroundSyncUnregister);


if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



PeriodicSyncManager* blink_receiver = V8PeriodicSyncManager::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& arg1_tag = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->unregister(script_state, arg1_tag);
bindings::V8SetReturnValue(info, return_value.V8Value());
}


}  // namespace v8_periodic_sync_manager

using namespace v8_periodic_sync_manager;

}  // namespace 

void V8PeriodicSyncManager::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8PeriodicSyncManager::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8PeriodicSyncManager::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"getTags", GetTagsOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"register", RegisterOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"unregister", UnregisterOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
