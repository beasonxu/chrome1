// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_COLOR_BUFFER_FLOAT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_COLOR_BUFFER_FLOAT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/v8_interface_bridge.h"

namespace blink {

class ExecutionContext;
class WebGLColorBufferFloat;
struct WrapperTypeInfo;

class MODULES_EXPORT V8WebGLColorBufferFloat final : public bindings::V8InterfaceBridge<V8WebGLColorBufferFloat, WebGLColorBufferFloat> {
  
  public:
// Constants
class Constant final {
  STATIC_ONLY(Constant);

  public:
static constexpr uint32_t kRgba32FExt = 0x8814;
static constexpr uint32_t kFramebufferAttachmentComponentTypeExt = 0x8211;
static constexpr uint32_t kUnsignedNormalizedExt = 0x8C17;

  
  
  
};

static bool IsExposed(ExecutionContext* execution_context);

static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
  return &wrapper_type_info_;
}

static void InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template);
static void InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template);
static void InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector);


  
  private:
static const WrapperTypeInfo wrapper_type_info_;


  friend class WebGLColorBufferFloat;
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_COLOR_BUFFER_FLOAT_H_
