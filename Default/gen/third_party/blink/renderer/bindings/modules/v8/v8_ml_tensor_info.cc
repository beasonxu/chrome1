// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_ml_tensor_info.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



MLTensorInfo* MLTensorInfo::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  MLTensorInfo* dictionary = MakeGarbageCollected<MLTensorInfo>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "MLTensorInfo";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 MLTensorInfo::MLTensorInfo() {
  
}

 MLTensorInfo::MLTensorInfo(v8::Isolate* isolate) {
  
}



void MLTensorInfo::setDimensions(const Vector<uint32_t>& value) {
  member_dimensions_ = value;
}

void MLTensorInfo::setDimensions(Vector<uint32_t>&& value) {
  member_dimensions_ = std::move(value);
}




void MLTensorInfo::setName(const String& value) {
  member_name_ = value;
}

void MLTensorInfo::setName(String&& value) {
  member_name_ = std::move(value);
}









void MLTensorInfo::Trace(Visitor* visitor) const {
  TraceIfNeeded<Vector<uint32_t>>::Trace(visitor, member_dimensions_);
TraceIfNeeded<String>::Trace(visitor, member_name_);
TraceIfNeeded<V8MLDataType>::Trace(visitor, member_type_);
bindings::DictionaryBase::Trace(visitor);
}

bool MLTensorInfo::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasDimensions()) {
  if (!ToV8Traits<IDLSequence<IDLUnsignedLong>>::ToV8(script_state, member_dimensions_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasName()) {
  if (!ToV8Traits<IDLString>::ToV8(script_state, member_name_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasType()) {
  if (!ToV8Traits<V8MLDataType>::ToV8(script_state, member_type_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void MLTensorInfo::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "MLTensorInfo";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("dimensions");
constexpr bool is_required = true;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLUnsignedLong>, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_dimensions_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("name");
if (!bindings::GetDictionaryMemberFromV8Object<IDLString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), fallback_presence_var, member_name_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("type");
if (!bindings::GetDictionaryMemberFromV8Object<V8MLDataType, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_type_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> MLTensorInfo::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"dimensions",
"name",
"type",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
