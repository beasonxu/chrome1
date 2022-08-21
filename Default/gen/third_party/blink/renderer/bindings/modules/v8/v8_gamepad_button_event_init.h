// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GAMEPAD_BUTTON_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GAMEPAD_BUTTON_EVENT_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT GamepadButtonEventInit : public GamepadEventInit {
  
  public:
static GamepadButtonEventInit* Create() {
  return MakeGarbageCollected<GamepadButtonEventInit>();
}
static GamepadButtonEventInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<GamepadButtonEventInit>(isolate);
}
static GamepadButtonEventInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  GamepadButtonEventInit();
explicit  GamepadButtonEventInit(v8::Isolate* isolate);

bool hasButton() const {
  return has_button_;
}
uint32_t button() const {
  DCHECK(hasButton());
return member_button_;
}
uint32_t getButtonOr(uint32_t fallback_value) const {
  if (!hasButton()) {
  return fallback_value;
}
return member_button_;
}
void setButton(uint32_t value) {
  member_button_ = value;
has_button_ = true;
}

bool hasValue() const {
  return has_value_;
}
double value() const {
  DCHECK(hasValue());
return member_value_;
}
double getValueOr(double fallback_value) const {
  if (!hasValue()) {
  return fallback_value;
}
return member_value_;
}
void setValue(double value) {
  member_value_ = value;
has_value_ = true;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_button_ = false;
bool has_value_ = false;

uint32_t member_button_;
double member_value_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GAMEPAD_BUTTON_EVENT_INIT_H_
