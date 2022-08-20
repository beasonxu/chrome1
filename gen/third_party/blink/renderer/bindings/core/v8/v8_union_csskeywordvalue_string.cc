// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_csskeywordvalue_string.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyword_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_keyword_value.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionCSSKeywordValueOrString* V8UnionCSSKeywordValueOrString::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8CSSKeywordValue::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8CSSKeywordValue::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionCSSKeywordValueOrString>(blink_value);
}
{
  auto&& blink_value = NativeValueTraits<IDLString>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionCSSKeywordValueOrString>(std::move(blink_value));
}
}

 V8UnionCSSKeywordValueOrString::V8UnionCSSKeywordValueOrString(const String& value) : content_type_(ContentType::kString), member_string_(value) {
  
}

 V8UnionCSSKeywordValueOrString::V8UnionCSSKeywordValueOrString(String&& value) : content_type_(ContentType::kString), member_string_(std::move(value)) {
  
}







void V8UnionCSSKeywordValueOrString::Set(const String& value) {
  Clear();
member_string_ = value;
content_type_ = ContentType::kString;
}

void V8UnionCSSKeywordValueOrString::Set(String&& value) {
  Clear();
member_string_ = std::move(value);
content_type_ = ContentType::kString;
}


v8::MaybeLocal<v8::Value> V8UnionCSSKeywordValueOrString::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kCSSKeywordValue: {
    return ToV8Traits<CSSKeywordValue>::ToV8(script_state, member_css_keyword_value_);
  }
  case ContentType::kString: {
    return ToV8Traits<IDLString>::ToV8(script_state, member_string_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionCSSKeywordValueOrString::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<CSSKeywordValue>>::Trace(visitor, member_css_keyword_value_);
TraceIfNeeded<String>::Trace(visitor, member_string_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionCSSKeywordValueOrString::Clear() {
  member_css_keyword_value_.Clear();
member_string_ = String();
}



}  // namespace blink
