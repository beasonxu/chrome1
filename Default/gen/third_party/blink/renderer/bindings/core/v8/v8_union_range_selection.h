// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_RANGE_SELECTION_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_RANGE_SELECTION_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class DOMSelection;
class ExceptionState;
class Range;

class CORE_EXPORT V8UnionRangeOrSelection final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kRange, kSelection
};

static V8UnionRangeOrSelection* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionRangeOrSelection(Range* value) : content_type_(ContentType::kRange), member_range_(value) {
  DCHECK(value);
}
explicit  V8UnionRangeOrSelection(DOMSelection* value) : content_type_(ContentType::kSelection), member_selection_(value) {
  DCHECK(value);
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsRange() const {
  return content_type_ == ContentType::kRange;
}
Range* GetAsRange() const {
  DCHECK_EQ(content_type_, ContentType::kRange);
return member_range_;
}
void Set(Range* value) {
  DCHECK(value);
Clear();
member_range_ = value;
content_type_ = ContentType::kRange;
}

bool IsSelection() const {
  return content_type_ == ContentType::kSelection;
}
DOMSelection* GetAsSelection() const {
  DCHECK_EQ(content_type_, ContentType::kSelection);
return member_selection_;
}
void Set(DOMSelection* value) {
  DCHECK(value);
Clear();
member_selection_ = value;
content_type_ = ContentType::kSelection;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(Range or Selection)";
}

ContentType content_type_;

Member<Range> member_range_;
Member<DOMSelection> member_selection_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_RANGE_SELECTION_H_
