// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SCROLL_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SCROLL_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_behavior.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT ScrollOptions : public bindings::DictionaryBase {
  
  public:
static ScrollOptions* Create() {
  return MakeGarbageCollected<ScrollOptions>();
}
static ScrollOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<ScrollOptions>(isolate);
}
static ScrollOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  ScrollOptions();
explicit  ScrollOptions(v8::Isolate* isolate);

bool hasBehavior() const {
  return true;
}
V8ScrollBehavior behavior() const {
  return member_behavior_;
}
void setBehavior(V8ScrollBehavior value) {
  member_behavior_ = value;
}
void setBehavior(V8ScrollBehavior::Enum value) {
  member_behavior_ = V8ScrollBehavior(value);
}


// Obsolete accessor functions
void setBehavior(const String& value) {
  member_behavior_ = V8ScrollBehavior::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



V8ScrollBehavior member_behavior_{V8ScrollBehavior::Enum::kAuto};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SCROLL_OPTIONS_H_
