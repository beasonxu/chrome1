// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_HTMLELEMENT_LONG_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_HTMLELEMENT_LONG_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class HTMLElement;

class CORE_EXPORT V8UnionHTMLElementOrLong final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kHTMLElement, kLong
};

static V8UnionHTMLElementOrLong* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionHTMLElementOrLong(HTMLElement* value) : content_type_(ContentType::kHTMLElement), member_html_element_(value) {
  DCHECK(value);
}
explicit  V8UnionHTMLElementOrLong(int32_t value) : content_type_(ContentType::kLong), member_long_(value) {
  
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsHTMLElement() const {
  return content_type_ == ContentType::kHTMLElement;
}
HTMLElement* GetAsHTMLElement() const {
  DCHECK_EQ(content_type_, ContentType::kHTMLElement);
return member_html_element_;
}
void Set(HTMLElement* value) {
  DCHECK(value);
Clear();
member_html_element_ = value;
content_type_ = ContentType::kHTMLElement;
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
  return "(HTMLElement or long)";
}

ContentType content_type_;

Member<HTMLElement> member_html_element_;
int32_t member_long_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_HTMLELEMENT_LONG_H_
