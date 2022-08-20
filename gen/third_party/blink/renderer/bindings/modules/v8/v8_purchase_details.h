// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_PURCHASE_DETAILS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_PURCHASE_DETAILS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT PurchaseDetails : public bindings::DictionaryBase {
  
  public:
static PurchaseDetails* Create() {
  return MakeGarbageCollected<PurchaseDetails>();
}
static PurchaseDetails* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<PurchaseDetails>(isolate);
}
static PurchaseDetails* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  PurchaseDetails();
explicit  PurchaseDetails(v8::Isolate* isolate);

bool hasItemId() const {
  return true;
}
const String& itemId() const {
  return member_item_id_;
}
void setItemId(const String& value);
void setItemId(String&& value);

bool hasPurchaseToken() const {
  return true;
}
const String& purchaseToken() const {
  return member_purchase_token_;
}
void setPurchaseToken(const String& value);
void setPurchaseToken(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



String member_item_id_;
String member_purchase_token_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_PURCHASE_DETAILS_H_
