// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_dev_tools_host.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/inspector/dev_tools_host.h"
#include "third_party/blink/renderer/modules/filesystem/dev_tools_host_file_system.h"
#include "third_party/blink/renderer/modules/filesystem/dom_file_system.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"

namespace blink {



void V8DevToolsHost::Impl::Init() {
  V8DevToolsHost::install_interface_template_func_ = InstallInterfaceTemplate;
V8DevToolsHost::install_unconditional_props_func_ = InstallUnconditionalProperties;
V8DevToolsHost::install_context_independent_props_func_ = InstallContextIndependentProperties;
V8DevToolsHost::install_context_dependent_props_func_ = InstallContextDependentProperties;
}

namespace  {

namespace v8_dev_tools_host {

void CopyTextOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_copyText");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.copyText");




if (UNLIKELY(info.Length() < 1)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "copyText";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
DevToolsHost* blink_receiver = V8DevToolsHost::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_text;
if (LIKELY(info[0]->IsString())) {
  arg1_text.Init(info[0].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "copyText";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_text = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
blink_receiver->copyText(arg1_text);

}

void IsHostedModeOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_isHostedMode");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.isHostedMode");







v8::Local<v8::Object> v8_receiver = info.This();
DevToolsHost* blink_receiver = V8DevToolsHost::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->isHostedMode();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}

void IsolatedFileSystemOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_isolatedFileSystem");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.isolatedFileSystem");




if (UNLIKELY(info.Length() < 2)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "isolatedFileSystem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
DevToolsHost* blink_receiver = V8DevToolsHost::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_file_system_id;
if (LIKELY(info[0]->IsString())) {
  arg1_file_system_id.Init(info[0].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "isolatedFileSystem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_file_system_id = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg2_registered_name;
if (LIKELY(info[1]->IsString())) {
  arg2_registered_name.Init(info[1].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "isolatedFileSystem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg2_registered_name = NativeValueTraits<IDLString>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = DevToolsHostFileSystem::isolatedFileSystem(*blink_receiver, arg1_file_system_id, arg2_registered_name);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void PlatformOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_platform");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.platform");



V8DevToolsHost::PlatformMethodCustom(info);
}

void SendMessageToEmbedderOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_sendMessageToEmbedder");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.sendMessageToEmbedder");




if (UNLIKELY(info.Length() < 1)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "sendMessageToEmbedder";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
DevToolsHost* blink_receiver = V8DevToolsHost::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_message;
if (LIKELY(info[0]->IsString())) {
  arg1_message.Init(info[0].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "sendMessageToEmbedder";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_message = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
blink_receiver->sendMessageToEmbedder(arg1_message);

}

void ShowContextMenuAtPointOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_showContextMenuAtPoint");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.showContextMenuAtPoint");



V8DevToolsHost::ShowContextMenuAtPointMethodCustom(info);
}

void UpgradeDraggedFileSystemPermissionsOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_upgradeDraggedFileSystemPermissions");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.upgradeDraggedFileSystemPermissions");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "DevToolsHost";
const char* const property_name = "upgradeDraggedFileSystemPermissions";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
DevToolsHost* blink_receiver = V8DevToolsHost::ToWrappableUnsafe(v8_receiver);
auto&& arg1_dom_file_system = NativeValueTraits<DOMFileSystem>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
DevToolsHostFileSystem::upgradeDraggedFileSystemPermissions(*blink_receiver, arg1_dom_file_system);

}

void ZoomFactorOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_zoomFactor");
BLINK_BINDINGS_TRACE_EVENT("DevToolsHost.zoomFactor");







v8::Local<v8::Object> v8_receiver = info.This();
DevToolsHost* blink_receiver = V8DevToolsHost::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->zoomFactor();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<float>());
}


}  // namespace v8_dev_tools_host

using namespace v8_dev_tools_host;

}  // namespace 

void V8DevToolsHost::Impl::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8DevToolsHost::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
InstallContextIndependentProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8DevToolsHost::Impl::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"copyText", CopyTextOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"isHostedMode", IsHostedModeOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"platform", PlatformOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"sendMessageToEmbedder", SendMessageToEmbedderOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"showContextMenuAtPoint", ShowContextMenuAtPointOperationCallback, 3, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"zoomFactor", ZoomFactorOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}

void V8DevToolsHost::Impl::InstallContextIndependentProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





if (RuntimeEnabledFeatures::FileSystemEnabled()) {
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"isolatedFileSystem", IsolatedFileSystemOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"upgradeDraggedFileSystemPermissions", UpgradeDraggedFileSystemPermissionsOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}


}

void V8DevToolsHost::Impl::InstallContextDependentProperties(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> instance_object, v8::Local<v8::Object> prototype_object, v8::Local<v8::Object> interface_object, v8::Local<v8::Template> interface_template, FeatureSelector feature_selector) {
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
