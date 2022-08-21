// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BLINK_AUDIO_WORKLET_PROCESS_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BLINK_AUDIO_WORKLET_PROCESS_CALLBACK_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_function_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"

namespace blink {



class MODULES_EXPORT V8BlinkAudioWorkletProcessCallback final : public CallbackFunctionBase {
  
  public:
static V8BlinkAudioWorkletProcessCallback* Create(v8::Local<v8::Object> callback_object) {
  return MakeGarbageCollected<V8BlinkAudioWorkletProcessCallback>(callback_object);
}

explicit  V8BlinkAudioWorkletProcessCallback(v8::Local<v8::Object> callback_object) : CallbackFunctionBase(callback_object) {
  
}
 ~V8BlinkAudioWorkletProcessCallback() override = default;

// NameClient overrides:
const char* NameInHeapSnapshot() const override;

// Performs "invoke".
// https://webidl.spec.whatwg.org/#invoke-a-callback-function
[[nodiscard]] v8::Maybe<ScriptValue> Invoke(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, const ScriptValue& arg1_inputs, const ScriptValue& arg2_outputs, const ScriptValue& arg3_param_values);

// Performs "construct".
// https://webidl.spec.whatwg.org/#construct-a-callback-function
[[nodiscard]] v8::Maybe<ScriptValue> Construct(const ScriptValue& arg1_inputs, const ScriptValue& arg2_outputs, const ScriptValue& arg3_param_values);




  
  
  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_BLINK_AUDIO_WORKLET_PROCESS_CALLBACK_H_
