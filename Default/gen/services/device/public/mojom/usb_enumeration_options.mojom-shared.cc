// services/device/public/mojom/usb_enumeration_options.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/device/public/mojom/usb_enumeration_options.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/device/public/mojom/usb_enumeration_options.mojom-params-data.h"
namespace device {
namespace mojom {

namespace internal {


// static
bool UsbDeviceFilter_Data::Validate(
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
  [[maybe_unused]] const UsbDeviceFilter_Data* object =
      static_cast<const UsbDeviceFilter_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->serial_number, validation_context))
    return false;

  return true;
}

UsbDeviceFilter_Data::UsbDeviceFilter_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UsbEnumerationOptions_Data::Validate(
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
  [[maybe_unused]] const UsbEnumerationOptions_Data* object =
      static_cast<const UsbEnumerationOptions_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->filters, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams filters_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->filters, validation_context,
                                         &filters_validate_params)) {
    return false;
  }

  return true;
}

UsbEnumerationOptions_Data::UsbEnumerationOptions_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace device