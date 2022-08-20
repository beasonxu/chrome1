// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TRUST_TOKEN_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TRUST_TOKEN_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_operation_type.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_refresh_policy.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_sign_request_data.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT TrustToken : public bindings::DictionaryBase {
  
  public:
static TrustToken* Create() {
  return MakeGarbageCollected<TrustToken>();
}
static TrustToken* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<TrustToken>(isolate);
}
static TrustToken* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  TrustToken();
explicit  TrustToken(v8::Isolate* isolate);

bool hasAdditionalSignedHeaders() const {
  return has_additional_signed_headers_;
}
const Vector<String>& additionalSignedHeaders() const {
  DCHECK(hasAdditionalSignedHeaders());
return member_additional_signed_headers_;
}
Vector<String> getAdditionalSignedHeadersOr(const Vector<String>& fallback_value) const;
Vector<String> getAdditionalSignedHeadersOr(Vector<String>&& fallback_value) const;
void setAdditionalSignedHeaders(const Vector<String>& value);
void setAdditionalSignedHeaders(Vector<String>&& value);

bool hasAdditionalSigningData() const {
  return has_additional_signing_data_;
}
const String& additionalSigningData() const {
  DCHECK(hasAdditionalSigningData());
return member_additional_signing_data_;
}
String getAdditionalSigningDataOr(const String& fallback_value) const;
String getAdditionalSigningDataOr(String&& fallback_value) const;
void setAdditionalSigningData(const String& value);
void setAdditionalSigningData(String&& value);

bool hasIncludeTimestampHeader() const {
  return true;
}
bool includeTimestampHeader() const {
  return member_include_timestamp_header_;
}
void setIncludeTimestampHeader(bool value) {
  member_include_timestamp_header_ = value;
}

bool hasIssuers() const {
  return has_issuers_;
}
const Vector<String>& issuers() const {
  DCHECK(hasIssuers());
return member_issuers_;
}
Vector<String> getIssuersOr(const Vector<String>& fallback_value) const;
Vector<String> getIssuersOr(Vector<String>&& fallback_value) const;
void setIssuers(const Vector<String>& value);
void setIssuers(Vector<String>&& value);

bool hasRefreshPolicy() const {
  return true;
}
V8RefreshPolicy refreshPolicy() const {
  return member_refresh_policy_;
}
void setRefreshPolicy(V8RefreshPolicy value) {
  member_refresh_policy_ = value;
}
void setRefreshPolicy(V8RefreshPolicy::Enum value) {
  member_refresh_policy_ = V8RefreshPolicy(value);
}

bool hasSignRequestData() const {
  return true;
}
V8SignRequestData signRequestData() const {
  return member_sign_request_data_;
}
void setSignRequestData(V8SignRequestData value) {
  member_sign_request_data_ = value;
}
void setSignRequestData(V8SignRequestData::Enum value) {
  member_sign_request_data_ = V8SignRequestData(value);
}

bool hasType() const {
  return true;
}
V8OperationType type() const {
  return member_type_;
}
void setType(V8OperationType value) {
  member_type_ = value;
}
void setType(V8OperationType::Enum value) {
  member_type_ = V8OperationType(value);
}


// Obsolete accessor functions
void setRefreshPolicy(const String& value) {
  member_refresh_policy_ = V8RefreshPolicy::Create(value).value();
}
void setSignRequestData(const String& value) {
  member_sign_request_data_ = V8SignRequestData::Create(value).value();
}
void setType(const String& value) {
  member_type_ = V8OperationType::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_additional_signed_headers_ = false;
bool has_additional_signing_data_ = false;
bool has_issuers_ = false;

Vector<String> member_additional_signed_headers_;
String member_additional_signing_data_;
bool member_include_timestamp_header_{false};
Vector<String> member_issuers_;
V8RefreshPolicy member_refresh_policy_{V8RefreshPolicy::Enum::kNone};
V8SignRequestData member_sign_request_data_{V8SignRequestData::Enum::kOmit};
V8OperationType member_type_{static_cast<V8OperationType::Enum>(0)};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TRUST_TOKEN_H_
