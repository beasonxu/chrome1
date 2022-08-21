// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CONTACT_INFO_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CONTACT_INFO_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Blob;
class ContactAddress;
class ExceptionState;

class MODULES_EXPORT ContactInfo : public bindings::DictionaryBase {
  
  public:
static ContactInfo* Create() {
  return MakeGarbageCollected<ContactInfo>();
}
static ContactInfo* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<ContactInfo>(isolate);
}
static ContactInfo* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  ContactInfo();
explicit  ContactInfo(v8::Isolate* isolate);

bool hasAddress() const {
  return has_address_;
}
const HeapVector<Member<ContactAddress>>& address() const {
  DCHECK(hasAddress());
return member_address_;
}
HeapVector<Member<ContactAddress>> getAddressOr(const HeapVector<Member<ContactAddress>>& fallback_value) const;
HeapVector<Member<ContactAddress>> getAddressOr(HeapVector<Member<ContactAddress>>&& fallback_value) const;
void setAddress(const HeapVector<Member<ContactAddress>>& value);
void setAddress(HeapVector<Member<ContactAddress>>&& value);

bool hasEmail() const {
  return has_email_;
}
const Vector<String>& email() const {
  DCHECK(hasEmail());
return member_email_;
}
Vector<String> getEmailOr(const Vector<String>& fallback_value) const;
Vector<String> getEmailOr(Vector<String>&& fallback_value) const;
void setEmail(const Vector<String>& value);
void setEmail(Vector<String>&& value);

bool hasIcon() const {
  return has_icon_;
}
const HeapVector<Member<Blob>>& icon() const {
  DCHECK(hasIcon());
return member_icon_;
}
HeapVector<Member<Blob>> getIconOr(const HeapVector<Member<Blob>>& fallback_value) const;
HeapVector<Member<Blob>> getIconOr(HeapVector<Member<Blob>>&& fallback_value) const;
void setIcon(const HeapVector<Member<Blob>>& value);
void setIcon(HeapVector<Member<Blob>>&& value);

bool hasName() const {
  return has_name_;
}
const Vector<String>& name() const {
  DCHECK(hasName());
return member_name_;
}
Vector<String> getNameOr(const Vector<String>& fallback_value) const;
Vector<String> getNameOr(Vector<String>&& fallback_value) const;
void setName(const Vector<String>& value);
void setName(Vector<String>&& value);

bool hasTel() const {
  return has_tel_;
}
const Vector<String>& tel() const {
  DCHECK(hasTel());
return member_tel_;
}
Vector<String> getTelOr(const Vector<String>& fallback_value) const;
Vector<String> getTelOr(Vector<String>&& fallback_value) const;
void setTel(const Vector<String>& value);
void setTel(Vector<String>&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_address_ = false;
bool has_email_ = false;
bool has_icon_ = false;
bool has_name_ = false;
bool has_tel_ = false;

HeapVector<Member<ContactAddress>> member_address_;
Vector<String> member_email_;
HeapVector<Member<Blob>> member_icon_;
Vector<String> member_name_;
Vector<String> member_tel_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CONTACT_INFO_H_
