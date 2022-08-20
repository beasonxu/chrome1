// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HID_REPORT_INFO_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HID_REPORT_INFO_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class HIDReportItem;

class MODULES_EXPORT HIDReportInfo : public bindings::DictionaryBase {
  
  public:
static HIDReportInfo* Create() {
  return MakeGarbageCollected<HIDReportInfo>();
}
static HIDReportInfo* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<HIDReportInfo>(isolate);
}
static HIDReportInfo* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  HIDReportInfo();
explicit  HIDReportInfo(v8::Isolate* isolate);

bool hasItems() const {
  return has_items_;
}
const HeapVector<Member<HIDReportItem>>& items() const {
  DCHECK(hasItems());
return member_items_;
}
HeapVector<Member<HIDReportItem>> getItemsOr(const HeapVector<Member<HIDReportItem>>& fallback_value) const;
HeapVector<Member<HIDReportItem>> getItemsOr(HeapVector<Member<HIDReportItem>>&& fallback_value) const;
void setItems(const HeapVector<Member<HIDReportItem>>& value);
void setItems(HeapVector<Member<HIDReportItem>>&& value);

bool hasReportId() const {
  return has_report_id_;
}
uint8_t reportId() const {
  DCHECK(hasReportId());
return member_report_id_;
}
uint8_t getReportIdOr(uint8_t fallback_value) const {
  if (!hasReportId()) {
  return fallback_value;
}
return member_report_id_;
}
void setReportId(uint8_t value) {
  member_report_id_ = value;
has_report_id_ = true;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_items_ = false;
bool has_report_id_ = false;

HeapVector<Member<HIDReportItem>> member_items_;
uint8_t member_report_id_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HID_REPORT_INFO_H_
