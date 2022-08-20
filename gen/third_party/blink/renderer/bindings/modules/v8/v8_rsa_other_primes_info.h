// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_RSA_OTHER_PRIMES_INFO_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_RSA_OTHER_PRIMES_INFO_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT RsaOtherPrimesInfo : public bindings::DictionaryBase {
  
  public:
static RsaOtherPrimesInfo* Create() {
  return MakeGarbageCollected<RsaOtherPrimesInfo>();
}
static RsaOtherPrimesInfo* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<RsaOtherPrimesInfo>(isolate);
}
static RsaOtherPrimesInfo* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  RsaOtherPrimesInfo();
explicit  RsaOtherPrimesInfo(v8::Isolate* isolate);

bool hasD() const {
  return has_d_;
}
const String& d() const {
  DCHECK(hasD());
return member_d_;
}
String getDOr(const String& fallback_value) const;
String getDOr(String&& fallback_value) const;
void setD(const String& value);
void setD(String&& value);

bool hasR() const {
  return has_r_;
}
const String& r() const {
  DCHECK(hasR());
return member_r_;
}
String getROr(const String& fallback_value) const;
String getROr(String&& fallback_value) const;
void setR(const String& value);
void setR(String&& value);

bool hasT() const {
  return has_t_;
}
const String& t() const {
  DCHECK(hasT());
return member_t_;
}
String getTOr(const String& fallback_value) const;
String getTOr(String&& fallback_value) const;
void setT(const String& value);
void setT(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_d_ = false;
bool has_r_ = false;
bool has_t_ = false;

String member_d_;
String member_r_;
String member_t_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_RSA_OTHER_PRIMES_INFO_H_
