// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_USVSTRING_USVSTRINGSEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_USVSTRING_USVSTRINGSEQUENCE_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT V8UnionUSVStringOrUSVStringSequence final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kUSVString, kUSVStringSequence
};

static V8UnionUSVStringOrUSVStringSequence* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionUSVStringOrUSVStringSequence(const String& value);
explicit  V8UnionUSVStringOrUSVStringSequence(String&& value);
explicit  V8UnionUSVStringOrUSVStringSequence(const Vector<String>& value);
explicit  V8UnionUSVStringOrUSVStringSequence(Vector<String>&& value);

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsUSVString() const {
  return content_type_ == ContentType::kUSVString;
}
const String& GetAsUSVString() const {
  DCHECK_EQ(content_type_, ContentType::kUSVString);
return member_usv_string_;
}
void Set(const String& value);
void Set(String&& value);

bool IsUSVStringSequence() const {
  return content_type_ == ContentType::kUSVStringSequence;
}
const Vector<String>& GetAsUSVStringSequence() const {
  DCHECK_EQ(content_type_, ContentType::kUSVStringSequence);
return member_usv_string_sequence_;
}
void Set(const Vector<String>& value);
void Set(Vector<String>&& value);


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(USVString or sequence<USVString>)";
}

ContentType content_type_;

String member_usv_string_;
Vector<String> member_usv_string_sequence_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_USVSTRING_USVSTRINGSEQUENCE_H_
