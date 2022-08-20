// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_CSSNUMERICVALUE_STRING_UNRESTRICTEDDOUBLE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_CSSNUMERICVALUE_STRING_UNRESTRICTEDDOUBLE_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CSSNumericValue;
class ExceptionState;

class CORE_EXPORT V8UnionCSSNumericValueOrStringOrUnrestrictedDouble final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kCSSNumericValue, kString, kUnrestrictedDouble
};

static V8UnionCSSNumericValueOrStringOrUnrestrictedDouble* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionCSSNumericValueOrStringOrUnrestrictedDouble(CSSNumericValue* value) : content_type_(ContentType::kCSSNumericValue), member_css_numeric_value_(value) {
  DCHECK(value);
}
explicit  V8UnionCSSNumericValueOrStringOrUnrestrictedDouble(const String& value);
explicit  V8UnionCSSNumericValueOrStringOrUnrestrictedDouble(String&& value);
explicit  V8UnionCSSNumericValueOrStringOrUnrestrictedDouble(double value) : content_type_(ContentType::kUnrestrictedDouble), member_unrestricted_double_(value) {
  
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsCSSNumericValue() const {
  return content_type_ == ContentType::kCSSNumericValue;
}
CSSNumericValue* GetAsCSSNumericValue() const {
  DCHECK_EQ(content_type_, ContentType::kCSSNumericValue);
return member_css_numeric_value_;
}
void Set(CSSNumericValue* value) {
  DCHECK(value);
Clear();
member_css_numeric_value_ = value;
content_type_ = ContentType::kCSSNumericValue;
}

bool IsString() const {
  return content_type_ == ContentType::kString;
}
const String& GetAsString() const {
  DCHECK_EQ(content_type_, ContentType::kString);
return member_string_;
}
void Set(const String& value);
void Set(String&& value);

bool IsUnrestrictedDouble() const {
  return content_type_ == ContentType::kUnrestrictedDouble;
}
double GetAsUnrestrictedDouble() const {
  DCHECK_EQ(content_type_, ContentType::kUnrestrictedDouble);
return member_unrestricted_double_;
}
void Set(double value) {
  Clear();
member_unrestricted_double_ = value;
content_type_ = ContentType::kUnrestrictedDouble;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(CSSNumericValue or DOMString or unrestricted double)";
}

ContentType content_type_;

Member<CSSNumericValue> member_css_numeric_value_;
String member_string_;
double member_unrestricted_double_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_CSSNUMERICVALUE_STRING_UNRESTRICTEDDOUBLE_H_
