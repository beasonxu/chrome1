// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GOOG_MEDIA_CONSTRAINTS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GOOG_MEDIA_CONSTRAINTS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ExceptionState;
class GoogMediaConstraintsSet;

class MODULES_EXPORT GoogMediaConstraints : public bindings::DictionaryBase {
  
  public:
static GoogMediaConstraints* Create() {
  return MakeGarbageCollected<GoogMediaConstraints>();
}
static GoogMediaConstraints* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<GoogMediaConstraints>(isolate);
}
static GoogMediaConstraints* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  GoogMediaConstraints();
explicit  GoogMediaConstraints(v8::Isolate* isolate);

bool hasMandatory() const {
  return has_mandatory_;
}
GoogMediaConstraintsSet* mandatory() const {
  DCHECK(hasMandatory());
return member_mandatory_;
}
GoogMediaConstraintsSet* getMandatoryOr(GoogMediaConstraintsSet* fallback_value) const {
  if (!hasMandatory()) {
  return fallback_value;
}
return member_mandatory_;
}
void setMandatory(GoogMediaConstraintsSet* value) {
  member_mandatory_ = value;
has_mandatory_ = true;
DCHECK(member_mandatory_);
}

bool hasOptional() const {
  return has_optional_;
}
const HeapVector<Member<GoogMediaConstraintsSet>>& optional() const {
  DCHECK(hasOptional());
return member_optional_;
}
HeapVector<Member<GoogMediaConstraintsSet>> getOptionalOr(const HeapVector<Member<GoogMediaConstraintsSet>>& fallback_value) const;
HeapVector<Member<GoogMediaConstraintsSet>> getOptionalOr(HeapVector<Member<GoogMediaConstraintsSet>>&& fallback_value) const;
void setOptional(const HeapVector<Member<GoogMediaConstraintsSet>>& value);
void setOptional(HeapVector<Member<GoogMediaConstraintsSet>>&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_mandatory_ = false;
bool has_optional_ = false;

Member<GoogMediaConstraintsSet> member_mandatory_;
HeapVector<Member<GoogMediaConstraintsSet>> member_optional_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GOOG_MEDIA_CONSTRAINTS_H_
