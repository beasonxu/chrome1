// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_wake_lock.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wake_lock_type.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/wake_lock/wake_lock.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8WakeLock::IsExposed(ExecutionContext* execution_context) {
  
const bool is_in_secure_context = execution_context->IsSecureContext();
return is_in_secure_context && ((execution_context->IsDedicatedWorkerGlobalScope() && RuntimeEnabledFeatures::SystemWakeLockEnabled()) || (execution_context->IsWindow() && RuntimeEnabledFeatures::WakeLockEnabled()));
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

const WrapperTypeInfo V8WakeLock::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8WakeLock::InstallInterfaceTemplate,
    nullptr,
    "WakeLock",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& WakeLock::wrapper_type_info_ =
    V8WakeLock::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WakeLock>::value,
    "WakeLock inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&WakeLock::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WakeLock is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_wake_lock {

void RequestOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WakeLock_request");
BLINK_BINDINGS_TRACE_EVENT("WakeLock.request");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "WakeLock";
const char* const property_name = "request";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
if (!V8WakeLock::HasInstance(isolate, v8_receiver)) {
  exception_state.ThrowTypeError("Illegal invocation");
return;
}






WakeLock* blink_receiver = V8WakeLock::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
decltype(NativeValueTraits<V8WakeLockType>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_type{V8WakeLockType::Enum::kScreen};
if (!info[0]->IsUndefined()) {
  arg1_type = NativeValueTraits<V8WakeLockType>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->request(script_state, arg1_type, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value.V8Value());
}


}  // namespace v8_wake_lock

using namespace v8_wake_lock;

}  // namespace 

void V8WakeLock::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8WakeLock::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8WakeLock::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"request", RequestOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
