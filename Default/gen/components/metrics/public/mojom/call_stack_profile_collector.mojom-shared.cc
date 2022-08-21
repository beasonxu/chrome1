// components/metrics/public/mojom/call_stack_profile_collector.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/metrics/public/mojom/call_stack_profile_collector.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/metrics/public/mojom/call_stack_profile_collector.mojom-params-data.h"
namespace metrics {
namespace mojom {

static NOINLINE const char* ProfileTypeToStringHelper(ProfileType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ProfileType::kCPU:
      return "kCPU";
    case ProfileType::kHeap:
      return "kHeap";
    default:
      return nullptr;
  }
}

std::string ProfileTypeToString(ProfileType value) {
  const char *str = ProfileTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ProfileType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ProfileType value) {
  return os << ProfileTypeToString(value);
}

namespace internal {


// static
bool SampledProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const SampledProfile_Data* object =
      static_cast<const SampledProfile_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->contents, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->contents, validation_context))
    return false;

  return true;
}

SampledProfile_Data::SampledProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CallStackProfileCollector_Collect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 32, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const CallStackProfileCollector_Collect_Params_Data* object =
      static_cast<const CallStackProfileCollector_Collect_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->start_timestamp, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->start_timestamp, validation_context))
    return false;


  if (!::metrics::mojom::internal::ProfileType_Data
        ::Validate(object->profile_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->profile, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->profile, validation_context))
    return false;

  return true;
}

CallStackProfileCollector_Collect_Params_Data::CallStackProfileCollector_Collect_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace metrics

namespace perfetto {

// static
void TraceFormatTraits<::metrics::mojom::ProfileType>::WriteIntoTrace(
   perfetto::TracedValue context, ::metrics::mojom::ProfileType value) {
  return std::move(context).WriteString(::metrics::mojom::ProfileTypeToString(value));
}

} // namespace perfetto