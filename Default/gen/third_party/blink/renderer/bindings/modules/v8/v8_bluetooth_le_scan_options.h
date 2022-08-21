// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BLUETOOTH_LE_SCAN_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BLUETOOTH_LE_SCAN_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class BluetoothLEScanFilterInit;
class ExceptionState;

class MODULES_EXPORT BluetoothLEScanOptions : public bindings::DictionaryBase {
  
  public:
static BluetoothLEScanOptions* Create() {
  return MakeGarbageCollected<BluetoothLEScanOptions>();
}
static BluetoothLEScanOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<BluetoothLEScanOptions>(isolate);
}
static BluetoothLEScanOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  BluetoothLEScanOptions();
explicit  BluetoothLEScanOptions(v8::Isolate* isolate);

bool hasAcceptAllAdvertisements() const {
  return true;
}
bool acceptAllAdvertisements() const {
  return member_accept_all_advertisements_;
}
void setAcceptAllAdvertisements(bool value) {
  member_accept_all_advertisements_ = value;
}

bool hasFilters() const {
  return has_filters_;
}
const HeapVector<Member<BluetoothLEScanFilterInit>>& filters() const {
  DCHECK(hasFilters());
return member_filters_;
}
HeapVector<Member<BluetoothLEScanFilterInit>> getFiltersOr(const HeapVector<Member<BluetoothLEScanFilterInit>>& fallback_value) const;
HeapVector<Member<BluetoothLEScanFilterInit>> getFiltersOr(HeapVector<Member<BluetoothLEScanFilterInit>>&& fallback_value) const;
void setFilters(const HeapVector<Member<BluetoothLEScanFilterInit>>& value);
void setFilters(HeapVector<Member<BluetoothLEScanFilterInit>>&& value);

bool hasKeepRepeatedDevices() const {
  return true;
}
bool keepRepeatedDevices() const {
  return member_keep_repeated_devices_;
}
void setKeepRepeatedDevices(bool value) {
  member_keep_repeated_devices_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_filters_ = false;

bool member_accept_all_advertisements_{false};
HeapVector<Member<BluetoothLEScanFilterInit>> member_filters_;
bool member_keep_repeated_devices_{false};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BLUETOOTH_LE_SCAN_OPTIONS_H_
