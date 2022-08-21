// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_file_usvstring.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/core/fileapi/file.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionFileOrUSVString* V8UnionFileOrUSVString::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8File::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8File::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionFileOrUSVString>(blink_value);
}
{
  auto&& blink_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionFileOrUSVString>(std::move(blink_value));
}
}

 V8UnionFileOrUSVString::V8UnionFileOrUSVString(const String& value) : content_type_(ContentType::kUSVString), member_usv_string_(value) {
  
}

 V8UnionFileOrUSVString::V8UnionFileOrUSVString(String&& value) : content_type_(ContentType::kUSVString), member_usv_string_(std::move(value)) {
  
}







void V8UnionFileOrUSVString::Set(const String& value) {
  Clear();
member_usv_string_ = value;
content_type_ = ContentType::kUSVString;
}

void V8UnionFileOrUSVString::Set(String&& value) {
  Clear();
member_usv_string_ = std::move(value);
content_type_ = ContentType::kUSVString;
}


v8::MaybeLocal<v8::Value> V8UnionFileOrUSVString::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kFile: {
    return ToV8Traits<File>::ToV8(script_state, member_file_);
  }
  case ContentType::kUSVString: {
    return ToV8Traits<IDLUSVString>::ToV8(script_state, member_usv_string_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionFileOrUSVString::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<File>>::Trace(visitor, member_file_);
TraceIfNeeded<String>::Trace(visitor, member_usv_string_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionFileOrUSVString::Clear() {
  member_file_.Clear();
member_usv_string_ = String();
}



}  // namespace blink
