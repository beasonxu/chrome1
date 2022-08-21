// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_media_decoding_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_key_system_configuration.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



MediaDecodingConfiguration* MediaDecodingConfiguration::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  MediaDecodingConfiguration* dictionary = MakeGarbageCollected<MediaDecodingConfiguration>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "MediaDecodingConfiguration";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 MediaDecodingConfiguration::MediaDecodingConfiguration() {
  
}

 MediaDecodingConfiguration::MediaDecodingConfiguration(v8::Isolate* isolate) : MediaConfiguration(isolate) {
  
}















void MediaDecodingConfiguration::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<MediaCapabilitiesKeySystemConfiguration>>::Trace(visitor, member_key_system_configuration_);
TraceIfNeeded<V8MediaDecodingType>::Trace(visitor, member_type_);
MediaConfiguration::Trace(visitor);
}

bool MediaDecodingConfiguration::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!MediaConfiguration::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasKeySystemConfiguration()) {
  if (!ToV8Traits<MediaCapabilitiesKeySystemConfiguration>::ToV8(script_state, member_key_system_configuration_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasType()) {
  if (!ToV8Traits<V8MediaDecodingType>::ToV8(script_state, member_type_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void MediaDecodingConfiguration::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  MediaConfiguration::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "MediaDecodingConfiguration";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("keySystemConfiguration");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<MediaCapabilitiesKeySystemConfiguration, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_key_system_configuration_, member_key_system_configuration_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("type");
constexpr bool is_required = true;
bool fallback_presence_var;
if (!bindings::GetDictionaryMemberFromV8Object<V8MediaDecodingType, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_type_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> MediaDecodingConfiguration::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"keySystemConfiguration",
"type",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
