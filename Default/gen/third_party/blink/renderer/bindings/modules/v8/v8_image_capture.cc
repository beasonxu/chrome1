// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_image_capture.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_photo_settings.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/modules/imagecapture/image_capture.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_track.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/instrumentation/use_counter.h"

namespace blink {



bool V8ImageCapture::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8ImageCapture::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8ImageCapture::InstallInterfaceTemplate,
    nullptr,
    "ImageCapture",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ImageCapture::wrapper_type_info_ =
    V8ImageCapture::wrapper_type_info_;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, ImageCapture>::value,
    "ImageCapture does not inherit from ActiveScriptWrappable<> despite "
    "the IDL has [ActiveScriptWrappable] extended attribute.");
static_assert(
    !std::is_same<decltype(&ImageCapture::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ImageCapture is not overriding hasPendingActivity() despite "
    "the IDL has [ActiveScriptWrappable] extended attribute.");

namespace  {

namespace v8_image_capture {

void TrackAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageCapture_track_Getter");
BLINK_BINDINGS_TRACE_EVENT("ImageCapture.track.get");


v8::Local<v8::Object> v8_receiver = info.This();
ImageCapture* blink_receiver = V8ImageCapture::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->videoStreamTrack();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageCapture_constructor");
BLINK_BINDINGS_TRACE_EVENT("ImageCapture.constructor");

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kConstructorOperationInvoke;
const char* const class_like_name = "ImageCapture";
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

v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
ExecutionContext* current_execution_context = ExecutionContext::From(current_context);
// [Measure], [MeasureAs]
UseCounter::Count(current_execution_context, WebFeature::kImageCaptureConstructor);

if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}

ExecutionContext* execution_context = current_execution_context;
auto&& arg1_track = NativeValueTraits<MediaStreamTrack>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = ImageCapture::Create(execution_context, arg1_track, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
v8::Local<v8::Object> v8_wrapper = return_value->AssociateWithWrapper(isolate, V8ImageCapture::GetWrapperTypeInfo(), v8_receiver);
bindings::V8SetReturnValue(info, v8_wrapper);
}

void GetPhotoCapabilitiesOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageCapture_getPhotoCapabilities");
BLINK_BINDINGS_TRACE_EVENT("ImageCapture.getPhotoCapabilities");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8ImageCapture::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ImageCapture";
const char* const property_name = "getPhotoCapabilities";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}






ImageCapture* blink_receiver = V8ImageCapture::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->getPhotoCapabilities(script_state);
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void GetPhotoSettingsOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageCapture_getPhotoSettings");
BLINK_BINDINGS_TRACE_EVENT("ImageCapture.getPhotoSettings");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8ImageCapture::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ImageCapture";
const char* const property_name = "getPhotoSettings";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}






ImageCapture* blink_receiver = V8ImageCapture::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->getPhotoSettings(script_state);
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void GrabFrameOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageCapture_grabFrame");
BLINK_BINDINGS_TRACE_EVENT("ImageCapture.grabFrame");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8ImageCapture::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ImageCapture";
const char* const property_name = "grabFrame";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}






ImageCapture* blink_receiver = V8ImageCapture::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->grabFrame(script_state);
bindings::V8SetReturnValue(info, return_value.V8Value());
}

void TakePhotoOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageCapture_takePhoto");
BLINK_BINDINGS_TRACE_EVENT("ImageCapture.takePhoto");

// Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8ImageCapture::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ImageCapture";
const char* const property_name = "takePhoto";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}






ImageCapture* blink_receiver = V8ImageCapture::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
decltype(NativeValueTraits<PhotoSettings>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_photo_settings;
if (info[0]->IsUndefined()) {
  arg1_photo_settings = PhotoSettings::Create();
} else {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "ImageCapture";
const char* const property_name = "takePhoto";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
arg1_photo_settings = NativeValueTraits<PhotoSettings>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->takePhoto(script_state, arg1_photo_settings);
bindings::V8SetReturnValue(info, return_value.V8Value());
}


}  // namespace v8_image_capture

using namespace v8_image_capture;

}  // namespace 

void V8ImageCapture::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ImageCapture::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

interface_function_template->SetCallHandler(ConstructorCallback);
interface_function_template->SetLength(1);








v8::Local<v8::Template> instance_template = instance_object_template;
v8::Local<v8::Template> prototype_template = prototype_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8ImageCapture::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"track", TrackAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"getPhotoCapabilities", GetPhotoCapabilitiesOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"getPhotoSettings", GetPhotoSettingsOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"grabFrame", GrabFrameOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"takePhoto", TakePhotoOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
