// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_FILE_SYSTEM_HANDLE_KIND_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_FILE_SYSTEM_HANDLE_KIND_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/enumeration_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT V8FileSystemHandleKind final : public bindings::EnumerationBase {
  
  public:
enum class Enum : enum_int_t {
kFile, kDirectory
};
static constexpr size_t kEnumSize = 2;

static V8FileSystemHandleKind Create(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state);
static absl::optional<V8FileSystemHandleKind> Create(const String& value);

explicit constexpr  V8FileSystemHandleKind(Enum value) : bindings::EnumerationBase(static_cast<enum_int_t>(value), string_table_[static_cast<enum_int_t>(value)]) {
  
}
constexpr  V8FileSystemHandleKind(const V8FileSystemHandleKind&) = default;
constexpr  V8FileSystemHandleKind(V8FileSystemHandleKind&&) = default;
 ~V8FileSystemHandleKind() = default;

V8FileSystemHandleKind& operator=(const V8FileSystemHandleKind&) = default;
V8FileSystemHandleKind& operator=(V8FileSystemHandleKind&&) = default;
V8FileSystemHandleKind& operator=(const String&);

Enum AsEnum() const {
  return static_cast<Enum>(GetEnumValue());
}


  
  private:
static const char* const string_table_[];

constexpr  V8FileSystemHandleKind() = default;


  
};

inline bool operator==(const V8FileSystemHandleKind& lhs, V8FileSystemHandleKind::Enum rhs) {
  return lhs.AsEnum() == rhs;
}

inline bool operator==(V8FileSystemHandleKind::Enum lhs, const V8FileSystemHandleKind& rhs) {
  return lhs == rhs.AsEnum();
}


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_FILE_SYSTEM_HANDLE_KIND_H_
