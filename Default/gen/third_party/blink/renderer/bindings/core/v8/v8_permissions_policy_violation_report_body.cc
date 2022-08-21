// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_permissions_policy_violation_report_body.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_report_body.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/frame/permissions_policy_violation_report_body.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8PermissionsPolicyViolationReportBody::IsExposed(ExecutionContext* execution_context) {
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

const WrapperTypeInfo V8PermissionsPolicyViolationReportBody::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8PermissionsPolicyViolationReportBody::InstallInterfaceTemplate,
    V8PermissionsPolicyViolationReportBody::InstallContextDependentProperties,
    "PermissionsPolicyViolationReportBody",
    V8ReportBody::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& PermissionsPolicyViolationReportBody::wrapper_type_info_ =
    V8PermissionsPolicyViolationReportBody::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PermissionsPolicyViolationReportBody>::value,
    "PermissionsPolicyViolationReportBody inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&PermissionsPolicyViolationReportBody::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PermissionsPolicyViolationReportBody is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_permissions_policy_violation_report_body {

void FeatureIdAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_featureId_Getter");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.featureId.get");


v8::Local<v8::Object> v8_receiver = info.This();
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->featureId();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void SourceFileAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_sourceFile_Getter");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.sourceFile.get");


v8::Local<v8::Object> v8_receiver = info.This();
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->sourceFile();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNullable);
}


void LineNumberAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_lineNumber_Getter");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.lineNumber.get");


v8::Local<v8::Object> v8_receiver = info.This();
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->lineNumber();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}


void ColumnNumberAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_columnNumber_Getter");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.columnNumber.get");


v8::Local<v8::Object> v8_receiver = info.This();
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->columnNumber();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}


void DispositionAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_disposition_Getter");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.disposition.get");


v8::Local<v8::Object> v8_receiver = info.This();
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->disposition();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void MessageAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_message_Getter");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.message.get");


v8::Local<v8::Object> v8_receiver = info.This();
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->message();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNullable);
}


void ToJSONOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PermissionsPolicyViolationReportBody_toJSON");
BLINK_BINDINGS_TRACE_EVENT("PermissionsPolicyViolationReportBody.toJSON");







v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
PermissionsPolicyViolationReportBody* blink_receiver = V8PermissionsPolicyViolationReportBody::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->toJSON(script_state);
if (!ToV8Traits<IDLObject>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}


}  // namespace v8_permissions_policy_violation_report_body

using namespace v8_permissions_policy_violation_report_body;

}  // namespace 

void V8PermissionsPolicyViolationReportBody::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8PermissionsPolicyViolationReportBody::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8PermissionsPolicyViolationReportBody::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"featureId", FeatureIdAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"sourceFile", SourceFileAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"lineNumber", LineNumberAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"columnNumber", ColumnNumberAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"disposition", DispositionAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"message", MessageAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
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


void V8PermissionsPolicyViolationReportBody::InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector) {
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
