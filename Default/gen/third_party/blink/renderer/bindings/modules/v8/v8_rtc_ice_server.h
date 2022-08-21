// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_RTC_ICE_SERVER_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_RTC_ICE_SERVER_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class V8UnionStringOrStringSequence;

class MODULES_EXPORT RTCIceServer : public bindings::DictionaryBase {
  
  public:
static RTCIceServer* Create() {
  return MakeGarbageCollected<RTCIceServer>();
}
static RTCIceServer* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<RTCIceServer>(isolate);
}
static RTCIceServer* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  RTCIceServer();
explicit  RTCIceServer(v8::Isolate* isolate);

bool hasCredential() const {
  return has_credential_;
}
const String& credential() const {
  DCHECK(hasCredential());
return member_credential_;
}
String getCredentialOr(const String& fallback_value) const;
String getCredentialOr(String&& fallback_value) const;
void setCredential(const String& value);
void setCredential(String&& value);

bool hasUrl() const {
  return has_url_;
}
const String& url() const {
  DCHECK(hasUrl());
return member_url_;
}
String getUrlOr(const String& fallback_value) const;
String getUrlOr(String&& fallback_value) const;
void setUrl(const String& value);
void setUrl(String&& value);

bool hasUrls() const {
  return has_urls_;
}
V8UnionStringOrStringSequence* urls() const {
  DCHECK(hasUrls());
return member_urls_;
}
V8UnionStringOrStringSequence* getUrlsOr(V8UnionStringOrStringSequence* fallback_value) const {
  if (!hasUrls()) {
  return fallback_value;
}
return member_urls_;
}
void setUrls(V8UnionStringOrStringSequence* value) {
  member_urls_ = value;
has_urls_ = true;
DCHECK(member_urls_);
}

bool hasUsername() const {
  return has_username_;
}
const String& username() const {
  DCHECK(hasUsername());
return member_username_;
}
String getUsernameOr(const String& fallback_value) const;
String getUsernameOr(String&& fallback_value) const;
void setUsername(const String& value);
void setUsername(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_credential_ = false;
bool has_url_ = false;
bool has_urls_ = false;
bool has_username_ = false;

String member_credential_;
String member_url_;
Member<V8UnionStringOrStringSequence> member_urls_;
String member_username_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_RTC_ICE_SERVER_H_
