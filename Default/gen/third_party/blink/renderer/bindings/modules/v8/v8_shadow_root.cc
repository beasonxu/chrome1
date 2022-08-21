// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_shadow_root.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_handler_non_null.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_get_inner_html_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root_mode.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_slot_assignment_mode.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet_list.h"
#include "third_party/blink/renderer/core/animation/animation.h"
#include "third_party/blink/renderer/core/css/css_style_sheet.h"
#include "third_party/blink/renderer/core/css/style_sheet_list.h"
#include "third_party/blink/renderer/core/dom/document_or_shadow_root.h"
#include "third_party/blink/renderer/core/dom/element.h"
#include "third_party/blink/renderer/core/dom/shadow_root.h"
#include "third_party/blink/renderer/core/editing/dom_selection.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/media/html_video_element.h"
#include "third_party/blink/renderer/modules/picture_in_picture/shadow_root_picture_in_picture.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



void V8ShadowRoot::Impl::Init() {
  V8ShadowRoot::install_interface_template_func_ = InstallInterfaceTemplate;
V8ShadowRoot::install_unconditional_props_func_ = InstallUnconditionalProperties;
V8ShadowRoot::install_context_independent_props_func_ = InstallContextIndependentProperties;
}

namespace  {

namespace v8_shadow_root {

void ModeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_mode_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.mode.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->mode();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void HostAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_host_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.host.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->host();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void OnslotchangeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_onslotchange_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.onslotchange.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->onslotchange();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, blink_receiver);
}

void OnslotchangeAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_onslotchange_Setter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.onslotchange.set");

v8::Local<v8::Value> v8_property_value = info[0];
EventListener* event_handler = JSEventHandler::CreateOrNull(
    v8_property_value,
    JSEventHandler::HandlerType::kEventHandler);
v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
blink_receiver->setOnslotchange(event_handler);
}

void InnerHTMLAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_innerHTML_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.innerHTML.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->innerHTML();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void InnerHTMLAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_innerHTML_Setter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.innerHTML.set");


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "ShadowRoot";
const char* const property_name = "innerHTML";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);

// [CEReactions]
CEReactionsScope ce_reactions_scope;

v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
ExecutionContext* execution_context_of_document_tree = bindings::ExecutionContextFromV8Wrappable(blink_receiver);
auto&& arg1_value = NativeValueTraits<IDLStringStringContextTrustedHTMLTreatNullAsEmptyString>::NativeValue(isolate, v8_property_value, exception_state, execution_context_of_document_tree);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setInnerHTML(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void DelegatesFocusAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_delegatesFocus_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.delegatesFocus.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->delegatesFocus();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<bool>());
}


void SlotAssignmentAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_slotAssignment_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.slotAssignment.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->slotAssignment();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}


void PictureInPictureElementAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_pictureInPictureElement_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.pictureInPictureElement.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ShadowRoot_PictureInPictureElement_AttributeGetter);


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = ShadowRootPictureInPicture::pictureInPictureElement(*blink_receiver);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ActiveElementAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_activeElement_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.activeElement.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::activeElement(*blink_receiver);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void StyleSheetsAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_styleSheets_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.styleSheets.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::styleSheets(*blink_receiver);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void PointerLockElementAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_pointerLockElement_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.pointerLockElement.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::pointerLockElement(*blink_receiver);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void FullscreenElementAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_fullscreenElement_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.fullscreenElement.get");


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::fullscreenElement(*blink_receiver);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void FullscreenElementAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LegacyLenientSetter]
}

void AdoptedStyleSheetsAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_adoptedStyleSheets_Getter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.adoptedStyleSheets.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kAdoptedStyleSheets);


v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::adoptedStyleSheets(*blink_receiver);
bindings::V8SetReturnValue(info, return_value->GetExoticObject(), blink_receiver);
}

void AdoptedStyleSheetsAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_adoptedStyleSheets_Setter");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.adoptedStyleSheets.set");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kAdoptedStyleSheets);



v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& observable_array = DocumentOrShadowRoot::adoptedStyleSheets(*blink_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "ShadowRoot";
const char* const property_name = "adoptedStyleSheets";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
observable_array->PerformAttributeSet(script_state, v8_property_value, exception_state);
}

void ElementFromPointOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_elementFromPoint");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.elementFromPoint");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ShadowRoot_ElementFromPoint_Method);


const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ShadowRoot";
const char* const property_name = "elementFromPoint";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& arg1_x = NativeValueTraits<IDLDouble>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_y = NativeValueTraits<IDLDouble>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = DocumentOrShadowRoot::elementFromPoint(*blink_receiver, arg1_x, arg2_y);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void ElementsFromPointOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_elementsFromPoint");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.elementsFromPoint");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ShadowRoot_ElementsFromPoint_Method);


const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ShadowRoot";
const char* const property_name = "elementsFromPoint";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& arg1_x = NativeValueTraits<IDLDouble>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_y = NativeValueTraits<IDLDouble>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = DocumentOrShadowRoot::elementsFromPoint(*blink_receiver, arg1_x, arg2_y);
if (!ToV8Traits<IDLSequence<Element>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void GetAnimationsOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_getAnimations");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.getAnimations");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kV8ShadowRoot_GetAnimations_Method);





v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::getAnimations(*blink_receiver);
if (!ToV8Traits<IDLSequence<Animation>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void GetInnerHTMLOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_getInnerHTML");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.getInnerHTML");


v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kElementGetInnerHTML);





v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<GetInnerHTMLOptions>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_options;
if (info[0]->IsUndefined()) {
  arg1_options = GetInnerHTMLOptions::Create();
} else {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ShadowRoot";
const char* const property_name = "getInnerHTML";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_options = NativeValueTraits<GetInnerHTMLOptions>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->getInnerHTML(arg1_options);
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void GetSelectionOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ShadowRoot_getSelection");
BLINK_BINDINGS_TRACE_EVENT("ShadowRoot.getSelection");







v8::Local<v8::Object> v8_receiver = info.This();
ShadowRoot* blink_receiver = V8ShadowRoot::ToWrappableUnsafe(v8_receiver);
auto&& return_value = DocumentOrShadowRoot::getSelection(*blink_receiver);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


}  // namespace v8_shadow_root

using namespace v8_shadow_root;

}  // namespace 

void V8ShadowRoot::Impl::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ShadowRoot::GetWrapperTypeInfo();
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

void V8ShadowRoot::Impl::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"mode", ModeAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"host", HostAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"onslotchange", OnslotchangeAttributeGetCallback, OnslotchangeAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"innerHTML", InnerHTMLAttributeGetCallback, InnerHTMLAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"delegatesFocus", DelegatesFocusAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"slotAssignment", SlotAssignmentAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"activeElement", ActiveElementAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"styleSheets", StyleSheetsAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"pointerLockElement", PointerLockElementAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"fullscreenElement", FullscreenElementAttributeGetCallback, FullscreenElementAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"adoptedStyleSheets", AdoptedStyleSheetsAttributeGetCallback, AdoptedStyleSheetsAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"elementFromPoint", ElementFromPointOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"elementsFromPoint", ElementsFromPointOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"getInnerHTML", GetInnerHTMLOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect)}, 
{"getSelection", GetSelectionOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}

void V8ShadowRoot::Impl::InstallContextIndependentProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

if (RuntimeEnabledFeatures::PictureInPictureAPIEnabled()) {
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"pictureInPictureElement", PictureInPictureElementAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}




if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"getAnimations", GetAnimationsOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}


}



}  // namespace blink
