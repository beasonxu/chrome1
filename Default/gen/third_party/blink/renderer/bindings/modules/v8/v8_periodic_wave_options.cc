// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



PeriodicWaveOptions* PeriodicWaveOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  PeriodicWaveOptions* dictionary = MakeGarbageCollected<PeriodicWaveOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "PeriodicWaveOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 PeriodicWaveOptions::PeriodicWaveOptions() {
  
}

 PeriodicWaveOptions::PeriodicWaveOptions(v8::Isolate* isolate) : PeriodicWaveConstraints(isolate) {
  
}



Vector<float> PeriodicWaveOptions::getImagOr(const Vector<float>& fallback_value) const {
  if (!hasImag()) {
  return fallback_value;
}
return member_imag_;
}

Vector<float> PeriodicWaveOptions::getImagOr(Vector<float>&& fallback_value) const {
  if (!hasImag()) {
  return std::move(fallback_value);
}
return member_imag_;
}

void PeriodicWaveOptions::setImag(const Vector<float>& value) {
  member_imag_ = value;
has_imag_ = true;
}

void PeriodicWaveOptions::setImag(Vector<float>&& value) {
  member_imag_ = std::move(value);
has_imag_ = true;
}




Vector<float> PeriodicWaveOptions::getRealOr(const Vector<float>& fallback_value) const {
  if (!hasReal()) {
  return fallback_value;
}
return member_real_;
}

Vector<float> PeriodicWaveOptions::getRealOr(Vector<float>&& fallback_value) const {
  if (!hasReal()) {
  return std::move(fallback_value);
}
return member_real_;
}

void PeriodicWaveOptions::setReal(const Vector<float>& value) {
  member_real_ = value;
has_real_ = true;
}

void PeriodicWaveOptions::setReal(Vector<float>&& value) {
  member_real_ = std::move(value);
has_real_ = true;
}




void PeriodicWaveOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<Vector<float>>::Trace(visitor, member_imag_);
TraceIfNeeded<Vector<float>>::Trace(visitor, member_real_);
PeriodicWaveConstraints::Trace(visitor);
}

bool PeriodicWaveOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!PeriodicWaveConstraints::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasImag()) {
  if (!ToV8Traits<IDLSequence<IDLFloat>>::ToV8(script_state, member_imag_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasReal()) {
  if (!ToV8Traits<IDLSequence<IDLFloat>>::ToV8(script_state, member_real_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void PeriodicWaveOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  PeriodicWaveConstraints::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "PeriodicWaveOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("imag");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLFloat>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_imag_, member_imag_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("real");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLFloat>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_real_, member_real_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> PeriodicWaveOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"imag",
"real",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
