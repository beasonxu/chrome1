// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_image_track_list.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_track.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/webcodecs/image_track.h"
#include "third_party/blink/renderer/modules/webcodecs/image_track_list.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8ImageTrackList::IsExposed(ExecutionContext* execution_context) {
  
return (execution_context->IsWindow() || execution_context->IsDedicatedWorkerGlobalScope()) && RuntimeEnabledFeatures::WebCodecsEnabled(execution_context);
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

const WrapperTypeInfo V8ImageTrackList::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8ImageTrackList::InstallInterfaceTemplate,
    nullptr,
    "ImageTrackList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& ImageTrackList::wrapper_type_info_ =
    V8ImageTrackList::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ImageTrackList>::value,
    "ImageTrackList inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&ImageTrackList::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ImageTrackList is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

void V8ImageTrackList::IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_IndexedPropertyGetter");

v8::Local<v8::Object> v8_receiver = info.Holder();
ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 1.2. If index is a supported property index, then:
// step 3. Return OrdinaryGetOwnProperty(O, P).
if (index >= blink_receiver->length())
  return;  // Do not intercept.  Fallback to OrdinaryGetOwnProperty.

auto&& return_value = blink_receiver->AnonymousIndexedGetter(index);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void V8ImageTrackList::IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8_property_value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_IndexedPropertySetter");

// 3.9.2. [[Set]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-set
// OrdinarySetWithOwnDescriptor will end up calling DefineOwnProperty,
// which will fail when the receiver object is this legacy platform
// object.
bindings::V8SetReturnValue(info, nullptr);
if (info.ShouldThrowOnError()) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionContext::Context::kIndexedPropertySet,
      "ImageTrackList");
  exception_state.ThrowTypeError(
      "Indexed property setter is not supported.");
}

}

void V8ImageTrackList::IndexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_IndexedPropertyDeleter");

v8::Local<v8::Object> v8_receiver = info.Holder();
ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
// 3.9.4. [[Delete]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-delete
// step 1.2. If index is not a supported property index, then return true.
// step 1.3. Return false.
const bool is_supported = index < blink_receiver->length();
bindings::V8SetReturnValue(info, !is_supported);
if (is_supported and info.ShouldThrowOnError()) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionContext::Context::kIndexedPropertyDelete,
      "ImageTrackList");
  exception_state.ThrowTypeError("Index property deleter is not supported.");
}

}

void V8ImageTrackList::IndexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor& v8_property_desc, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_IndexedPropertyDefiner");

// 3.9.3. [[DefineOwnProperty]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-defineownproperty
// step 1.1. If the result of calling IsDataDescriptor(Desc) is false, then
//   return false.
if (v8_property_desc.has_get() || v8_property_desc.has_set()) {
  bindings::V8SetReturnValue(info, nullptr);
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(
        info.GetIsolate(),
        ExceptionContext::Context::kIndexedPropertySet,
        "ImageTrackList");
    exception_state.ThrowTypeError("Accessor properties are not allowed.");
  }
  return;
}

// step 1.2. If O does not implement an interface with an indexed property
//   setter, then return false.
bindings::V8SetReturnValue(info, nullptr);
if (info.ShouldThrowOnError()) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionContext::Context::kIndexedPropertySet,
      "ImageTrackList");
  exception_state.ThrowTypeError("Index property setter is not supported.");
}

}

void V8ImageTrackList::IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_IndexedPropertyDescriptor");

// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 1.2.3. If operation was defined without an identifier, then set
//   value to the result of performing the steps listed in the interface
//   description to determine the value of an indexed property with index
//   as the index.
// step 1.2.4. Otherwise, operation was defined with an identifier. Set
//   value to the result of performing the steps listed in the description
//   of operation with index as the only argument value.
V8ImageTrackList::IndexedPropertyGetterCallback(index, info);
v8::Local<v8::Value> v8_value = info.GetReturnValue().Get();
// step 1.2. If index is a supported property index, then:
// step 3. Return OrdinaryGetOwnProperty(O, P).
if (v8_value->IsUndefined())
  return;  // Do not intercept.  Fallback to OrdinaryGetOwnProperty.

