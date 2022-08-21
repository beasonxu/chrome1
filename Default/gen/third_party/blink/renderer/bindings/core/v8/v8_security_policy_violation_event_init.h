// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SECURITY_POLICY_VIOLATION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SECURITY_POLICY_VIOLATION_EVENT_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event_disposition.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT SecurityPolicyViolationEventInit : public EventInit {
  
  public:
static SecurityPolicyViolationEventInit* Create() {
  return MakeGarbageCollected<SecurityPolicyViolationEventInit>();
}
static SecurityPolicyViolationEventInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<SecurityPolicyViolationEventInit>(isolate);
}
static SecurityPolicyViolationEventInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  SecurityPolicyViolationEventInit();
explicit  SecurityPolicyViolationEventInit(v8::Isolate* isolate);

bool hasBlockedURI() const {
  return true;
}
const String& blockedURI() const {
  return member_blocked_uri_;
}
void setBlockedURI(const String& value);
void setBlockedURI(String&& value);

bool hasColumnNumber() const {
  return true;
}
int32_t columnNumber() const {
  return member_column_number_;
}
void setColumnNumber(int32_t value) {
  member_column_number_ = value;
}

bool hasDisposition() const {
  return true;
}
V8SecurityPolicyViolationEventDisposition disposition() const {
  return member_disposition_;
}
void setDisposition(V8SecurityPolicyViolationEventDisposition value) {
  member_disposition_ = value;
}
void setDisposition(V8SecurityPolicyViolationEventDisposition::Enum value) {
  member_disposition_ = V8SecurityPolicyViolationEventDisposition(value);
}

bool hasDocumentURI() const {
  return true;
}
const String& documentURI() const {
  return member_document_uri_;
}
void setDocumentURI(const String& value);
void setDocumentURI(String&& value);

bool hasEffectiveDirective() const {
  return true;
}
const String& effectiveDirective() const {
  return member_effective_directive_;
}
void setEffectiveDirective(const String& value);
void setEffectiveDirective(String&& value);

bool hasLineNumber() const {
  return true;
}
int32_t lineNumber() const {
  return member_line_number_;
}
void setLineNumber(int32_t value) {
  member_line_number_ = value;
}

bool hasOriginalPolicy() const {
  return true;
}
const String& originalPolicy() const {
  return member_original_policy_;
}
void setOriginalPolicy(const String& value);
void setOriginalPolicy(String&& value);

bool hasReferrer() const {
  return true;
}
const String& referrer() const {
  return member_referrer_;
}
void setReferrer(const String& value);
void setReferrer(String&& value);

bool hasSample() const {
  return true;
}
const String& sample() const {
  return member_sample_;
}
void setSample(const String& value);
void setSample(String&& value);

bool hasSourceFile() const {
  return true;
}
const String& sourceFile() const {
  return member_source_file_;
}
void setSourceFile(const String& value);
void setSourceFile(String&& value);

bool hasStatusCode() const {
  return true;
}
uint16_t statusCode() const {
  return member_status_code_;
}
void setStatusCode(uint16_t value) {
  member_status_code_ = value;
}

bool hasViolatedDirective() const {
  return true;
}
const String& violatedDirective() const {
  return member_violated_directive_;
}
void setViolatedDirective(const String& value);
void setViolatedDirective(String&& value);


// Obsolete accessor functions
void setDisposition(const String& value) {
  member_disposition_ = V8SecurityPolicyViolationEventDisposition::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



String member_blocked_uri_{""};
int32_t member_column_number_{0};
V8SecurityPolicyViolationEventDisposition member_disposition_{static_cast<V8SecurityPolicyViolationEventDisposition::Enum>(0)};
String member_document_uri_;
String member_effective_directive_;
int32_t member_line_number_{0};
String member_original_policy_;
String member_referrer_{""};
String member_sample_{""};
String member_source_file_{""};
uint16_t member_status_code_;
String member_violated_directive_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SECURITY_POLICY_VIOLATION_EVENT_INIT_H_
