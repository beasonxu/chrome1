// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



BiquadFilterOptions* BiquadFilterOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  BiquadFilterOptions* dictionary = MakeGarbageCollected<BiquadFilterOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "BiquadFilterOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 BiquadFilterOptions::BiquadFilterOptions() {
  
}

 BiquadFilterOptions::BiquadFilterOptions(v8::Isolate* isolate) : AudioNodeOptions(isolate) {
  
}




























void BiquadFilterOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<float>::Trace(visitor, member_q_);
TraceIfNeeded<float>::Trace(visitor, member_detune_);
TraceIfNeeded<float>::Trace(visitor, member_frequency_);
TraceIfNeeded<float>::Trace(visitor, member_gain_);
TraceIfNeeded<V8BiquadFilterType>::Trace(visitor, member_type_);
AudioNodeOptions::Trace(visitor);
}

bool BiquadFilterOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!AudioNodeOptions::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasQ()) {
  if (!ToV8Traits<IDLFloat>::ToV8(script_state, member_q_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDetune()) {
  if (!ToV8Traits<IDLFloat>::ToV8(script_state, member_detune_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasFrequency()) {
  if (!ToV8Traits<IDLFloat>::ToV8(script_state, member_frequency_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasGain()) {
  if (!ToV8Traits<IDLFloat>::ToV8(script_state, member_gain_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasType()) {
  if (!ToV8Traits<V8BiquadFilterType>::ToV8(script_state, member_type_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void BiquadFilterOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  AudioNodeOptions::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "BiquadFilterOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("Q");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLFloat, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_q_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("detune");
if (!bindings::GetDictionaryMemberFromV8Object<IDLFloat, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_detune_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("frequency");
if (!bindings::GetDictionaryMemberFromV8Object<IDLFloat, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_frequency_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("gain");
if (!bindings::GetDictionaryMemberFromV8Object<IDLFloat, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), fallback_presence_var, member_gain_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("type");
if (!bindings::GetDictionaryMemberFromV8Object<V8BiquadFilterType, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), fallback_presence_var, member_type_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> BiquadFilterOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"Q",
"detune",
"frequency",
"gain",
"type",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