// step 1.2.6. Set desc.[[Value]] to the result of converting value to an
//   ECMAScript value.
// step 1.2.7. If O implements an interface with an indexed property setter,
//   then set desc.[[Writable]] to true, otherwise set it to false.
// step 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
v8::PropertyDescriptor desc(v8_value, /*writable=*/false);
desc.set_enumerable(true);
desc.set_configurable(true);
bindings::V8SetReturnValue(info, desc);
}

void V8ImageTrackList::IndexedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_IndexedPropertyEnumerator");

v8::Local<v8::Object> v8_receiver = info.Holder();
ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
// 3.9.6. [[OwnPropertyKeys]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-ownpropertykeys
// step 2. If O supports indexed properties, then for each index of O's
//   supported property indices, in ascending numerical order, append
//   ! ToString(index) to keys.
uint32_t length = blink_receiver->length();
v8::Local<v8::Array> array =
    bindings::EnumerateIndexedProperties(isolate, length);
bindings::V8SetReturnValue(info, array);

}


namespace  {

namespace v8_image_track_list {

void LengthAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_length_Getter");
BLINK_BINDINGS_TRACE_EVENT("ImageTrackList.length.get");


v8::Local<v8::Object> v8_receiver = info.This();
ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->length();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}


void SelectedIndexAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_selectedIndex_Getter");
BLINK_BINDINGS_TRACE_EVENT("ImageTrackList.selectedIndex.get");


v8::Local<v8::Object> v8_receiver = info.This();
ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->selectedIndex();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<int32_t>());
}


void SelectedTrackAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_selectedTrack_Getter");
BLINK_BINDINGS_TRACE_EVENT("ImageTrackList.selectedTrack.get");


v8::Local<v8::Object> v8_receiver = info.This();
ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->selectedTrack();
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


void ReadyAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Promise returning function: Convert a TypeError to a reject promise.
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.This();
if (!V8ImageTrackList::HasInstance(isolate, v8_receiver)) {
  const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kAttributeGet;
const char* const class_like_name = "ImageTrackList";
const char* const property_name = "ready";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
exception_state.ThrowTypeError("Illegal invocation");
return;
}

RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageTrackList_ready_Getter");
BLINK_BINDINGS_TRACE_EVENT("ImageTrackList.ready.get");


ImageTrackList* blink_receiver = V8ImageTrackList::ToWrappableUnsafe(v8_receiver);
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
auto&& return_value = blink_receiver->ready(script_state);
bindings::V8SetReturnValue(info, return_value.V8Value());
}



}  // namespace v8_image_track_list

using namespace v8_image_track_list;

}  // namespace 

void V8ImageTrackList::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8ImageTrackList::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

// Indexed interceptors
instance_object_template->SetHandler(
    v8::IndexedPropertyHandlerConfiguration(
        V8ImageTrackList::IndexedPropertyGetterCallback,
        V8ImageTrackList::IndexedPropertySetterCallback,
        nullptr,  // query
        V8ImageTrackList::IndexedPropertyDeleterCallback,
        V8ImageTrackList::IndexedPropertyEnumeratorCallback,
        V8ImageTrackList::IndexedPropertyDefinerCallback,
        V8ImageTrackList::IndexedPropertyDescriptorCallback,
        v8::Local<v8::Value>(),
        v8::PropertyHandlerFlags::kHasNoSideEffect));






v8::Local<v8::Template> prototype_template = prototype_object_template;
// @@iterator for indexed properties
// https://webidl.spec.whatwg.org/#define-the-iteration-methods
prototype_template->SetIntrinsicDataProperty(
    v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

v8::Local<v8::Template> instance_template = instance_object_template;
InstallUnconditionalProperties(isolate, world, instance_template, prototype_template, interface_template);
}

void V8ImageTrackList::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"length", LengthAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"selectedIndex", SelectedIndexAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"selectedTrack", SelectedTrackAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"ready", ReadyAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kDoNotCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}







}




}  // namespace blink
