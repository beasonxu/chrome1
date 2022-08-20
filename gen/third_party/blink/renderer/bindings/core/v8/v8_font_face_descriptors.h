// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_FONT_FACE_DESCRIPTORS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_FONT_FACE_DESCRIPTORS_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT FontFaceDescriptors : public bindings::DictionaryBase {
  
  public:
static FontFaceDescriptors* Create() {
  return MakeGarbageCollected<FontFaceDescriptors>();
}
static FontFaceDescriptors* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<FontFaceDescriptors>(isolate);
}
static FontFaceDescriptors* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  FontFaceDescriptors();
explicit  FontFaceDescriptors(v8::Isolate* isolate);

bool hasAscentOverride() const {
  return true;
}
const String& ascentOverride() const {
  return member_ascent_override_;
}
void setAscentOverride(const String& value);
void setAscentOverride(String&& value);

bool hasDescentOverride() const {
  return true;
}
const String& descentOverride() const {
  return member_descent_override_;
}
void setDescentOverride(const String& value);
void setDescentOverride(String&& value);

bool hasDisplay() const {
  return true;
}
const String& display() const {
  return member_display_;
}
void setDisplay(const String& value);
void setDisplay(String&& value);

bool hasFeatureSettings() const {
  return true;
}
const String& featureSettings() const {
  return member_feature_settings_;
}
void setFeatureSettings(const String& value);
void setFeatureSettings(String&& value);

bool hasLineGapOverride() const {
  return true;
}
const String& lineGapOverride() const {
  return member_line_gap_override_;
}
void setLineGapOverride(const String& value);
void setLineGapOverride(String&& value);

bool hasSizeAdjust() const {
  return true;
}
const String& sizeAdjust() const {
  return member_size_adjust_;
}
void setSizeAdjust(const String& value);
void setSizeAdjust(String&& value);

bool hasStretch() const {
  return true;
}
const String& stretch() const {
  return member_stretch_;
}
void setStretch(const String& value);
void setStretch(String&& value);

bool hasStyle() const {
  return true;
}
const String& style() const {
  return member_style_;
}
void setStyle(const String& value);
void setStyle(String&& value);

bool hasUnicodeRange() const {
  return true;
}
const String& unicodeRange() const {
  return member_unicode_range_;
}
void setUnicodeRange(const String& value);
void setUnicodeRange(String&& value);

bool hasVariant() const {
  return true;
}
const String& variant() const {
  return member_variant_;
}
void setVariant(const String& value);
void setVariant(String&& value);

bool hasWeight() const {
  return true;
}
const String& weight() const {
  return member_weight_;
}
void setWeight(const String& value);
void setWeight(String&& value);




void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



String member_ascent_override_{"normal"};
String member_descent_override_{"normal"};
String member_display_{"auto"};
String member_feature_settings_{"normal"};
String member_line_gap_override_{"normal"};
String member_size_adjust_{"100%"};
String member_stretch_{"normal"};
String member_style_{"normal"};
String member_unicode_range_{"U+0-10FFFF"};
String member_variant_{"normal"};
String member_weight_{"normal"};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_FONT_FACE_DESCRIPTORS_H_
