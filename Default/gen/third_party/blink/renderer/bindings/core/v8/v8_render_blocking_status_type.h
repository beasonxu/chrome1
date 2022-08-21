// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RENDER_BLOCKING_STATUS_TYPE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RENDER_BLOCKING_STATUS_TYPE_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/enumeration_base.h"

namespace blink {

class ExceptionState;

class CORE_EXPORT V8RenderBlockingStatusType final : public bindings::EnumerationBase {
  
  public:
enum class Enum : enum_int_t {
kBlocking, kNonBlocking
};
static constexpr size_t kEnumSize = 2;

static V8RenderBlockingStatusType Create(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state);
static absl::optional<V8RenderBlockingStatusType> Create(const String& value);

explicit constexpr  V8RenderBlockingStatusType(Enum value) : bindings::EnumerationBase(static_cast<enum_int_t>(value), string_table_[static_cast<enum_int_t>(value)]) {
  
}
constexpr  V8RenderBlockingStatusType(const V8RenderBlockingStatusType&) = default;
constexpr  V8RenderBlockingStatusType(V8RenderBlockingStatusType&&) = default;
 ~V8RenderBlockingStatusType() = default;

V8RenderBlockingStatusType& operator=(const V8RenderBlockingStatusType&) = default;
V8RenderBlockingStatusType& operator=(V8RenderBlockingStatusType&&) = default;
V8RenderBlockingStatusType& operator=(const String&);

Enum AsEnum() const {
  return static_cast<Enum>(GetEnumValue());
}


  
  private:
static const char* const string_table_[];

constexpr  V8RenderBlockingStatusType() = default;


  
};

inline bool operator==(const V8RenderBlockingStatusType& lhs, V8RenderBlockingStatusType::Enum rhs) {
  return lhs.AsEnum() == rhs;
}

inline bool operator==(V8RenderBlockingStatusType::Enum lhs, const V8RenderBlockingStatusType& rhs) {
  return lhs == rhs.AsEnum();
}


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RENDER_BLOCKING_STATUS_TYPE_H_
