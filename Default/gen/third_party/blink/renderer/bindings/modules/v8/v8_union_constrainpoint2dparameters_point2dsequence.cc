// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_union_constrainpoint2dparameters_point2dsequence.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionConstrainPoint2DParametersOrPoint2DSequence* V8UnionConstrainPoint2DParametersOrPoint2DSequence::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (v8_value->IsNullOrUndefined()) {
  auto&& blink_value = ConstrainPoint2DParameters::Create(isolate);
return MakeGarbageCollected<V8UnionConstrainPoint2DParametersOrPoint2DSequence>(blink_value);
}
if (v8_value->IsArray()) {
  auto&& blink_value = NativeValueTraits<IDLSequence<Point2D>>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionConstrainPoint2DParametersOrPoint2DSequence>(std::move(blink_value));
}
if (v8_value->IsObject()) {
  ScriptIterator script_iterator = ScriptIterator::FromIterable(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
if (!script_iterator.IsNull()) {
  auto&& blink_value = bindings::CreateIDLSequenceFromIterator<Point2D>(isolate, std::move(script_iterator), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionConstrainPoint2DParametersOrPoint2DSequence>(std::move(blink_value));
}
}
if (v8_value->IsObject()) {
  auto&& blink_value = NativeValueTraits<ConstrainPoint2DParameters>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionConstrainPoint2DParametersOrPoint2DSequence>(blink_value);
}
ThrowTypeErrorNotOfType(exception_state, UnionNameInIDL());
return nullptr;
}

 V8UnionConstrainPoint2DParametersOrPoint2DSequence::V8UnionConstrainPoint2DParametersOrPoint2DSequence(const HeapVector<Member<Point2D>>& value) : content_type_(ContentType::kPoint2DSequence), member_point_2d_sequence_(value) {
  
}

 V8UnionConstrainPoint2DParametersOrPoint2DSequence::V8UnionConstrainPoint2DParametersOrPoint2DSequence(HeapVector<Member<Point2D>>&& value) : content_type_(ContentType::kPoint2DSequence), member_point_2d_sequence_(std::move(value)) {
  
}







void V8UnionConstrainPoint2DParametersOrPoint2DSequence::Set(const HeapVector<Member<Point2D>>& value) {
  Clear();
member_point_2d_sequence_ = value;
content_type_ = ContentType::kPoint2DSequence;
}

void V8UnionConstrainPoint2DParametersOrPoint2DSequence::Set(HeapVector<Member<Point2D>>&& value) {
  Clear();
member_point_2d_sequence_ = std::move(value);
content_type_ = ContentType::kPoint2DSequence;
}


v8::MaybeLocal<v8::Value> V8UnionConstrainPoint2DParametersOrPoint2DSequence::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kConstrainPoint2DParameters: {
    return ToV8Traits<ConstrainPoint2DParameters>::ToV8(script_state, member_constrain_point_2d_parameters_);
  }
  case ContentType::kPoint2DSequence: {
    return ToV8Traits<IDLSequence<Point2D>>::ToV8(script_state, member_point_2d_sequence_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionConstrainPoint2DParametersOrPoint2DSequence::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<ConstrainPoint2DParameters>>::Trace(visitor, member_constrain_point_2d_parameters_);
TraceIfNeeded<HeapVector<Member<Point2D>>>::Trace(visitor, member_point_2d_sequence_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionConstrainPoint2DParametersOrPoint2DSequence::Clear() {
  member_constrain_point_2d_parameters_.Clear();
member_point_2d_sequence_.clear();
}



}  // namespace blink
