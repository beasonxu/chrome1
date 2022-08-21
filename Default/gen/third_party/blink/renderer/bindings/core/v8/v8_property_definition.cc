// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_property_definition.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



PropertyDefinition* PropertyDefinition::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  PropertyDefinition* dictionary = MakeGarbageCollected<PropertyDefinition>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "PropertyDefinition";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 PropertyDefinition::PropertyDefinition() {
  
}

 PropertyDefinition::PropertyDefinition(v8::Isolate* isolate) {
  
}








String PropertyDefinition::getInitialValueOr(const String& fallback_value) const {
  if (!hasInitialValue()) {
  return fallback_value;
}
return member_initial_value_;
}

String PropertyDefinition::getInitialValueOr(String&& fallback_value) const {
  if (!hasInitialValue()) {
  return std::move(fallback_value);
}
return member_initial_value_;
}

void PropertyDefinition::setInitialValue(const String& value) {
  member_initial_value_ = value;
has_initial_value_ = true;
}

void PropertyDefinition::setInitialValue(String&& value) {
  member_initial_value_ = std::move(value);
has_initial_value_ = true;
}




void PropertyDefinition::setName(const String& value) {
  member_name_ = value;
}

void PropertyDefinition::setName(String&& value) {
  member_name_ = std::move(value);
}




void PropertyDefinition::setSyntax(const String& value) {
  member_syntax_ = value;
}

void PropertyDefinition::setSyntax(String&& value) {
  member_syntax_ = std::move(value);
}




void PropertyDefinition::Trace(Visitor* visitor) const {
  TraceIfNeeded<bool>::Trace(visitor, member_inherits_);
TraceIfNeeded<String>::Trace(visitor, member_initial_value_);
TraceIfNeeded<String>::Trace(visitor, member_name_);
TraceIfNeeded<String>::Trace(visitor, member_syntax_);
bindings::DictionaryBase::Trace(visitor);
}

bool PropertyDefinition::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasInherits()) {
  if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_inherits_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasInitialValue()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_initial_value_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasName()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_name_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSyntax()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_syntax_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void PropertyDefinition::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "PropertyDefinition";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("inherits");
constexpr bool is_required = true;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_inherits_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("initialValue");
constexpr bool is_optional = false;
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_initial_value_, member_initial_value_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("name");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_name_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("syntax");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), fallback_presence_var, member_syntax_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> PropertyDefinition::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"inherits",
"initialValue",
"name",
"syntax",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
