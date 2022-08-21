// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPULOADOP_UNSIGNEDLONGENFORCERANGE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPULOADOP_UNSIGNEDLONGENFORCERANGE_H_

#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_load_op.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT V8UnionGPULoadOpOrUnsignedLongEnforceRange final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kGPULoadOp, kUnsignedLongEnforceRange, kV8GPUStencilValue = kUnsignedLongEnforceRange
};

static V8UnionGPULoadOpOrUnsignedLongEnforceRange* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionGPULoadOpOrUnsignedLongEnforceRange(V8GPULoadOp value) : content_type_(ContentType::kGPULoadOp), member_gpu_load_op_(value) {
  
}
explicit  V8UnionGPULoadOpOrUnsignedLongEnforceRange(uint32_t value) : content_type_(ContentType::kUnsignedLongEnforceRange), member_unsigned_long_enforce_range_(value) {
  
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsGPULoadOp() const {
  return content_type_ == ContentType::kGPULoadOp;
}
V8GPULoadOp GetAsGPULoadOp() const {
  DCHECK_EQ(content_type_, ContentType::kGPULoadOp);
return member_gpu_load_op_;
}
void Set(V8GPULoadOp value) {
  Clear();
member_gpu_load_op_ = value;
content_type_ = ContentType::kGPULoadOp;
}

bool IsUnsignedLongEnforceRange() const {
  return content_type_ == ContentType::kUnsignedLongEnforceRange;
}
uint32_t GetAsUnsignedLongEnforceRange() const {
  DCHECK_EQ(content_type_, ContentType::kUnsignedLongEnforceRange);
return member_unsigned_long_enforce_range_;
}
void Set(uint32_t value) {
  Clear();
member_unsigned_long_enforce_range_ = value;
content_type_ = ContentType::kUnsignedLongEnforceRange;
}
bool IsV8GPUStencilValue() const {
  return content_type_ == ContentType::kV8GPUStencilValue;
}
uint32_t GetAsV8GPUStencilValue() const {
  DCHECK_EQ(content_type_, ContentType::kV8GPUStencilValue);
return member_unsigned_long_enforce_range_;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(GPULoadOp or [EnforceRange] unsigned long)";
}

ContentType content_type_;

V8GPULoadOp member_gpu_load_op_{static_cast<V8GPULoadOp::Enum>(0)};
uint32_t member_unsigned_long_enforce_range_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_GPULOADOP_UNSIGNEDLONGENFORCERANGE_H_
