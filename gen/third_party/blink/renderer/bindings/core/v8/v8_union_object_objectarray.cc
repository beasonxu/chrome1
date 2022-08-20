// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_object_objectarray.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionObjectOrObjectArray* V8UnionObjectOrObjectArray::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (v8_value->IsArray()) {
  auto&& blink_value = NativeValueTraits<IDLArray<IDLObject>>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionObjectOrObjectArray>(std::move(blink_value));
}
if (v8_value->IsObject()) {
  ScriptIterator script_iterator = ScriptIterator::FromIterable(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
if (!script_iterator.IsNull()) {
  auto&& blink_value = bindings::CreateIDLSequenceFromIterator<IDLObject>(isolate, std::move(script_iterator), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionObjectOrObjectArray>(std::move(blink_value));
}
}
if (v8_value->IsObject()) {
  auto&& blink_value = ScriptValue(isolate, v8_value);
return MakeGarbageCollected<V8UnionObjectOrObjectArray>(blink_value);
}
ThrowTypeErrorNotOfType(exception_state, UnionNameInIDL());
return nullptr;
}

 V8UnionObjectOrObjectArray::V8UnionObjectOrObjectArray(const HeapVector<ScriptValue>& value) : content_type_(ContentType::kObjectArray), member_object_array_(value) {
  
}

 V8UnionObjectOrObjectArray::V8UnionObjectOrObjectArray(HeapVector<ScriptValue>&& value) : content_type_(ContentType::kObjectArray), member_object_array_(std::move(value)) {
  
}







void V8UnionObjectOrObjectArray::Set(const HeapVector<ScriptValue>& value) {
  Clear();
member_object_array_ = value;
content_type_ = ContentType::kObjectArray;
}

void V8UnionObjectOrObjectArray::Set(HeapVector<ScriptValue>&& value) {
  Clear();
member_object_array_ = std::move(value);
content_type_ = ContentType::kObjectArray;
}


v8::MaybeLocal<v8::Value> V8UnionObjectOrObjectArray::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kObject: {
    return ToV8Traits<IDLObject>::ToV8(script_state, member_object_);
  }
  case ContentType::kObjectArray: {
    return ToV8Traits<IDLArray<IDLObject>>::ToV8(script_state, member_object_array_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionObjectOrObjectArray::Trace(Visitor* visitor) const {
  TraceIfNeeded<ScriptValue>::Trace(visitor, member_object_);
TraceIfNeeded<HeapVector<ScriptValue>>::Trace(visitor, member_object_array_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionObjectOrObjectArray::Clear() {
  member_object_.Clear();
member_object_array_.clear();
}



}  // namespace blink
