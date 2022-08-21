// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_ad_properties.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



AdProperties* AdProperties::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  AdProperties* dictionary = MakeGarbageCollected<AdProperties>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "AdProperties";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 AdProperties::AdProperties() {
  
}

 AdProperties::AdProperties(v8::Isolate* isolate) {
  
}



String AdProperties::getAdtypeOr(const String& fallback_value) const {
  if (!hasAdtype()) {
  return fallback_value;
}
return member_adtype_;
}

String AdProperties::getAdtypeOr(String&& fallback_value) const {
  if (!hasAdtype()) {
  return std::move(fallback_value);
}
return member_adtype_;
}

void AdProperties::setAdtype(const String& value) {
  member_adtype_ = value;
has_adtype_ = true;
}

void AdProperties::setAdtype(String&& value) {
  member_adtype_ = std::move(value);
has_adtype_ = true;
}











String AdProperties::getHeightOr(const String& fallback_value) const {
  if (!hasHeight()) {
  return fallback_value;
}
return member_height_;
}

String AdProperties::getHeightOr(String&& fallback_value) const {
  if (!hasHeight()) {
  return std::move(fallback_value);
}
return member_height_;
}

void AdProperties::setHeight(const String& value) {
  member_height_ = value;
has_height_ = true;
}

void AdProperties::setHeight(String&& value) {
  member_height_ = std::move(value);
has_height_ = true;
}




String AdProperties::getLangOr(const String& fallback_value) const {
  if (!hasLang()) {
  return fallback_value;
}
return member_lang_;
}

String AdProperties::getLangOr(String&& fallback_value) const {
  if (!hasLang()) {
  return std::move(fallback_value);
}
return member_lang_;
}

void AdProperties::setLang(const String& value) {
  member_lang_ = value;
has_lang_ = true;
}

void AdProperties::setLang(String&& value) {
  member_lang_ = std::move(value);
has_lang_ = true;
}




String AdProperties::getSlotOr(const String& fallback_value) const {
  if (!hasSlot()) {
  return fallback_value;
}
return member_slot_;
}

String AdProperties::getSlotOr(String&& fallback_value) const {
  if (!hasSlot()) {
  return std::move(fallback_value);
}
return member_slot_;
}

void AdProperties::setSlot(const String& value) {
  member_slot_ = value;
has_slot_ = true;
}

void AdProperties::setSlot(String&& value) {
  member_slot_ = std::move(value);
has_slot_ = true;
}




String AdProperties::getWidthOr(const String& fallback_value) const {
  if (!hasWidth()) {
  return fallback_value;
}
return member_width_;
}

String AdProperties::getWidthOr(String&& fallback_value) const {
  if (!hasWidth()) {
  return std::move(fallback_value);
}
return member_width_;
}

void AdProperties::setWidth(const String& value) {
  member_width_ = value;
has_width_ = true;
}

void AdProperties::setWidth(String&& value) {
  member_width_ = std::move(value);
has_width_ = true;
}




void AdProperties::Trace(Visitor* visitor) const {
  TraceIfNeeded<String>::Trace(visitor, member_adtype_);
TraceIfNeeded<double>::Trace(visitor, member_bid_floor_);
TraceIfNeeded<String>::Trace(visitor, member_height_);
TraceIfNeeded<String>::Trace(visitor, member_lang_);
TraceIfNeeded<String>::Trace(visitor, member_slot_);
TraceIfNeeded<String>::Trace(visitor, member_width_);
bindings::DictionaryBase::Trace(visitor);
}

bool AdProperties::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasAdtype()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_adtype_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasBidFloor()) {
  if (!ToV8Traits<IDLDouble>::ToV8(script_state, member_bid_floor_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasHeight()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_height_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasLang()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_lang_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSlot()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_slot_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasWidth()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_width_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void AdProperties::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "AdProperties";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("adtype");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_adtype_, member_adtype_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("bidFloor");
if (!bindings::GetDictionaryMemberFromV8Object<IDLDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_bid_floor_, member_bid_floor_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("height");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_height_, member_height_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("lang");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_lang_, member_lang_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("slot");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_slot_, member_slot_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("width");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_width_, member_width_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> AdProperties::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"adtype",
"bidFloor",
"height",
"lang",
"slot",
"width",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
