// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_record.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/dom/mutation_record.h"
#include "third_party/blink/renderer/core/dom/node.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8MutationRecord::IsExposed(ExecutionContext* execution_context) {
  
return execution_context->IsWindow();
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

const WrapperTypeInfo V8MutationRecord::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8MutationRecord::InstallInterfaceTemplate,
    nullptr,
    "MutationRecord",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& MutationRecord::wrapper_type_info_ =
    V8MutationRecord::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MutationRecord>::value,
    "MutationRecord inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&MutationRecord::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MutationRecord is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_mutation_record {

void TypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_type_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.type.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->type();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void TargetAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_target_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.target.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->target();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void AddedNodesAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_addedNodes_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.addedNodes.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->addedNodes();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void RemovedNodesAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_removedNodes_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.removedNodes.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->removedNodes();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void PreviousSiblingAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_previousSibling_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.previousSibling.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->previousSibling();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void NextSiblingAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_nextSibling_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.nextSibling.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->nextSibling();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void AttributeNameAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_attributeName_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.attributeName.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->attributeName();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNullable);
}


void AttributeNamespaceAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_attributeNamespace_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.attributeNamespace.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->attributeNamespace();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNullable);
}


void OldValueAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MutationRecord_oldValue_Getter");
BLINK_BINDINGS_TRACE_EVENT("MutationRecord.oldValue.get");


v8::Local<v8::Object> v8_receiver = info.This();
MutationRecord* blink_receiver = V8MutationRecord::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->oldValue();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNullable);
}



}  // namespace v8_mutation_record

using namespace v8_mutation_record;

}  // namespace 

void V8MutationRecord::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8MutationRecord::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8MutationRecord::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"type", TypeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"target", TargetAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"addedNodes", AddedNodesAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"removedNodes", RemovedNodesAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"previousSibling", PreviousSiblingAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"nextSibling", NextSiblingAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"attributeName", AttributeNameAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"attributeNamespace", AttributeNamespaceAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"oldValue", OldValueAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
