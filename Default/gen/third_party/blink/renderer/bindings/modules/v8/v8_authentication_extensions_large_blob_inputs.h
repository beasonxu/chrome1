// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_AUTHENTICATION_EXTENSIONS_LARGE_BLOB_INPUTS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_AUTHENTICATION_EXTENSIONS_LARGE_BLOB_INPUTS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class V8UnionArrayBufferOrArrayBufferView;

class MODULES_EXPORT AuthenticationExtensionsLargeBlobInputs : public bindings::DictionaryBase {
  
  public:
static AuthenticationExtensionsLargeBlobInputs* Create() {
  return MakeGarbageCollected<AuthenticationExtensionsLargeBlobInputs>();
}
static AuthenticationExtensionsLargeBlobInputs* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<AuthenticationExtensionsLargeBlobInputs>(isolate);
}
static AuthenticationExtensionsLargeBlobInputs* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  AuthenticationExtensionsLargeBlobInputs();
explicit  AuthenticationExtensionsLargeBlobInputs(v8::Isolate* isolate);

bool hasRead() const {
  return has_read_;
}
bool read() const {
  DCHECK(hasRead());
return member_read_;
}
bool getReadOr(bool fallback_value) const {
  if (!hasRead()) {
  return fallback_value;
}
return member_read_;
}
void setRead(bool value) {
  member_read_ = value;
has_read_ = true;
}

bool hasSupport() const {
  return has_support_;
}
const String& support() const {
  DCHECK(hasSupport());
return member_support_;
}
String getSupportOr(const String& fallback_value) const;
String getSupportOr(String&& fallback_value) const;
void setSupport(const String& value);
void setSupport(String&& value);

bool hasWrite() const {
  return has_write_;
}
V8UnionArrayBufferOrArrayBufferView* write() const {
  DCHECK(hasWrite());
return member_write_;
}
V8UnionArrayBufferOrArrayBufferView* getWriteOr(V8UnionArrayBufferOrArrayBufferView* fallback_value) const {
  if (!hasWrite()) {
  return fallback_value;
}
return member_write_;
}
void setWrite(V8UnionArrayBufferOrArrayBufferView* value) {
  member_write_ = value;
has_write_ = true;
DCHECK(member_write_);
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_read_ = false;
bool has_support_ = false;
bool has_write_ = false;

bool member_read_;
String member_support_;
Member<V8UnionArrayBufferOrArrayBufferView> member_write_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_AUTHENTICATION_EXTENSIONS_LARGE_BLOB_INPUTS_H_
