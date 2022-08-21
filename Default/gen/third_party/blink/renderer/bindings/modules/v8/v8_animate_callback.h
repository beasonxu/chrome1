// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_ANIMATE_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_ANIMATE_CALLBACK_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_function_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class V8UnionWorkletAnimationEffectOrWorkletGroupEffect;
class WorkletAnimationEffect;
class WorkletGroupEffect;

class MODULES_EXPORT V8AnimateCallback final : public CallbackFunctionBase {
  
  public:
static V8AnimateCallback* Create(v8::Local<v8::Object> callback_object) {
  return MakeGarbageCollected<V8AnimateCallback>(callback_object);
}

explicit  V8AnimateCallback(v8::Local<v8::Object> callback_object) : CallbackFunctionBase(callback_object) {
  
}
 ~V8AnimateCallback() override = default;

// NameClient overrides:
const char* NameInHeapSnapshot() const override;

// Performs "invoke".
// https://webidl.spec.whatwg.org/#invoke-a-callback-function
[[nodiscard]] v8::Maybe<void> Invoke(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, double arg1_current_time, const V8UnionWorkletAnimationEffectOrWorkletGroupEffect* arg2_effect);

// Performs "construct".
// https://webidl.spec.whatwg.org/#construct-a-callback-function
[[nodiscard]] v8::Maybe<void> Construct(double arg1_current_time, const V8UnionWorkletAnimationEffectOrWorkletGroupEffect* arg2_effect);

// Performs "invoke" and then reports an exception if any to the global
// error handler such as DevTools console.
void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, double arg1_current_time, const V8UnionWorkletAnimationEffectOrWorkletGroupEffect* arg2_effect);



  
  
  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_ANIMATE_CALLBACK_H_
