// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_clipboard_event.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_clipboard_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/clipboard/data_transfer.h"
#include "third_party/blink/renderer/core/events/clipboard_event.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8ClipboardEvent::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8ClipboardEvent::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8ClipboardEvent::InstallInterfaceTemplate,
    nullptr,
    "ClipboardEvent",
    V8Event::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ClipboardEvent::wrapper_type_info_ =
    V8ClipboardEvent::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ClipboardEvent>::value,
    "ClipboardEvent inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&ClipboardEvent::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ClipboardEvent is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_clipboard_event {

void ClipboardDataAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ClipboardEvent_clipboardData_Getter");
BLINK_BINDINGS_TRACE_EVENT("ClipboardEvent.clipboardData.get");


v8::Local<v8::Object> v8_receiver = info.This();
ClipboardEvent* blink_receiver = V8ClipboardEvent::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->clipboardData();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void IsTrustedAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ClipboardEvent_isTrusted_Getter");
BLINK_BINDINGS_TRACE_EVENT("ClipboardEvent.isTrusted.get");


v8::Local<v8::Object> v8_receiver = info.This();
ClipboardEvent* blink_receiver = V8ClipboardEvent::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->isTrusted();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ClipboardEvent_constructor");
BLINK_BINDINGS_TRACE_EVENT("ClipboardEvent.constructor");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "ClipboardEvent";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
if (!info.IsConstructCall()) {
  exception_state.ThrowTypeError(ExceptionMessages::ConstructorCalledAsFunction());
return;
}
v8::Local<v8::Object> v8_receiver = info.This();
if (ConstructorMode::Current(isolate) == ConstructorMode::kWrapExistingObject) {
  bindings::V8SetReturnValue(info, v8_receiver);
return;
}


if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}

auto&& arg1_type = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
decltype(NativeValueTraits<ClipboardEventInit>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_event_init_dict;
if (info[1]->IsUndefined()) {
  arg2_event_init_dict = ClipboardEventInit::Create();
} else {
  arg2_event_init_dict = NativeValueTraits<ClipboardEventInit>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = ClipboardEvent::Create(arg1_type, arg2_event_init_dict);
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8ClipboardEvent::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}


}  // namespace v8_clipboard_event

using namespace v8_clipboard_event;

}  // namespace 

void V8ClipboardEvent::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ClipboardEvent::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

interface_function_template->SetCallHandler(ConstructorCallback);
interface_function_template->SetLength(1);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8ClipboardEvent::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"clipboardData", ClipboardDataAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"isTrusted", IsTrustedAttributeGetCallback, nullptr, unsigned(v8::DontDelete), unsigned(IDLMemberInstaller::FlagLocation::kInstance), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
