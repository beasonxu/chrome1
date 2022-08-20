// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATION_RESULT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATION_RESULT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class NavigationHistoryEntry;

class CORE_EXPORT NavigationResult : public bindings::DictionaryBase {
  
  public:
static NavigationResult* Create() {
  return MakeGarbageCollected<NavigationResult>();
}
static NavigationResult* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<NavigationResult>(isolate);
}
static NavigationResult* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  NavigationResult();
explicit  NavigationResult(v8::Isolate* isolate);

bool hasCommitted() const {
  return !member_committed_.IsEmpty();
}
const ScriptPromise& committed() const {
  DCHECK(hasCommitted());
return member_committed_;
}
ScriptPromise getCommittedOr(const ScriptPromise& fallback_value) const {
  if (!hasCommitted()) {
  return fallback_value;
}
return member_committed_;
}
void setCommitted(const ScriptPromise& value) {
  member_committed_ = value;
}

bool hasFinished() const {
  return !member_finished_.IsEmpty();
}
const ScriptPromise& finished() const {
  DCHECK(hasFinished());
return member_finished_;
}
ScriptPromise getFinishedOr(const ScriptPromise& fallback_value) const {
  if (!hasFinished()) {
  return fallback_value;
}
return member_finished_;
}
void setFinished(const ScriptPromise& value) {
  member_finished_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



ScriptPromise member_committed_;
ScriptPromise member_finished_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATION_RESULT_H_
