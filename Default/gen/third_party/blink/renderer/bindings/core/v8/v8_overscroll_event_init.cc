// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_overscroll_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



OverscrollEventInit* OverscrollEventInit::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  OverscrollEventInit* dictionary = MakeGarbageCollected<OverscrollEventInit>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "OverscrollEventInit";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 OverscrollEventInit::OverscrollEventInit() {
  
}

 OverscrollEventInit::OverscrollEventInit(v8::Isolate* isolate) : EventInit(isolate) {
  
}













void OverscrollEventInit::Trace(Visitor* visitor) const {
  TraceIfNeeded<double>::Trace(visitor, member_delta_x_);
TraceIfNeeded<double>::Trace(visitor, member_delta_y_);
EventInit::Trace(visitor);
}

bool OverscrollEventInit::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!EventInit::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasDeltaX()) {
  if (!ToV8Traits<IDLDouble>::ToV8(script_state, member_delta_x_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDeltaY()) {
  if (!ToV8Traits<IDLDouble>::ToV8(script_state, member_delta_y_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void OverscrollEventInit::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  EventInit::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "OverscrollEventInit";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("deltaX");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_delta_x_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("deltaY");
if (!bindings::GetDictionaryMemberFromV8Object<IDLDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_delta_y_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> OverscrollEventInit::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"deltaX",
"deltaY",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
