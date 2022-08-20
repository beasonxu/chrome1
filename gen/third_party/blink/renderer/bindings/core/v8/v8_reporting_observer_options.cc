// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_reporting_observer_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



ReportingObserverOptions* ReportingObserverOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  ReportingObserverOptions* dictionary = MakeGarbageCollected<ReportingObserverOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "ReportingObserverOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 ReportingObserverOptions::ReportingObserverOptions() {
  
}

 ReportingObserverOptions::ReportingObserverOptions(v8::Isolate* isolate) {
  
}








absl::optional<Vector<String>> ReportingObserverOptions::getTypesOr(const absl::optional<Vector<String>>& fallback_value) const {
  if (!hasTypes()) {
  return fallback_value;
}
return member_types_;
}

absl::optional<Vector<String>> ReportingObserverOptions::getTypesOr(absl::optional<Vector<String>>&& fallback_value) const {
  if (!hasTypes()) {
  return std::move(fallback_value);
}
return member_types_;
}

void ReportingObserverOptions::setTypes(const absl::optional<Vector<String>>& value) {
  member_types_ = value;
has_types_ = true;
}

void ReportingObserverOptions::setTypes(absl::optional<Vector<String>>&& value) {
  member_types_ = std::move(value);
has_types_ = true;
}

void ReportingObserverOptions::setTypes(const Vector<String>& value) {
  member_types_ = value;
has_types_ = true;
}

void ReportingObserverOptions::setTypes(Vector<String>&& value) {
  member_types_ = std::move(value);
has_types_ = true;
}



void ReportingObserverOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<bool>::Trace(visitor, member_buffered_);
TraceIfNeeded<absl::optional<Vector<String>>>::Trace(visitor, member_types_);
bindings::DictionaryBase::Trace(visitor);
}

bool ReportingObserverOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasBuffered()) {
  if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_buffered_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasTypes()) {
  if (!ToV8Traits<IDLNullable<IDLSequence<IDLString>>>::ToV8(script_state, member_types_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void ReportingObserverOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "ReportingObserverOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("buffered");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_buffered_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("types");
if (!bindings::GetDictionaryMemberFromV8Object<IDLNullable<IDLSequence<IDLString>>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_types_, member_types_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> ReportingObserverOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"buffered",
"types",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
