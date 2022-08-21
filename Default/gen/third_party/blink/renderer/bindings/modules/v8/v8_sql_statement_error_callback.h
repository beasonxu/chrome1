// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SQL_STATEMENT_ERROR_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SQL_STATEMENT_ERROR_CALLBACK_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_interface_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"
#include "third_party/blink/renderer/platform/heap/member.h"

namespace blink {

class SQLError;
class SQLTransaction;

class MODULES_EXPORT V8SQLStatementErrorCallback final : public CallbackInterfaceBase {
  
  public:
static V8SQLStatementErrorCallback* Create(v8::Local<v8::Object> callback_object) {
  return MakeGarbageCollected<V8SQLStatementErrorCallback>(callback_object);
}

explicit  V8SQLStatementErrorCallback(v8::Local<v8::Object> callback_object) : CallbackInterfaceBase(callback_object, kSingleOperation) {
  
}
 ~V8SQLStatementErrorCallback() override = default;

// NameClient overrides:
const char* NameInHeapSnapshot() const override;

// Performs "call a user object's operation".
// https://webidl.spec.whatwg.org/#call-a-user-objects-operation
[[nodiscard]] v8::Maybe<bool> handleEvent(bindings::V8ValueOrScriptWrappableAdapter arg0_receiver, SQLTransaction* arg1_transaction, SQLError* arg2_error);




  
  
  
};


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SQL_STATEMENT_ERROR_CALLBACK_H_
