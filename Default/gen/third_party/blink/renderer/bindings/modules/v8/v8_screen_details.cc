// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_details.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_handler_non_null.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_detailed.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/modules/screen_enumeration/screen_detailed.h"
#include "third_party/blink/renderer/modules/screen_enumeration/screen_details.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8ScreenDetails::IsExposed(ExecutionContext* execution_context) {
  
const bool is_in_secure_context = execution_context->IsSecureContext();
return is_in_secure_context && execution_context->IsWindow() && RuntimeEnabledFeatures::WindowPlacementEnabled();
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

const WrapperTypeInfo V8ScreenDetails::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8ScreenDetails::InstallInterfaceTemplate,
    nullptr,
    "ScreenDetails",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ScreenDetails::wrapper_type_info_ =
    V8ScreenDetails::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ScreenDetails>::value,
    "ScreenDetails inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&ScreenDetails::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ScreenDetails is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_screen_details {

void ScreensAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScreenDetails_screens_Getter");
BLINK_BINDINGS_TRACE_EVENT("ScreenDetails.screens.get");


v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
ScreenDetails* blink_receiver = V8ScreenDetails::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->screens();
if (!ToV8Traits<IDLArray<ScreenDetailed>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}


void CurrentScreenAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScreenDetails_currentScreen_Getter");
BLINK_BINDINGS_TRACE_EVENT("ScreenDetails.currentScreen.get");


v8::Local<v8::Object> v8_receiver = info.This();
ScreenDetails* blink_receiver = V8ScreenDetails::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->currentScreen();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void OnscreenschangeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScreenDetails_onscreenschange_Getter");
BLINK_BINDINGS_TRACE_EVENT("ScreenDetails.onscreenschange.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ScreenDetails_Onscreenschange_AttributeGetter);


v8::Local<v8::Object> v8_receiver = info.This();
ScreenDetails* blink_receiver = V8ScreenDetails::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->onscreenschange();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
// [HighEntropy]
Dactyloscoper::Record(current_execution_context, WebFeature::kV8ScreenDetails_Onscreenschange_AttributeGetter);
}

void OnscreenschangeAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScreenDetails_onscreenschange_Setter");
BLINK_BINDINGS_TRACE_EVENT("ScreenDetails.onscreenschange.set");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ScreenDetails_Onscreenschange_AttributeSetter);

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
ScreenDetails* blink_receiver = V8ScreenDetails::ToWrappableUnsafe(v8_receiver);
blink_receiver->setOnscreenschange(event_handler);
}

void OncurrentscreenchangeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScreenDetails_oncurrentscreenchange_Getter");
BLINK_BINDINGS_TRACE_EVENT("ScreenDetails.oncurrentscreenchange.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ScreenDetails_Oncurrentscreenchange_AttributeGetter);


v8::Local<v8::Object> v8_receiver = info.This();
ScreenDetails* blink_receiver = V8ScreenDetails::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->oncurrentscreenchange();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
// [HighEntropy]
Dactyloscoper::Record(current_execution_context, WebFeature::kV8ScreenDetails_Oncurrentscreenchange_AttributeGetter);
}

void OncurrentscreenchangeAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScreenDetails_oncurrentscreenchange_Setter");
BLINK_BINDINGS_TRACE_EVENT("ScreenDetails.oncurrentscreenchange.set");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ScreenDetails_Oncurrentscreenchange_AttributeSetter);

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
ScreenDetails* blink_receiver = V8ScreenDetails::ToWrappableUnsafe(v8_receiver);
blink_receiver->setOncurrentscreenchange(event_handler);
}


}  // namespace v8_screen_details

using namespace v8_screen_details;

}  // namespace 

void V8ScreenDetails::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ScreenDetails::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8ScreenDetails::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"screens", ScreensAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"currentScreen", CurrentScreenAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"onscreenschange", OnscreenschangeAttributeGetCallback, OnscreenschangeAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"oncurrentscreenchange", OncurrentscreenchangeAttributeGetCallback, OncurrentscreenchangeAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
