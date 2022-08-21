// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_for_each_iterator_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_iterator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_file_usvstring.h"
#include "third_party/blink/renderer/core/dom/iterator.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fileapi/blob.h"
#include "third_party/blink/renderer/core/fileapi/file.h"
#include "third_party/blink/renderer/core/html/forms/form_data.h"
#include "third_party/blink/renderer/core/html/forms/html_form_element.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"

namespace blink {



bool V8FormData::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow() || execution_context->IsWorkerGlobalScope();
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

const WrapperTypeInfo V8FormData::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8FormData::InstallInterfaceTemplate,
    V8FormData::InstallContextDependentProperties,
    "FormData",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& FormData::wrapper_type_info_ =
    V8FormData::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, FormData>::value,
    "FormData inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&FormData::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "FormData is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_form_data {

void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_constructor");
BLINK_BINDINGS_TRACE_EVENT("FormData.constructor");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "FormData";
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



FormData* return_value;
do {  // Dummy loop for use of 'break'.
  const int non_undefined_argument_length = bindings::NonUndefinedArgumentLength(info);
if (non_undefined_argument_length <= 0) {
  return_value = FormData::Create(exception_state);
break;
}
auto&& arg1_form = NativeValueTraits<HTMLFormElement>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
return_value = FormData::Create(arg1_form, exception_state);
} while (false);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8FormData::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}

void AppendOperationOverload1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "append";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_value = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->append(arg1_name, arg2_value);

}

void AppendOperationOverload2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  


if (UNLIKELY(info.Length() < 2)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "append";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



do {  // Dummy loop for use of 'break'.
  const int non_undefined_argument_length = bindings::NonUndefinedArgumentLength(info);
v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "append";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_value = NativeValueTraits<Blob>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
if (non_undefined_argument_length <= 2) {
  blink_receiver->append(script_state, arg1_name, arg2_value);
break;
}
auto&& arg3_filename = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 2, info[2], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->append(script_state, arg1_name, arg2_value, arg3_filename);
} while (false);

}

void AppendOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_append");
BLINK_BINDINGS_TRACE_EVENT("FormData.append");

scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

const int arg_count = std::min(info.Length(), 3);
if (arg_count == 3) {
  return AppendOperationOverload2(info);
}
v8::Isolate* isolate = info.GetIsolate();
if (arg_count == 2) {
  if (V8Blob::HasInstance(isolate, info[1])) {
  return AppendOperationOverload2(info);
}
return AppendOperationOverload1(info);
}

const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "append";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}
exception_state.ThrowTypeError("Overload resolution failed.");
return;
}

void DeleteOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_delete");
BLINK_BINDINGS_TRACE_EVENT("FormData.delete");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "delete";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->deleteEntry(arg1_name);

}

void GetOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_get");
BLINK_BINDINGS_TRACE_EVENT("FormData.get");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "get";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->get(arg1_name);
if (!ToV8Traits<IDLNullable<V8UnionFileOrUSVString>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void GetAllOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_getAll");
BLINK_BINDINGS_TRACE_EVENT("FormData.getAll");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "getAll";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->getAll(arg1_name);
if (!ToV8Traits<IDLSequence<V8UnionFileOrUSVString>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void HasOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_has");
BLINK_BINDINGS_TRACE_EVENT("FormData.has");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "has";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->has(arg1_name);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void SetOperationOverload1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "set";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_value = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->set(arg1_name, arg2_value);

}

void SetOperationOverload2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  


if (UNLIKELY(info.Length() < 2)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "set";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



do {  // Dummy loop for use of 'break'.
  const int non_undefined_argument_length = bindings::NonUndefinedArgumentLength(info);
v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "set";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_name = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_value = NativeValueTraits<Blob>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
if (non_undefined_argument_length <= 2) {
  blink_receiver->set(arg1_name, arg2_value);
break;
}
auto&& arg3_filename = NativeValueTraits<IDLUSVString>::ArgumentValue(isolate, 2, info[2], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->set(arg1_name, arg2_value, arg3_filename);
} while (false);

}

void SetOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_set");
BLINK_BINDINGS_TRACE_EVENT("FormData.set");

scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

const int arg_count = std::min(info.Length(), 3);
if (arg_count == 3) {
  return SetOperationOverload2(info);
}
v8::Isolate* isolate = info.GetIsolate();
if (arg_count == 2) {
  if (V8Blob::HasInstance(isolate, info[1])) {
  return SetOperationOverload2(info);
}
return SetOperationOverload1(info);
}

const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "set";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}
exception_state.ThrowTypeError("Overload resolution failed.");
return;
}

void EntriesOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_entries");
BLINK_BINDINGS_TRACE_EVENT("FormData.entries");







v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "entries";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& return_value = blink_receiver->entriesForBinding(script_state, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void ForEachOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_forEach");
BLINK_BINDINGS_TRACE_EVENT("FormData.forEach");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "forEach";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& arg1_callback = NativeValueTraits<V8ForEachIteratorCallback>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<IDLAny>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_this_arg;
if (info[1]->IsUndefined()) {
  arg2_this_arg = ScriptValue::CreateNull(isolate);
} else {
  arg2_this_arg = NativeValueTraits<IDLAny>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
blink_receiver->forEachForBinding(script_state, ScriptValue(isolate, v8_receiver), arg1_callback, arg2_this_arg, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void KeysOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_keys");
BLINK_BINDINGS_TRACE_EVENT("FormData.keys");







v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "keys";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& return_value = blink_receiver->keysForBinding(script_state, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void ValuesOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FormData_values");
BLINK_BINDINGS_TRACE_EVENT("FormData.values");







v8::Local<v8::Object> v8_receiver = info.This();
FormData* blink_receiver = V8FormData::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "FormData";
const char* const property_name = "values";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& return_value = blink_receiver->valuesForBinding(script_state, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


}  // namespace v8_form_data

using namespace v8_form_data;

}  // namespace 

void V8FormData::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8FormData::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

interface_function_template->SetCallHandler(ConstructorCallback);
interface_function_template->SetLength(0);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8FormData::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"append", AppendOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"delete", DeleteOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"get", GetOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"getAll", GetAllOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"has", HasOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"set", SetOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"entries", EntriesOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"forEach", ForEachOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"keys", KeysOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"values", ValuesOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}


void V8FormData::InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector) {
  using bindings::IDLMemberInstaller;

if (feature_selector.IsAll()) {
  v8::Isolate* isolate = context->GetIsolate();
// @@iterator == "entries"
{
  v8::Local<v8::Value> v8_value = prototype_object->Get(
      context, V8AtomicString(isolate, "entries"))
      .ToLocalChecked();
  prototype_object->DefineOwnProperty(
      context, v8::Symbol::GetIterator(isolate), v8_value,
      v8::DontEnum).ToChecked();
}

}







}


}  // namespace blink
