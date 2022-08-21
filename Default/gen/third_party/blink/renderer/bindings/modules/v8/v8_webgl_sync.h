// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_SYNC_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_SYNC_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/v8_interface_bridge.h"

namespace blink {

class ExecutionContext;
class WebGLSync;
struct WrapperTypeInfo;

class MODULES_EXPORT V8WebGLSync final : public bindings::V8InterfaceBridge<V8WebGLSync, WebGLSync> {
  
  public:
static bool IsExposed(ExecutionContext* execution_context);

static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
  return &wrapper_type_info_;
}

static void InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template);


  
  private:
static const WrapperTypeInfo wrapper_type_info_;


  friend class WebGLSync;
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_SYNC_H_
