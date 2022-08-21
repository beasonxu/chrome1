// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_controls_collection.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_set_return_value_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_element_radionodelist.h"
#include "third_party/blink/renderer/core/dom/element.h"
#include "third_party/blink/renderer/core/dom/node.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/forms/radio_node_list.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/idl_member_installer.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_binding.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"

namespace blink {



bool V8HTMLFormControlsCollection::IsExposed(ExecutionContext* execution_context) {
  
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

const WrapperTypeInfo V8HTMLFormControlsCollection::wrapper_type_info_{
    gin::kEmbedderBlink,
    V8HTMLFormControlsCollection::InstallInterfaceTemplate,
    nullptr,
    "HTMLFormControlsCollection",
    V8HTMLCollection::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
    WrapperTypeInfo::kIdlInterface,
};

#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

const WrapperTypeInfo& HTMLFormControlsCollection::wrapper_type_info_ =
    V8HTMLFormControlsCollection::wrapper_type_info_;

// non-[ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLFormControlsCollection>::value,
    "HTMLFormControlsCollection inherits from ActiveScriptWrappable<> without "
    "[ActiveScriptWrappable] extended attribute.");
static_assert(
    std::is_same<decltype(&HTMLFormControlsCollection::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLFormControlsCollection is overriding hasPendingActivity() without "
    "[ActiveScriptWrappable] extended attribute.");

void V8HTMLFormControlsCollection::NamedPropertyGetterCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertyGetter");

// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 2.1. If the result of running the named property visibility
//   algorithm with property name P and object O is true, then:
v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
const AtomicString& blink_property_name = ToCoreAtomicString(v8_property_name.As<v8::String>());
auto&& return_value = blink_receiver->namedGetter(blink_property_name);
if (!return_value) {
  // step 3. Return OrdinaryGetOwnProperty(O, P).
return;  // Do not intercept.
}
// step 2.1.3. If operation was defined without an identifier, then set
//   value to the result of performing the steps listed in the interface
//   description to determine the value of a named property with P as the
//   name.
// step 2.1.4. Otherwise, operation was defined with an identifier. Set
//   value to the result of performing the steps listed in the description
//   of operation with P as the only argument value.
v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
if (!ToV8Traits<IDLNullable<V8UnionElementOrRadioNodeList>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}

void V8HTMLFormControlsCollection::NamedPropertySetterCallback(v8::Local<v8::Name> v8_property_name, v8::Local<v8::Value> v8_property_value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertySetter");

// 3.9.2. [[Set]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-set
// step 3. Perform ? OrdinarySetWithOwnDescriptor(O, P, V, Receiver, ownDesc).
V8HTMLFormControlsCollection::NamedPropertyGetterCallback(v8_property_name, info);
const bool is_creating = info.GetReturnValue().Get()->IsUndefined();
if (!is_creating) {
  bindings::V8SetReturnValue(info, nullptr);
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(
        info.GetIsolate(),
        ExceptionContext::Context::kNamedPropertySet,
        "HTMLFormControlsCollection");
    exception_state.ThrowTypeError(
        "Named property setter is not supported.");
  }
  return;
}

// Do not intercept.  Fallback and let it define a new own property.

}

void V8HTMLFormControlsCollection::NamedPropertyDeleterCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertyDeleter");

v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
const AtomicString& blink_property_name = ToCoreAtomicString(v8_property_name.As<v8::String>());
// 3.9.4. [[Delete]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-delete
// step 2. If O supports named properties, O does not implement an interface
//   with the [Global] extended attribute and the result of calling the
//   named property visibility algorithm with property name P and object O
//   is true, then:
// step 2.1. If O does not implement an interface with a named property
//   deleter, then return false.
ExceptionState exception_state(info.GetIsolate(),
                               ExceptionContext::Context::kNamedPropertyDelete,
                               "HTMLFormControlsCollection");
bool does_exist = blink_receiver->NamedPropertyQuery(
    blink_property_name, exception_state);
if (UNLIKELY(exception_state.HadException()))
  return;
if (does_exist) {
  bindings::V8SetReturnValue(info, false);
  if (info.ShouldThrowOnError()) {
    exception_state.ThrowTypeError("Named property deleter is not supported.");
  }
  return;
}

// Do not intercept.

}

