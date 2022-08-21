// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HANDWRITING_DRAWING_SEGMENT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HANDWRITING_DRAWING_SEGMENT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT HandwritingDrawingSegment : public bindings::DictionaryBase {
  
  public:
static HandwritingDrawingSegment* Create() {
  return MakeGarbageCollected<HandwritingDrawingSegment>();
}
static HandwritingDrawingSegment* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<HandwritingDrawingSegment>(isolate);
}
static HandwritingDrawingSegment* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  HandwritingDrawingSegment();
explicit  HandwritingDrawingSegment(v8::Isolate* isolate);

bool hasBeginPointIndex() const {
  return true;
}
uint32_t beginPointIndex() const {
  return member_begin_point_index_;
}
void setBeginPointIndex(uint32_t value) {
  member_begin_point_index_ = value;
}

bool hasEndPointIndex() const {
  return true;
}
uint32_t endPointIndex() const {
  return member_end_point_index_;
}
void setEndPointIndex(uint32_t value) {
  member_end_point_index_ = value;
}

bool hasStrokeIndex() const {
  return true;
}
uint32_t strokeIndex() const {
  return member_stroke_index_;
}
void setStrokeIndex(uint32_t value) {
  member_stroke_index_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



uint32_t member_begin_point_index_;
uint32_t member_end_point_index_;
uint32_t member_stroke_index_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HANDWRITING_DRAWING_SEGMENT_H_
