// services/network/public/mojom/x_frame_options.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/x_frame_options.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/x_frame_options.mojom-params-data.h"
namespace network {
namespace mojom {

static NOINLINE const char* XFrameOptionsValueToStringHelper(XFrameOptionsValue value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case XFrameOptionsValue::kNone:
      return "kNone";
    case XFrameOptionsValue::kDeny:
      return "kDeny";
    case XFrameOptionsValue::kSameOrigin:
      return "kSameOrigin";
    case XFrameOptionsValue::kAllowAll:
      return "kAllowAll";
    case XFrameOptionsValue::kInvalid:
      return "kInvalid";
    case XFrameOptionsValue::kConflict:
      return "kConflict";
    default:
      return nullptr;
  }
}

std::string XFrameOptionsValueToString(XFrameOptionsValue value) {
  const char *str = XFrameOptionsValueToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown XFrameOptionsValue value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, XFrameOptionsValue value) {
  return os << XFrameOptionsValueToString(value);
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace network

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::XFrameOptionsValue>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::XFrameOptionsValue value) {
  return std::move(context).WriteString(::network::mojom::XFrameOptionsValueToString(value));
}

} // namespace perfetto