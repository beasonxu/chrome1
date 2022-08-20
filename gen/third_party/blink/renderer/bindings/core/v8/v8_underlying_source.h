// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNDERLYING_SOURCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNDERLYING_SOURCE_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_type.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class V8UnderlyingSourceCancelCallback;
class V8UnderlyingSourcePullCallback;
class V8UnderlyingSourceStartCallback;

class CORE_EXPORT UnderlyingSource : public bindings::DictionaryBase {
  
  public:
static UnderlyingSource* Create() {
  return MakeGarbageCollected<UnderlyingSource>();
}
static UnderlyingSource* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<UnderlyingSource>(isolate);
}
static UnderlyingSource* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  UnderlyingSource();
explicit  UnderlyingSource(v8::Isolate* isolate);

bool hasAutoAllocateChunkSize() const {
  return has_auto_allocate_chunk_size_;
}
uint64_t autoAllocateChunkSize() const {
  DCHECK(hasAutoAllocateChunkSize());
return member_auto_allocate_chunk_size_;
}
uint64_t getAutoAllocateChunkSizeOr(uint64_t fallback_value) const {
  if (!hasAutoAllocateChunkSize()) {
  return fallback_value;
}
return member_auto_allocate_chunk_size_;
}
void setAutoAllocateChunkSize(uint64_t value) {
  member_auto_allocate_chunk_size_ = value;
has_auto_allocate_chunk_size_ = true;
}

bool hasCancel() const {
  return has_cancel_;
}
V8UnderlyingSourceCancelCallback* cancel() const {
  DCHECK(hasCancel());
return member_cancel_;
}
V8UnderlyingSourceCancelCallback* getCancelOr(V8UnderlyingSourceCancelCallback* fallback_value) const {
  if (!hasCancel()) {
  return fallback_value;
}
return member_cancel_;
}
void setCancel(V8UnderlyingSourceCancelCallback* value) {
  member_cancel_ = value;
has_cancel_ = true;
DCHECK(member_cancel_);
}

bool hasPull() const {
  return has_pull_;
}
V8UnderlyingSourcePullCallback* pull() const {
  DCHECK(hasPull());
return member_pull_;
}
V8UnderlyingSourcePullCallback* getPullOr(V8UnderlyingSourcePullCallback* fallback_value) const {
  if (!hasPull()) {
  return fallback_value;
}
return member_pull_;
}
void setPull(V8UnderlyingSourcePullCallback* value) {
  member_pull_ = value;
has_pull_ = true;
DCHECK(member_pull_);
}

bool hasStart() const {
  return has_start_;
}
V8UnderlyingSourceStartCallback* start() const {
  DCHECK(hasStart());
return member_start_;
}
V8UnderlyingSourceStartCallback* getStartOr(V8UnderlyingSourceStartCallback* fallback_value) const {
  if (!hasStart()) {
  return fallback_value;
}
return member_start_;
}
void setStart(V8UnderlyingSourceStartCallback* value) {
  member_start_ = value;
has_start_ = true;
DCHECK(member_start_);
}

bool hasType() const {
  return has_type_;
}
V8ReadableStreamType type() const {
  DCHECK(hasType());
return member_type_;
}
V8ReadableStreamType getTypeOr(V8ReadableStreamType fallback_value) const {
  if (!hasType()) {
  return fallback_value;
}
return member_type_;
}
void setType(V8ReadableStreamType value) {
  member_type_ = value;
has_type_ = true;
}
void setType(V8ReadableStreamType::Enum value) {
  member_type_ = V8ReadableStreamType(value);
has_type_ = true;
}


// Obsolete accessor functions
void setType(const String& value) {
  member_type_ = V8ReadableStreamType::Create(value).value();
has_type_ = true;
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_auto_allocate_chunk_size_ = false;
bool has_cancel_ = false;
bool has_pull_ = false;
bool has_start_ = false;
bool has_type_ = false;

uint64_t member_auto_allocate_chunk_size_;
Member<V8UnderlyingSourceCancelCallback> member_cancel_;
Member<V8UnderlyingSourcePullCallback> member_pull_;
Member<V8UnderlyingSourceStartCallback> member_start_;
V8ReadableStreamType member_type_{static_cast<V8ReadableStreamType::Enum>(0)};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_UNDERLYING_SOURCE_H_
