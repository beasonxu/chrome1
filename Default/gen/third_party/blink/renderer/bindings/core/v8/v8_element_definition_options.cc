// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_element_definition_options.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/core/css/css_style_sheet.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



ElementDefinitionOptions* ElementDefinitionOptions::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  ElementDefinitionOptions* dictionary = MakeGarbageCollected<ElementDefinitionOptions>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "ElementDefinitionOptions";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 ElementDefinitionOptions::ElementDefinitionOptions() {
  
}

 ElementDefinitionOptions::ElementDefinitionOptions(v8::Isolate* isolate) {
  
}



void ElementDefinitionOptions::setExtends(const String& value) {
  member_extends_ = value;
}

void ElementDefinitionOptions::setExtends(String&& value) {
  member_extends_ = std::move(value);
}




HeapVector<Member<CSSStyleSheet>> ElementDefinitionOptions::getStylesOr(const HeapVector<Member<CSSStyleSheet>>& fallback_value) const {
  if (!hasStyles()) {
  return fallback_value;
}
return member_styles_;
}

HeapVector<Member<CSSStyleSheet>> ElementDefinitionOptions::getStylesOr(HeapVector<Member<CSSStyleSheet>>&& fallback_value) const {
  if (!hasStyles()) {
  return std::move(fallback_value);
}
return member_styles_;
}

void ElementDefinitionOptions::setStyles(const HeapVector<Member<CSSStyleSheet>>& value) {
  member_styles_ = value;
has_styles_ = true;
}

void ElementDefinitionOptions::setStyles(HeapVector<Member<CSSStyleSheet>>&& value) {
  member_styles_ = std::move(value);
has_styles_ = true;
}




void ElementDefinitionOptions::Trace(Visitor* visitor) const {
  TraceIfNeeded<String>::Trace(visitor, member_extends_);
TraceIfNeeded<HeapVector<Member<CSSStyleSheet>>>::Trace(visitor, member_styles_);
bindings::DictionaryBase::Trace(visitor);
}

bool ElementDefinitionOptions::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasExtends()) {
  if (!ToV8Traits<IDLNullable<IDLString>>::ToV8(script_state, member_extends_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasStyles()) {
  if (!ToV8Traits<IDLSequence<CSSStyleSheet>>::ToV8(script_state, member_styles_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void ElementDefinitionOptions::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "ElementDefinitionOptions";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("extends");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool fallback_presence_var;
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLNullable<IDLString>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), fallback_presence_var, member_extends_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("styles");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<CSSStyleSheet>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_styles_, member_styles_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> ElementDefinitionOptions::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"extends",
"styles",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
