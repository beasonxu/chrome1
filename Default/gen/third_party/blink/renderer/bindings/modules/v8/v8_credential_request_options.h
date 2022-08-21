// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CREDENTIAL_REQUEST_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CREDENTIAL_REQUEST_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_mediation_requirement.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class AbortSignal;
class ExceptionState;
class FederatedCredentialRequestOptions;
class IdentityCredentialRequestOptions;
class OTPCredentialRequestOptions;
class PublicKeyCredentialRequestOptions;

class MODULES_EXPORT CredentialRequestOptions : public bindings::DictionaryBase {
  
  public:
static CredentialRequestOptions* Create() {
  return MakeGarbageCollected<CredentialRequestOptions>();
}
static CredentialRequestOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<CredentialRequestOptions>(isolate);
}
static CredentialRequestOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  CredentialRequestOptions();
explicit  CredentialRequestOptions(v8::Isolate* isolate);

bool hasFederated() const {
  return has_federated_;
}
FederatedCredentialRequestOptions* federated() const {
  DCHECK(hasFederated());
return member_federated_;
}
FederatedCredentialRequestOptions* getFederatedOr(FederatedCredentialRequestOptions* fallback_value) const {
  if (!hasFederated()) {
  return fallback_value;
}
return member_federated_;
}
void setFederated(FederatedCredentialRequestOptions* value) {
  member_federated_ = value;
has_federated_ = true;
DCHECK(member_federated_);
}

bool hasIdentity() const {
  return has_identity_;
}
IdentityCredentialRequestOptions* identity() const {
  DCHECK(hasIdentity());
return member_identity_;
}
IdentityCredentialRequestOptions* getIdentityOr(IdentityCredentialRequestOptions* fallback_value) const {
  if (!hasIdentity()) {
  return fallback_value;
}
return member_identity_;
}
void setIdentity(IdentityCredentialRequestOptions* value) {
  member_identity_ = value;
has_identity_ = true;
DCHECK(member_identity_);
}

bool hasMediation() const {
  return true;
}
V8CredentialMediationRequirement mediation() const {
  return member_mediation_;
}
void setMediation(V8CredentialMediationRequirement value) {
  member_mediation_ = value;
}
void setMediation(V8CredentialMediationRequirement::Enum value) {
  member_mediation_ = V8CredentialMediationRequirement(value);
}

bool hasOtp() const {
  return has_otp_;
}
OTPCredentialRequestOptions* otp() const {
  DCHECK(hasOtp());
return member_otp_;
}
OTPCredentialRequestOptions* getOtpOr(OTPCredentialRequestOptions* fallback_value) const {
  if (!hasOtp()) {
  return fallback_value;
}
return member_otp_;
}
void setOtp(OTPCredentialRequestOptions* value) {
  member_otp_ = value;
has_otp_ = true;
DCHECK(member_otp_);
}

bool hasPassword() const {
  return true;
}
bool password() const {
  return member_password_;
}
void setPassword(bool value) {
  member_password_ = value;
}

bool hasPublicKey() const {
  return has_public_key_;
}
PublicKeyCredentialRequestOptions* publicKey() const {
  DCHECK(hasPublicKey());
return member_public_key_;
}
PublicKeyCredentialRequestOptions* getPublicKeyOr(PublicKeyCredentialRequestOptions* fallback_value) const {
  if (!hasPublicKey()) {
  return fallback_value;
}
return member_public_key_;
}
void setPublicKey(PublicKeyCredentialRequestOptions* value) {
  member_public_key_ = value;
has_public_key_ = true;
DCHECK(member_public_key_);
}

bool hasSignal() const {
  return has_signal_;
}
AbortSignal* signal() const {
  DCHECK(hasSignal());
return member_signal_;
}
AbortSignal* getSignalOr(AbortSignal* fallback_value) const {
  if (!hasSignal()) {
  return fallback_value;
}
return member_signal_;
}
void setSignal(AbortSignal* value) {
  member_signal_ = value;
has_signal_ = true;
DCHECK(member_signal_);
}


// Obsolete accessor functions
void setMediation(const String& value) {
  member_mediation_ = V8CredentialMediationRequirement::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_federated_ = false;
bool has_identity_ = false;
bool has_otp_ = false;
bool has_public_key_ = false;
bool has_signal_ = false;

Member<FederatedCredentialRequestOptions> member_federated_;
Member<IdentityCredentialRequestOptions> member_identity_;
V8CredentialMediationRequirement member_mediation_{V8CredentialMediationRequirement::Enum::kOptional};
Member<OTPCredentialRequestOptions> member_otp_;
bool member_password_{false};
Member<PublicKeyCredentialRequestOptions> member_public_key_;
Member<AbortSignal> member_signal_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CREDENTIAL_REQUEST_OPTIONS_H_
