// third_party/blink/public/mojom/parakeet/ad_request.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/parakeet/ad_request.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/parakeet/ad_request.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* AdSignalsToStringHelper(AdSignals value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case AdSignals::kCourseGeolocation:
      return "kCourseGeolocation";
    case AdSignals::kCourseUserAgent:
      return "kCourseUserAgent";
    case AdSignals::kTargeting:
      return "kTargeting";
    case AdSignals::kUserAdInterests:
      return "kUserAdInterests";
    default:
      return nullptr;
  }
}

std::string AdSignalsToString(AdSignals value) {
  const char *str = AdSignalsToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown AdSignals value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, AdSignals value) {
  return os << AdSignalsToString(value);
}

namespace internal {


// static
bool AdProperties_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 56, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const AdProperties_Data* object =
      static_cast<const AdProperties_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->width, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams width_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->width, validation_context,
                                         &width_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->height, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams height_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->height, validation_context,
                                         &height_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->slot, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams slot_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->slot, validation_context,
                                         &slot_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->lang, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams lang_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->lang, validation_context,
                                         &lang_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ad_type, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams ad_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->ad_type, validation_context,
                                         &ad_type_validate_params)) {
    return false;
  }

  return true;
}

AdProperties_Data::AdProperties_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AdGeolocation_Data::Validate(
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
  [[maybe_unused]] const AdGeolocation_Data* object =
      static_cast<const AdGeolocation_Data*>(data);

  return true;
}

AdGeolocation_Data::AdGeolocation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AdTargeting_Data::Validate(
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
  [[maybe_unused]] const AdTargeting_Data* object =
      static_cast<const AdTargeting_Data*>(data);

  const mojo::internal::ContainerValidateParams interests_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->interests, validation_context,
                                         &interests_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->geolocation, validation_context))
    return false;

  return true;
}

AdTargeting_Data::AdTargeting_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AdRequestConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 56, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const AdRequestConfig_Data* object =
      static_cast<const AdRequestConfig_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ad_request_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ad_request_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ad_properties, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams ad_properties_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->ad_properties, validation_context,
                                         &ad_properties_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams publisher_code_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->publisher_code, validation_context,
                                         &publisher_code_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->targeting, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams anonymized_proxied_signals_validate_params(
      0, ::blink::mojom::internal::AdSignals_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->anonymized_proxied_signals, validation_context,
                                         &anonymized_proxied_signals_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->fallback_source, validation_context))
    return false;

  return true;
}

AdRequestConfig_Data::AdRequestConfig_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::AdSignals>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::AdSignals value) {
  return std::move(context).WriteString(::blink::mojom::AdSignalsToString(value));
}

} // namespace perfetto