void V8HTMLFormControlsCollection::NamedPropertyDefinerCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyDescriptor& v8_property_desc, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertyDefiner");

// 3.9.3. [[DefineOwnProperty]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-defineownproperty
// step 2.1. Let creating be true if P is not a supported property name, and
//   false otherwise.
// step 2.2.1. If creating is false and O does not implement an interface
//   with a named property setter, then return false.
V8HTMLFormControlsCollection::NamedPropertyGetterCallback(v8_property_name, info);
const bool is_creating = info.GetReturnValue().Get()->IsUndefined();
if (!is_creating) {
  bindings::V8SetReturnValue(info, nullptr);
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(
        info.GetIsolate(),
        ExceptionContext::Context::kNamedPropertySet,
        "HTMLFormControlsCollection");
    exception_state.ThrowTypeError("Named property setter is not supported.");
  }
  return;
}

// Do not intercept.  Fallback to OrdinaryDefineOwnProperty.

}

void V8HTMLFormControlsCollection::NamedPropertyDescriptorCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertyDescriptor");

// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
v8::Local<v8::Object> v8_receiver = info.Holder();
v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
// step 2.1. If the result of running the named property visibility algorithm
//   with property name P and object O is true, then:
if (v8_receiver->GetRealNamedPropertyAttributesInPrototypeChain(
        current_context, v8_property_name).IsJust()) {
  return;  // Do not intercept.  Fallback to OrdinaryGetOwnProperty.
}

// step 2.1.3. If operation was defined without an identifier, then set
//   value to the result of performing the steps listed in the interface
//   description to determine the value of a named property with P as the
//   name.
// step 2.1.4. Otherwise, operation was defined with an identifier. Set
//   value to the result of performing the steps listed in the description
//   of operation with P as the only argument value.
V8HTMLFormControlsCollection::NamedPropertyGetterCallback(v8_property_name, info);
v8::Local<v8::Value> v8_value = info.GetReturnValue().Get();
// step 2.1. If the result of running the named property visibility
//   algorithm with property name P and object O is true, then:
// step 3. Return OrdinaryGetOwnProperty(O, P).
if (v8_value->IsUndefined())
  return;  // Do not intercept.  Fallback to OrdinaryGetOwnProperty.

// step 2.1.6. Set desc.[[Value]] to the result of converting value to an
//   ECMAScript value.
// step 2.1.7. If O implements an interface with a named property setter,
//   then set desc.[[Writable]] to true, otherwise set it to false.
// step 2.1.8. If O implements an interface with the
//   [LegacyUnenumerableNamedProperties] extended attribute, then set
//   desc.[[Enumerable]] to false, otherwise set it to true.
// step 2.1.9. Set desc.[[Configurable]] to true.
v8::PropertyDescriptor desc(v8_value, /*writable=*/false);
desc.set_enumerable(true);
desc.set_configurable(true);
bindings::V8SetReturnValue(info, desc);

}

void V8HTMLFormControlsCollection::NamedPropertyQueryCallback(v8::Local<v8::Name> v8_property_name, const v8::PropertyCallbackInfo<v8::Integer>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertyQuery");

v8::Isolate* isolate = info.GetIsolate();
v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
const AtomicString& blink_property_name = ToCoreAtomicString(v8_property_name.As<v8::String>());
ExceptionState exception_state(isolate,
                               ExceptionContext::Context::kNamedPropertyGet,
                               "HTMLFormControlsCollection");
bool does_exist = blink_receiver->NamedPropertyQuery(
    blink_property_name, exception_state);
if (!does_exist)
  return;  // Do not intercept.

bindings::V8SetReturnValue(info, uint32_t(v8::ReadOnly));
}

void V8HTMLFormControlsCollection::NamedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_NamedPropertyEnumerator");

