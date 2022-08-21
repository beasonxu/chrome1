// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_encoded_audio_frame_metadata.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



RTCEncodedAudioFrameMetadata* RTCEncodedAudioFrameMetadata::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  RTCEncodedAudioFrameMetadata* dictionary = MakeGarbageCollected<RTCEncodedAudioFrameMetadata>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "RTCEncodedAudioFrameMetadata";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata() {
  
}

 RTCEncodedAudioFrameMetadata::RTCEncodedAudioFrameMetadata(v8::Isolate* isolate) {
  
}



Vector<uint32_t> RTCEncodedAudioFrameMetadata::getContributingSourcesOr(const Vector<uint32_t>& fallback_value) const {
  if (!hasContributingSources()) {
  return fallback_value;
}
return member_contributing_sources_;
}

Vector<uint32_t> RTCEncodedAudioFrameMetadata::getContributingSourcesOr(Vector<uint32_t>&& fallback_value) const {
  if (!hasContributingSources()) {
  return std::move(fallback_value);
}
return member_contributing_sources_;
}

void RTCEncodedAudioFrameMetadata::setContributingSources(const Vector<uint32_t>& value) {
  member_contributing_sources_ = value;
has_contributing_sources_ = true;
}

void RTCEncodedAudioFrameMetadata::setContributingSources(Vector<uint32_t>&& value) {
  member_contributing_sources_ = std::move(value);
has_contributing_sources_ = true;
}


















void RTCEncodedAudioFrameMetadata::Trace(Visitor* visitor) const {
  TraceIfNeeded<Vector<uint32_t>>::Trace(visitor, member_contributing_sources_);
TraceIfNeeded<int16_t>::Trace(visitor, member_payload_type_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_synchronization_source_);
bindings::DictionaryBase::Trace(visitor);
}

bool RTCEncodedAudioFrameMetadata::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasContributingSources()) {
  if (!ToV8Traits<IDLSequence<IDLUnsignedLong>>::ToV8(script_state, member_contributing_sources_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPayloadType()) {
  if (!ToV8Traits<IDLShort>::ToV8(script_state, member_payload_type_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSynchronizationSource()) {
  if (!ToV8Traits<IDLUnsignedLong>::ToV8(script_state, member_synchronization_source_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void RTCEncodedAudioFrameMetadata::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "RTCEncodedAudioFrameMetadata";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("contributingSources");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLUnsignedLong>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_contributing_sources_, member_contributing_sources_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("payloadType");
if (!bindings::GetDictionaryMemberFromV8Object<IDLShort, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_payload_type_, member_payload_type_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("synchronizationSource");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_synchronization_source_, member_synchronization_source_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> RTCEncodedAudioFrameMetadata::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"contributingSources",
"payloadType",
"synchronizationSource",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
