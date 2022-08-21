// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_MEMORY_ATTRIBUTION_CONTAINER_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_MEMORY_ATTRIBUTION_CONTAINER_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT MemoryAttributionContainer : public bindings::DictionaryBase {
  
  public:
static MemoryAttributionContainer* Create() {
  return MakeGarbageCollected<MemoryAttributionContainer>();
}
static MemoryAttributionContainer* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<MemoryAttributionContainer>(isolate);
}
static MemoryAttributionContainer* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  MemoryAttributionContainer();
explicit  MemoryAttributionContainer(v8::Isolate* isolate);

bool hasId() const {
  return has_id_;
}
const String& id() const {
  DCHECK(hasId());
return member_id_;
}
String getIdOr(const String& fallback_value) const;
String getIdOr(String&& fallback_value) const;
void setId(const String& value);
void setId(String&& value);

bool hasSrc() const {
  return has_src_;
}
const String& src() const {
  DCHECK(hasSrc());
return member_src_;
}
String getSrcOr(const String& fallback_value) const;
String getSrcOr(String&& fallback_value) const;
void setSrc(const String& value);
void setSrc(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_id_ = false;
bool has_src_ = false;

String member_id_;
String member_src_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_MEMORY_ATTRIBUTION_CONTAINER_H_
