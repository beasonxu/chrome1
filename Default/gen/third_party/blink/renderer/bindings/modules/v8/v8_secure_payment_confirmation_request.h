// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SECURE_PAYMENT_CONFIRMATION_REQUEST_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SECURE_PAYMENT_CONFIRMATION_REQUEST_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_secure_payment_confirmation_action.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;
class PaymentCredentialInstrument;
class V8UnionArrayBufferOrArrayBufferView;

class MODULES_EXPORT SecurePaymentConfirmationRequest : public bindings::DictionaryBase {
  
  public:
static SecurePaymentConfirmationRequest* Create() {
  return MakeGarbageCollected<SecurePaymentConfirmationRequest>();
}
static SecurePaymentConfirmationRequest* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<SecurePaymentConfirmationRequest>(isolate);
}
static SecurePaymentConfirmationRequest* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  SecurePaymentConfirmationRequest();
explicit  SecurePaymentConfirmationRequest(v8::Isolate* isolate);

bool hasAction() const {
  return has_action_;
}
V8SecurePaymentConfirmationAction action() const {
  DCHECK(hasAction());
return member_action_;
}
V8SecurePaymentConfirmationAction getActionOr(V8SecurePaymentConfirmationAction fallback_value) const {
  if (!hasAction()) {
  return fallback_value;
}
return member_action_;
}
void setAction(V8SecurePaymentConfirmationAction value) {
  member_action_ = value;
has_action_ = true;
}
void setAction(V8SecurePaymentConfirmationAction::Enum value) {
  member_action_ = V8SecurePaymentConfirmationAction(value);
has_action_ = true;
}

bool hasChallenge() const {
  return true;
}
V8UnionArrayBufferOrArrayBufferView* challenge() const {
  return member_challenge_;
}
void setChallenge(V8UnionArrayBufferOrArrayBufferView* value) {
  member_challenge_ = value;
DCHECK(member_challenge_);
}

bool hasCredentialIds() const {
  return true;
}
const HeapVector<Member<V8UnionArrayBufferOrArrayBufferView>>& credentialIds() const {
  return member_credential_ids_;
}
void setCredentialIds(const HeapVector<Member<V8UnionArrayBufferOrArrayBufferView>>& value);
void setCredentialIds(HeapVector<Member<V8UnionArrayBufferOrArrayBufferView>>&& value);

bool hasInstrument() const {
  return true;
}
PaymentCredentialInstrument* instrument() const {
  return member_instrument_;
}
void setInstrument(PaymentCredentialInstrument* value) {
  member_instrument_ = value;
DCHECK(member_instrument_);
}

bool hasPayeeName() const {
  return has_payee_name_;
}
const String& payeeName() const {
  DCHECK(hasPayeeName());
return member_payee_name_;
}
String getPayeeNameOr(const String& fallback_value) const;
String getPayeeNameOr(String&& fallback_value) const;
void setPayeeName(const String& value);
void setPayeeName(String&& value);

bool hasPayeeOrigin() const {
  return has_payee_origin_;
}
const String& payeeOrigin() const {
  DCHECK(hasPayeeOrigin());
return member_payee_origin_;
}
String getPayeeOriginOr(const String& fallback_value) const;
String getPayeeOriginOr(String&& fallback_value) const;
void setPayeeOrigin(const String& value);
void setPayeeOrigin(String&& value);

bool hasRpId() const {
  return true;
}
const String& rpId() const {
  return member_rp_id_;
}
void setRpId(const String& value);
void setRpId(String&& value);

bool hasShowOptOut() const {
  return has_show_opt_out_;
}
bool showOptOut() const {
  DCHECK(hasShowOptOut());
return member_show_opt_out_;
}
bool getShowOptOutOr(bool fallback_value) const {
  if (!hasShowOptOut()) {
  return fallback_value;
}
return member_show_opt_out_;
}
void setShowOptOut(bool value) {
  member_show_opt_out_ = value;
has_show_opt_out_ = true;
}

bool hasTimeout() const {
  return has_timeout_;
}
uint32_t timeout() const {
  DCHECK(hasTimeout());
return member_timeout_;
}
uint32_t getTimeoutOr(uint32_t fallback_value) const {
  if (!hasTimeout()) {
  return fallback_value;
}
return member_timeout_;
}
void setTimeout(uint32_t value) {
  member_timeout_ = value;
has_timeout_ = true;
}


// Obsolete accessor functions
void setAction(const String& value) {
  member_action_ = V8SecurePaymentConfirmationAction::Create(value).value();
has_action_ = true;
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_action_ = false;
bool has_payee_name_ = false;
bool has_payee_origin_ = false;
bool has_show_opt_out_ = false;
bool has_timeout_ = false;

V8SecurePaymentConfirmationAction member_action_{static_cast<V8SecurePaymentConfirmationAction::Enum>(0)};
Member<V8UnionArrayBufferOrArrayBufferView> member_challenge_;
HeapVector<Member<V8UnionArrayBufferOrArrayBufferView>> member_credential_ids_;
Member<PaymentCredentialInstrument> member_instrument_;
String member_payee_name_;
String member_payee_origin_;
String member_rp_id_;
bool member_show_opt_out_;
uint32_t member_timeout_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SECURE_PAYMENT_CONFIRMATION_REQUEST_H_
