// chrome/common/net_benchmarking.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/common/net_benchmarking.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "chrome/common/net_benchmarking.mojom-params-data.h"
namespace chrome {
namespace mojom {

namespace internal {


// static
bool NetBenchmarking_CloseCurrentConnections_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_CloseCurrentConnections_Params_Data* object =
      static_cast<const NetBenchmarking_CloseCurrentConnections_Params_Data*>(data);

  return true;
}

NetBenchmarking_CloseCurrentConnections_Params_Data::NetBenchmarking_CloseCurrentConnections_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_CloseCurrentConnections_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_CloseCurrentConnections_ResponseParams_Data* object =
      static_cast<const NetBenchmarking_CloseCurrentConnections_ResponseParams_Data*>(data);

  return true;
}

NetBenchmarking_CloseCurrentConnections_ResponseParams_Data::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_ClearCache_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_ClearCache_Params_Data* object =
      static_cast<const NetBenchmarking_ClearCache_Params_Data*>(data);

  return true;
}

NetBenchmarking_ClearCache_Params_Data::NetBenchmarking_ClearCache_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_ClearCache_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_ClearCache_ResponseParams_Data* object =
      static_cast<const NetBenchmarking_ClearCache_ResponseParams_Data*>(data);

  return true;
}

NetBenchmarking_ClearCache_ResponseParams_Data::NetBenchmarking_ClearCache_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_ClearHostResolverCache_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_ClearHostResolverCache_Params_Data* object =
      static_cast<const NetBenchmarking_ClearHostResolverCache_Params_Data*>(data);

  return true;
}

NetBenchmarking_ClearHostResolverCache_Params_Data::NetBenchmarking_ClearHostResolverCache_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_ClearHostResolverCache_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_ClearHostResolverCache_ResponseParams_Data* object =
      static_cast<const NetBenchmarking_ClearHostResolverCache_ResponseParams_Data*>(data);

  return true;
}

NetBenchmarking_ClearHostResolverCache_ResponseParams_Data::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_ClearPredictorCache_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_ClearPredictorCache_Params_Data* object =
      static_cast<const NetBenchmarking_ClearPredictorCache_Params_Data*>(data);

  return true;
}

NetBenchmarking_ClearPredictorCache_Params_Data::NetBenchmarking_ClearPredictorCache_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetBenchmarking_ClearPredictorCache_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NetBenchmarking_ClearPredictorCache_ResponseParams_Data* object =
      static_cast<const NetBenchmarking_ClearPredictorCache_ResponseParams_Data*>(data);

  return true;
}

NetBenchmarking_ClearPredictorCache_ResponseParams_Data::NetBenchmarking_ClearPredictorCache_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace chrome