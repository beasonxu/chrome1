// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_large_blob_outputs.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



AuthenticationExtensionsLargeBlobOutputs* AuthenticationExtensionsLargeBlobOutputs::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  AuthenticationExtensionsLargeBlobOutputs* dictionary = MakeGarbageCollected<AuthenticationExtensionsLargeBlobOutputs>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "AuthenticationExtensionsLargeBlobOutputs";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 AuthenticationExtensionsLargeBlobOutputs::AuthenticationExtensionsLargeBlobOutputs() {
  
}

 AuthenticationExtensionsLargeBlobOutputs::AuthenticationExtensionsLargeBlobOutputs(v8::Isolate* isolate) {
  
}
























void AuthenticationExtensionsLargeBlobOutputs::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<DOMArrayBuffer>>::Trace(visitor, member_blob_);
TraceIfNeeded<bool>::Trace(visitor, member_supported_);
TraceIfNeeded<bool>::Trace(visitor, member_written_);
bindings::DictionaryBase::Trace(visitor);
}

bool AuthenticationExtensionsLargeBlobOutputs::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasBlob()) {
  if (!ToV8Traits<DOMArrayBuffer>::ToV8(script_state, member_blob_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSupported()) {
  if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_supported_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasWritten()) {
  if (!ToV8Traits<IDLBoolean>::ToV8(script_state, member_written_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void AuthenticationExtensionsLargeBlobOutputs::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "AuthenticationExtensionsLargeBlobOutputs";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("blob");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<DOMArrayBuffer, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_blob_, member_blob_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("supported");
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_supported_, member_supported_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("written");
if (!bindings::GetDictionaryMemberFromV8Object<IDLBoolean, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_written_, member_written_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> AuthenticationExtensionsLargeBlobOutputs::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"blob",
"supported",
"written",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
