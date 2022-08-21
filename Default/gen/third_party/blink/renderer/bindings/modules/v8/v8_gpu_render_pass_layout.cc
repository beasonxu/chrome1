// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_layout.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



GPURenderPassLayout* GPURenderPassLayout::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  GPURenderPassLayout* dictionary = MakeGarbageCollected<GPURenderPassLayout>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "GPURenderPassLayout";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 GPURenderPassLayout::GPURenderPassLayout() {
  
}

 GPURenderPassLayout::GPURenderPassLayout(v8::Isolate* isolate) : GPUObjectDescriptorBase(isolate) {
  
}



void GPURenderPassLayout::setColorFormats(const Vector<absl::optional<V8GPUTextureFormat>>& value) {
  member_color_formats_ = value;
}

void GPURenderPassLayout::setColorFormats(Vector<absl::optional<V8GPUTextureFormat>>&& value) {
  member_color_formats_ = std::move(value);
}
















void GPURenderPassLayout::Trace(Visitor* visitor) const {
  TraceIfNeeded<Vector<absl::optional<V8GPUTextureFormat>>>::Trace(visitor, member_color_formats_);
TraceIfNeeded<V8GPUTextureFormat>::Trace(visitor, member_depth_stencil_format_);
TraceIfNeeded<uint32_t>::Trace(visitor, member_sample_count_);
GPUObjectDescriptorBase::Trace(visitor);
}

bool GPURenderPassLayout::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  if (!GPUObjectDescriptorBase::FillV8ObjectWithMembers(script_state, v8_dictionary)) {
  return false;
}

v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasColorFormats()) {
  if (!ToV8Traits<IDLSequence<IDLNullable<V8GPUTextureFormat>>>::ToV8(script_state, member_color_formats_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDepthStencilFormat()) {
  if (!ToV8Traits<V8GPUTextureFormat>::ToV8(script_state, member_depth_stencil_format_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSampleCount()) {
  if (!ToV8Traits<IDLUnsignedLongEnforceRange>::ToV8(script_state, member_sample_count_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void GPURenderPassLayout::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  GPUObjectDescriptorBase::FillMembersFromV8Object(isolate, v8_dictionary, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

const char* const class_like_name = "GPURenderPassLayout";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("colorFormats");
constexpr bool is_required = true;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLNullable<V8GPUTextureFormat>>, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_color_formats_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("depthStencilFormat");
constexpr bool is_optional = false;
if (!bindings::GetDictionaryMemberFromV8Object<V8GPUTextureFormat, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_depth_stencil_format_, member_depth_stencil_format_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("sampleCount");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUnsignedLongEnforceRange, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), fallback_presence_var, member_sample_count_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> GPURenderPassLayout::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"colorFormats",
"depthStencilFormat",
"sampleCount",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
