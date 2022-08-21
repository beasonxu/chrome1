// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_DOMMATRIX_FLOAT_32_ARRAY_FLOAT_64_ARRAY_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_DOMMATRIX_FLOAT_32_ARRAY_FLOAT_64_ARRAY_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class DOMMatrix;
class ExceptionState;

class CORE_EXPORT V8UnionDOMMatrixOrFloat32ArrayOrFloat64Array final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kDOMMatrix, kFloat32Array, kFloat64Array
};

static V8UnionDOMMatrixOrFloat32ArrayOrFloat64Array* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionDOMMatrixOrFloat32ArrayOrFloat64Array(DOMMatrix* value) : content_type_(ContentType::kDOMMatrix), member_dom_matrix_(value) {
  DCHECK(value);
}
explicit  V8UnionDOMMatrixOrFloat32ArrayOrFloat64Array(NotShared<DOMFloat32Array> value) : content_type_(ContentType::kFloat32Array), member_float32_array_(value) {
  DCHECK(value);
}
explicit  V8UnionDOMMatrixOrFloat32ArrayOrFloat64Array(NotShared<DOMFloat64Array> value) : content_type_(ContentType::kFloat64Array), member_float64_array_(value) {
  DCHECK(value);
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsDOMMatrix() const {
  return content_type_ == ContentType::kDOMMatrix;
}
DOMMatrix* GetAsDOMMatrix() const {
  DCHECK_EQ(content_type_, ContentType::kDOMMatrix);
return member_dom_matrix_;
}
void Set(DOMMatrix* value) {
  DCHECK(value);
Clear();
member_dom_matrix_ = value;
content_type_ = ContentType::kDOMMatrix;
}

bool IsFloat32Array() const {
  return content_type_ == ContentType::kFloat32Array;
}
NotShared<DOMFloat32Array> GetAsFloat32Array() const {
  DCHECK_EQ(content_type_, ContentType::kFloat32Array);
return member_float32_array_;
}
void Set(NotShared<DOMFloat32Array> value) {
  DCHECK(value);
Clear();
member_float32_array_ = value;
content_type_ = ContentType::kFloat32Array;
}

bool IsFloat64Array() const {
  return content_type_ == ContentType::kFloat64Array;
}
NotShared<DOMFloat64Array> GetAsFloat64Array() const {
  DCHECK_EQ(content_type_, ContentType::kFloat64Array);
return member_float64_array_;
}
void Set(NotShared<DOMFloat64Array> value) {
  DCHECK(value);
Clear();
member_float64_array_ = value;
content_type_ = ContentType::kFloat64Array;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(DOMMatrix or Float32Array or Float64Array)";
}

ContentType content_type_;

Member<DOMMatrix> member_dom_matrix_;
NotShared<DOMFloat32Array> member_float32_array_;
NotShared<DOMFloat64Array> member_float64_array_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_DOMMATRIX_FLOAT_32_ARRAY_FLOAT_64_ARRAY_H_
