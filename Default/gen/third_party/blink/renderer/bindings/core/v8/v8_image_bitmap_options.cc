// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



ImageBitmapOptions* ImageBitmapOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  ImageBitmapOptions* dictionary = MakeGarbageCollected<ImageBitmapOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "ImageBitmapOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 ImageBitmapOptions::ImageBitmapOptions() {
  
}

 ImageBitmapOptions::ImageBitmapOptions(v8::Isolate* isolate) {
  
}





































void ImageBitmapOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<V8ColorSpaceConversion>::Trace(visitor, member_color_space_conversion_);
TraceIfNeeded<V8ImageOrientation>::Trace(visitor, member_image_orientation_);
TraceIfNeeded<V8PremultiplyAlpha>::Trace(visitor, member_premultiply_alpha_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_resize_height_);
TraceIfNeeded<V8ResizeQuality>::Trace(visitor, member_resize_quality_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_resize_width_);
bindings::DictionaryBase::Trace(visitor);
}

bool ImageBitmapOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasColorSpaceConversion()) {
  if (!ToV8Traits<V8ColorSpaceConversion>::ToV8(script_state, member_color_space_conversion_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasImageOrientation()) {
  if (!ToV8Traits<V8ImageOrientation>::ToV8(script_state, member_image_orientation_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPremultiplyAlpha()) {
  if (!ToV8Traits<V8PremultiplyAlpha>::ToV8(script_state, member_premultiply_alpha_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasResizeHeight()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_resize_height_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasResizeQuality()) {
  if (!ToV8Traits<V8ResizeQuality>::ToV8(script_state, member_resize_quality_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasResizeWidth()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_resize_width_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void ImageBitmapOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "ImageBitmapOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("colorSpaceConversion");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<V8ColorSpaceConversion, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_color_space_conversion_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("imageOrientation");
if (!bindings::GetDictionaryMemberFromV8Object<V8ImageOrientation, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_image_orientation_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("premultiplyAlpha");
if (!bindings::GetDictionaryMemberFromV8Object<V8PremultiplyAlpha, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_premultiply_alpha_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("resizeHeight");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_resize_height_, member_resize_height_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("resizeQuality");
if (!bindings::GetDictionaryMemberFromV8Object<V8ResizeQuality, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), fallback_presence_var, member_resize_quality_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("resizeWidth");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_resize_width_, member_resize_width_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> ImageBitmapOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"colorSpaceConversion",
"imageOrientation",
"premultiplyAlpha",
"resizeHeight",
"resizeQuality",
"resizeWidth",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
