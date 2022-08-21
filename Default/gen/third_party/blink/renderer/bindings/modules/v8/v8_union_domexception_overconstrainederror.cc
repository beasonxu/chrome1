// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_union_domexception_overconstrainederror.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_overconstrained_error.h"
#include "third_party/blink/renderer/core/dom/dom_exception.h"
#include "third_party/blink/renderer/modules/mediastream/overconstrained_error.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionDOMExceptionOrOverconstrainedError* V8UnionDOMExceptionOrOverconstrainedError::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8OverconstrainedError::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8OverconstrainedError::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionDOMExceptionOrOverconstrainedError>(blink_value);
}
if (V8DOMException::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8DOMException::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionDOMExceptionOrOverconstrainedError>(blink_value);
}
ThrowTypeErrorNotOfType(exception_state, UnionNameInIDL());
return nullptr;
}










v8::MaybeLocal<v8::Value> V8UnionDOMExceptionOrOverconstrainedError::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kDOMException: {
    return ToV8Traits<DOMException>::ToV8(script_state, member_dom_exception_);
  }
  case ContentType::kOverconstrainedError: {
    return ToV8Traits<OverconstrainedError>::ToV8(script_state, member_overconstrained_error_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionDOMExceptionOrOverconstrainedError::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<DOMException>>::Trace(visitor, member_dom_exception_);
TraceIfNeeded<Member<OverconstrainedError>>::Trace(visitor, member_overconstrained_error_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionDOMExceptionOrOverconstrainedError::Clear() {
  member_dom_exception_.Clear();
member_overconstrained_error_.Clear();
}



}  // namespace blink
