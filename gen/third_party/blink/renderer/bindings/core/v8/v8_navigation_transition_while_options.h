// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATION_TRANSITION_WHILE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATION_TRANSITION_WHILE_OPTIONS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigation_intercept_or_transition_while_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigation_scroll_behavior.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT NavigationTransitionWhileOptions : public NavigationInterceptOrTransitionWhileOptions {
  
  public:
static NavigationTransitionWhileOptions* Create() {
  return MakeGarbageCollected<NavigationTransitionWhileOptions>();
}
static NavigationTransitionWhileOptions* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<NavigationTransitionWhileOptions>(isolate);
}
static NavigationTransitionWhileOptions* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  NavigationTransitionWhileOptions();
explicit  NavigationTransitionWhileOptions(v8::Isolate* isolate);

bool hasScrollRestoration() const {
  return has_scroll_restoration_;
}
V8NavigationScrollBehavior scrollRestoration() const {
  DCHECK(hasScrollRestoration());
return member_scroll_restoration_;
}
V8NavigationScrollBehavior getScrollRestorationOr(V8NavigationScrollBehavior fallback_value) const {
  if (!hasScrollRestoration()) {
  return fallback_value;
}
return member_scroll_restoration_;
}
void setScrollRestoration(V8NavigationScrollBehavior value) {
  member_scroll_restoration_ = value;
has_scroll_restoration_ = true;
}
void setScrollRestoration(V8NavigationScrollBehavior::Enum value) {
  member_scroll_restoration_ = V8NavigationScrollBehavior(value);
has_scroll_restoration_ = true;
}


// Obsolete accessor functions
void setScrollRestoration(const String& value) {
  member_scroll_restoration_ = V8NavigationScrollBehavior::Create(value).value();
has_scroll_restoration_ = true;
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_scroll_restoration_ = false;

V8NavigationScrollBehavior member_scroll_restoration_{static_cast<V8NavigationScrollBehavior::Enum>(0)};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATION_TRANSITION_WHILE_OPTIONS_H_
