// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_PUBLIC_KEY_CREDENTIAL_RP_ENTITY_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_PUBLIC_KEY_CREDENTIAL_RP_ENTITY_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_entity.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT PublicKeyCredentialRpEntity : public PublicKeyCredentialEntity {
  
  public:
static PublicKeyCredentialRpEntity* Create() {
  return MakeGarbageCollected<PublicKeyCredentialRpEntity>();
}
static PublicKeyCredentialRpEntity* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<PublicKeyCredentialRpEntity>(isolate);
}
static PublicKeyCredentialRpEntity* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  PublicKeyCredentialRpEntity();
explicit  PublicKeyCredentialRpEntity(v8::Isolate* isolate);

bool hasId() const {
  return has_id_;
}
const String& id() const {
  DCHECK(hasId());
return member_id_;
}
String getIdOr(const String& fallback_value) const;
String getIdOr(String&& fallback_value) const;
void setId(const String& value);
void setId(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_id_ = false;

String member_id_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_PUBLIC_KEY_CREDENTIAL_RP_ENTITY_H_
