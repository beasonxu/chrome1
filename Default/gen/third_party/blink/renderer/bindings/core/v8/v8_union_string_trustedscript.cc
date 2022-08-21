// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_string_trustedscript.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"
#include "third_party/blink/renderer/core/trustedtypes/trusted_script.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionStringOrTrustedScript* V8UnionStringOrTrustedScript::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8TrustedScript::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8TrustedScript::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionStringOrTrustedScript>(blink_value);
}
{
  auto&& blink_value = NativeValueTraits<IDLString>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionStringOrTrustedScript>(std::move(blink_value));
}
}

 V8UnionStringOrTrustedScript::V8UnionStringOrTrustedScript(const String& value) : content_type_(ContentType::kString), member_string_(value) {
  
}

 V8UnionStringOrTrustedScript::V8UnionStringOrTrustedScript(String&& value) : content_type_(ContentType::kString), member_string_(std::move(value)) {
  
}




void V8UnionStringOrTrustedScript::Set(const String& value) {
  Clear();
member_string_ = value;
content_type_ = ContentType::kString;
}

void V8UnionStringOrTrustedScript::Set(String&& value) {
  Clear();
member_string_ = std::move(value);
content_type_ = ContentType::kString;
}





v8::MaybeLocal<v8::Value> V8UnionStringOrTrustedScript::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kString: {
    return ToV8Traits<IDLString>::ToV8(script_state, member_string_);
  }
  case ContentType::kTrustedScript: {
    return ToV8Traits<TrustedScript>::ToV8(script_state, member_trusted_script_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionStringOrTrustedScript::Trace(Visitor* visitor) const {
  TraceIfNeeded<String>::Trace(visitor, member_string_);
TraceIfNeeded<Member<TrustedScript>>::Trace(visitor, member_trusted_script_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionStringOrTrustedScript::Clear() {
  member_string_ = String();
member_trusted_script_.Clear();
}



}  // namespace blink
