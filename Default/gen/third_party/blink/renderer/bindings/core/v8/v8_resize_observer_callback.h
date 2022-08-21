// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RESIZE_OBSERVER_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RESIZE_OBSERVER_CALLBACK_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_function_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"
#include "third_party/blink/renderer/platform/heap/collection_support/heap_vector.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class ResizeObserver;
class ResizeObserverEntry;

class CORE_EXPORT V8ResizeObserverCallback final : public CallbackFunctionBase {
  
  public:
static V8ResizeObserverCallback* Create(v8::Local<v8::Object> callback_object) {
  return MakeGarbageCollected<V8ResizeObserverCallback>(callback_object);
}

explicit  V8ResizeObserverCallback(v8::Local<v8::Object> callback_object) : CallbackFunctionBase(callback_object) {
  
}
 ~V8ResizeObserverCallback() override = default;

// NameClient overrides:
const char* NameInHeapSnapshot() const override;

// Performs "invoke".
// https://webidl.spec.whatwg.org/#invoke-a-callback-function
[[nodiscard]] v8::Maybe<void> Invoke(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, const HeapVector<Member<ResizeObserverEntry>>& arg1_entries, ResizeObserver* arg2_observer);

// Performs "construct".
// https://webidl.spec.whatwg.org/#construct-a-callback-function
[[nodiscard]] v8::Maybe<void> Construct(const HeapVector<Member<ResizeObserverEntry>>& arg1_entries, ResizeObserver* arg2_observer);

// Performs "invoke" and then reports an exception if any to the global
// error handler such as DevTools console.
void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, const HeapVector<Member<ResizeObserverEntry>>& arg1_entries, ResizeObserver* arg2_observer);



  
  
  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RESIZE_OBSERVER_CALLBACK_H_
