// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_edit_context_init.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



EditContextInit* EditContextInit::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  EditContextInit* dictionary = MakeGarbageCollected<EditContextInit>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "EditContextInit";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 EditContextInit::EditContextInit() {
  
}

 EditContextInit::EditContextInit(v8::Isolate* isolate) {
  
}






































String EditContextInit::getTextOr(const String& fallback_value) const {
  if (!hasText()) {
  return fallback_value;
}
return member_text_;
}

String EditContextInit::getTextOr(String&& fallback_value) const {
  if (!hasText()) {
  return std::move(fallback_value);
}
return member_text_;
}

void EditContextInit::setText(const String& value) {
  member_text_ = value;
has_text_ = true;
}

void EditContextInit::setText(String&& value) {
  member_text_ = std::move(value);
has_text_ = true;
}




void EditContextInit::Trace(Visitor* visitor) const {
  TraceIfNeeded<V8EditContextEnterKeyHint>::Trace(visitor, member_enter_key_hint_);
TraceIfNeeded<V8EditContextInputMode>::Trace(visitor, member_input_mode_);
TraceIfNeeded<V8EditContextInputPanelPolicy>::Trace(visitor, member_input_panel_policy_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_selection_end_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_selection_start_);
TraceIfNeeded<String>::Trace(visitor, member_text_);
bindings::DictionaryBase::Trace(visitor);
}

bool EditContextInit::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasEnterKeyHint()) {
  if (!ToV8Traits<V8EditContextEnterKeyHint>::ToV8(script_state, member_enter_key_hint_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasInputMode()) {
  if (!ToV8Traits<V8EditContextInputMode>::ToV8(script_state, member_input_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasInputPanelPolicy()) {
  if (!ToV8Traits<V8EditContextInputPanelPolicy>::ToV8(script_state, member_input_panel_policy_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSelectionEnd()) {
  if (!ToV8Traits<IDLUnsignedLong>::ToV8(script_state, member_selection_end_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSelectionStart()) {
  if (!ToV8Traits<IDLUnsignedLong>::ToV8(script_state, member_selection_start_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasText()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_text_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void EditContextInit::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "EditContextInit";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("enterKeyHint");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<V8EditContextEnterKeyHint, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_enter_key_hint_, member_enter_key_hint_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("inputMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8EditContextInputMode, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_input_mode_, member_input_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("inputPanelPolicy");
if (!bindings::GetDictionaryMemberFromV8Object<V8EditContextInputPanelPolicy, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_input_panel_policy_, member_input_panel_policy_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("selectionEnd");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_selection_end_, member_selection_end_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("selectionStart");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_selection_start_, member_selection_start_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("text");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_text_, member_text_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> EditContextInit::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"enterKeyHint",
"inputMode",
"inputPanelPolicy",
"selectionEnd",
"selectionStart",
"text",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
