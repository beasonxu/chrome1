// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_DELAY_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_DELAY_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT DelayOptions : public AudioNodeOptions {
  
  public:
static DelayOptions* Create() {
  return MakeGarbageCollected<DelayOptions>();
}
static DelayOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<DelayOptions>(isolate);
}
static DelayOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  DelayOptions();
explicit  DelayOptions(v8::Isolate* isolate);

bool hasDelayTime() const {
  return true;
}
double delayTime() const {
  return member_delay_time_;
}
void setDelayTime(double value) {
  member_delay_time_ = value;
}

bool hasMaxDelayTime() const {
  return true;
}
double maxDelayTime() const {
  return member_max_delay_time_;
}
void setMaxDelayTime(double value) {
  member_max_delay_time_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



double member_delay_time_{0};
double member_max_delay_time_{1};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_DELAY_OPTIONS_H_
