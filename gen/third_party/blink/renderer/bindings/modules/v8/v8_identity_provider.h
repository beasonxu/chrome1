// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_IDENTITY_PROVIDER_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_IDENTITY_PROVIDER_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT IdentityProvider : public bindings::DictionaryBase {
  
  public:
static IdentityProvider* Create() {
  return MakeGarbageCollected<IdentityProvider>();
}
static IdentityProvider* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<IdentityProvider>(isolate);
}
static IdentityProvider* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  IdentityProvider();
explicit  IdentityProvider(v8::Isolate* isolate);

bool hasClientId() const {
  return true;
}
const String& clientId() const {
  return member_client_id_;
}
void setClientId(const String& value);
void setClientId(String&& value);

bool hasConfigURL() const {
  return true;
}
const String& configURL() const {
  return member_config_url_;
}
void setConfigURL(const String& value);
void setConfigURL(String&& value);

bool hasNonce() const {
  return has_nonce_;
}
const String& nonce() const {
  DCHECK(hasNonce());
return member_nonce_;
}
String getNonceOr(const String& fallback_value) const;
String getNonceOr(String&& fallback_value) const;
void setNonce(const String& value);
void setNonce(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_nonce_ = false;

String member_client_id_;
String member_config_url_;
String member_nonce_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_IDENTITY_PROVIDER_H_
