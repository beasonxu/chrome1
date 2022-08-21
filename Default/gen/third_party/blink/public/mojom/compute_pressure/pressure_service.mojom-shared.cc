// third_party/blink/public/mojom/compute_pressure/pressure_service.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/compute_pressure/pressure_service.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/compute_pressure/pressure_service.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* PressureStatusToStringHelper(PressureStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case PressureStatus::kOk:
      return "kOk";
    case PressureStatus::kNotSupported:
      return "kNotSupported";
    case PressureStatus::kSecurityError:
      return "kSecurityError";
    default:
      return nullptr;
  }
}

std::string PressureStatusToString(PressureStatus value) {
  const char *str = PressureStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown PressureStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, PressureStatus value) {
  return os << PressureStatusToString(value);
}

namespace internal {


// static
bool PressureQuantization_Data::Validate(
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
  [[maybe_unused]] const PressureQuantization_Data* object =
      static_cast<const PressureQuantization_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cpu_utilization_thresholds, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cpu_utilization_thresholds_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cpu_utilization_thresholds, validation_context,
                                         &cpu_utilization_thresholds_validate_params)) {
    return false;
  }

  return true;
}

PressureQuantization_Data::PressureQuantization_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PressureObserver_OnUpdate_Params_Data::Validate(
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
  [[maybe_unused]] const PressureObserver_OnUpdate_Params_Data* object =
      static_cast<const PressureObserver_OnUpdate_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->state, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->state, validation_context))
    return false;

  return true;
}

PressureObserver_OnUpdate_Params_Data::PressureObserver_OnUpdate_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PressureService_AddObserver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PressureService_AddObserver_Params_Data* object =
      static_cast<const PressureService_AddObserver_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->quantization, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->quantization, validation_context))
    return false;

  return true;
}

PressureService_AddObserver_Params_Data::PressureService_AddObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PressureService_AddObserver_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PressureService_AddObserver_ResponseParams_Data* object =
      static_cast<const PressureService_AddObserver_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::PressureStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PressureService_AddObserver_ResponseParams_Data::PressureService_AddObserver_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::PressureStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::PressureStatus value) {
  return std::move(context).WriteString(::blink::mojom::PressureStatusToString(value));
}

} // namespace perfetto