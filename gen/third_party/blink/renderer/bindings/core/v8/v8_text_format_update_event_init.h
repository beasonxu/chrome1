// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEXT_FORMAT_UPDATE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEXT_FORMAT_UPDATE_EVENT_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class TextFormat;

class CORE_EXPORT TextFormatUpdateEventInit : public EventInit {
  
  public:
static TextFormatUpdateEventInit* Create() {
  return MakeGarbageCollected<TextFormatUpdateEventInit>();
}
static TextFormatUpdateEventInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<TextFormatUpdateEventInit>(isolate);
}
static TextFormatUpdateEventInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  TextFormatUpdateEventInit();
explicit  TextFormatUpdateEventInit(v8::Isolate* isolate);

bool hasTextFormats() const {
  return has_text_formats_;
}
const HeapVector<Member<TextFormat>>& textFormats() const {
  DCHECK(hasTextFormats());
return member_text_formats_;
}
HeapVector<Member<TextFormat>> getTextFormatsOr(const HeapVector<Member<TextFormat>>& fallback_value) const;
HeapVector<Member<TextFormat>> getTextFormatsOr(HeapVector<Member<TextFormat>>&& fallback_value) const;
void setTextFormats(const HeapVector<Member<TextFormat>>& value);
void setTextFormats(HeapVector<Member<TextFormat>>&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_text_formats_ = false;

HeapVector<Member<TextFormat>> member_text_formats_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEXT_FORMAT_UPDATE_EVENT_INIT_H_
