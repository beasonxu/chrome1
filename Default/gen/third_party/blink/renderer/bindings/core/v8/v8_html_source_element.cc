// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_html_source_element.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/html_source_element.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8HTMLSourceElement::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8HTMLSourceElement::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8HTMLSourceElement::InstallInterfaceTemplate,
    nullptr,
    "HTMLSourceElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& HTMLSourceElement::wrapper_type_info_ =
    V8HTMLSourceElement::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLSourceElement>::value,
    "HTMLSourceElement inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&HTMLSourceElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLSourceElement is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_html_source_element {

void SrcAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_src_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.src.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->GetURLAttribute(html_names::kSrcAttr);
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void SrcAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_src_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.src.set");


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "src";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);

// [CEReactions]
CEReactionsScope ce_reactions_scope;

v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
auto&& arg1_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setAttribute(html_names::kSrcAttr, arg1_value);

}

void TypeAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_type_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.type.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->type();
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void TypeAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_type_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.type.set");


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "type";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);

// [CEReactions]
CEReactionsScope ce_reactions_scope;

v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
auto&& arg1_value = NativeValueTraits<IDLString>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setType(arg1_value);

}

void SrcsetAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_srcset_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.srcset.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->FastGetAttribute(html_names::kSrcsetAttr);
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void SrcsetAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_srcset_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.srcset.set");


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "srcset";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);

// [CEReactions]
CEReactionsScope ce_reactions_scope;

v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
auto&& arg1_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setAttribute(html_names::kSrcsetAttr, arg1_value);

}

void SizesAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_sizes_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.sizes.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->FastGetAttribute(html_names::kSizesAttr);
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void SizesAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_sizes_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.sizes.set");

const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "sizes";
bindings::PerformAttributeSetCEReactionsReflectTypeString(info, html_names::kSizesAttr, class_like_name, property_name);
}

void MediaAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_media_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.media.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->FastGetAttribute(html_names::kMediaAttr);
v8::Isolate* isolate = info.GetIsolate();
bindings::V8SetReturnValue(info, return_value, isolate, bindings::V8ReturnValue::kNonNullable);
}

void MediaAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_media_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.media.set");

const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "media";
bindings::PerformAttributeSetCEReactionsReflectTypeString(info, html_names::kMediaAttr, class_like_name, property_name);
}

void WidthAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_width_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.width.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->GetUnsignedIntegralAttribute(html_names::kWidthAttr);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}

void WidthAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_width_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.width.set");


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "width";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);

// [CEReactions]
CEReactionsScope ce_reactions_scope;

v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
auto&& arg1_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->SetUnsignedIntegralAttribute(html_names::kWidthAttr, arg1_value);

}

void HeightAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_height_Getter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.height.get");


v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->GetUnsignedIntegralAttribute(html_names::kHeightAttr);
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}

void HeightAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_height_Setter");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.height.set");


v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "HTMLSourceElement";
const char* const property_name = "height";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);

// [CEReactions]
CEReactionsScope ce_reactions_scope;

v8::Local<v8::Object> v8_receiver = info.This();
HTMLSourceElement* blink_receiver = V8HTMLSourceElement::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Value> v8_property_value = info[0];
auto&& arg1_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->SetUnsignedIntegralAttribute(html_names::kHeightAttr, arg1_value);

}

void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLSourceElement_constructor");
BLINK_BINDINGS_TRACE_EVENT("HTMLSourceElement.constructor");

v8::Isolate* isolate = info.GetIsolate();
if (!info.IsConstructCall()) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "HTMLSourceElement";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
exception_state.ThrowTypeError(ExceptionMessages::ConstructorCalledAsFunction());
return;
}
if (ConstructorMode::Current(isolate) == ConstructorMode::kWrapExistingObject) {
  v8::Local<v8::Object> v8_receiver = info.This();
bindings::V8SetReturnValue(info, v8_receiver);
return;
}



// [HTMLConstructor]
V8HTMLConstructor::HtmlConstructor(info, *V8HTMLSourceElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLSourceElement);
}


}  // namespace v8_html_source_element

using namespace v8_html_source_element;

}  // namespace 

void V8HTMLSourceElement::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8HTMLSourceElement::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

interface_function_template->SetCallHandler(ConstructorCallback);
interface_function_template->SetLength(0);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8HTMLSourceElement::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"src", SrcAttributeGetCallback, SrcAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"type", TypeAttributeGetCallback, TypeAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"srcset", SrcsetAttributeGetCallback, SrcsetAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"sizes", SizesAttributeGetCallback, SizesAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"media", MediaAttributeGetCallback, MediaAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"width", WidthAttributeGetCallback, WidthAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"height", HeightAttributeGetCallback, HeightAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
