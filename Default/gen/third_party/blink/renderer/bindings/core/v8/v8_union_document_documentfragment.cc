// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_document_documentfragment.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/dom/document_fragment.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionDocumentOrDocumentFragment* V8UnionDocumentOrDocumentFragment::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8DocumentFragment::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8DocumentFragment::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionDocumentOrDocumentFragment>(blink_value);
}
if (V8Document::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8Document::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionDocumentOrDocumentFragment>(blink_value);
}
ThrowTypeErrorNotOfType(exception_state, UnionNameInIDL());
return nullptr;
}










v8::MaybeLocal<v8::Value> V8UnionDocumentOrDocumentFragment::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kDocument: {
    return ToV8Traits<Document>::ToV8(script_state, member_document_);
  }
  case ContentType::kDocumentFragment: {
    return ToV8Traits<DocumentFragment>::ToV8(script_state, member_document_fragment_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionDocumentOrDocumentFragment::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<Document>>::Trace(visitor, member_document_);
TraceIfNeeded<Member<DocumentFragment>>::Trace(visitor, member_document_fragment_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionDocumentOrDocumentFragment::Clear() {
  member_document_.Clear();
member_document_fragment_.Clear();
}



}  // namespace blink
