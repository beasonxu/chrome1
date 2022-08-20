// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_depth_usage.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"

namespace blink {



constexpr const char* const V8XRDepthUsage::string_table_[] = {
"cpu-optimized", "gpu-optimized"
};

V8XRDepthUsage V8XRDepthUsage::Create(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  const auto& result = bindings::FindIndexInEnumStringTable(isolate, value, string_table_, "XRDepthUsage", exception_state);
return result.has_value() ? V8XRDepthUsage(static_cast<Enum>(result.value())) : V8XRDepthUsage();
}

absl::optional<V8XRDepthUsage> V8XRDepthUsage::Create(const String& value) {
  const auto& result = bindings::FindIndexInEnumStringTable(value, string_table_);
if (!result)
  return absl::nullopt;
return V8XRDepthUsage(static_cast<Enum>(result.value()));
}


static_assert(std::is_trivially_copyable<V8XRDepthUsage>::value, "");

V8XRDepthUsage& V8XRDepthUsage::operator=(const String& str_value) {
  const auto& index =
    bindings::FindIndexInEnumStringTable(str_value, string_table_);
CHECK(index.has_value());
return operator=(V8XRDepthUsage(static_cast<Enum>(index.value())));

}




}  // namespace blink
