// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_ELEMENT_RADIONODELIST_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_ELEMENT_RADIONODELIST_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class Element;
class ExceptionState;
class RadioNodeList;

class CORE_EXPORT V8UnionElementOrRadioNodeList final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kElement, kRadioNodeList
};

static V8UnionElementOrRadioNodeList* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionElementOrRadioNodeList(Element* value) : content_type_(ContentType::kElement), member_element_(value) {
  DCHECK(value);
}
explicit  V8UnionElementOrRadioNodeList(RadioNodeList* value) : content_type_(ContentType::kRadioNodeList), member_radio_node_list_(value) {
  DCHECK(value);
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsElement() const {
  return content_type_ == ContentType::kElement;
}
Element* GetAsElement() const {
  DCHECK_EQ(content_type_, ContentType::kElement);
return member_element_;
}
void Set(Element* value) {
  DCHECK(value);
Clear();
member_element_ = value;
content_type_ = ContentType::kElement;
}

bool IsRadioNodeList() const {
  return content_type_ == ContentType::kRadioNodeList;
}
RadioNodeList* GetAsRadioNodeList() const {
  DCHECK_EQ(content_type_, ContentType::kRadioNodeList);
return member_radio_node_list_;
}
void Set(RadioNodeList* value) {
  DCHECK(value);
Clear();
member_radio_node_list_ = value;
content_type_ = ContentType::kRadioNodeList;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(Element or RadioNodeList)";
}

ContentType content_type_;

Member<Element> member_element_;
Member<RadioNodeList> member_radio_node_list_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_ELEMENT_RADIONODELIST_H_
