// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_handler_non_null.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/modules/sensor/sensor.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8Sensor::IsExposed(ExecutionContext* execution_context) {
  
const bool is_in_secure_context = execution_context->IsSecureContext();
return is_in_secure_context && execution_context->IsWindow();
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

const WrapperTypeInfo V8Sensor::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8Sensor::InstallInterfaceTemplate,
    nullptr,
    "Sensor",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& Sensor::wrapper_type_info_ =
    V8Sensor::wrapper_type_info_;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, Sensor>::value,
    "Sensor does not inherit from ActiveScriptWrappable<> despite "
    "the IDL has [ActiveScriptWrappable] extended attribute.");
static_assert(
    !std::is_same<decltype(&Sensor::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Sensor is not overriding hasPendingActivity() despite "
    "the IDL has [ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_sensor {

void ActivatedAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_activated_Getter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.activated.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorActivated);


v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->activated();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void HasReadingAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_hasReading_Getter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.hasReading.get");


v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->hasReading();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void TimestampAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_timestamp_Getter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.timestamp.get");


v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->timestamp(script_state);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void OnerrorAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_onerror_Getter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.onerror.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorOnError);


v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->onerror();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
}

void OnerrorAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_onerror_Setter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.onerror.set");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorOnError);

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
blink_receiver->setOnerror(event_handler);
}

void OnreadingAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_onreading_Getter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.onreading.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorOnChange);


v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->onreading();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
}

void OnreadingAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_onreading_Setter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.onreading.set");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorOnChange);

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
blink_receiver->setOnreading(event_handler);
}

void OnactivateAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_onactivate_Getter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.onactivate.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorOnActivate);


v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->onactivate();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
}

void OnactivateAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_onactivate_Setter");
BLINK_BINDINGS_TRACE_EVENT("Sensor.onactivate.set");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorOnActivate);

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
blink_receiver->setOnactivate(event_handler);
}

void StartOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_start");
BLINK_BINDINGS_TRACE_EVENT("Sensor.start");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorStart);





v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
blink_receiver->start();

}

void StopOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Sensor_stop");
BLINK_BINDINGS_TRACE_EVENT("Sensor.stop");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kGenericSensorStop);





v8::Local<v8::Object> v8_receiver = info.This();
Sensor* blink_receiver = V8Sensor::ToWrappableUnsafe(v8_receiver);
blink_receiver->stop();

}


}  // namespace v8_sensor

using namespace v8_sensor;

}  // namespace 

void V8Sensor::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8Sensor::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8Sensor::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"activated", ActivatedAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"hasReading", HasReadingAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"timestamp", TimestampAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"onerror", OnerrorAttributeGetCallback, OnerrorAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"onreading", OnreadingAttributeGetCallback, OnreadingAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"onactivate", OnactivateAttributeGetCallback, OnactivateAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"start", StartOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"stop", StopOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
