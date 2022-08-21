// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_URL_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_URL_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/v8_interface_bridge.h"

namespace blink {

class DOMURL;
class ExecutionContext;
struct WrapperTypeInfo;

class CORE_EXPORT V8URL final : public bindings::V8InterfaceBridge<V8URL, DOMURL> {
  
  public:
// Cross-component implementation class
class Impl;

static bool IsExposed(ExecutionContext* execution_context);

static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
  return &wrapper_type_info_;
}

static void InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  return install_interface_template_func_(isolate, world, interface_template);
}
static void InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  return install_unconditional_props_func_(isolate, world, instance_template, prototype_template, interface_template);
}
static void InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector) {
  return install_context_dependent_props_func_(context, world, instance_object, prototype_object, interface_object, interface_template, feature_selector);
}


  
  private:
static const WrapperTypeInfo wrapper_type_info_;

// Cross-component trampolines
static InstallInterfaceTemplateFuncType install_interface_template_func_;
static InstallUnconditionalPropertiesFuncType install_unconditional_props_func_;
static InstallContextDependentPropertiesFuncType install_context_dependent_props_func_;


  friend class DOMURL;
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_URL_H_
