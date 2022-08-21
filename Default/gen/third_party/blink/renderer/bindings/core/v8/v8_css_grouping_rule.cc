// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_css_grouping_rule.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/css/css_grouping_rule.h"
#include "third_party/blink/renderer/core/css/css_rule_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8CSSGroupingRule::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8CSSGroupingRule::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8CSSGroupingRule::InstallInterfaceTemplate,
    nullptr,
    "CSSGroupingRule",
    V8CSSRule::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& CSSGroupingRule::wrapper_type_info_ =
    V8CSSGroupingRule::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSGroupingRule>::value,
    "CSSGroupingRule inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&CSSGroupingRule::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSGroupingRule is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_css_grouping_rule {

void CSSRulesAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSGroupingRule_cssRules_Getter");
BLINK_BINDINGS_TRACE_EVENT("CSSGroupingRule.cssRules.get");


v8::Local<v8::Object> v8_receiver = info.This();
CSSGroupingRule* blink_receiver = V8CSSGroupingRule::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->cssRules();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void DeleteRuleOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSGroupingRule_deleteRule");
BLINK_BINDINGS_TRACE_EVENT("CSSGroupingRule.deleteRule");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "CSSGroupingRule";
const char* const property_name = "deleteRule";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
CSSGroupingRule* blink_receiver = V8CSSGroupingRule::ToWrappableUnsafe(v8_receiver);
auto&& arg1_index = NativeValueTraits<IDLUnsignedLong>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->deleteRule(arg1_index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void InsertRuleOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSGroupingRule_insertRule");
BLINK_BINDINGS_TRACE_EVENT("CSSGroupingRule.insertRule");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "CSSGroupingRule";
const char* const property_name = "insertRule";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
CSSGroupingRule* blink_receiver = V8CSSGroupingRule::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ExecutionContext* receiver_execution_context = ExecutionContext::From(receiver_context);
ExecutionContext* execution_context = receiver_execution_context;
auto&& arg1_rule = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_index = NativeValueTraits<IDLUnsignedLong>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->insertRule(execution_context, arg1_rule, arg2_index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}


}  // namespace v8_css_grouping_rule

using namespace v8_css_grouping_rule;

}  // namespace 

void V8CSSGroupingRule::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8CSSGroupingRule::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8CSSGroupingRule::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"cssRules", CSSRulesAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"deleteRule", DeleteRuleOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"insertRule", InsertRuleOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
