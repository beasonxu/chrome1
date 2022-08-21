// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CANVAS_CONTEXT_CREATION_ATTRIBUTES_MODULE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CANVAS_CONTEXT_CREATION_ATTRIBUTES_MODULE_H_

#include "base/containers/span.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_predefined_color_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pixel_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_power_preference.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/dictionary_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT CanvasContextCreationAttributesModule : public bindings::DictionaryBase {
  
  public:
static CanvasContextCreationAttributesModule* Create() {
  return MakeGarbageCollected<CanvasContextCreationAttributesModule>();
}
static CanvasContextCreationAttributesModule* Create(v8::Isolate* isolate) {
  return MakeGarbageCollected<CanvasContextCreationAttributesModule>(isolate);
}
static CanvasContextCreationAttributesModule* Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state);

explicit  CanvasContextCreationAttributesModule();
explicit  CanvasContextCreationAttributesModule(v8::Isolate* isolate);

bool hasAlpha() const {
  return true;
}
bool alpha() const {
  return member_alpha_;
}
void setAlpha(bool value) {
  member_alpha_ = value;
}

bool hasAntialias() const {
  return true;
}
bool antialias() const {
  return member_antialias_;
}
void setAntialias(bool value) {
  member_antialias_ = value;
}

bool hasColorSpace() const {
  return true;
}
V8PredefinedColorSpace colorSpace() const {
  return member_color_space_;
}
void setColorSpace(V8PredefinedColorSpace value) {
  member_color_space_ = value;
}
void setColorSpace(V8PredefinedColorSpace::Enum value) {
  member_color_space_ = V8PredefinedColorSpace(value);
}

bool hasDepth() const {
  return true;
}
bool depth() const {
  return member_depth_;
}
void setDepth(bool value) {
  member_depth_ = value;
}

bool hasDesynchronized() const {
  return true;
}
bool desynchronized() const {
  return member_desynchronized_;
}
void setDesynchronized(bool value) {
  member_desynchronized_ = value;
}

bool hasFailIfMajorPerformanceCaveat() const {
  return true;
}
bool failIfMajorPerformanceCaveat() const {
  return member_fail_if_major_performance_caveat_;
}
void setFailIfMajorPerformanceCaveat(bool value) {
  member_fail_if_major_performance_caveat_ = value;
}

bool hasPixelFormat() const {
  return true;
}
V8CanvasPixelFormat pixelFormat() const {
  return member_pixel_format_;
}
void setPixelFormat(V8CanvasPixelFormat value) {
  member_pixel_format_ = value;
}
void setPixelFormat(V8CanvasPixelFormat::Enum value) {
  member_pixel_format_ = V8CanvasPixelFormat(value);
}

bool hasPowerPreference() const {
  return true;
}
V8CanvasPowerPreference powerPreference() const {
  return member_power_preference_;
}
void setPowerPreference(V8CanvasPowerPreference value) {
  member_power_preference_ = value;
}
void setPowerPreference(V8CanvasPowerPreference::Enum value) {
  member_power_preference_ = V8CanvasPowerPreference(value);
}

bool hasPremultipliedAlpha() const {
  return true;
}
bool premultipliedAlpha() const {
  return member_premultiplied_alpha_;
}
void setPremultipliedAlpha(bool value) {
  member_premultiplied_alpha_ = value;
}

bool hasPreserveDrawingBuffer() const {
  return true;
}
bool preserveDrawingBuffer() const {
  return member_preserve_drawing_buffer_;
}
void setPreserveDrawingBuffer(bool value) {
  member_preserve_drawing_buffer_ = value;
}

bool hasStencil() const {
  return true;
}
bool stencil() const {
  return member_stencil_;
}
void setStencil(bool value) {
  member_stencil_ = value;
}

bool hasWillReadFrequently() const {
  return true;
}
bool willReadFrequently() const {
  return member_will_read_frequently_;
}
void setWillReadFrequently(bool value) {
  member_will_read_frequently_ = value;
}

bool hasXrCompatible() const {
  return true;
}
bool xrCompatible() const {
  return member_xr_compatible_;
}
void setXrCompatible(bool value) {
  member_xr_compatible_ = value;
}


// Obsolete accessor functions
void setColorSpace(const String& value) {
  member_color_space_ = V8PredefinedColorSpace::Create(value).value();
}
void setPixelFormat(const String& value) {
  member_pixel_format_ = V8CanvasPixelFormat::Create(value).value();
}
void setPowerPreference(const String& value) {
  member_power_preference_ = V8CanvasPowerPreference::Create(value).value();
}

void Trace(Visitor* visitor) const override;


  protected:
bool FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const override;

void FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state);


  private:
static const base::span<const v8::Eternal<v8::Name>> GetV8OwnMemberNames(v8::Isolate* isolate);



bool member_alpha_{true};
bool member_antialias_{true};
V8PredefinedColorSpace member_color_space_{V8PredefinedColorSpace::Enum::kSRGB};
bool member_depth_{true};
bool member_desynchronized_{false};
bool member_fail_if_major_performance_caveat_{false};
V8CanvasPixelFormat member_pixel_format_{V8CanvasPixelFormat::Enum::kUint8};
V8CanvasPowerPreference member_power_preference_{V8CanvasPowerPreference::Enum::kDefault};
bool member_premultiplied_alpha_{true};
bool member_preserve_drawing_buffer_{false};
bool member_stencil_{false};
bool member_will_read_frequently_{false};
bool member_xr_compatible_{false};


  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CANVAS_CONTEXT_CREATION_ATTRIBUTES_MODULE_H_
