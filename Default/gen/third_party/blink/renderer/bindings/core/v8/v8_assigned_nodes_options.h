// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_ASSIGNED_NODES_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_ASSIGNED_NODES_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT AssignedNodesOptions : public bindings::DictionaryBase {
  
  public:
static AssignedNodesOptions* Create() {
  return MakeGarbageCollected<AssignedNodesOptions>();
}
static AssignedNodesOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<AssignedNodesOptions>(isolate);
}
static AssignedNodesOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  AssignedNodesOptions();
explicit  AssignedNodesOptions(v8::Isolate* isolate);

bool hasFlatten() const {
  return true;
}
bool flatten() const {
  return member_flatten_;
}
void setFlatten(bool value) {
  member_flatten_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



bool member_flatten_{false};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_ASSIGNED_NODES_OPTIONS_H_
