// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



CloseEventInit* CloseEventInit::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  CloseEventInit* dictionary = MakeGarbageCollected<CloseEventInit>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "CloseEventInit";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 CloseEventInit::CloseEventInit() {
  
}

 CloseEventInit::CloseEventInit(v8::Isolate* isolate) : EventInit(isolate) {
  
}










String CloseEventInit::getReasonOr(const String& fallback_value) const {
  if (!hasReason()) {
  return fallback_value;
}
return member_reason_;
}

String CloseEventInit::getReasonOr(String&& fallback_value) const {
  if (!hasReason()) {
  return std::move(fallback_value);
}
return member_reason_;
}

void CloseEventInit::setReason(const String& value) {
  member_reason_ = value;
has_reason_ = true;
}

void CloseEventInit::setReason(String&& value) {
  member_reason_ = std::move(value);
has_reason_ = true;
}











void CloseEventInit::Trace(Visitor* visitor) const {
  TraceIfNeeded<uint16_t>::Trace(visitor, member_code_);
TraceIfNeeded<String>::Trace(visitor, member_reason_);
TraceIfNeeded<bool>::Trace(visitor, member_was_clean_);
EventInit::Trace(visitor);
}

bool CloseEventInit::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!EventInit::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasCode()) {
  if (!ToV8Traits<IDLUnsignedShort>::ToV8(script_state, member_code_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasReason()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_reason_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasWasClean()) {
  if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_was_clean_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void CloseEventInit::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  EventInit::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "CloseEventInit";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("code");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedShort, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_code_, member_code_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("reason");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_reason_, member_reason_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("wasClean");
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_was_clean_, member_was_clean_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> CloseEventInit::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"code",
"reason",
"wasClean",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
