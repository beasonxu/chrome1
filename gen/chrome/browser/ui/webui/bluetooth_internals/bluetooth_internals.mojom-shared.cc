// chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-params-data.h"
namespace mojom {

namespace internal {


// static
bool DebugLogsChangeHandler_ChangeDebugLogsState_Params_Data::Validate(
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
  [[maybe_unused]] const DebugLogsChangeHandler_ChangeDebugLogsState_Params_Data* object =
      static_cast<const DebugLogsChangeHandler_ChangeDebugLogsState_Params_Data*>(data);

  return true;
}

DebugLogsChangeHandler_ChangeDebugLogsState_Params_Data::DebugLogsChangeHandler_ChangeDebugLogsState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothInternalsHandler_GetAdapter_Params_Data::Validate(
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
  [[maybe_unused]] const BluetoothInternalsHandler_GetAdapter_Params_Data* object =
      static_cast<const BluetoothInternalsHandler_GetAdapter_Params_Data*>(data);

  return true;
}

BluetoothInternalsHandler_GetAdapter_Params_Data::BluetoothInternalsHandler_GetAdapter_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothInternalsHandler_GetAdapter_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BluetoothInternalsHandler_GetAdapter_ResponseParams_Data* object =
      static_cast<const BluetoothInternalsHandler_GetAdapter_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterface(object->adapter,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BluetoothInternalsHandler_GetAdapter_ResponseParams_Data::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params_Data::Validate(
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
  [[maybe_unused]] const BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params_Data* object =
      static_cast<const BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params_Data*>(data);

  return true;
}

BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params_Data::BluetoothInternalsHandler_GetDebugLogsChangeHandler_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams_Data* object =
      static_cast<const BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterface(object->handler,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams_Data::BluetoothInternalsHandler_GetDebugLogsChangeHandler_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom