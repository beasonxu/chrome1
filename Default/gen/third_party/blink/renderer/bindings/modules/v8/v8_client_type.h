// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CLIENT_TYPE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CLIENT_TYPE_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/enumeration_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT V8ClientType final : public bindings::EnumerationBase {
  
  public:
enum class Enum : enum_int_t {
kWindow, kWorker, kSharedworker, kAll
};
static constexpr size_t kEnumSize = 4;

static V8ClientType Create(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state);
static absl::optional<V8ClientType> Create(const String& value);

explicit constexpr  V8ClientType(Enum value) : bindings::EnumerationBase(static_cast<enum_int_t>(value), string_table_[static_cast<enum_int_t>(value)]) {
  
}
constexpr  V8ClientType(const V8ClientType&) = default;
constexpr  V8ClientType(V8ClientType&&) = default;
 ~V8ClientType() = default;

V8ClientType& operator=(const V8ClientType&) = default;
V8ClientType& operator=(V8ClientType&&) = default;
V8ClientType& operator=(const String&);

Enum AsEnum() const {
  return static_cast<Enum>(GetEnumValue());
}


  
  private:
static const char* const string_table_[];

constexpr  V8ClientType() = default;


  
};

inline bool operator==(const V8ClientType& lhs, V8ClientType::Enum rhs) {
  return lhs.AsEnum() == rhs;
}

inline bool operator==(V8ClientType::Enum lhs, const V8ClientType& rhs) {
  return lhs == rhs.AsEnum();
}


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CLIENT_TYPE_H_
