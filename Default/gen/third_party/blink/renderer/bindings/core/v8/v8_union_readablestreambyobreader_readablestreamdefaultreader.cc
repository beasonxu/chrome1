// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_union_readablestreambyobreader_readablestreamdefaultreader.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_byob_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"
#include "third_party/blink/renderer/core/streams/readable_stream_byob_reader.h"
#include "third_party/blink/renderer/core/streams/readable_stream_default_reader.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {



V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader* V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  if (V8ReadableStreamDefaultReader::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8ReadableStreamDefaultReader::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader>(blink_value);
}
if (V8ReadableStreamBYOBReader::HasInstance(isolate, v8_value)) {
  auto&& blink_value = V8ReadableStreamBYOBReader::ToWrappableUnsafe(v8_value.As<v8::Object>());
return MakeGarbageCollected<V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader>(blink_value);
}
ThrowTypeErrorNotOfType(exception_state, UnionNameInIDL());
return nullptr;
}










v8::MaybeLocal<v8::Value> V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader::ToV8Value(ScriptState* script_state) const {
  switch (content_type_) {
  case ContentType::kReadableStreamBYOBReader: {
    return ToV8Traits<ReadableStreamBYOBReader>::ToV8(script_state, member_readable_stream_byob_reader_);
  }
  case ContentType::kReadableStreamDefaultReader: {
    return ToV8Traits<ReadableStreamDefaultReader>::ToV8(script_state, member_readable_stream_default_reader_);
  }
}

NOTREACHED();
return v8::MaybeLocal<v8::Value>();
}

void V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader::Trace(Visitor* visitor) const {
  TraceIfNeeded<Member<ReadableStreamBYOBReader>>::Trace(visitor, member_readable_stream_byob_reader_);
TraceIfNeeded<Member<ReadableStreamDefaultReader>>::Trace(visitor, member_readable_stream_default_reader_);
bindings::UnionBase::Trace(visitor);
}

void V8UnionReadableStreamBYOBReaderOrReadableStreamDefaultReader::Clear() {
  member_readable_stream_byob_reader_.Clear();
member_readable_stream_default_reader_.Clear();
}



}  // namespace blink
