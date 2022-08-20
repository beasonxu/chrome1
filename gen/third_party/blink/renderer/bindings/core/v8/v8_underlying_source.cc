// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_underlying_source.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_underlying_source_cancel_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_underlying_source_pull_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_underlying_source_start_callback.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



UnderlyingSource* UnderlyingSource::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  UnderlyingSource* dictionary = MakeGarbageCollected<UnderlyingSource>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "UnderlyingSource";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 UnderlyingSource::UnderlyingSource() {
  
}

 UnderlyingSource::UnderlyingSource(v8::Isolate* isolate) {
  
}






































void UnderlyingSource::Trace(Visitor* visitor) const {
  TraceIfNeeded<uint64_t>::Trace(visitor, member_auto_allocate_chunk_size_);
TraceIfNeeded<Member<V8UnderlyingSourceCancelCallback>>::Trace(visitor, member_cancel_);
TraceIfNeeded<Member<V8UnderlyingSourcePullCallback>>::Trace(visitor, member_pull_);
TraceIfNeeded<Member<V8UnderlyingSourceStartCallback>>::Trace(visitor, member_start_);
TraceIfNeeded<V8ReadableStreamType>::Trace(visitor, member_type_);
bindings::DictionaryBase::Trace(visitor);
}

bool UnderlyingSource::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasAutoAllocateChunkSize()) {
  if (!ToV8Traits<IDLUnsignedLongLongEnforceRange>::ToV8(script_state, member_auto_allocate_chunk_size_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasCancel()) {
  if (!ToV8Traits<V8UnderlyingSourceCancelCallback>::ToV8(script_state, member_cancel_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPull()) {
  if (!ToV8Traits<V8UnderlyingSourcePullCallback>::ToV8(script_state, member_pull_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasStart()) {
  if (!ToV8Traits<V8UnderlyingSourceStartCallback>::ToV8(script_state, member_start_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasType()) {
  if (!ToV8Traits<V8ReadableStreamType>::ToV8(script_state, member_type_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void UnderlyingSource::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "UnderlyingSource";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("autoAllocateChunkSize");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_auto_allocate_chunk_size_, member_auto_allocate_chunk_size_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("cancel");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnderlyingSourceCancelCallback, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_cancel_, member_cancel_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("pull");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnderlyingSourcePullCallback, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_pull_, member_pull_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("start");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnderlyingSourceStartCallback, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_start_, member_start_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("type");
if (!bindings::GetDictionaryMemberFromV8Object<V8ReadableStreamType, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_type_, member_type_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> UnderlyingSource::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"autoAllocateChunkSize",
"cancel",
"pull",
"start",
"type",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
