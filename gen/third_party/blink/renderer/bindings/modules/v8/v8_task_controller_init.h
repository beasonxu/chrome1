// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_TASK_CONTROLLER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_TASK_CONTROLLER_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_task_priority.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT TaskControllerInit : public bindings::DictionaryBase {
  
  public:
static TaskControllerInit* Create() {
  return MakeGarbageCollected<TaskControllerInit>();
}
static TaskControllerInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<TaskControllerInit>(isolate);
}
static TaskControllerInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  TaskControllerInit();
explicit  TaskControllerInit(v8::Isolate* isolate);

bool hasPriority() const {
  return true;
}
V8TaskPriority priority() const {
  return member_priority_;
}
void setPriority(V8TaskPriority value) {
  member_priority_ = value;
}
void setPriority(V8TaskPriority::Enum value) {
  member_priority_ = V8TaskPriority(value);
}


// Obsolete accessor functions
void setPriority(const String& value) {
  member_priority_ = V8TaskPriority::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



V8TaskPriority member_priority_{V8TaskPriority::Enum::kUserVisible};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_TASK_CONTROLLER_INIT_H_
