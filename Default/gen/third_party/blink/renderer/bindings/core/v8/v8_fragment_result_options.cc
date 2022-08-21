// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_fragment_result_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/core/layout/ng/custom/custom_layout_fragment.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



FragmentResultOptions* FragmentResultOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  FragmentResultOptions* dictionary = MakeGarbageCollected<FragmentResultOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "FragmentResultOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 FragmentResultOptions::FragmentResultOptions(v8::Isolate* isolate) : member_data_(isolate, v8::Null(isolate)) {
  
}















void FragmentResultOptions::setChildFragments(const HeapVector<Member<CustomLayoutFragment>>& value) {
  member_child_fragments_ = value;
}

void FragmentResultOptions::setChildFragments(HeapVector<Member<CustomLayoutFragment>>&& value) {
  member_child_fragments_ = std::move(value);
}









void FragmentResultOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<double>::Trace(visitor, member_auto_block_size_);
TraceIfNeeded<double>::Trace(visitor, member_baseline_);
TraceIfNeeded<HeapVector<Member<CustomLayoutFragment>>>::Trace(visitor, member_child_fragments_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_data_);
bindings::DictionaryBase::Trace(visitor);
}

bool FragmentResultOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasAutoBlockSize()) {
  if (!ToV8Traits<IDLDouble>::ToV8(script_state, member_auto_block_size_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasBaseline()) {
  if (!ToV8Traits<IDLDouble>::ToV8(script_state, member_baseline_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasChildFragments()) {
  if (!ToV8Traits<IDLSequence<CustomLayoutFragment>>::ToV8(script_state, member_child_fragments_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasData()) {
  if (!ToV8Traits<IDLAny>::ToV8(script_state, member_data_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void FragmentResultOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "FragmentResultOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("autoBlockSize");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_auto_block_size_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("baseline");
if (!bindings::GetDictionaryMemberFromV8Object<IDLDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_baseline_, member_baseline_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("childFragments");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<CustomLayoutFragment>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_child_fragments_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("data");
if (!bindings::GetDictionaryMemberFromV8Object<IDLAny, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), fallback_presence_var, member_data_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> FragmentResultOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"autoBlockSize",
"baseline",
"childFragments",
"data",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
