// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_MIDI_PERMISSION_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_MIDI_PERMISSION_DESCRIPTOR_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_descriptor.h"
#include "third_party/blink/renderer/modules/modules_export.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT MidiPermissionDescriptor : public PermissionDescriptor {
  
  public:
static MidiPermissionDescriptor* Create() {
  return MakeGarbageCollected<MidiPermissionDescriptor>();
}
static MidiPermissionDescriptor* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<MidiPermissionDescriptor>(isolate);
}
static MidiPermissionDescriptor* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  MidiPermissionDescriptor();
explicit  MidiPermissionDescriptor(v8::Isolate* isolate);

bool hasSysex() const {
  return true;
}
bool sysex() const {
  return member_sysex_;
}
void setSysex(bool value) {
  member_sysex_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



bool member_sysex_{false};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_MIDI_PERMISSION_DESCRIPTOR_H_
