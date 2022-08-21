// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPUEXTENT_3_DDICT_UNSIGNEDLONGENFORCERANGESEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPUEXTENT_3_DDICT_UNSIGNEDLONGENFORCERANGESEQUENCE_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class GPUExtent3DDict;

class MODULES_EXPORT V8UnionGPUExtent3DDictOrUnsignedLongEnforceRangeSequence final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kGPUExtent3DDict, kUnsignedLongEnforceRangeSequence
};

static V8UnionGPUExtent3DDictOrUnsignedLongEnforceRangeSequence* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionGPUExtent3DDictOrUnsignedLongEnforceRangeSequence(GPUExtent3DDict* value) : content_type_(ContentType::kGPUExtent3DDict), member_gpu_extent_3d_dict_(value) {
  DCHECK(value);
}
explicit  V8UnionGPUExtent3DDictOrUnsignedLongEnforceRangeSequence(const Vector<uint32_t>& value);
explicit  V8UnionGPUExtent3DDictOrUnsignedLongEnforceRangeSequence(Vector<uint32_t>&& value);

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsGPUExtent3DDict() const {
  return content_type_ == ContentType::kGPUExtent3DDict;
}
GPUExtent3DDict* GetAsGPUExtent3DDict() const {
  DCHECK_EQ(content_type_, ContentType::kGPUExtent3DDict);
return member_gpu_extent_3d_dict_;
}
void Set(GPUExtent3DDict* value) {
  DCHECK(value);
Clear();
member_gpu_extent_3d_dict_ = value;
content_type_ = ContentType::kGPUExtent3DDict;
}

bool IsUnsignedLongEnforceRangeSequence() const {
  return content_type_ == ContentType::kUnsignedLongEnforceRangeSequence;
}
const Vector<uint32_t>& GetAsUnsignedLongEnforceRangeSequence() const {
  DCHECK_EQ(content_type_, ContentType::kUnsignedLongEnforceRangeSequence);
return member_unsigned_long_enforce_range_sequence_;
}
void Set(const Vector<uint32_t>& value);
void Set(Vector<uint32_t>&& value);


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(GPUExtent3DDict or sequence<GPUIntegerCoordinate>)";
}

ContentType content_type_;

Member<GPUExtent3DDict> member_gpu_extent_3d_dict_;
Vector<uint32_t> member_unsigned_long_enforce_range_sequence_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPUEXTENT_3_DDICT_UNSIGNEDLONGENFORCERANGESEQUENCE_H_
