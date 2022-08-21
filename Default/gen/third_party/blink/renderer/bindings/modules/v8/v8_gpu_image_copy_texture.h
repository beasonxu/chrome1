// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_IMAGE_COPY_TEXTURE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_IMAGE_COPY_TEXTURE_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_aspect.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class GPUOrigin3DDict;
class GPUTexture;
class V8UnionGPUOrigin3DDictOrUnsignedLongEnforceRangeSequence;

class MODULES_EXPORT GPUImageCopyTexture : public bindings::DictionaryBase {
  
  public:
static GPUImageCopyTexture* Create() {
  return MakeGarbageCollected<GPUImageCopyTexture>();
}
static GPUImageCopyTexture* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<GPUImageCopyTexture>(isolate);
}
static GPUImageCopyTexture* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  GPUImageCopyTexture();
explicit  GPUImageCopyTexture(v8::Isolate* isolate);

bool hasAspect() const {
  return true;
}
V8GPUTextureAspect aspect() const {
  return member_aspect_;
}
void setAspect(V8GPUTextureAspect value) {
  member_aspect_ = value;
}
void setAspect(V8GPUTextureAspect::Enum value) {
  member_aspect_ = V8GPUTextureAspect(value);
}

bool hasMipLevel() const {
  return true;
}
uint32_t mipLevel() const {
  return member_mip_level_;
}
void setMipLevel(uint32_t value) {
  member_mip_level_ = value;
}

bool hasOrigin() const {
  return true;
}
V8UnionGPUOrigin3DDictOrUnsignedLongEnforceRangeSequence* origin() const {
  return member_origin_;
}
void setOrigin(V8UnionGPUOrigin3DDictOrUnsignedLongEnforceRangeSequence* value) {
  member_origin_ = value;
DCHECK(member_origin_);
}

bool hasTexture() const {
  return true;
}
GPUTexture* texture() const {
  return member_texture_;
}
void setTexture(GPUTexture* value) {
  member_texture_ = value;
DCHECK(member_texture_);
}


// Obsolete accessor functions
void setAspect(const String& value) {
  member_aspect_ = V8GPUTextureAspect::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



V8GPUTextureAspect member_aspect_{V8GPUTextureAspect::Enum::kAll};
uint32_t member_mip_level_{0};
Member<V8UnionGPUOrigin3DDictOrUnsignedLongEnforceRangeSequence> member_origin_;
Member<GPUTexture> member_texture_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_IMAGE_COPY_TEXTURE_H_
