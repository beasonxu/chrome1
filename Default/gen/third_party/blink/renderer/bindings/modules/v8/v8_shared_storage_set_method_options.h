// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SHARED_STORAGE_SET_METHOD_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SHARED_STORAGE_SET_METHOD_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT SharedStorageSetMethodOptions : public bindings::DictionaryBase {
  
  public:
static SharedStorageSetMethodOptions* Create() {
  return MakeGarbageCollected<SharedStorageSetMethodOptions>();
}
static SharedStorageSetMethodOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<SharedStorageSetMethodOptions>(isolate);
}
static SharedStorageSetMethodOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  SharedStorageSetMethodOptions();
explicit  SharedStorageSetMethodOptions(v8::Isolate* isolate);

bool hasIgnoreIfPresent() const {
  return has_ignore_if_present_;
}
bool ignoreIfPresent() const {
  DCHECK(hasIgnoreIfPresent());
return member_ignore_if_present_;
}
bool getIgnoreIfPresentOr(bool fallback_value) const {
  if (!hasIgnoreIfPresent()) {
  return fallback_value;
}
return member_ignore_if_present_;
}
void setIgnoreIfPresent(bool value) {
  member_ignore_if_present_ = value;
has_ignore_if_present_ = true;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_ignore_if_present_ = false;

bool member_ignore_if_present_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SHARED_STORAGE_SET_METHOD_OPTIONS_H_
