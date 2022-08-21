// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_MEDIA_METADATA_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_MEDIA_METADATA_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class MediaImage;

class MODULES_EXPORT MediaMetadataInit : public bindings::DictionaryBase {
  
  public:
static MediaMetadataInit* Create() {
  return MakeGarbageCollected<MediaMetadataInit>();
}
static MediaMetadataInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<MediaMetadataInit>(isolate);
}
static MediaMetadataInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  MediaMetadataInit();
explicit  MediaMetadataInit(v8::Isolate* isolate);

bool hasAlbum() const {
  return true;
}
const String& album() const {
  return member_album_;
}
void setAlbum(const String& value);
void setAlbum(String&& value);

bool hasArtist() const {
  return true;
}
const String& artist() const {
  return member_artist_;
}
void setArtist(const String& value);
void setArtist(String&& value);

bool hasArtwork() const {
  return true;
}
const HeapVector<Member<MediaImage>>& artwork() const {
  return member_artwork_;
}
void setArtwork(const HeapVector<Member<MediaImage>>& value);
void setArtwork(HeapVector<Member<MediaImage>>&& value);

bool hasTitle() const {
  return true;
}
const String& title() const {
  return member_title_;
}
void setTitle(const String& value);
void setTitle(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



String member_album_{""};
String member_artist_{""};
HeapVector<Member<MediaImage>> member_artwork_;
String member_title_{""};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_MEDIA_METADATA_INIT_H_
