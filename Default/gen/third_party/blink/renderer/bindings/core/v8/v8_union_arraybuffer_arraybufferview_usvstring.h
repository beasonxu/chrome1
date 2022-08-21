// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_ARRAYBUFFER_ARRAYBUFFERVIEW_USVSTRING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_ARRAYBUFFER_ARRAYBUFFERVIEW_USVSTRING_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class V8UnionArrayBufferOrArrayBufferView;

class CORE_EXPORT V8UnionArrayBufferOrArrayBufferViewOrUSVString final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kArrayBuffer, kArrayBufferView, kUSVString
};

static V8UnionArrayBufferOrArrayBufferViewOrUSVString* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionArrayBufferOrArrayBufferViewOrUSVString(DOMArrayBuffer* value) : content_type_(ContentType::kArrayBuffer), member_array_buffer_(value) {
  DCHECK(value);
}
explicit  V8UnionArrayBufferOrArrayBufferViewOrUSVString(NotShared<DOMArrayBufferView> value) : content_type_(ContentType::kArrayBufferView), member_array_buffer_view_(value) {
  DCHECK(value);
}
explicit  V8UnionArrayBufferOrArrayBufferViewOrUSVString(const String& value);
explicit  V8UnionArrayBufferOrArrayBufferViewOrUSVString(String&& value);

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsArrayBuffer() const {
  return content_type_ == ContentType::kArrayBuffer;
}
DOMArrayBuffer* GetAsArrayBuffer() const {
  DCHECK_EQ(content_type_, ContentType::kArrayBuffer);
return member_array_buffer_;
}
void Set(DOMArrayBuffer* value) {
  DCHECK(value);
Clear();
member_array_buffer_ = value;
content_type_ = ContentType::kArrayBuffer;
}

bool IsArrayBufferView() const {
  return content_type_ == ContentType::kArrayBufferView;
}
NotShared<DOMArrayBufferView> GetAsArrayBufferView() const {
  DCHECK_EQ(content_type_, ContentType::kArrayBufferView);
return member_array_buffer_view_;
}
void Set(NotShared<DOMArrayBufferView> value) {
  DCHECK(value);
Clear();
member_array_buffer_view_ = value;
content_type_ = ContentType::kArrayBufferView;
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

bool IsV8UnionArrayBufferOrArrayBufferView() const {
  return content_type_ == ContentType::kArrayBuffer || content_type_ == ContentType::kArrayBufferView;
}
V8UnionArrayBufferOrArrayBufferView* GetAsV8UnionArrayBufferOrArrayBufferView() const;
void Set(const V8UnionArrayBufferOrArrayBufferView* value);
bool IsV8BufferSource() const {
  return IsV8UnionArrayBufferOrArrayBufferView();
}
V8UnionArrayBufferOrArrayBufferView* GetAsV8BufferSource() const {
  return GetAsV8UnionArrayBufferOrArrayBufferView();
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(ArrayBuffer or ArrayBufferView or USVString)";
}

ContentType content_type_;

Member<DOMArrayBuffer> member_array_buffer_;
NotShared<DOMArrayBufferView> member_array_buffer_view_;
String member_usv_string_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNION_ARRAYBUFFER_ARRAYBUFFERVIEW_USVSTRING_H_
