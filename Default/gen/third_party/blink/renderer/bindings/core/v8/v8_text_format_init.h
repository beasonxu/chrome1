// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEXT_FORMAT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEXT_FORMAT_INIT_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT TextFormatInit : public bindings::DictionaryBase {
  
  public:
static TextFormatInit* Create() {
  return MakeGarbageCollected<TextFormatInit>();
}
static TextFormatInit* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<TextFormatInit>(isolate);
}
static TextFormatInit* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  TextFormatInit();
explicit  TextFormatInit(v8::Isolate* isolate);

bool hasBackgroundColor() const {
  return has_background_color_;
}
const String& backgroundColor() const {
  DCHECK(hasBackgroundColor());
return member_background_color_;
}
String getBackgroundColorOr(const String& fallback_value) const;
String getBackgroundColorOr(String&& fallback_value) const;
void setBackgroundColor(const String& value);
void setBackgroundColor(String&& value);

bool hasRangeEnd() const {
  return has_range_end_;
}
uint32_t rangeEnd() const {
  DCHECK(hasRangeEnd());
return member_range_end_;
}
uint32_t getRangeEndOr(uint32_t fallback_value) const {
  if (!hasRangeEnd()) {
  return fallback_value;
}
return member_range_end_;
}
void setRangeEnd(uint32_t value) {
  member_range_end_ = value;
has_range_end_ = true;
}

bool hasRangeStart() const {
  return has_range_start_;
}
uint32_t rangeStart() const {
  DCHECK(hasRangeStart());
return member_range_start_;
}
uint32_t getRangeStartOr(uint32_t fallback_value) const {
  if (!hasRangeStart()) {
  return fallback_value;
}
return member_range_start_;
}
void setRangeStart(uint32_t value) {
  member_range_start_ = value;
has_range_start_ = true;
}

bool hasTextColor() const {
  return has_text_color_;
}
const String& textColor() const {
  DCHECK(hasTextColor());
return member_text_color_;
}
String getTextColorOr(const String& fallback_value) const;
String getTextColorOr(String&& fallback_value) const;
void setTextColor(const String& value);
void setTextColor(String&& value);

bool hasUnderlineColor() const {
  return has_underline_color_;
}
const String& underlineColor() const {
  DCHECK(hasUnderlineColor());
return member_underline_color_;
}
String getUnderlineColorOr(const String& fallback_value) const;
String getUnderlineColorOr(String&& fallback_value) const;
void setUnderlineColor(const String& value);
void setUnderlineColor(String&& value);

bool hasUnderlineStyle() const {
  return has_underline_style_;
}
const String& underlineStyle() const {
  DCHECK(hasUnderlineStyle());
return member_underline_style_;
}
String getUnderlineStyleOr(const String& fallback_value) const;
String getUnderlineStyleOr(String&& fallback_value) const;
void setUnderlineStyle(const String& value);
void setUnderlineStyle(String&& value);

bool hasUnderlineThickness() const {
  return has_underline_thickness_;
}
const String& underlineThickness() const {
  DCHECK(hasUnderlineThickness());
return member_underline_thickness_;
}
String getUnderlineThicknessOr(const String& fallback_value) const;
String getUnderlineThicknessOr(String&& fallback_value) const;
void setUnderlineThickness(const String& value);
void setUnderlineThickness(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);

bool has_background_color_ = false;
bool has_range_end_ = false;
bool has_range_start_ = false;
bool has_text_color_ = false;
bool has_underline_color_ = false;
bool has_underline_style_ = false;
bool has_underline_thickness_ = false;

String member_background_color_;
uint32_t member_range_end_;
uint32_t member_range_start_;
String member_text_color_;
String member_underline_color_;
String member_underline_style_;
String member_underline_thickness_;


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEXT_FORMAT_INIT_H_
