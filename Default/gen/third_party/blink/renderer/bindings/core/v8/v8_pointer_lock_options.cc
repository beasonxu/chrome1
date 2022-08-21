// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_lock_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



PointerLockOptions* PointerLockOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  PointerLockOptions* dictionary = MakeGarbageCollected<PointerLockOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "PointerLockOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 PointerLockOptions::PointerLockOptions() {
  
}

 PointerLockOptions::PointerLockOptions(v8::Isolate* isolate) {
  
}








void PointerLockOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<bool>::Trace(visitor, member_unadjusted_movement_);
bindings::DictionaryBase::Trace(visitor);
}

bool PointerLockOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* execution_context = ExecutionContext::From(current_context);
if (RuntimeEnabledFeatures::PointerLockOptionsEnabled(execution_context)) {
  if (hasUnadjustedMovement()) {
  v8::Local<v8::Value> v8_value;
if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_unadjusted_movement_).ToLocal(&v8_value)) {
  return false;
}
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
}
return true;
}

void PointerLockOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* execution_context = ExecutionContext::From(current_context);
if (RuntimeEnabledFeatures::PointerLockOptionsEnabled(execution_context)) {
  const char* const class_like_name = "PointerLockOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("unadjustedMovement");
constexpr bool is_optional = false;
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_unadjusted_movement_, try_block, exception_state)) {
  return;
}
}
}

const base::span<const v8::Eternal<v8::Name>> PointerLockOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"unadjustedMovement",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
