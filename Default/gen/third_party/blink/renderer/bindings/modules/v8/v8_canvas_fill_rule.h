// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CANVAS_FILL_RULE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CANVAS_FILL_RULE_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/enumeration_base.h"

namespace blink {

class ExceptionState;

class MODULES_EXPORT V8CanvasFillRule final : public bindings::EnumerationBase {
  
  public:
enum class Enum : enum_int_t {
kNonzero, kEvenodd
};
static constexpr size_t kEnumSize = 2;

static V8CanvasFillRule Create(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state);
static absl::optional<V8CanvasFillRule> Create(const String& value);

explicit constexpr  V8CanvasFillRule(Enum value) : bindings::EnumerationBase(static_cast<enum_int_t>(value), string_table_[static_cast<enum_int_t>(value)]) {
  
}
constexpr  V8CanvasFillRule(const V8CanvasFillRule&) = default;
constexpr  V8CanvasFillRule(V8CanvasFillRule&&) = default;
 ~V8CanvasFillRule() = default;

V8CanvasFillRule& operator=(const V8CanvasFillRule&) = default;
V8CanvasFillRule& operator=(V8CanvasFillRule&&) = default;
V8CanvasFillRule& operator=(const String&);

Enum AsEnum() const {
  return static_cast<Enum>(GetEnumValue());
}


  
  private:
static const char* const string_table_[];

constexpr  V8CanvasFillRule() = default;


  
};

inline bool operator==(const V8CanvasFillRule& lhs, V8CanvasFillRule::Enum rhs) {
  return lhs.AsEnum() == rhs;
}

inline bool operator==(V8CanvasFillRule::Enum lhs, const V8CanvasFillRule& rhs) {
  return lhs == rhs.AsEnum();
}


}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_CANVAS_FILL_RULE_H_
