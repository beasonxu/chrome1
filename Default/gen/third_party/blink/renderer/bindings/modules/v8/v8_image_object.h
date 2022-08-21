// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_IMAGE_OBJECT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_IMAGE_OBJECT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT ImageObject : public bindings::DictionaryBase {
  
  public:
static ImageObject* Create() {
  return MakeGarbageCollected<ImageObject>();
}
static ImageObject* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<ImageObject>(isolate);
}
static ImageObject* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  ImageObject();
explicit  ImageObject(v8::Isolate* isolate);

bool hasSizes() const {
  return has_sizes_;
}
const String& sizes() const {
  DCHECK(hasSizes());
return member_sizes_;
}
String getSizesOr(const String& fallback_value) const;
String getSizesOr(String&& fallback_value) const;
void setSizes(const String& value);
void setSizes(String&& value);

bool hasSrc() const {
  return true;
}
const String& src() const {
  return member_src_;
}
void setSrc(const String& value);
void setSrc(String&& value);

bool hasType() const {
  return has_type_;
}
const String& type() const {
  DCHECK(hasType());
return member_type_;
}
String getTypeOr(const String& fallback_value) const;
String getTypeOr(String&& fallback_value) const;
void setType(const String& value);
void setType(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_sizes_ = false;
bool has_type_ = false;

String member_sizes_;
String member_src_;
String member_type_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_IMAGE_OBJECT_H_
