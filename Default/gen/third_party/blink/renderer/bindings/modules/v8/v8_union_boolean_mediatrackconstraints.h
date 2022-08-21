// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_BOOLEAN_MEDIATRACKCONSTRAINTS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_BOOLEAN_MEDIATRACKCONSTRAINTS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class MediaTrackConstraints;

class MODULES_EXPORT V8UnionBooleanOrMediaTrackConstraints final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kBoolean, kMediaTrackConstraints
};

static V8UnionBooleanOrMediaTrackConstraints* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionBooleanOrMediaTrackConstraints(bool value) : content_type_(ContentType::kBoolean), member_boolean_(value) {
  
}
explicit  V8UnionBooleanOrMediaTrackConstraints(MediaTrackConstraints* value) : content_type_(ContentType::kMediaTrackConstraints), member_media_track_constraints_(value) {
  DCHECK(value);
}

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsBoolean() const {
  return content_type_ == ContentType::kBoolean;
}
bool GetAsBoolean() const {
  DCHECK_EQ(content_type_, ContentType::kBoolean);
return member_boolean_;
}
void Set(bool value) {
  Clear();
member_boolean_ = value;
content_type_ = ContentType::kBoolean;
}

bool IsMediaTrackConstraints() const {
  return content_type_ == ContentType::kMediaTrackConstraints;
}
MediaTrackConstraints* GetAsMediaTrackConstraints() const {
  DCHECK_EQ(content_type_, ContentType::kMediaTrackConstraints);
return member_media_track_constraints_;
}
void Set(MediaTrackConstraints* value) {
  DCHECK(value);
Clear();
member_media_track_constraints_ = value;
content_type_ = ContentType::kMediaTrackConstraints;
}


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(MediaTrackConstraints or boolean)";
}

ContentType content_type_;

bool member_boolean_;
Member<MediaTrackConstraints> member_media_track_constraints_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_BOOLEAN_MEDIATRACKCONSTRAINTS_H_
