// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_capabilities.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_codec_capability.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_header_extension_capability.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



RTCRtpCapabilities* RTCRtpCapabilities::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  RTCRtpCapabilities* dictionary = MakeGarbageCollected<RTCRtpCapabilities>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "RTCRtpCapabilities";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 RTCRtpCapabilities::RTCRtpCapabilities() {
  
}

 RTCRtpCapabilities::RTCRtpCapabilities(v8::Isolate* isolate) {
  
}



void RTCRtpCapabilities::setCodecs(const HeapVector<Member<RTCRtpCodecCapability>>& value) {
  member_codecs_ = value;
}

void RTCRtpCapabilities::setCodecs(HeapVector<Member<RTCRtpCodecCapability>>&& value) {
  member_codecs_ = std::move(value);
}




void RTCRtpCapabilities::setHeaderExtensions(const HeapVector<Member<RTCRtpHeaderExtensionCapability>>& value) {
  member_header_extensions_ = value;
}

void RTCRtpCapabilities::setHeaderExtensions(HeapVector<Member<RTCRtpHeaderExtensionCapability>>&& value) {
  member_header_extensions_ = std::move(value);
}




void RTCRtpCapabilities::Trace(Visitor* visitor) const {
  TraceIfNeeded<HeapVector<Member<RTCRtpCodecCapability>>>::Trace(visitor, member_codecs_);
TraceIfNeeded<HeapVector<Member<RTCRtpHeaderExtensionCapability>>>::Trace(visitor, member_header_extensions_);
bindings::DictionaryBase::Trace(visitor);
}

bool RTCRtpCapabilities::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasCodecs()) {
  if (!ToV8Traits<IDLSequence<RTCRtpCodecCapability>>::ToV8(script_state, member_codecs_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasHeaderExtensions()) {
  if (!ToV8Traits<IDLSequence<RTCRtpHeaderExtensionCapability>>::ToV8(script_state, member_header_extensions_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void RTCRtpCapabilities::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "RTCRtpCapabilities";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("codecs");
constexpr bool is_required = true;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<RTCRtpCodecCapability>, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_codecs_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("headerExtensions");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<RTCRtpHeaderExtensionCapability>, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_header_extensions_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> RTCRtpCapabilities::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"codecs",
"headerExtensions",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
