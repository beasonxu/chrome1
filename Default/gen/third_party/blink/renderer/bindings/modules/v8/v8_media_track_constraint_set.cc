// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraint_set.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_boolean_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_dom_string_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_double_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_long_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_union_boolean_constrainbooleanparameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_union_boolean_constraindoublerange_double.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_union_constraindomstringparameters_string_stringsequence.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_union_constraindoublerange_double.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_union_constrainlongrange_long.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_union_constrainpoint2dparameters_point2dsequence.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



MediaTrackConstraintSet* MediaTrackConstraintSet::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  MediaTrackConstraintSet* dictionary = MakeGarbageCollected<MediaTrackConstraintSet>(isolate);
if (v8_value->IsNullOrUndefined()) {
  return dictionary;
}
if (!v8_value->IsObject()) {
  const char* const class_like_name = "MediaTrackConstraintSet";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 MediaTrackConstraintSet::MediaTrackConstraintSet() {
  
}

 MediaTrackConstraintSet::MediaTrackConstraintSet(v8::Isolate* isolate) {
  
}






















































































































































HeapVector<ScriptValue> MediaTrackConstraintSet::getOptionalOr(const HeapVector<ScriptValue>& fallback_value) const {
  if (!hasOptional()) {
  return fallback_value;
}
return member_optional_;
}

HeapVector<ScriptValue> MediaTrackConstraintSet::getOptionalOr(HeapVector<ScriptValue>&& fallback_value) const {
  if (!hasOptional()) {
  return std::move(fallback_value);
}
return member_optional_;
}

void MediaTrackConstraintSet::setOptional(const HeapVector<ScriptValue>& value) {
  member_optional_ = value;
has_optional_ = true;
}

void MediaTrackConstraintSet::setOptional(HeapVector<ScriptValue>&& value) {
  member_optional_ = std::move(value);
has_optional_ = true;
}
























































































void MediaTrackConstraintSet::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_aspect_ratio_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainBooleanParameters>>::Trace(visitor, member_auto_gain_control_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_brightness_);
TraceIfNeeded<Member<V8UnionConstrainLongRangeOrLong>>::Trace(visitor, member_channel_count_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_color_temperature_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_contrast_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_device_id_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainBooleanParameters>>::Trace(visitor, member_echo_cancellation_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_exposure_compensation_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_exposure_mode_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_exposure_time_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_facing_mode_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_focus_distance_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_focus_mode_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_frame_rate_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_group_id_);
TraceIfNeeded<Member<V8UnionConstrainLongRangeOrLong>>::Trace(visitor, member_height_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_iso_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_latency_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_mandatory_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainBooleanParameters>>::Trace(visitor, member_noise_suppression_);
TraceIfNeeded<HeapVector<ScriptValue>>::Trace(visitor, member_optional_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainDoubleRangeOrDouble>>::Trace(visitor, member_pan_);
TraceIfNeeded<Member<V8UnionConstrainPoint2DParametersOrPoint2DSequence>>::Trace(visitor, member_points_of_interest_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_resize_mode_);
TraceIfNeeded<Member<V8UnionConstrainLongRangeOrLong>>::Trace(visitor, member_sample_rate_);
TraceIfNeeded<Member<V8UnionConstrainLongRangeOrLong>>::Trace(visitor, member_sample_size_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_saturation_);
TraceIfNeeded<Member<V8UnionConstrainDoubleRangeOrDouble>>::Trace(visitor, member_sharpness_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainDoubleRangeOrDouble>>::Trace(visitor, member_tilt_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainBooleanParameters>>::Trace(visitor, member_torch_);
TraceIfNeeded<Member<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>>::Trace(visitor, member_white_balance_mode_);
TraceIfNeeded<Member<V8UnionConstrainLongRangeOrLong>>::Trace(visitor, member_width_);
TraceIfNeeded<Member<V8UnionBooleanOrConstrainDoubleRangeOrDouble>>::Trace(visitor, member_zoom_);
bindings::DictionaryBase::Trace(visitor);
}

bool MediaTrackConstraintSet::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasAspectRatio()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_aspect_ratio_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasAutoGainControl()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainBooleanParameters>::ToV8(script_state, member_auto_gain_control_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasBrightness()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_brightness_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasChannelCount()) {
  if (!ToV8Traits<V8UnionConstrainLongRangeOrLong>::ToV8(script_state, member_channel_count_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasColorTemperature()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_color_temperature_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasContrast()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_contrast_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDeviceId()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_device_id_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[6].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasEchoCancellation()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainBooleanParameters>::ToV8(script_state, member_echo_cancellation_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[7].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasExposureCompensation()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_exposure_compensation_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[8].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasExposureMode()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_exposure_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[9].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasExposureTime()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_exposure_time_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[10].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasFacingMode()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_facing_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[11].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasFocusDistance()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_focus_distance_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[12].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasFocusMode()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_focus_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[13].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasFrameRate()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_frame_rate_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[14].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasGroupId()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_group_id_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[15].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasHeight()) {
  if (!ToV8Traits<V8UnionConstrainLongRangeOrLong>::ToV8(script_state, member_height_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[16].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasIso()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_iso_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[17].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasLatency()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_latency_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[18].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasMandatory()) {
  if (!ToV8Traits<IDLObject>::ToV8(script_state, member_mandatory_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[19].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasNoiseSuppression()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainBooleanParameters>::ToV8(script_state, member_noise_suppression_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[20].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasOptional()) {
  if (!ToV8Traits<IDLSequence<IDLObject>>::ToV8(script_state, member_optional_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[21].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPan()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainDoubleRangeOrDouble>::ToV8(script_state, member_pan_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[22].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPointsOfInterest()) {
  if (!ToV8Traits<V8UnionConstrainPoint2DParametersOrPoint2DSequence>::ToV8(script_state, member_points_of_interest_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[23].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasResizeMode()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_resize_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[24].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSampleRate()) {
  if (!ToV8Traits<V8UnionConstrainLongRangeOrLong>::ToV8(script_state, member_sample_rate_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[25].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSampleSize()) {
  if (!ToV8Traits<V8UnionConstrainLongRangeOrLong>::ToV8(script_state, member_sample_size_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[26].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSaturation()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_saturation_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[27].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasSharpness()) {
  if (!ToV8Traits<V8UnionConstrainDoubleRangeOrDouble>::ToV8(script_state, member_sharpness_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[28].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasTilt()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainDoubleRangeOrDouble>::ToV8(script_state, member_tilt_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[29].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasTorch()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainBooleanParameters>::ToV8(script_state, member_torch_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[30].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasWhiteBalanceMode()) {
  if (!ToV8Traits<V8UnionConstrainDOMStringParametersOrStringOrStringSequence>::ToV8(script_state, member_white_balance_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[31].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasWidth()) {
  if (!ToV8Traits<V8UnionConstrainLongRangeOrLong>::ToV8(script_state, member_width_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[32].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasZoom()) {
  if (!ToV8Traits<V8UnionBooleanOrConstrainDoubleRangeOrDouble>::ToV8(script_state, member_zoom_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[33].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void MediaTrackConstraintSet::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "MediaTrackConstraintSet";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("aspectRatio");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_aspect_ratio_, member_aspect_ratio_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("autoGainControl");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainBooleanParameters, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_auto_gain_control_, member_auto_gain_control_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("brightness");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_brightness_, member_brightness_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("channelCount");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainLongRangeOrLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_channel_count_, member_channel_count_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("colorTemperature");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_color_temperature_, member_color_temperature_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("contrast");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_contrast_, member_contrast_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("deviceId");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[6].Get(isolate), has_device_id_, member_device_id_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("echoCancellation");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainBooleanParameters, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[7].Get(isolate), has_echo_cancellation_, member_echo_cancellation_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("exposureCompensation");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[8].Get(isolate), has_exposure_compensation_, member_exposure_compensation_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("exposureMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[9].Get(isolate), has_exposure_mode_, member_exposure_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("exposureTime");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[10].Get(isolate), has_exposure_time_, member_exposure_time_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("facingMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[11].Get(isolate), has_facing_mode_, member_facing_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("focusDistance");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[12].Get(isolate), has_focus_distance_, member_focus_distance_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("focusMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[13].Get(isolate), has_focus_mode_, member_focus_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("frameRate");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[14].Get(isolate), has_frame_rate_, member_frame_rate_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("groupId");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[15].Get(isolate), has_group_id_, member_group_id_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("height");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainLongRangeOrLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[16].Get(isolate), has_height_, member_height_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("iso");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[17].Get(isolate), has_iso_, member_iso_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("latency");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[18].Get(isolate), has_latency_, member_latency_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("mandatory");
bool fallback_presence_var;
if (!bindings::GetDictionaryMemberFromV8Object<IDLObject, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[19].Get(isolate), fallback_presence_var, member_mandatory_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("noiseSuppression");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainBooleanParameters, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[20].Get(isolate), has_noise_suppression_, member_noise_suppression_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("optional");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLObject>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[21].Get(isolate), has_optional_, member_optional_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("pan");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[22].Get(isolate), has_pan_, member_pan_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("pointsOfInterest");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainPoint2DParametersOrPoint2DSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[23].Get(isolate), has_points_of_interest_, member_points_of_interest_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("resizeMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[24].Get(isolate), has_resize_mode_, member_resize_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("sampleRate");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainLongRangeOrLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[25].Get(isolate), has_sample_rate_, member_sample_rate_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("sampleSize");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainLongRangeOrLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[26].Get(isolate), has_sample_size_, member_sample_size_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("saturation");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[27].Get(isolate), has_saturation_, member_saturation_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("sharpness");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[28].Get(isolate), has_sharpness_, member_sharpness_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("tilt");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[29].Get(isolate), has_tilt_, member_tilt_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("torch");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainBooleanParameters, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[30].Get(isolate), has_torch_, member_torch_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("whiteBalanceMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainDOMStringParametersOrStringOrStringSequence, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[31].Get(isolate), has_white_balance_mode_, member_white_balance_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("width");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionConstrainLongRangeOrLong, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[32].Get(isolate), has_width_, member_width_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("zoom");
if (!bindings::GetDictionaryMemberFromV8Object<V8UnionBooleanOrConstrainDoubleRangeOrDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[33].Get(isolate), has_zoom_, member_zoom_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> MediaTrackConstraintSet::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"aspectRatio",
"autoGainControl",
"brightness",
"channelCount",
"colorTemperature",
"contrast",
"deviceId",
"echoCancellation",
"exposureCompensation",
"exposureMode",
"exposureTime",
"facingMode",
"focusDistance",
"focusMode",
"frameRate",
"groupId",
"height",
"iso",
"latency",
"mandatory",
"noiseSuppression",
"optional",
"pan",
"pointsOfInterest",
"resizeMode",
"sampleRate",
"sampleSize",
"saturation",
"sharpness",
"tilt",
"torch",
"whiteBalanceMode",
"width",
"zoom",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
