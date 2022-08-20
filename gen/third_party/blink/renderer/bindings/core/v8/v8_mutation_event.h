// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_MUTATION_EVENT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_MUTATION_EVENT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/v8_interface_bridge.h"

namespace blink {

class ExecutionContext;
class MutationEvent;
struct WrapperTypeInfo;

class CORE_EXPORT V8MutationEvent final : public bindings::V8InterfaceBridge<V8MutationEvent, MutationEvent> {
  
  public:
// Constants
class Constant final {
  STATIC_ONLY(Constant);

  public:
static constexpr uint16_t kModification = 1;
static constexpr uint16_t kAddition = 2;
static constexpr uint16_t kRemoval = 3;

  
  
  
};

static bool IsExposed(ExecutionContext* execution_context);

static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
  return &wrapper_type_info_;
}

static void InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template);
static void InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template);


  
  private:
static const WrapperTypeInfo wrapper_type_info_;


  friend class MutationEvent;
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_MUTATION_EVENT_H_
