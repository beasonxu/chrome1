// services/network/public/mojom/default_credentials.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/default_credentials.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/default_credentials.mojom-params-data.h"
namespace network {
namespace mojom {

static NOINLINE const char* DefaultCredentialsToStringHelper(DefaultCredentials value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case DefaultCredentials::DISALLOW_DEFAULT_CREDENTIALS:
      return "DISALLOW_DEFAULT_CREDENTIALS";
    case DefaultCredentials::ALLOW_DEFAULT_CREDENTIALS:
      return "ALLOW_DEFAULT_CREDENTIALS";
    default:
      return nullptr;
  }
}

std::string DefaultCredentialsToString(DefaultCredentials value) {
  const char *str = DefaultCredentialsToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown DefaultCredentials value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, DefaultCredentials value) {
  return os << DefaultCredentialsToString(value);
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace network

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::DefaultCredentials>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::DefaultCredentials value) {
  return std::move(context).WriteString(::network::mojom::DefaultCredentialsToString(value));
}

} // namespace perfetto