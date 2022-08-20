// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_OBJECT_STRING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_OBJECT_STRING_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT V8UnionObjectOrString final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kObject, kString
};

static V8UnionObjectOrString* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionObjectOrString(const ScriptValue& value) : content_type_(ContentType::kObject), member_object_(value) {
  DCHECK(value.IsObject());
}
explicit  V8UnionObjectOrString(const String& value);
explicit  V8UnionObjectOrString(String&& value);

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsObject() const {
  return content_type_ == ContentType::kObject;
}
const ScriptValue& GetAsObject() const {
  DCHECK_EQ(content_type_, ContentType::kObject);
return member_object_;
}
void Set(const ScriptValue& value) {
  DCHECK(value.IsObject());
Clear();
member_object_ = value;
content_type_ = ContentType::kObject;
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


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(DOMString or object)";
}

ContentType content_type_;

ScriptValue member_object_;
String member_string_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_OBJECT_STRING_H_
