// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_bytestringbytestringrecord_bytestringsequencesequence.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionByteStringByteStringRecordOrByteStringSequenceSequence* V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (v8_value->IsArray()) {
  auto&& blink_value = NativeValueTraits<IDLSequence<IDLSequence<IDLByteString>>>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionByteStringByteStringRecordOrByteStringSequenceSequence>(std::move(blink_value));
}
if (v8_value->IsObject()) {
  ScriptIterator script_iterator = ScriptIterator::FromIterable(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
if (!script_iterator.IsNull()) {
  auto&& blink_value = bindings::CreateIDLSequenceFromIterator<IDLSequence<IDLByteString>>(isolate, std::move(script_iterator), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionByteStringByteStringRecordOrByteStringSequenceSequence>(std::move(blink_value));
}
}
if (v8_value->IsObject()) {
  auto&& blink_value = NativeValueTraits<IDLRecord<IDLByteString, IDLByteString>>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionByteStringByteStringRecordOrByteStringSequenceSequence>(std::move(blink_value));
}
ThrowTypeErrorNotOfType(exception_state, UnionNameInIDL());
return nullptr;
}

 V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::V8UnionByteStringByteStringRecordOrByteStringSequenceSequence(const Vector<std::pair<String, String>>& value) : content_type_(ContentType::kByteStringByteStringRecord), member_byte_string_byte_string_record_(value) {
  
}

 V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::V8UnionByteStringByteStringRecordOrByteStringSequenceSequence(Vector<std::pair<String, String>>&& value) : content_type_(ContentType::kByteStringByteStringRecord), member_byte_string_byte_string_record_(std::move(value)) {
  
}

 V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::V8UnionByteStringByteStringRecordOrByteStringSequenceSequence(const Vector<Vector<String>>& value) : content_type_(ContentType::kByteStringSequenceSequence), member_byte_string_sequence_sequence_(value) {
  
}

 V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::V8UnionByteStringByteStringRecordOrByteStringSequenceSequence(Vector<Vector<String>>&& value) : content_type_(ContentType::kByteStringSequenceSequence), member_byte_string_sequence_sequence_(std::move(value)) {
  
}




void V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Set(const Vector<std::pair<String, String>>& value) {
  Clear();
member_byte_string_byte_string_record_ = value;
content_type_ = ContentType::kByteStringByteStringRecord;
}

void V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Set(Vector<std::pair<String, String>>&& value) {
  Clear();
member_byte_string_byte_string_record_ = std::move(value);
content_type_ = ContentType::kByteStringByteStringRecord;
}



void V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Set(const Vector<Vector<String>>& value) {
  Clear();
member_byte_string_sequence_sequence_ = value;
content_type_ = ContentType::kByteStringSequenceSequence;
}

void V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Set(Vector<Vector<String>>&& value) {
  Clear();
member_byte_string_sequence_sequence_ = std::move(value);
content_type_ = ContentType::kByteStringSequenceSequence;
}


v8::MaybeLocal<v8::Value> V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kByteStringByteStringRecord: {
    return ToV8Traits<IDLRecord<IDLByteString, IDLByteString>>::ToV8(script_state, member_byte_string_byte_string_record_);
  }
  case ContentType::kByteStringSequenceSequence: {
    return ToV8Traits<IDLSequence<IDLSequence<IDLByteString>>>::ToV8(script_state, member_byte_string_sequence_sequence_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Trace(Visitor* visitor) const {
  TraceIfNeeded<Vector<std::pair<String, String>>>::Trace(visitor, member_byte_string_byte_string_record_);
TraceIfNeeded<Vector<Vector<String>>>::Trace(visitor, member_byte_string_sequence_sequence_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionByteStringByteStringRecordOrByteStringSequenceSequence::Clear() {
  member_byte_string_byte_string_record_.clear();
member_byte_string_sequence_sequence_.clear();
}



}  // namespace blink
