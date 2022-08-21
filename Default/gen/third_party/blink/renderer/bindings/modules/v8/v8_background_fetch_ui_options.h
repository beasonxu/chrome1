// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BACKGROUND_FETCH_UI_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BACKGROUND_FETCH_UI_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class ManifestImageResource;

class MODULES_EXPORT BackgroundFetchUIOptions : public bindings::DictionaryBase {
  
  public:
static BackgroundFetchUIOptions* Create() {
  return MakeGarbageCollected<BackgroundFetchUIOptions>();
}
static BackgroundFetchUIOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<BackgroundFetchUIOptions>(isolate);
}
static BackgroundFetchUIOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  BackgroundFetchUIOptions();
explicit  BackgroundFetchUIOptions(v8::Isolate* isolate);

bool hasIcons() const {
  return true;
}
const HeapVector<Member<ManifestImageResource>>& icons() const {
  return member_icons_;
}
void setIcons(const HeapVector<Member<ManifestImageResource>>& value);
void setIcons(HeapVector<Member<ManifestImageResource>>&& value);

bool hasTitle() const {
  return has_title_;
}
const String& title() const {
  DCHECK(hasTitle());
return member_title_;
}
String getTitleOr(const String& fallback_value) const;
String getTitleOr(String&& fallback_value) const;
void setTitle(const String& value);
void setTitle(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_title_ = false;

HeapVector<Member<ManifestImageResource>> member_icons_;
String member_title_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BACKGROUND_FETCH_UI_OPTIONS_H_
