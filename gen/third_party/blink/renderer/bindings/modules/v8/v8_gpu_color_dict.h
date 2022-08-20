// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_COLOR_DICT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_COLOR_DICT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT GPUColorDict : public bindings::DictionaryBase {
  
  public:
static GPUColorDict* Create() {
  return MakeGarbageCollected<GPUColorDict>();
}
static GPUColorDict* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<GPUColorDict>(isolate);
}
static GPUColorDict* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  GPUColorDict();
explicit  GPUColorDict(v8::Isolate* isolate);

bool hasA() const {
  return true;
}
double a() const {
  return member_a_;
}
void setA(double value) {
  member_a_ = value;
}

bool hasB() const {
  return true;
}
double b() const {
  return member_b_;
}
void setB(double value) {
  member_b_ = value;
}

bool hasG() const {
  return true;
}
double g() const {
  return member_g_;
}
void setG(double value) {
  member_g_ = value;
}

bool hasR() const {
  return true;
}
double r() const {
  return member_r_;
}
void setR(double value) {
  member_r_ = value;
}




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



double member_a_;
double member_b_;
double member_g_;
double member_r_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_COLOR_DICT_H_
