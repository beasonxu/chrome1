// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/core/v8/v8_resize_quality.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"

namespace blink {



constexpr const char* const V8ResizeQuality::string_table_[] = {
"pixelated", "low", "medium", "high"
};

V8ResizeQuality V8ResizeQuality::Create(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  const auto& result = bindings::FindIndexInEnumStringTable(isolate, value, string_table_, "ResizeQuality", exception_state);
return result.has_value() ? V8ResizeQuality(static_cast<Enum>(result.value())) : V8ResizeQuality();
}

absl::optional<V8ResizeQuality> V8ResizeQuality::Create(const String& value) {
  const auto& result = bindings::FindIndexInEnumStringTable(value, string_table_);
if (!result)
  return absl::nullopt;
return V8ResizeQuality(static_cast<Enum>(result.value()));
}


static_assert(std::is_trivially_copyable<V8ResizeQuality>::value, "");

V8ResizeQuality& V8ResizeQuality::operator=(const String& str_value) {
  const auto& index =
    bindings::FindIndexInEnumStringTable(str_value, string_table_);
CHECK(index.has_value());
return operator=(V8ResizeQuality(static_cast<Enum>(index.value())));

}




}  // namespace blink
