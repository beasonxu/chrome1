// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_displacement_map_element.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_string.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_element.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/core/svg/svg_animated_enumeration_base.h"
#include "third_party/blink/renderer/core/svg/svg_animated_length.h"
#include "third_party/blink/renderer/core/svg/svg_animated_number.h"
#include "third_party/blink/renderer/core/svg/svg_animated_string.h"
#include "third_party/blink/renderer/core/svg/svg_fe_displacement_map_element.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8SVGFEDisplacementMapElement::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8SVGFEDisplacementMapElement::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8SVGFEDisplacementMapElement::InstallInterfaceTemplate,
    nullptr,
    "SVGFEDisplacementMapElement",
    V8SVGElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& SVGFEDisplacementMapElement::wrapper_type_info_ =
    V8SVGFEDisplacementMapElement::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGFEDisplacementMapElement>::value,
    "SVGFEDisplacementMapElement inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&SVGFEDisplacementMapElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGFEDisplacementMapElement is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_svg_fe_displacement_map_element {

void In1AttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_in1_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.in1.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->in1();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void In2AttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_in2_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.in2.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->in2();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ScaleAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_scale_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.scale.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->scale();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void XChannelSelectorAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_xChannelSelector_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.xChannelSelector.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->xChannelSelector();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void YChannelSelectorAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_yChannelSelector_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.yChannelSelector.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->yChannelSelector();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void XAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_x_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.x.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->x();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void YAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_y_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.y.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->y();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void WidthAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_width_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.width.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->width();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void HeightAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_height_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.height.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->height();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ResultAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_result_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.result.get");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);


v8::Local<v8::Object> v8_receiver = info.This();
SVGFEDisplacementMapElement* blink_receiver = V8SVGFEDisplacementMapElement::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->result();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void SVGChannelUnknownConstantCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_SVG_CHANNEL_UNKNOWN");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.SVG_CHANNEL_UNKNOWN");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);

bindings::V8SetReturnValue(info, V8SVGFEDisplacementMapElement::Constant::kSVGChannelUnknown);
}

void SVGChannelRConstantCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_SVG_CHANNEL_R");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.SVG_CHANNEL_R");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);

bindings::V8SetReturnValue(info, V8SVGFEDisplacementMapElement::Constant::kSVGChannelR);
}

void SVGChannelGConstantCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_SVG_CHANNEL_G");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.SVG_CHANNEL_G");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);

bindings::V8SetReturnValue(info, V8SVGFEDisplacementMapElement::Constant::kSVGChannelG);
}

void SVGChannelBConstantCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_SVG_CHANNEL_B");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.SVG_CHANNEL_B");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);

bindings::V8SetReturnValue(info, V8SVGFEDisplacementMapElement::Constant::kSVGChannelB);
}

void SVGChannelAConstantCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGFEDisplacementMapElement_SVG_CHANNEL_A");
BLINK_BINDINGS_TRACE_EVENT("SVGFEDisplacementMapElement.SVG_CHANNEL_A");
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kSVG1DOMFilter);

bindings::V8SetReturnValue(info, V8SVGFEDisplacementMapElement::Constant::kSVGChannelA);
}


}  // namespace v8_svg_fe_displacement_map_element

using namespace v8_svg_fe_displacement_map_element;

}  // namespace 

void V8SVGFEDisplacementMapElement::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8SVGFEDisplacementMapElement::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8SVGFEDisplacementMapElement::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"in1", In1AttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"in2", In2AttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"scale", ScaleAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"xChannelSelector", XChannelSelectorAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"yChannelSelector", YChannelSelectorAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"x", XAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"y", YAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"width", WidthAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"height", HeightAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"result", ResultAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}


{
  static const IDLMemberInstaller::ConstantCallbackConfig kConstantCallbackTable[] = {
{"SVG_CHANNEL_UNKNOWN", SVGChannelUnknownConstantCallback},
{"SVG_CHANNEL_R", SVGChannelRConstantCallback},
{"SVG_CHANNEL_G", SVGChannelGConstantCallback},
{"SVG_CHANNEL_B", SVGChannelBConstantCallback},
{"SVG_CHANNEL_A", SVGChannelAConstantCallback},
};
IDLMemberInstaller::InstallConstants(isolate, world, instance_template, prototype_template, interface_template, signature, kConstantCallbackTable);
}






}




}  // namespace blink
