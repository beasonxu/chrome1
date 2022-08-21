// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_custom_element_form_state_restore_callback.h"

#include <tuple>

#include "third_party/blink/renderer/bindings/core/v8/callback_invoke_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_file_formdata_usvstring.h"
#include "third_party/blink/renderer/core/fileapi/file.h"
#include "third_party/blink/renderer/core/html/forms/form_data.h"

namespace blink {





const char* V8CustomElementFormStateRestoreCallback::NameInHeapSnapshot() const {
  return "V8CustomElementFormStateRestoreCallback";
}

v8::Maybe<void> V8CustomElementFormStateRestoreCallback::Invoke(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, const V8UnionFileOrFormDataOrUSVString* arg1_value, V8FormStateRestoreMode arg2_mode) {
  const char* const class_like_name = "CustomElementFormStateRestoreCallback";
const char* const property_name = "invoke";
ScriptState* callback_relevant_script_state =
    CallbackRelevantScriptStateOrThrowException(
        class_like_name, property_name);
if (!callback_relevant_script_state) {
  return v8::Nothing<void>();
}

if (!IsCallbackFunctionRunnable(callback_relevant_script_state, IncumbentScriptState())) {
  v8::Isolate* isolate = GetIsolate();
v8::HandleScope handle_scope(isolate);
v8::Context::Scope context_scope(callback_relevant_script_state->GetContext());
ExceptionState exception_state(isolate, ExceptionContext::Context::kOperationInvoke,class_like_name, property_name);
exception_state.ThrowException(static_cast<ExceptionCode>(ESErrorType::kError), "The provided callback is no longer runnable.");
return v8::Nothing<void>();
}

bindings::CallbackInvokeHelper<CallbackFunctionBase, bindings::CallbackInvokeHelperMode::kDefault, bindings::CallbackReturnTypeIsPromise::kNo> helper(
    this, class_like_name, property_name);
if (UNLIKELY(!helper.PrepareForCall(arg0_receiver))) {
  if (helper.V8Result().IsEmpty()) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}
const int argc = 2;
v8::Local<v8::Value> argv[argc];
v8::Local<v8::Value> v8_arg1_value;
ScriptState* script_state = CallbackRelevantScriptState();
if (!ToV8Traits<V8UnionFileOrFormDataOrUSVString>::ToV8(script_state, arg1_value).ToLocal(&v8_arg1_value)) {
  return v8::Nothing<void>();
}
argv[0] = v8_arg1_value;
v8::Local<v8::Value> v8_arg2_mode;
if (!ToV8Traits<V8FormStateRestoreMode>::ToV8(script_state, arg2_mode).ToLocal(&v8_arg2_mode)) {
  return v8::Nothing<void>();
}
argv[1] = v8_arg2_mode;
if (!helper.Call(argc, argv)) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}

v8::Maybe<void> V8CustomElementFormStateRestoreCallback::Construct(const V8UnionFileOrFormDataOrUSVString* arg1_value, V8FormStateRestoreMode arg2_mode) {
  const char* const class_like_name = "CustomElementFormStateRestoreCallback";
const char* const property_name = "construct";
ScriptState* callback_relevant_script_state =
    CallbackRelevantScriptStateOrThrowException(
        class_like_name, property_name);
if (!callback_relevant_script_state) {
  return v8::Nothing<void>();
}

if (!IsCallbackFunctionRunnable(callback_relevant_script_state, IncumbentScriptState())) {
  v8::Isolate* isolate = GetIsolate();
v8::HandleScope handle_scope(isolate);
v8::Context::Scope context_scope(callback_relevant_script_state->GetContext());
ExceptionState exception_state(isolate, ExceptionContext::Context::kOperationInvoke,class_like_name, property_name);
exception_state.ThrowException(static_cast<ExceptionCode>(ESErrorType::kError), "The provided callback is no longer runnable.");
return v8::Nothing<void>();
}

bindings::CallbackInvokeHelper<CallbackFunctionBase, bindings::CallbackInvokeHelperMode::kConstructorCall, bindings::CallbackReturnTypeIsPromise::kNo> helper(
    this, class_like_name, property_name);
if (UNLIKELY(!helper.PrepareForCall(nullptr))) {
  if (helper.V8Result().IsEmpty()) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}
const int argc = 2;
v8::Local<v8::Value> argv[argc];
v8::Local<v8::Value> v8_arg1_value;
ScriptState* script_state = CallbackRelevantScriptState();
if (!ToV8Traits<V8UnionFileOrFormDataOrUSVString>::ToV8(script_state, arg1_value).ToLocal(&v8_arg1_value)) {
  return v8::Nothing<void>();
}
argv[0] = v8_arg1_value;
v8::Local<v8::Value> v8_arg2_mode;
if (!ToV8Traits<V8FormStateRestoreMode>::ToV8(script_state, arg2_mode).ToLocal(&v8_arg2_mode)) {
  return v8::Nothing<void>();
}
argv[1] = v8_arg2_mode;
if (!helper.Call(argc, argv)) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}

void V8CustomElementFormStateRestoreCallback::InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, const V8UnionFileOrFormDataOrUSVString* arg1_value, V8FormStateRestoreMode arg2_mode) {
  v8::Isolate* isolate = GetIsolate();
v8::TryCatch try_catch(isolate);
try_catch.SetVerbose(true);

std::ignore = Invoke(arg0_receiver, arg1_value, arg2_mode);
}



}  // namespace blink