v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
v8::Isolate* isolate = info.GetIsolate();
// 3.9.6. [[OwnPropertyKeys]]
// https://webidl.spec.whatwg.org/#legacy-platform-object-ownpropertykeys
// step 3. If O supports named properties, then for each P of O's supported
//   property names that is visible according to the named property
//   visibility algorithm, append P to keys.
Vector<String> blink_property_names;
ExceptionState exception_state(
    info.GetIsolate(),
    ExceptionContext::Context::kNamedPropertyEnumerate,
    "HTMLFormControlsCollection");
blink_receiver->NamedPropertyEnumerator(
    blink_property_names, exception_state);
if (UNLIKELY(exception_state.HadException()))
  return;
bindings::V8SetReturnValue(
    info,
    ToV8(blink_property_names, v8_receiver, isolate));

}

void V8HTMLFormControlsCollection::IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_IndexedPropertyGetter");

v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 1.2. If index is a supported property index, then:
// step 3. Return OrdinaryGetOwnProperty(O, P).
if (index >= blink_receiver->length())
  return;  // Do not intercept.  Fallback to OrdinaryGetOwnProperty.

auto&& return_value = blink_receiver->item(index);
bindings::V8SetReturnValue(info, return_value, blink_receiver);
}

void V8HTMLFormControlsCollection::IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8_property_value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_IndexedPropertySetter");

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
      "HTMLFormControlsCollection");
  exception_state.ThrowTypeError(
      "Indexed property setter is not supported.");
}

}

void V8HTMLFormControlsCollection::IndexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_IndexedPropertyDeleter");

v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
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
      "HTMLFormControlsCollection");
  exception_state.ThrowTypeError("Index property deleter is not supported.");
}

}

void V8HTMLFormControlsCollection::IndexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor& v8_property_desc, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_IndexedPropertyDefiner");

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
        "HTMLFormControlsCollection");
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
      "HTMLFormControlsCollection");
  exception_state.ThrowTypeError("Index property setter is not supported.");
}

}

void V8HTMLFormControlsCollection::IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_IndexedPropertyDescriptor");

// LegacyPlatformObjectGetOwnProperty
// https://webidl.spec.whatwg.org/#LegacyPlatformObjectGetOwnProperty
// step 1.2.3. If operation was defined without an identifier, then set
//   value to the result of performing the steps listed in the interface
//   description to determine the value of an indexed property with index
//   as the index.
// step 1.2.4. Otherwise, operation was defined with an identifier. Set
//   value to the result of performing the steps listed in the description
//   of operation with index as the only argument value.
V8HTMLFormControlsCollection::IndexedPropertyGetterCallback(index, info);
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

void V8HTMLFormControlsCollection::IndexedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_IndexedPropertyEnumerator");

v8::Local<v8::Object> v8_receiver = info.Holder();
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
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

namespace v8_html_form_controls_collection {

void NamedItemOperationCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormControlsCollection_namedItem");
BLINK_BINDINGS_TRACE_EVENT("HTMLFormControlsCollection.namedItem");




if (UNLIKELY(info.Length() < 1)) {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "HTMLFormControlsCollection";
const char* const property_name = "namedItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
return;
}



v8::Local<v8::Value> v8_return_value;
v8::Local<v8::Object> v8_receiver = info.This();
v8::Local<v8::Context> receiver_context = v8_receiver->GetCreationContextChecked();
ScriptState* receiver_script_state = ScriptState::From(receiver_context);
ScriptState* script_state = receiver_script_state;
HTMLFormControlsCollection* blink_receiver = V8HTMLFormControlsCollection::ToWrappableUnsafe(v8_receiver);
decltype(NativeValueTraits<IDLString>::NativeValue(std::declval<v8::Isolate*>(), std::declval<v8::Local<v8::Value>>(), std::declval<ExceptionState&>())) arg1_name;
if (LIKELY(info[0]->IsString())) {
  arg1_name.Init(info[0].As<v8::String>());
} else {
  v8::Isolate* isolate = info.GetIsolate();
const ExceptionState::ContextType exception_state_context_type = ExceptionContext::Context::kOperationInvoke;
const char* const class_like_name = "HTMLFormControlsCollection";
const char* const property_name = "namedItem";
ExceptionState exception_state(isolate, exception_state_context_type, class_like_name, property_name);
arg1_name = NativeValueTraits<IDLString>::ArgumentValue(isolate, 0, info[0], exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return;
}
}
auto&& return_value = blink_receiver->namedGetter(arg1_name);
if (!ToV8Traits<IDLNullable<V8UnionElementOrRadioNodeList>>::ToV8(script_state, return_value).ToLocal(&v8_return_value)) {
  return;
}
bindings::V8SetReturnValue(info, v8_return_value);
}


}  // namespace v8_html_form_controls_collection

