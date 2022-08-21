// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATE_EVENT_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigation_navigation_type.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/member.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class AbortSignal;
class ExceptionState;
class FormData;
class NavigationDestination;

class CORE_EXPORT NavigateEventInit : public EventInit {
  
  public:
static NavigateEventInit* Create() {
  return MakeGarbageCollected<NavigateEventInit>();
}
static NavigateEventInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<NavigateEventInit>(isolate);
}
static NavigateEventInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  NavigateEventInit();
explicit  NavigateEventInit(v8::Isolate* isolate);

bool hasCanIntercept() const {
  return true;
}
bool canIntercept() const {
  return member_can_intercept_;
}
void setCanIntercept(bool value) {
  member_can_intercept_ = value;
}

bool hasDestination() const {
  return true;
}
NavigationDestination* destination() const {
  return member_destination_;
}
void setDestination(NavigationDestination* value) {
  member_destination_ = value;
DCHECK(member_destination_);
}

bool hasDownloadRequest() const {
  return true;
}
const String& downloadRequest() const {
  return member_download_request_;
}
void setDownloadRequest(const String& value);
void setDownloadRequest(String&& value);

bool hasFormData() const {
  return true;
}
FormData* formData() const {
  return member_form_data_;
}
void setFormData(FormData* value) {
  member_form_data_ = value;
}

bool hasHashChange() const {
  return true;
}
bool hashChange() const {
  return member_hash_change_;
}
void setHashChange(bool value) {
  member_hash_change_ = value;
}

bool hasInfo() const {
  return !member_info_.IsEmpty();
}
const ScriptValue& info() const {
  DCHECK(hasInfo());
return member_info_;
}
ScriptValue getInfoOr(const ScriptValue& fallback_value) const {
  if (!hasInfo()) {
  return fallback_value;
}
return member_info_;
}
void setInfo(const ScriptValue& value) {
  member_info_ = value;
}

bool hasNavigationType() const {
  return true;
}
V8NavigationNavigationType navigationType() const {
  return member_navigation_type_;
}
void setNavigationType(V8NavigationNavigationType value) {
  member_navigation_type_ = value;
}
void setNavigationType(V8NavigationNavigationType::Enum value) {
  member_navigation_type_ = V8NavigationNavigationType(value);
}

bool hasSignal() const {
  return true;
}
AbortSignal* signal() const {
  return member_signal_;
}
void setSignal(AbortSignal* value) {
  member_signal_ = value;
DCHECK(member_signal_);
}

bool hasUserInitiated() const {
  return true;
}
bool userInitiated() const {
  return member_user_initiated_;
}
void setUserInitiated(bool value) {
  member_user_initiated_ = value;
}


// Obsolete accessor functions
void setNavigationType(const String& value) {
  member_navigation_type_ = V8NavigationNavigationType::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



bool member_can_intercept_{false};
Member<NavigationDestination> member_destination_;
String member_download_request_;
Member<FormData> member_form_data_{nullptr};
bool member_hash_change_{false};
ScriptValue member_info_;
V8NavigationNavigationType member_navigation_type_{V8NavigationNavigationType::Enum::kPush};
Member<AbortSignal> member_signal_;
bool member_user_initiated_{false};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_NAVIGATE_EVENT_INIT_H_
