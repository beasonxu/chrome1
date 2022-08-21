// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_ice_error_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



RTCPeerConnectionIceErrorEventInit* RTCPeerConnectionIceErrorEventInit::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  RTCPeerConnectionIceErrorEventInit* dictionary = MakeGarbageCollected<RTCPeerConnectionIceErrorEventInit>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "RTCPeerConnectionIceErrorEventInit";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 RTCPeerConnectionIceErrorEventInit::RTCPeerConnectionIceErrorEventInit() {
  
}

 RTCPeerConnectionIceErrorEventInit::RTCPeerConnectionIceErrorEventInit(v8::Isolate* isolate) : EventInit(isolate) {
  
}



String RTCPeerConnectionIceErrorEventInit::getAddressOr(const String& fallback_value) const {
  if (!hasAddress()) {
  return fallback_value;
}
return member_address_;
}

String RTCPeerConnectionIceErrorEventInit::getAddressOr(String&& fallback_value) const {
  if (!hasAddress()) {
  return std::move(fallback_value);
}
return member_address_;
}

void RTCPeerConnectionIceErrorEventInit::setAddress(const String& value) {
  member_address_ = value;
has_address_ = true;
}

void RTCPeerConnectionIceErrorEventInit::setAddress(String&& value) {
  member_address_ = std::move(value);
has_address_ = true;
}









String RTCPeerConnectionIceErrorEventInit::getErrorTextOr(const String& fallback_value) const {
  if (!hasErrorText()) {
  return fallback_value;
}
return member_error_text_;
}

String RTCPeerConnectionIceErrorEventInit::getErrorTextOr(String&& fallback_value) const {
  if (!hasErrorText()) {
  return std::move(fallback_value);
}
return member_error_text_;
}

void RTCPeerConnectionIceErrorEventInit::setErrorText(const String& value) {
  member_error_text_ = value;
has_error_text_ = true;
}

void RTCPeerConnectionIceErrorEventInit::setErrorText(String&& value) {
  member_error_text_ = std::move(value);
has_error_text_ = true;
}




String RTCPeerConnectionIceErrorEventInit::getHostCandidateOr(const String& fallback_value) const {
  if (!hasHostCandidate()) {
  return fallback_value;
}
return member_host_candidate_;
}

String RTCPeerConnectionIceErrorEventInit::getHostCandidateOr(String&& fallback_value) const {
  if (!hasHostCandidate()) {
  return std::move(fallback_value);
}
return member_host_candidate_;
}

void RTCPeerConnectionIceErrorEventInit::setHostCandidate(const String& value) {
  member_host_candidate_ = value;
has_host_candidate_ = true;
}

void RTCPeerConnectionIceErrorEventInit::setHostCandidate(String&& value) {
  member_host_candidate_ = std::move(value);
has_host_candidate_ = true;
}











String RTCPeerConnectionIceErrorEventInit::getUrlOr(const String& fallback_value) const {
  if (!hasUrl()) {
  return fallback_value;
}
return member_url_;
}

String RTCPeerConnectionIceErrorEventInit::getUrlOr(String&& fallback_value) const {
  if (!hasUrl()) {
  return std::move(fallback_value);
}
return member_url_;
}

void RTCPeerConnectionIceErrorEventInit::setUrl(const String& value) {
  member_url_ = value;
has_url_ = true;
}

void RTCPeerConnectionIceErrorEventInit::setUrl(String&& value) {
  member_url_ = std::move(value);
has_url_ = true;
}




void RTCPeerConnectionIceErrorEventInit::Trace(Visitor* visitor) const {
  TraceIfNeeded<String>::Trace(visitor, member_address_);
TraceIfNeeded<uint16_t>::Trace(visitor, member_error_code_);
TraceIfNeeded<String>::Trace(visitor, member_error_text_);
TraceIfNeeded<String>::Trace(visitor, member_host_candidate_);
TraceIfNeeded<absl::optional<uint16_t>>::Trace(visitor, member_port_);
TraceIfNeeded<String>::Trace(visitor, member_url_);
EventInit::Trace(visitor);
}

bool RTCPeerConnectionIceErrorEventInit::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!EventInit::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasAddress()) {
  if (!ToV8Traits<IDLNullable<IDLString>>::ToV8(script_state, member_address_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasErrorCode()) {
  if (!ToV8Traits<IDLUnsignedShort>::ToV8(script_state, member_error_code_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasErrorText()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_error_text_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasHostCandidate()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_host_candidate_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPort()) {
  if (!ToV8Traits<IDLNullable<IDLUnsignedShort>>::ToV8(script_state, member_port_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasUrl()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_url_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void RTCPeerConnectionIceErrorEventInit::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  EventInit::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "RTCPeerConnectionIceErrorEventInit";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("address");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLNullable<IDLString>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_address_, member_address_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("errorCode");
constexpr bool is_required = true;
bool fallback_presence_var;
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedShort, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_error_code_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("errorText");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_error_text_, member_error_text_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("hostCandidate");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_host_candidate_, member_host_candidate_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("port");
if (!bindings::GetDictionaryMemberFromV8Object<IDLNullable<IDLUnsignedShort>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_port_, member_port_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("url");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_url_, member_url_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> RTCPeerConnectionIceErrorEventInit::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"address",
"errorCode",
"errorText",
"hostCandidate",
"port",
"url",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
