// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_addeventlisteneroptions_boolean.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_add_event_listener_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionAddEventListenerOptionsOrBoolean* V8UnionAddEventListenerOptionsOrBoolean::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (v8_value->IsNullOrUndefined()) {
  auto&& blink_value = AddEventListenerOptions::Create(isolate);
return MakeGarbageCollected<V8UnionAddEventListenerOptionsOrBoolean>(blink_value);
}
if (v8_value->IsObject()) {
  auto&& blink_value = NativeValueTraits<AddEventListenerOptions>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionAddEventListenerOptionsOrBoolean>(blink_value);
}
if (v8_value->IsBoolean()) {
  auto&& blink_value = v8_value.As<v8::Boolean>()->Value();
return MakeGarbageCollected<V8UnionAddEventListenerOptionsOrBoolean>(blink_value);
}
{
  auto&& blink_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, v8_value, exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return MakeGarbageCollected<V8UnionAddEventListenerOptionsOrBoolean>(blink_value);
}
}










v8::MaybeLocal<v8::Value> V8UnionAddEventListenerOptionsOrBoolean::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kAddEventListenerOptions: {
    return ToV8Traits<AddEventListenerOptions>::ToV8(script_state, member_add_event_listener_options_);
  }
  case ContentType::kBoolean: {
    return ToV8Traits<IDLBoolean>::ToV8(script_state, member_boolean_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionAddEventListenerOptionsOrBoolean::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<AddEventListenerOptions>>::Trace(visitor, member_add_event_listener_options_);
TraceIfNeeded<bool>::Trace(visitor, member_boolean_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionAddEventListenerOptionsOrBoolean::Clear() {
  member_add_event_listener_options_.Clear();
member_boolean_ = 0;
}



}  // namespace blink
