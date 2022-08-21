// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_DOM_STRING_MAP_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_DOM_STRING_MAP_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/v8_interface_bridge.h"

namespace blink {

class DOMStringMap;
class ExecutionContext;
struct WrapperTypeInfo;

class CORE_EXPORT V8DOMStringMap final : public bindings::V8InterfaceBridge<V8DOMStringMap, DOMStringMap> {
  
  public:
static bool IsExposed(ExecutionContext* execution_context);

static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
  return &wrapper_type_info_;
}

static void InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template);

// Indexed properties and named properties
static void NamedPropertyGetterCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info);
static void NamedPropertySetterCallback(v8::Local<v8::Name> v8_property_name, v8::Local<v8::Value> v8_property_value, const v8::PropertyCallbackInfo<v8::Value>& info);
static void NamedPropertyDeleterCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Boolean>& info);
static void NamedPropertyDefinerCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyDescriptor& v8_property_desc, const v8::PropertyCallbackInfo<v8::Value>& info);
static void NamedPropertyDescriptorCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info);
static void NamedPropertyQueryCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Integer>& info);
static void NamedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info);
static void IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info);
static void IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8_property_value, const v8::PropertyCallbackInfo<v8::Value>& info);
static void IndexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info);
static void IndexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor& v8_property_desc, const v8::PropertyCallbackInfo<v8::Value>& info);
static void IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info);


  
  private:
static const WrapperTypeInfo wrapper_type_info_;


  friend class DOMStringMap;
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_DOM_STRING_MAP_H_
