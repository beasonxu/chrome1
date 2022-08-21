// third_party/blink/public/mojom/security_context/insecure_request_policy.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/security_context/insecure_request_policy.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/security_context/insecure_request_policy.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* InsecureRequestPolicyToStringHelper(InsecureRequestPolicy value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case InsecureRequestPolicy::kLeaveInsecureRequestsAlone:
      return "kLeaveInsecureRequestsAlone";
    case InsecureRequestPolicy::kUpgradeInsecureRequests:
      return "kUpgradeInsecureRequests";
    case InsecureRequestPolicy::kBlockAllMixedContent:
      return "kBlockAllMixedContent";
    case InsecureRequestPolicy::kMaxInsecureRequestPolicy:
      return "kMaxInsecureRequestPolicy";
    default:
      return nullptr;
  }
}

std::string InsecureRequestPolicyToString(InsecureRequestPolicy value) {
  const char *str = InsecureRequestPolicyToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown InsecureRequestPolicy value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, InsecureRequestPolicy value) {
  return os << InsecureRequestPolicyToString(value);
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::InsecureRequestPolicy>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::InsecureRequestPolicy value) {
  return std::move(context).WriteString(::blink::mojom::InsecureRequestPolicyToString(value));
}

} // namespace perfetto