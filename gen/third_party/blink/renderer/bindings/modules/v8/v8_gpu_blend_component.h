// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_BLEND_COMPONENT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_BLEND_COMPONENT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_blend_factor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_blend_operation.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT GPUBlendComponent : public bindings::DictionaryBase {
  
  public:
static GPUBlendComponent* Create() {
  return MakeGarbageCollected<GPUBlendComponent>();
}
static GPUBlendComponent* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<GPUBlendComponent>(isolate);
}
static GPUBlendComponent* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  GPUBlendComponent();
explicit  GPUBlendComponent(v8::Isolate* isolate);

bool hasDstFactor() const {
  return true;
}
V8GPUBlendFactor dstFactor() const {
  return member_dst_factor_;
}
void setDstFactor(V8GPUBlendFactor value) {
  member_dst_factor_ = value;
}
void setDstFactor(V8GPUBlendFactor::Enum value) {
  member_dst_factor_ = V8GPUBlendFactor(value);
}

bool hasOperation() const {
  return true;
}
V8GPUBlendOperation operation() const {
  return member_operation_;
}
void setOperation(V8GPUBlendOperation value) {
  member_operation_ = value;
}
void setOperation(V8GPUBlendOperation::Enum value) {
  member_operation_ = V8GPUBlendOperation(value);
}

bool hasSrcFactor() const {
  return true;
}
V8GPUBlendFactor srcFactor() const {
  return member_src_factor_;
}
void setSrcFactor(V8GPUBlendFactor value) {
  member_src_factor_ = value;
}
void setSrcFactor(V8GPUBlendFactor::Enum value) {
  member_src_factor_ = V8GPUBlendFactor(value);
}


// Obsolete accessor functions
void setDstFactor(const String& value) {
  member_dst_factor_ = V8GPUBlendFactor::Create(value).value();
}
void setOperation(const String& value) {
  member_operation_ = V8GPUBlendOperation::Create(value).value();
}
void setSrcFactor(const String& value) {
  member_src_factor_ = V8GPUBlendFactor::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



V8GPUBlendFactor member_dst_factor_{V8GPUBlendFactor::Enum::kZero};
V8GPUBlendOperation member_operation_{V8GPUBlendOperation::Enum::kAdd};
V8GPUBlendFactor member_src_factor_{V8GPUBlendFactor::Enum::kOne};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_BLEND_COMPONENT_H_
