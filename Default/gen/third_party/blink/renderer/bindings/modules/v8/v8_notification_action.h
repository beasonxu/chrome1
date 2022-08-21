// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_NOTIFICATION_ACTION_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_NOTIFICATION_ACTION_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_action_type.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT NotificationAction : public bindings::DictionaryBase {
  
  public:
static NotificationAction* Create() {
  return MakeGarbageCollected<NotificationAction>();
}
static NotificationAction* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<NotificationAction>(isolate);
}
static NotificationAction* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  NotificationAction();
explicit  NotificationAction(v8::Isolate* isolate);

bool hasAction() const {
  return true;
}
const String& action() const {
  return member_action_;
}
void setAction(const String& value);
void setAction(String&& value);

bool hasIcon() const {
  return has_icon_;
}
const String& icon() const {
  DCHECK(hasIcon());
return member_icon_;
}
String getIconOr(const String& fallback_value) const;
String getIconOr(String&& fallback_value) const;
void setIcon(const String& value);
void setIcon(String&& value);

bool hasPlaceholder() const {
  return true;
}
const String& placeholder() const {
  return member_placeholder_;
}
void setPlaceholder(const String& value);
void setPlaceholder(String&& value);

bool hasTitle() const {
  return true;
}
const String& title() const {
  return member_title_;
}
void setTitle(const String& value);
void setTitle(String&& value);

bool hasType() const {
  return true;
}
V8NotificationActionType type() const {
  return member_type_;
}
void setType(V8NotificationActionType value) {
  member_type_ = value;
}
void setType(V8NotificationActionType::Enum value) {
  member_type_ = V8NotificationActionType(value);
}


// Obsolete accessor functions
void setType(const String& value) {
  member_type_ = V8NotificationActionType::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_icon_ = false;

String member_action_;
String member_icon_;
String member_placeholder_;
String member_title_;
V8NotificationActionType member_type_{V8NotificationActionType::Enum::kButton};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_NOTIFICATION_ACTION_H_
