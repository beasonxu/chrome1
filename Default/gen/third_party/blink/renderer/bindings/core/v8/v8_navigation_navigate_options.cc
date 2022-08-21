// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_navigation_navigate_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



NavigationNavigateOptions* NavigationNavigateOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  NavigationNavigateOptions* dictionary = MakeGarbageCollected<NavigationNavigateOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "NavigationNavigateOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 NavigationNavigateOptions::NavigationNavigateOptions() {
  
}

 NavigationNavigateOptions::NavigationNavigateOptions(v8::Isolate* isolate) : NavigationOptions(isolate) {
  
}















void NavigationNavigateOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<V8NavigationHistoryBehavior>::Trace(visitor, member_history_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_state_);
NavigationOptions::Trace(visitor);
}

bool NavigationNavigateOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!NavigationOptions::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasHistory()) {
  if (!ToV8Traits<V8NavigationHistoryBehavior>::ToV8(script_state, member_history_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasState()) {
  if (!ToV8Traits<IDLAny>::ToV8(script_state, member_state_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void NavigationNavigateOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  NavigationOptions::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "NavigationNavigateOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("history");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<V8NavigationHistoryBehavior, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_history_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("state");
if (!bindings::GetDictionaryMemberFromV8Object<IDLAny, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_state_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> NavigationNavigateOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"history",
"state",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
