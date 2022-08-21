// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HID_CONNECTION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HID_CONNECTION_EVENT_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class HIDDevice;

class MODULES_EXPORT HIDConnectionEventInit : public EventInit {
  
  public:
static HIDConnectionEventInit* Create() {
  return MakeGarbageCollected<HIDConnectionEventInit>();
}
static HIDConnectionEventInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<HIDConnectionEventInit>(isolate);
}
static HIDConnectionEventInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  HIDConnectionEventInit();
explicit  HIDConnectionEventInit(v8::Isolate* isolate);

bool hasDevice() const {
  return true;
}
HIDDevice* device() const {
  return member_device_;
}
void setDevice(HIDDevice* value) {
  member_device_ = value;
DCHECK(member_device_);
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



Member<HIDDevice> member_device_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HID_CONNECTION_EVENT_INIT_H_
