// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_CONSTRAINLONGRANGE_LONG_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_CONSTRAINLONGRANGE_LONG_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ConstrainLongRange;
class ExceptionState;

class MODULES_EXPORT V8UnionConstrainLongRangeOrLong final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kConstrainLongRange, kLong
};

static V8UnionConstrainLongRangeOrLong* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionConstrainLongRangeOrLong(ConstrainLongRange* value) : content_type_(ContentType::kConstrainLongRange), member_constrain_long_range_(value) {
  DCHECK(value);
}
explicit  V8UnionConstrainLongRangeOrLong(int32_t value) : content_type_(ContentType::kLong), member_long_(value) {
  
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsConstrainLongRange() const {
  return content_type_ == ContentType::kConstrainLongRange;
}
ConstrainLongRange* GetAsConstrainLongRange() const {
  DCHECK_EQ(content_type_, ContentType::kConstrainLongRange);
return member_constrain_long_range_;
}
void Set(ConstrainLongRange* value) {
  DCHECK(value);
Clear();
member_constrain_long_range_ = value;
content_type_ = ContentType::kConstrainLongRange;
}

bool IsLong() const {
  return content_type_ == ContentType::kLong;
}
int32_t GetAsLong() const {
  DCHECK_EQ(content_type_, ContentType::kLong);
return member_long_;
}
void Set(int32_t value) {
  Clear();
member_long_ = value;
content_type_ = ContentType::kLong;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(ConstrainLongRange or long)";
}

ContentType content_type_;

Member<ConstrainLongRange> member_constrain_long_range_;
int32_t member_long_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_CONSTRAINLONGRANGE_LONG_H_
