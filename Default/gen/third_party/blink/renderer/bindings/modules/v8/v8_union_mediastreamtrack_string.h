// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_MEDIASTREAMTRACK_STRING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_MEDIASTREAMTRACK_STRING_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/union_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class MediaStreamTrack;

class MODULES_EXPORT V8UnionMediaStreamTrackOrString final : public bindings::UnionBase {
  
  public:
// The type of the content value of this IDL union.
enum class ContentType {
kMediaStreamTrack, kString
};

static V8UnionMediaStreamTrackOrString* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  V8UnionMediaStreamTrackOrString(MediaStreamTrack* value) : content_type_(ContentType::kMediaStreamTrack), member_media_stream_track_(value) {
  DCHECK(value);
}
explicit  V8UnionMediaStreamTrackOrString(const String& value);
explicit  V8UnionMediaStreamTrackOrString(String&& value);

// Returns the type of the content value.
ContentType GetContentType() const {
  return content_type_;
}

bool IsMediaStreamTrack() const {
  return content_type_ == ContentType::kMediaStreamTrack;
}
MediaStreamTrack* GetAsMediaStreamTrack() const {
  DCHECK_EQ(content_type_, ContentType::kMediaStreamTrack);
return member_media_stream_track_;
}
void Set(MediaStreamTrack* value) {
  DCHECK(value);
Clear();
member_media_stream_track_ = value;
content_type_ = ContentType::kMediaStreamTrack;
}

bool IsString() const {
  return content_type_ == ContentType::kString;
}
const String& GetAsString() const {
  DCHECK_EQ(content_type_, ContentType::kString);
return member_string_;
}
void Set(const String& value);
void Set(String&& value);


v8::MaybeLocal<v8::Value> ToV8Value(ScriptState* script_state) const override;

void Trace(Visitor* visitor) const override;


  
  private:
void Clear();

static constexpr const char* UnionNameInIDL() {
  return "(DOMString or MediaStreamTrack)";
}

ContentType content_type_;

Member<MediaStreamTrack> member_media_stream_track_;
String member_string_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_UNION_MEDIASTREAMTRACK_STRING_H_
