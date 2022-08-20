// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number_list.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/svg/svg_number_list_tear_off.h"
#include "third_party/blink/renderer/core/svg/svg_number_tear_off.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8SVGNumberList::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8SVGNumberList::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8SVGNumberList::InstallInterfaceTemplate,
    nullptr,
    "SVGNumberList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& SVGNumberListTearOff::wrapper_type_info_ =
    V8SVGNumberList::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGNumberListTearOff>::value,
    "SVGNumberListTearOff inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&SVGNumberListTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGNumberListTearOff is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

void V8SVGNumberList::IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertyGetter");

v8::Local<v8::Object> v8_receiver = info.Holder();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 1.2. If index is a supported property index, then:
// step 3. Return OrdinaryGetOwnProperty(O, P).
if (index >= blink_receiver->length())
  return;  // Do not intercept.  Fallback to OrdinaryGetOwnProperty.

v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kIndexedPropertyGet;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "getItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
auto&& return_value = blink_receiver->getItem(index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void V8SVGNumberList::IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8_property_value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertySetter");

// 3.9.2. [[Set]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-set
// step 1. If O and Receiver are the same object, then:
if (info.Holder() == info.This()) {
  // step 1.1.1. Invoke the indexed property setter with P and V.

v8::Local<v8::Object> v8_receiver = info.Holder();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kIndexedPropertySet;
const char* const class_like_name = "SVGNumberList";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name);
auto&& blink_property_value = NativeValueTraits<SVGNumberTearOff>::ArgumentValue(isolate, 1, v8_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->AnonymousIndexedSetter(index, blink_property_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value);
bindings::V8SetReturnValue(info, nullptr);
return;
}

// Do not intercept.  Fallback to OrdinarySetWithOwnDescriptor.

}

void V8SVGNumberList::IndexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertyDeleter");

v8::Local<v8::Object> v8_receiver = info.Holder();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
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
      "SVGNumberList");
  exception_state.ThrowTypeError("Index property deleter is not supported.");
}

}

void V8SVGNumberList::IndexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor& v8_property_desc, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertyDefiner");

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
        "SVGNumberList");
    exception_state.ThrowTypeError("Accessor properties are not allowed.");
  }
  return;
}

v8::Isolate* isolate = info.GetIsolate();
// step 1.3. Invoke the indexed property setter with P and Desc.[[Value]].
V8SVGNumberList::IndexedPropertySetterCallback(
    index,
    v8_property_desc.has_value()
        ? v8_property_desc.value()
        : v8::Undefined(isolate).As<v8::Value>(),
    info);

}

void V8SVGNumberList::IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertyDescriptor");

// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 1.2.3. If operation was defined without an identifier, then set
//   value to the result of performing the steps listed in the interface
//   description to determine the value of an indexed property with index
//   as the index.
// step 1.2.4. Otherwise, operation was defined with an identifier. Set
//   value to the result of performing the steps listed in the description
//   of operation with index as the only argument value.
V8SVGNumberList::IndexedPropertyGetterCallback(index, info);
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
v8::PropertyDescriptor desc(v8_value, /*writable=*/true);
desc.set_enumerable(true);
desc.set_configurable(true);
bindings::V8SetReturnValue(info, desc);
}

void V8SVGNumberList::IndexedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertyEnumerator");

v8::Local<v8::Object> v8_receiver = info.Holder();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
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

namespace v8_svg_number_list {

void LengthAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_length_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.length.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->length();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}


void NumberOfItemsAttributeGetCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  
RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_numberOfItems_Getter");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.numberOfItems.get");


v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& return_value = blink_receiver->length();
bindings::V8SetReturnValue(info, return_value, bindings::V8ReturnValue::PrimitiveType<uint32_t>());
}


void AppendItemOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_appendItem");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.appendItem");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "appendItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& arg1_new_item = NativeValueTraits<SVGNumberTearOff>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->appendItem(arg1_new_item, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void ClearOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_clear");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.clear");







v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "clear";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
blink_receiver->clear(exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}

}

void GetItemOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_getItem");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.getItem");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "getItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& arg1_index = NativeValueTraits<IDLUnsignedLong>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->getItem(arg1_index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void InitializeOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_initialize");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.initialize");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "initialize";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& arg1_new_item = NativeValueTraits<SVGNumberTearOff>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->initialize(arg1_new_item, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void InsertItemBeforeOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_insertItemBefore");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.insertItemBefore");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "insertItemBefore";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& arg1_new_item = NativeValueTraits<SVGNumberTearOff>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_index = NativeValueTraits<IDLUnsignedLong>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->insertItemBefore(arg1_new_item, arg2_index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void RemoveItemOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_removeItem");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.removeItem");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "removeItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 1)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& arg1_index = NativeValueTraits<IDLUnsignedLong>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->removeItem(arg1_index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void ReplaceItemOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_replaceItem");
BLINK_BINDINGS_TRACE_EVENT("SVGNumberList.replaceItem");




v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "SVGNumberList";
const char* const property_name = "replaceItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
if (UNLIKELY(info.Length() < 2)) {
  exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
return;
}



v8::Local<v8::Object> v8_receiver = info.This();
SVGNumberListTearOff* blink_receiver = V8SVGNumberList::ToWrappableUnsafe(v8_receiver);
auto&& arg1_new_item = NativeValueTraits<SVGNumberTearOff>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& arg2_index = NativeValueTraits<IDLUnsignedLong>::ArgumentValue(isolate, 1, info[1], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
auto&& return_value = blink_receiver->replaceItem(arg1_new_item, arg2_index, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}


}  // namespace v8_svg_number_list

using namespace v8_svg_number_list;

}  // namespace 

void V8SVGNumberList::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8SVGNumberList::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template;
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

// Indexed interceptors
instance_object_template->SetHandler(
    v8::IndexedPropertyHandlerConfiguration(
        V8SVGNumberList::IndexedPropertyGetterCallback,
        V8SVGNumberList::IndexedPropertySetterCallback,
        nullptr,  // query
        V8SVGNumberList::IndexedPropertyDeleterCallback,
        V8SVGNumberList::IndexedPropertyEnumeratorCallback,
        V8SVGNumberList::IndexedPropertyDefinerCallback,
        V8SVGNumberList::IndexedPropertyDescriptorCallback,
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

void V8SVGNumberList::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;

v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
{
  static const IDLMemberInstaller::AttributeConfig kAttributeTable[] = {
{"length", LengthAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
{"numberOfItems", NumberOfItemsAttributeGetCallback, nullptr, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasNoSideEffect), unsigned(V8PrivateProperty::CachedAccessor::kNone)},
};
IDLMemberInstaller::InstallAttributes(isolate, world, instance_template, prototype_template, interface_template, signature, kAttributeTable);
}





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"appendItem", AppendItemOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"clear", ClearOperationCallback, 0, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"getItem", GetItemOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"initialize", InitializeOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"insertItemBefore", InsertItemBeforeOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"removeItem", RemoveItemOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
{"replaceItem", ReplaceItemOperationCallback, 2, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
