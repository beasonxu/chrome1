// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_render_blocking_status_type.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/core/timing/performance_resource_timing.h"
#include "third_party/blink/renderer/core/timing/performance_server_timing.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8PerformanceResourceTiming::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow() || execution_context->IsWorkerGlobalScope();
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

const WrapperTypeInfo V8PerformanceResourceTiming::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8PerformanceResourceTiming::InstallInterfaceTemplate,
    nullptr,
    "PerformanceResourceTiming",
    V8PerformanceEntry::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& PerformanceResourceTiming::wrapper_type_info_ =
    V8PerformanceResourceTiming::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PerformanceResourceTiming>::value,
    "PerformanceResourceTiming inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&PerformanceResourceTiming::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PerformanceResourceTiming is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_performance_resource_timing {

void InitiatorTypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_initiatorType_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.initiatorType.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPerformanceResourceTimingInitiatorType);


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->initiatorType();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void NextHopProtocolAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_nextHopProtocol_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.nextHopProtocol.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->nextHopProtocol();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void WorkerStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_workerStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.workerStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->workerStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void RedirectStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_redirectStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.redirectStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->redirectStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void RedirectEndAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_redirectEnd_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.redirectEnd.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->redirectEnd();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void FetchStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_fetchStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.fetchStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->fetchStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void DomainLookupStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_domainLookupStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.domainLookupStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->domainLookupStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void DomainLookupEndAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_domainLookupEnd_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.domainLookupEnd.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->domainLookupEnd();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void ConnectStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_connectStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.connectStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->connectStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void ConnectEndAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_connectEnd_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.connectEnd.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->connectEnd();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void SecureConnectionStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_secureConnectionStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.secureConnectionStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->secureConnectionStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void RequestStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_requestStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.requestStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->requestStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void ResponseStartAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_responseStart_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.responseStart.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->responseStart();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void ResponseEndAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_responseEnd_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.responseEnd.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->responseEnd();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<double>());
}


void TransferSizeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_transferSize_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.transferSize.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPerformanceResourceTimingSizes);


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->transferSize();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint64_t>());
}


void EncodedBodySizeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_encodedBodySize_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.encodedBodySize.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPerformanceResourceTimingSizes);


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->encodedBodySize();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint64_t>());
}


void DecodedBodySizeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_decodedBodySize_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.decodedBodySize.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kPerformanceResourceTimingSizes);


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->decodedBodySize();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint64_t>());
}


void ServerTimingAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_serverTiming_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.serverTiming.get");


v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->serverTiming();
if (!ToV8Traits<IDLArray<PerformanceServerTiming>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}


void RenderBlockingStatusAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_renderBlockingStatus_Getter");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.renderBlockingStatus.get");


v8::Local<v8::Object> v8_receiver = info.This();
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->renderBlockingStatus();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void ToJSONOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PerformanceResourceTiming_toJSON");
BLINK_BINDINGS_TRACE_EVENT("PerformanceResourceTiming.toJSON");







v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
PerformanceResourceTiming* blink_receiver = V8PerformanceResourceTiming::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->toJSONForBinding(script_state);
if (!ToV8Traits<IDLObject>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}


}  // namespace v8_performance_resource_timing

using namespace v8_performance_resource_timing;

}  // namespace 

void V8PerformanceResourceTiming::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8PerformanceResourceTiming::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
InstallContextIndependentProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8PerformanceResourceTiming::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"initiatorType", InitiatorTypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"nextHopProtocol", NextHopProtocolAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"workerStart", WorkerStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"redirectStart", RedirectStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"redirectEnd", RedirectEndAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"fetchStart", FetchStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"domainLookupStart", DomainLookupStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"domainLookupEnd", DomainLookupEndAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"connectStart", ConnectStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"connectEnd", ConnectEndAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"secureConnectionStart", SecureConnectionStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"requestStart", RequestStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"responseStart", ResponseStartAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"responseEnd", ResponseEndAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"transferSize", TransferSizeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"encodedBodySize", EncodedBodySizeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"decodedBodySize", DecodedBodySizeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"serverTiming", ServerTimingAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"toJSON", ToJSONOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}

void V8PerformanceResourceTiming::InstallContextIndependentProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

if (RuntimeEnabledFeatures::RenderBlockingStatusEnabled()) {
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"renderBlockingStatus", RenderBlockingStatusAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}






}



}  // namespace blink
