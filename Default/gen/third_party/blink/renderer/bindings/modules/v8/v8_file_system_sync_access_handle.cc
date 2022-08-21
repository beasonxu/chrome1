// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_sync_access_handle.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_read_write_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/modules/file_system_access/file_system_sync_access_handle.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8FileSystemSyncAccessHandle::IsExposed(ExecutionContext* execution_context) {
  
const bool is_in_secure_context = execution_context->IsSecureContext();
return is_in_secure_context && execution_context->IsDedicatedWorkerGlobalScope() && RuntimeEnabledFeatures::FileSystemAccessAccessHandleEnabled();
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

const WrapperTypeInfo V8FileSystemSyncAccessHandle::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8FileSystemSyncAccessHandle::InstallInterfaceTemplate,
    nullptr,
    "FileSystemSyncAccessHandle",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& FileSystemSyncAccessHandle::wrapper_type_info_ =
    V8FileSystemSyncAccessHandle::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, FileSystemSyncAccessHandle>::value,
    "FileSystemSyncAccessHandle inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&FileSystemSyncAccessHandle::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "FileSystemSyncAccessHandle is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_file_system_sync_access_handle {

void CloseOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileSystemSyncAccessHandle_close");
BLINK_BINDINGS_TRACE_EVENT("FileSystemSyncAccessHandle.close");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8FileSystemSyncAccessHandle::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FileSystemSyncAccessHandle";
const char* const property_name = "close";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8FileSystemSyncAccessHandle_Close_Method);





FileSystemSyncAccessHandle* blink_receiver = V8FileSystemSyncAccessHandle::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->close(script_state);
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void FlushOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileSystemSyncAccessHandle_flush");
BLINK_BINDINGS_TRACE_EVENT("FileSystemSyncAccessHandle.flush");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FileSystemSyncAccessHandle";
const char* const property_name = "flush";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
if (!V8FileSystemSyncAccessHandle::HasInstance(isolate, v8_receiver)) {
  exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8FileSystemSyncAccessHandle_Flush_Method);





FileSystemSyncAccessHandle* blink_receiver = V8FileSystemSyncAccessHandle::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->flush(script_state, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void GetSizeOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileSystemSyncAccessHandle_getSize");
BLINK_BINDINGS_TRACE_EVENT("FileSystemSyncAccessHandle.getSize");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FileSystemSyncAccessHandle";
const char* const property_name = "getSize";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
if (!V8FileSystemSyncAccessHandle::HasInstance(isolate, v8_receiver)) {
  exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8FileSystemSyncAccessHandle_GetSize_Method);





FileSystemSyncAccessHandle* blink_receiver = V8FileSystemSyncAccessHandle::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->getSize(script_state, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void ReadOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileSystemSyncAccessHandle_read");
BLINK_BINDINGS_TRACE_EVENT("FileSystemSyncAccessHandle.read");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8FileSystemSyncAccessHandle_Read_Method);


const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FileSystemSyncAccessHandle";
const char* const property_name = "read";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FileSystemSyncAccessHandle* blink_receiver = V8FileSystemSyncAccessHandle::ToWrappableUnsafe(v8_receiver);
auto&& arg1_buffer = NativeValueTraits<MaybeShared<DOMArrayBufferView>>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<FileSystemReadWriteOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_options;
if (info[1]->IsUndefined()) {
  arg2_options = FileSystemReadWriteOptions::Create();
} else {
  arg2_options = NativeValueTraits<FileSystemReadWriteOptions>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->read(arg1_buffer, arg2_options, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint64_t>());
}

void TruncateOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileSystemSyncAccessHandle_truncate");
BLINK_BINDINGS_TRACE_EVENT("FileSystemSyncAccessHandle.truncate");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FileSystemSyncAccessHandle";
const char* const property_name = "truncate";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
if (!V8FileSystemSyncAccessHandle::HasInstance(isolate, v8_receiver)) {
  exception_state.ThrowTypeError("Illegal invocation");
return;
}

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8FileSystemSyncAccessHandle_Truncate_Method);


if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



FileSystemSyncAccessHandle* blink_receiver = V8FileSystemSyncAccessHandle::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& arg1_size = NativeValueTraits<IDLUnsignedLongLongEnforceRange>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->truncate(script_state, arg1_size, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void WriteOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileSystemSyncAccessHandle_write");
BLINK_BINDINGS_TRACE_EVENT("FileSystemSyncAccessHandle.write");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8FileSystemSyncAccessHandle_Write_Method);


const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FileSystemSyncAccessHandle";
const char* const property_name = "write";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FileSystemSyncAccessHandle* blink_receiver = V8FileSystemSyncAccessHandle::ToWrappableUnsafe(v8_receiver);
auto&& arg1_buffer = NativeValueTraits<MaybeShared<DOMArrayBufferView>>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<FileSystemReadWriteOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_options;
if (info[1]->IsUndefined()) {
  arg2_options = FileSystemReadWriteOptions::Create();
} else {
  arg2_options = NativeValueTraits<FileSystemReadWriteOptions>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->write(arg1_buffer, arg2_options, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint64_t>());
}


}  // namespace v8_file_system_sync_access_handle

using namespace v8_file_system_sync_access_handle;

}  // namespace 

void V8FileSystemSyncAccessHandle::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8FileSystemSyncAccessHandle::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8FileSystemSyncAccessHandle::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"close", CloseOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"flush", FlushOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"getSize", GetSizeOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"read", ReadOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"truncate", TruncateOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"write", WriteOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
