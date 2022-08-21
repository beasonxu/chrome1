// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_PRIMITIVE_STATE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_PRIMITIVE_STATE_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_cull_mode.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_front_face.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_index_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_primitive_topology.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT GPUPrimitiveState : public bindings::DictionaryBase {
  
  public:
static GPUPrimitiveState* Create() {
  return MakeGarbageCollected<GPUPrimitiveState>();
}
static GPUPrimitiveState* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<GPUPrimitiveState>(isolate);
}
static GPUPrimitiveState* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  GPUPrimitiveState();
explicit  GPUPrimitiveState(v8::Isolate* isolate);

bool hasCullMode() const {
  return true;
}
V8GPUCullMode cullMode() const {
  return member_cull_mode_;
}
void setCullMode(V8GPUCullMode value) {
  member_cull_mode_ = value;
}
void setCullMode(V8GPUCullMode::Enum value) {
  member_cull_mode_ = V8GPUCullMode(value);
}

bool hasFrontFace() const {
  return true;
}
V8GPUFrontFace frontFace() const {
  return member_front_face_;
}
void setFrontFace(V8GPUFrontFace value) {
  member_front_face_ = value;
}
void setFrontFace(V8GPUFrontFace::Enum value) {
  member_front_face_ = V8GPUFrontFace(value);
}

bool hasStripIndexFormat() const {
  return has_strip_index_format_;
}
V8GPUIndexFormat stripIndexFormat() const {
  DCHECK(hasStripIndexFormat());
return member_strip_index_format_;
}
V8GPUIndexFormat getStripIndexFormatOr(V8GPUIndexFormat fallback_value) const {
  if (!hasStripIndexFormat()) {
  return fallback_value;
}
return member_strip_index_format_;
}
void setStripIndexFormat(V8GPUIndexFormat value) {
  member_strip_index_format_ = value;
has_strip_index_format_ = true;
}
void setStripIndexFormat(V8GPUIndexFormat::Enum value) {
  member_strip_index_format_ = V8GPUIndexFormat(value);
has_strip_index_format_ = true;
}

bool hasTopology() const {
  return true;
}
V8GPUPrimitiveTopology topology() const {
  return member_topology_;
}
void setTopology(V8GPUPrimitiveTopology value) {
  member_topology_ = value;
}
void setTopology(V8GPUPrimitiveTopology::Enum value) {
  member_topology_ = V8GPUPrimitiveTopology(value);
}

bool hasUnclippedDepth() const {
  return true;
}
bool unclippedDepth() const {
  return member_unclipped_depth_;
}
void setUnclippedDepth(bool value) {
  member_unclipped_depth_ = value;
}


// Obsolete accessor functions
void setCullMode(const String& value) {
  member_cull_mode_ = V8GPUCullMode::Create(value).value();
}
void setFrontFace(const String& value) {
  member_front_face_ = V8GPUFrontFace::Create(value).value();
}
void setStripIndexFormat(const String& value) {
  member_strip_index_format_ = V8GPUIndexFormat::Create(value).value();
has_strip_index_format_ = true;
}
void setTopology(const String& value) {
  member_topology_ = V8GPUPrimitiveTopology::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_strip_index_format_ = false;

V8GPUCullMode member_cull_mode_{V8GPUCullMode::Enum::kNone};
V8GPUFrontFace member_front_face_{V8GPUFrontFace::Enum::kCcw};
V8GPUIndexFormat member_strip_index_format_{static_cast<V8GPUIndexFormat::Enum>(0)};
V8GPUPrimitiveTopology member_topology_{V8GPUPrimitiveTopology::Enum::kTriangleList};
bool member_unclipped_depth_{false};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_PRIMITIVE_STATE_H_
