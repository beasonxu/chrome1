// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_filter_dictionary.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



CanvasFilterDictionary* CanvasFilterDictionary::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  CanvasFilterDictionary* dictionary = MakeGarbageCollected<CanvasFilterDictionary>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "CanvasFilterDictionary";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 CanvasFilterDictionary::CanvasFilterDictionary() {
  
}

 CanvasFilterDictionary::CanvasFilterDictionary(v8::Isolate* isolate) {
  
}































void CanvasFilterDictionary::Trace(Visitor* visitor) const {
  TraceIfNeeded<ScriptValue>::Trace(visitor, member_blur_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_color_matrix_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_component_transfer_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_convolve_matrix_);
bindings::DictionaryBase::Trace(visitor);
}

bool CanvasFilterDictionary::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasBlur()) {
  if (!ToV8Traits<IDLObject>::ToV8(script_state, member_blur_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasColorMatrix()) {
  if (!ToV8Traits<IDLObject>::ToV8(script_state, member_color_matrix_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasComponentTransfer()) {
  if (!ToV8Traits<IDLObject>::ToV8(script_state, member_component_transfer_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasConvolveMatrix()) {
  if (!ToV8Traits<IDLObject>::ToV8(script_state, member_convolve_matrix_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void CanvasFilterDictionary::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "CanvasFilterDictionary";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("blur");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLObject, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_blur_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("colorMatrix");
if (!bindings::GetDictionaryMemberFromV8Object<IDLObject, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_color_matrix_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("componentTransfer");
if (!bindings::GetDictionaryMemberFromV8Object<IDLObject, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_component_transfer_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("convolveMatrix");
if (!bindings::GetDictionaryMemberFromV8Object<IDLObject, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), fallback_presence_var, member_convolve_matrix_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> CanvasFilterDictionary::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"blur",
"colorMatrix",
"componentTransfer",
"convolveMatrix",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
