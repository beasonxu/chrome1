// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_union_constrainlongrange_long.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_long_range.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionConstrainLongRangeOrLong* V8UnionConstrainLongRangeOrLong::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (v8_value->IsNullOrUndefined()) {
  auto&& blink_value = ConstrainLongRange::Create(isolate);
return MakeGarbageCollected<V8UnionConstrainLongRangeOrLong>(blink_value);
}
if (v8_value->IsObject()) {
  auto&& blink_value = NativeValueTraits<ConstrainLongRange>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionConstrainLongRangeOrLong>(blink_value);
}
if (v8_value->IsNumber()) {
  auto&& blink_value = NativeValueTraits<IDLLong>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionConstrainLongRangeOrLong>(blink_value);
}
{
  auto&& blink_value = NativeValueTraits<IDLLong>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionConstrainLongRangeOrLong>(blink_value);
}
}










v8::MaybeLocal<v8::Value> V8UnionConstrainLongRangeOrLong::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kConstrainLongRange: {
    return ToV8Traits<ConstrainLongRange>::ToV8(script_state, member_constrain_long_range_);
  }
  case ContentType::kLong: {
    return ToV8Traits<IDLLong>::ToV8(script_state, member_long_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionConstrainLongRangeOrLong::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<ConstrainLongRange>>::Trace(visitor, member_constrain_long_range_);
TraceIfNeeded<int32_t>::Trace(visitor, member_long_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionConstrainLongRangeOrLong::Clear() {
  member_constrain_long_range_.Clear();
member_long_ = 0;
}



}  // namespace blink
