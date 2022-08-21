// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_READABLE_STREAM_GET_READER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_READABLE_STREAM_GET_READER_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_reader_mode.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT ReadableStreamGetReaderOptions : public bindings::DictionaryBase {
  
  public:
static ReadableStreamGetReaderOptions* Create() {
  return MakeGarbageCollected<ReadableStreamGetReaderOptions>();
}
static ReadableStreamGetReaderOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<ReadableStreamGetReaderOptions>(isolate);
}
static ReadableStreamGetReaderOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  ReadableStreamGetReaderOptions();
explicit  ReadableStreamGetReaderOptions(v8::Isolate* isolate);

bool hasMode() const {
  return has_mode_;
}
V8ReadableStreamReaderMode mode() const {
  DCHECK(hasMode());
return member_mode_;
}
V8ReadableStreamReaderMode getModeOr(V8ReadableStreamReaderMode fallback_value) const {
  if (!hasMode()) {
  return fallback_value;
}
return member_mode_;
}
void setMode(V8ReadableStreamReaderMode value) {
  member_mode_ = value;
has_mode_ = true;
}
void setMode(V8ReadableStreamReaderMode::Enum value) {
  member_mode_ = V8ReadableStreamReaderMode(value);
has_mode_ = true;
}


// Obsolete accessor functions
void setMode(const String& value) {
  member_mode_ = V8ReadableStreamReaderMode::Create(value).value();
has_mode_ = true;
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_mode_ = false;

V8ReadableStreamReaderMode member_mode_{static_cast<V8ReadableStreamReaderMode::Enum>(0)};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_READABLE_STREAM_GET_READER_OPTIONS_H_
