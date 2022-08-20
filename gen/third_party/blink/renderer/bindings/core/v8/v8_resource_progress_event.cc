// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_resource_progress_event.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/events/resource_progress_event.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8ResourceProgressEvent::IsExposed(ExecutionContext* execution_context) {
  return false;
}

// Construction of WrapperTypeInfo may require non-trivial initialization due
// to cross-component address resolution in order to load the pointer to the
// parent interface's WrapperTypeInfo.  We ignore this issue because the issue
// happens only on component builds and the official release builds
// (statically-linked builds) are never affected by this issue.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif

const WrapperTypeInfo V8ResourceProgressEvent::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8ResourceProgressEvent::InstallInterfaceTemplate,
    V8ResourceProgressEvent::InstallContextDependentProperties,
    "ResourceProgressEvent",
    V8ProgressEvent::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ResourceProgressEvent::wrapper_type_info_ =
    V8ResourceProgressEvent::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ResourceProgressEvent>::value,
    "ResourceProgressEvent inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&ResourceProgressEvent::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ResourceProgressEvent is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_resource_progress_event {

void UrlAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ResourceProgressEvent_url_Getter");
BLINK_BINDINGS_TRACE_EVENT("ResourceProgressEvent.url.get");


v8::Local<v8::Object> v8_receiver = info.This();
ResourceProgressEvent* blink_receiver = V8ResourceProgressEvent::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->url();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void IsTrustedAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ResourceProgressEvent_isTrusted_Getter");
BLINK_BINDINGS_TRACE_EVENT("ResourceProgressEvent.isTrusted.get");


v8::Local<v8::Object> v8_receiver = info.This();
ResourceProgressEvent* blink_receiver = V8ResourceProgressEvent::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->isTrusted();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}



}  // namespace v8_resource_progress_event

using namespace v8_resource_progress_event;

}  // namespace 

void V8ResourceProgressEvent::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ResourceProgressEvent::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8ResourceProgressEvent::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"url", UrlAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"isTrusted", IsTrustedAttributeGetCallback, nullptr, unsigned(v8::DontDelete), unsigned(IDLMemberInstaller::FlagLocation::kInstance), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}


void V8ResourceProgressEvent::InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector) {
  using bindings::IDLMemberInstaller;

if (feature_selector.IsAll()) {
  v8::Isolate* isolate = context->GetIsolate();
// [LegacyNoInterfaceObject]
// 3.7.3. Interface prototype object
// https://webidl.spec.whatwg.org/#interface-prototype-object
// step 13. If the [LegacyNoInterfaceObject] extended attribute was not
//   specified on interface, then:
//
// V8 defines "constructor" property on the prototype object by default.
prototype_object->Delete(
    context, V8AtomicString(isolate, "constructor")).ToChecked();

}







}


}  // namespace blink
