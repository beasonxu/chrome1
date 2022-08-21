// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_memory_attribution.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_memory_attribution_container.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



MemoryAttribution* MemoryAttribution::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  MemoryAttribution* dictionary = MakeGarbageCollected<MemoryAttribution>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "MemoryAttribution";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 MemoryAttribution::MemoryAttribution() {
  
}

 MemoryAttribution::MemoryAttribution(v8::Isolate* isolate) {
  
}










void MemoryAttribution::setScope(const String& value) {
  member_scope_ = value;
}

void MemoryAttribution::setScope(String&& value) {
  member_scope_ = std::move(value);
}




void MemoryAttribution::setUrl(const String& value) {
  member_url_ = value;
}

void MemoryAttribution::setUrl(String&& value) {
  member_url_ = std::move(value);
}




void MemoryAttribution::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<MemoryAttributionContainer>>::Trace(visitor, member_container_);
TraceIfNeeded<String>::Trace(visitor, member_scope_);
TraceIfNeeded<String>::Trace(visitor, member_url_);
bindings::DictionaryBase::Trace(visitor);
}

bool MemoryAttribution::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasContainer()) {
  if (!ToV8Traits<MemoryAttributionContainer>::ToV8(script_state, member_container_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasScope()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_scope_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasUrl()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_url_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void MemoryAttribution::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "MemoryAttribution";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("container");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<MemoryAttributionContainer, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_container_, member_container_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("scope");
constexpr bool is_required = true;
bool fallback_presence_var;
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_scope_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("url");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_url_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> MemoryAttribution::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"container",
"scope",
"url",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
