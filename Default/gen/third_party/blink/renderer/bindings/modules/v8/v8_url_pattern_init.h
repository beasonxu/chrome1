// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_URL_PATTERN_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_URL_PATTERN_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT URLPatternInit : public bindings::DictionaryBase {
  
  public:
static URLPatternInit* Create() {
  return MakeGarbageCollected<URLPatternInit>();
}
static URLPatternInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<URLPatternInit>(isolate);
}
static URLPatternInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  URLPatternInit();
explicit  URLPatternInit(v8::Isolate* isolate);

bool hasBaseURL() const {
  return has_base_url_;
}
const String& baseURL() const {
  DCHECK(hasBaseURL());
return member_base_url_;
}
String getBaseURLOr(const String& fallback_value) const;
String getBaseURLOr(String&& fallback_value) const;
void setBaseURL(const String& value);
void setBaseURL(String&& value);

bool hasHash() const {
  return has_hash_;
}
const String& hash() const {
  DCHECK(hasHash());
return member_hash_;
}
String getHashOr(const String& fallback_value) const;
String getHashOr(String&& fallback_value) const;
void setHash(const String& value);
void setHash(String&& value);

bool hasHostname() const {
  return has_hostname_;
}
const String& hostname() const {
  DCHECK(hasHostname());
return member_hostname_;
}
String getHostnameOr(const String& fallback_value) const;
String getHostnameOr(String&& fallback_value) const;
void setHostname(const String& value);
void setHostname(String&& value);

bool hasPassword() const {
  return has_password_;
}
const String& password() const {
  DCHECK(hasPassword());
return member_password_;
}
String getPasswordOr(const String& fallback_value) const;
String getPasswordOr(String&& fallback_value) const;
void setPassword(const String& value);
void setPassword(String&& value);

bool hasPathname() const {
  return has_pathname_;
}
const String& pathname() const {
  DCHECK(hasPathname());
return member_pathname_;
}
String getPathnameOr(const String& fallback_value) const;
String getPathnameOr(String&& fallback_value) const;
void setPathname(const String& value);
void setPathname(String&& value);

bool hasPort() const {
  return has_port_;
}
const String& port() const {
  DCHECK(hasPort());
return member_port_;
}
String getPortOr(const String& fallback_value) const;
String getPortOr(String&& fallback_value) const;
void setPort(const String& value);
void setPort(String&& value);

bool hasProtocol() const {
  return has_protocol_;
}
const String& protocol() const {
  DCHECK(hasProtocol());
return member_protocol_;
}
String getProtocolOr(const String& fallback_value) const;
String getProtocolOr(String&& fallback_value) const;
void setProtocol(const String& value);
void setProtocol(String&& value);

bool hasSearch() const {
  return has_search_;
}
const String& search() const {
  DCHECK(hasSearch());
return member_search_;
}
String getSearchOr(const String& fallback_value) const;
String getSearchOr(String&& fallback_value) const;
void setSearch(const String& value);
void setSearch(String&& value);

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

bool has_base_url_ = false;
bool has_hash_ = false;
bool has_hostname_ = false;
bool has_password_ = false;
bool has_pathname_ = false;
bool has_port_ = false;
bool has_protocol_ = false;
bool has_search_ = false;
bool has_username_ = false;

String member_base_url_;
String member_hash_;
String member_hostname_;
String member_password_;
String member_pathname_;
String member_port_;
String member_protocol_;
String member_search_;
String member_username_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_URL_PATTERN_INIT_H_
