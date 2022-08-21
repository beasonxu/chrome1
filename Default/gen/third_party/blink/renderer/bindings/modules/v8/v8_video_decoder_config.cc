// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_video_decoder_config.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_arraybufferallowshared_arraybufferviewallowshared.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_color_space_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



VideoDecoderConfig* VideoDecoderConfig::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  VideoDecoderConfig* dictionary = MakeGarbageCollected<VideoDecoderConfig>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "VideoDecoderConfig";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 VideoDecoderConfig::VideoDecoderConfig() {
  
}

 VideoDecoderConfig::VideoDecoderConfig(v8::Isolate* isolate) {
  
}



void VideoDecoderConfig::setCodec(const String& value) {
  member_codec_ = value;
}

void VideoDecoderConfig::setCodec(String&& value) {
  member_codec_ = std::move(value);
}


























































void VideoDecoderConfig::Trace(Visitor* visitor) const {
  TraceIfNeeded<String>::Trace(visitor, member_codec_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_coded_height_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_coded_width_);
TraceIfNeeded<Member<VideoColorSpaceInit>>::Trace(visitor, member_color_space_);
TraceIfNeeded<Member<V8UnionArrayBufferAllowSharedOrArrayBufferViewAllowShared>>::Trace(visitor, member_description_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_display_aspect_height_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_display_aspect_width_);
TraceIfNeeded<V8HardwarePreference>::Trace(visitor, member_hardware_acceleration_);
TraceIfNeeded<bool>::Trace(visitor, member_optimize_for_latency_);
bindings::DictionaryBase::Trace(visitor);
}

bool VideoDecoderConfig::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasCodec()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_codec_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasCodedHeight()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_coded_height_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasCodedWidth()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_coded_width_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasColorSpace()) {
  if (!ToV8Traits<VideoColorSpaceInit>::ToV8(script_state, member_color_space_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDescription()) {
  if (!ToV8Traits<V8UnionArrayBufferAllowSharedOrArrayBufferViewAllowShared>::ToV8(script_state, member_description_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDisplayAspectHeight()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_display_aspect_height_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDisplayAspectWidth()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_display_aspect_width_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[6].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasHardwareAcceleration()) {
  if (!ToV8Traits<V8HardwarePreference>::ToV8(script_state, member_hardware_acceleration_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[7].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasOptimizeForLatency()) {
  if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_optimize_for_latency_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[8].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void VideoDecoderConfig::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "VideoDecoderConfig";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("codec");
constexpr bool is_required = true;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_codec_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("codedHeight");
constexpr bool is_optional = false;
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_coded_height_, member_coded_height_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("codedWidth");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_coded_width_, member_coded_width_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("colorSpace");
if (!bindings::GetDictionaryMemberFromV8Object<VideoColorSpaceInit, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_color_space_, member_color_space_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("description");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionArrayBufferAllowSharedOrArrayBufferViewAllowShared, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_description_, member_description_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("displayAspectHeight");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_display_aspect_height_, member_display_aspect_height_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("displayAspectWidth");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[6].Get(isolate), has_display_aspect_width_, member_display_aspect_width_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("hardwareAcceleration");
if (!bindings::GetDictionaryMemberFromV8Object<V8HardwarePreference, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[7].Get(isolate), fallback_presence_var, member_hardware_acceleration_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("optimizeForLatency");
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[8].Get(isolate), has_optimize_for_latency_, member_optimize_for_latency_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> VideoDecoderConfig::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"codec",
"codedHeight",
"codedWidth",
"colorSpace",
"description",
"displayAspectHeight",
"displayAspectWidth",
"hardwareAcceleration",
"optimizeForLatency",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
