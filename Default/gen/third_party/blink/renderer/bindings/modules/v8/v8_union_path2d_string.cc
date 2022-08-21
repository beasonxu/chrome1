// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_union_path2d_string.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/modules/canvas/canvas2d/path_2d.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionPath2DOrString* V8UnionPath2DOrString::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8Path2D::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8Path2D::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionPath2DOrString>(blink_value);
}
{
  auto&& blink_value = NativeValueTraits<IDLString>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionPath2DOrString>(std::move(blink_value));
}
}

 V8UnionPath2DOrString::V8UnionPath2DOrString(const String& value) : content_type_(ContentType::kString), member_string_(value) {
  
}

 V8UnionPath2DOrString::V8UnionPath2DOrString(String&& value) : content_type_(ContentType::kString), member_string_(std::move(value)) {
  
}







void V8UnionPath2DOrString::Set(const String& value) {
  Clear();
member_string_ = value;
content_type_ = ContentType::kString;
}

void V8UnionPath2DOrString::Set(String&& value) {
  Clear();
member_string_ = std::move(value);
content_type_ = ContentType::kString;
}


v8::MaybeLocal<v8::Value> V8UnionPath2DOrString::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kPath2D: {
    return ToV8Traits<Path2D>::ToV8(script_state, member_path_2d_);
  }
  case ContentType::kString: {
    return ToV8Traits<IDLString>::ToV8(script_state, member_string_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionPath2DOrString::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<Path2D>>::Trace(visitor, member_path_2d_);
TraceIfNeeded<String>::Trace(visitor, member_string_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionPath2DOrString::Clear() {
  member_path_2d_.Clear();
member_string_ = String();
}



}  // namespace blink
