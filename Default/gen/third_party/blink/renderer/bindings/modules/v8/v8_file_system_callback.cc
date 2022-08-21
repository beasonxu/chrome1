// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_callback.h"

#include <tuple>

#include "third_party/blink/renderer/bindings/core/v8/callback_invoke_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/modules/filesystem/dom_file_system.h"

namespace blink {





const char* V8FileSystemCallback::NameInHeapSnapshot() const {
  return "V8FileSystemCallback";
}

v8::Maybe<void> V8FileSystemCallback::handleEvent(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, DOMFileSystem* arg1_file_system) {
  const char* const class_like_name = "FileSystemCallback";
const char* const property_name = "handleEvent";
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

bindings::CallbackInvokeHelper<CallbackInterfaceBase> helper(
    this, class_like_name, property_name);
if (UNLIKELY(!helper.PrepareForCall(arg0_receiver))) {
  if (helper.V8Result().IsEmpty()) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}
const int argc = 1;
v8::Local<v8::Value> argv[argc];
v8::Local<v8::Value> v8_arg1_file_system;
ScriptState* script_state = CallbackRelevantScriptState();
if (!ToV8Traits<DOMFileSystem>::ToV8(script_state, arg1_file_system).ToLocal(&v8_arg1_file_system)) {
  return v8::Nothing<void>();
}
argv[0] = v8_arg1_file_system;
if (!helper.Call(argc, argv)) {
  return v8::Nothing<void>();
}
return v8::JustVoid();
}

void V8FileSystemCallback::InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, DOMFileSystem* arg1_file_system) {
  v8::Isolate* isolate = GetIsolate();
v8::TryCatch try_catch(isolate);
try_catch.SetVerbose(true);

std::ignore = handleEvent(arg0_receiver, arg1_file_system);
}



}  // namespace blink
