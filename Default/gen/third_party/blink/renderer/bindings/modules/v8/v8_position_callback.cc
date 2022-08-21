// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_position_callback.h"

#include <tuple>

#include "third_party/blink/renderer/bindings/core/v8/callback_invoke_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/modules/geolocation/geoposition.h"

namespace blink {





const char* V8PositionCallback::NameInHeapSnapshot() const {
  return "V8PositionCallback";
}

v8::Maybe<void> V8PositionCallback::Invoke(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, Geoposition* arg1_position) {
  const char* const class_like_name = "PositionCallback";
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
const int argc = 1;
v8::Local<v8::Value> argv[argc];
v8::Local<v8::Value> v8_arg1_position;
ScriptState* script_state = CallbackRelevantScriptState();
if (!ToV8Traits<Geoposition>::ToV8(script_state, arg1_position).ToLocal(&v8_arg1_position)) {
  return v8::Nothing<void>();
}
argv[0] = v8_arg1_position;
if (!helper.Call(argc, argv)) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}

v8::Maybe<void> V8PositionCallback::Construct(Geoposition* arg1_position) {
  const char* const class_like_name = "PositionCallback";
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
const int argc = 1;
v8::Local<v8::Value> argv[argc];
v8::Local<v8::Value> v8_arg1_position;
ScriptState* script_state = CallbackRelevantScriptState();
if (!ToV8Traits<Geoposition>::ToV8(script_state, arg1_position).ToLocal(&v8_arg1_position)) {
  return v8::Nothing<void>();
}
argv[0] = v8_arg1_position;
if (!helper.Call(argc, argv)) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}

void V8PositionCallback::InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, Geoposition* arg1_position) {
  v8::Isolate* isolate = GetIsolate();
v8::TryCatch try_catch(isolate);
try_catch.SetVerbose(true);

std::ignore = Invoke(arg0_receiver, arg1_position);
}



}  // namespace blink
