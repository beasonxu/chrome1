// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_svg_preserve_aspect_ratio.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/svg/svg_preserve_aspect_ratio_tear_off.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8SVGPreserveAspectRatio::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8SVGPreserveAspectRatio::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8SVGPreserveAspectRatio::InstallInterfaceTemplate,
    nullptr,
    "SVGPreserveAspectRatio",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& SVGPreserveAspectRatioTearOff::wrapper_type_info_ =
    V8SVGPreserveAspectRatio::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGPreserveAspectRatioTearOff>::value,
    "SVGPreserveAspectRatioTearOff inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&SVGPreserveAspectRatioTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGPreserveAspectRatioTearOff is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_svg_preserve_aspect_ratio {

void AlignAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_align_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGPreserveAspectRatio.align.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGPreserveAspectRatioTearOff* blink_receiver = V8SVGPreserveAspectRatio::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->align();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint16_t>());
}

void AlignAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_align_Setter");
BLINK_BINDINGS_TRACE_EVENT("SVGPreserveAspectRatio.align.set");



v8::Local<v8::Object> v8_receiver = info.This();
SVGPreserveAspectRatioTearOff* blink_receiver = V8SVGPreserveAspectRatio::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "SVGPreserveAspectRatio";
const char* const property_name = "align";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setAlign(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void MeetOrSliceAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_meetOrSlice_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGPreserveAspectRatio.meetOrSlice.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGPreserveAspectRatioTearOff* blink_receiver = V8SVGPreserveAspectRatio::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->meetOrSlice();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint16_t>());
}

void MeetOrSliceAttributeSetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_meetOrSlice_Setter");
BLINK_BINDINGS_TRACE_EVENT("SVGPreserveAspectRatio.meetOrSlice.set");



v8::Local<v8::Object> v8_receiver = info.This();
SVGPreserveAspectRatioTearOff* blink_receiver = V8SVGPreserveAspectRatio::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Value> v8_property_value = info[0];
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeSet;
const char* const class_like_name = "SVGPreserveAspectRatio";
const char* const property_name = "meetOrSlice";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& arg1_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
blink_receiver->setMeetOrSlice(arg1_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}
















}  // namespace v8_svg_preserve_aspect_ratio

using namespace v8_svg_preserve_aspect_ratio;

}  // namespace 

void V8SVGPreserveAspectRatio::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8SVGPreserveAspectRatio::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8SVGPreserveAspectRatio::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"align", AlignAttributeGetCallback, AlignAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"meetOrSlice", MeetOrSliceAttributeGetCallback, MeetOrSliceAttributeSetCallback, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}



{
  static const IDLMemberInstaller::ConstantValueConfig kConstantValueTable[] = {
{"SVG_PRESERVEASPECTRATIO_UNKNOWN", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioUnknown},
{"SVG_PRESERVEASPECTRATIO_NONE", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioNone},
{"SVG_PRESERVEASPECTRATIO_XMINYMIN", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXminymin},
{"SVG_PRESERVEASPECTRATIO_XMIDYMIN", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXmidymin},
{"SVG_PRESERVEASPECTRATIO_XMAXYMIN", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXmaxymin},
{"SVG_PRESERVEASPECTRATIO_XMINYMID", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXminymid},
{"SVG_PRESERVEASPECTRATIO_XMIDYMID", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXmidymid},
{"SVG_PRESERVEASPECTRATIO_XMAXYMID", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXmaxymid},
{"SVG_PRESERVEASPECTRATIO_XMINYMAX", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXminymax},
{"SVG_PRESERVEASPECTRATIO_XMIDYMAX", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXmidymax},
{"SVG_PRESERVEASPECTRATIO_XMAXYMAX", V8SVGPreserveAspectRatio::Constant::kSVGPreserveaspectratioXmaxymax},
{"SVG_MEETORSLICE_UNKNOWN", V8SVGPreserveAspectRatio::Constant::kSVGMeetorsliceUnknown},
{"SVG_MEETORSLICE_MEET", V8SVGPreserveAspectRatio::Constant::kSVGMeetorsliceMeet},
{"SVG_MEETORSLICE_SLICE", V8SVGPreserveAspectRatio::Constant::kSVGMeetorsliceSlice},
};
IDLMemberInstaller::InstallConstants(isolate, world, instance_template, prototype_template, interface_template, signature, kConstantValueTable);
}





}




}  // namespace blink
