// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_FILE_WRITER_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_FILE_WRITER_CALLBACK_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_interface_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class FileWriter;

class MODULES_EXPORT V8FileWriterCallback final : public CallbackInterfaceBase {
  
  public:
static V8FileWriterCallback* Create(v8::Local<v8::Object> callback_object) {
  return MakeGarbageCollected<V8FileWriterCallback>(callback_object);
}

explicit  V8FileWriterCallback(v8::Local<v8::Object> callback_object) : CallbackInterfaceBase(callback_object, kSingleOperation) {
  
}
 ~V8FileWriterCallback() override = default;

// NameClient overrides:
const char* NameInHeapSnapshot() const override;

// Performs "call a user object's operation".
// https://webidl.spec.whatwg.org/#call-a-user-objects-operation
[[nodiscard]] v8::Maybe<void> handleEvent(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, FileWriter* arg1_file_writer);

// Performs "call a user object's operation" and then reports an exception
// if any to the global error handler such as DevTools console.
void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, FileWriter* arg1_file_writer);



  
  
  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_FILE_WRITER_CALLBACK_H_