using namespace v8_html_form_controls_collection;

}  // namespace 

void V8HTMLFormControlsCollection::InstallInterfaceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> interface_template) {
  const WrapperTypeInfo* const wrapper_type_info = V8HTMLFormControlsCollection::GetWrapperTypeInfo();
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::ObjectTemplate> instance_object_template = interface_function_template->InstanceTemplate();
v8::Local<v8::ObjectTemplate> prototype_object_template = interface_function_template->PrototypeTemplate();
v8::Local<v8::FunctionTemplate> parent_interface_template = wrapper_type_info->parent_class->GetV8ClassTemplate(isolate, world).As<v8::FunctionTemplate>();
bindings::SetupIDLInterfaceTemplate(isolate, wrapper_type_info, instance_object_template, prototype_object_template, interface_function_template, parent_interface_template);

// Named interceptors
instance_object_template->SetHandler(
    v8::NamedPropertyHandlerConfiguration(
        V8HTMLFormControlsCollection::NamedPropertyGetterCallback,
        V8HTMLFormControlsCollection::NamedPropertySetterCallback,
        V8HTMLFormControlsCollection::NamedPropertyQueryCallback,
        V8HTMLFormControlsCollection::NamedPropertyDeleterCallback,
        V8HTMLFormControlsCollection::NamedPropertyEnumeratorCallback,
        V8HTMLFormControlsCollection::NamedPropertyDefinerCallback,
        V8HTMLFormControlsCollection::NamedPropertyDescriptorCallback,
        v8::Local<v8::Value>(),
        static_cast<v8::PropertyHandlerFlags>(int32_t(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int32_t(v8::PropertyHandlerFlags::kNonMasking) | int32_t(v8::PropertyHandlerFlags::kHasNoSideEffect))));
// Indexed interceptors
instance_object_template->SetHandler(
    v8::IndexedPropertyHandlerConfiguration(
        V8HTMLFormControlsCollection::IndexedPropertyGetterCallback,
        V8HTMLFormControlsCollection::IndexedPropertySetterCallback,
        nullptr,  // query
        V8HTMLFormControlsCollection::IndexedPropertyDeleterCallback,
        V8HTMLFormControlsCollection::IndexedPropertyEnumeratorCallback,
        V8HTMLFormControlsCollection::IndexedPropertyDefinerCallback,
        V8HTMLFormControlsCollection::IndexedPropertyDescriptorCallback,
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

void V8HTMLFormControlsCollection::InstallUnconditionalProperties(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Template> instance_template, v8::Local<v8::Template> prototype_template, v8::Local<v8::Template> interface_template) {
  using bindings::IDLMemberInstaller;





{
  static const IDLMemberInstaller::OperationConfig kOperationTable[] = {
{"namedItem", NamedItemOperationCallback, 1, unsigned(v8::None), unsigned(IDLMemberInstaller::FlagLocation::kPrototype), unsigned(IDLMemberInstaller::FlagWorld::kAllWorlds), unsigned(IDLMemberInstaller::FlagReceiverCheck::kCheck), unsigned(IDLMemberInstaller::FlagCrossOriginCheck::kCheck), unsigned(v8::SideEffectType::kHasSideEffect)}, 
};
v8::Local<v8::FunctionTemplate> interface_function_template = interface_template.As<v8::FunctionTemplate>();
v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_function_template);
IDLMemberInstaller::InstallOperations(isolate, world, instance_template, prototype_template, interface_template, signature, kOperationTable);
}



}




}  // namespace blink
