// services/device/public/mojom/wake_lock_provider.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/device/public/mojom/wake_lock_provider.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/device/public/mojom/wake_lock_provider.mojom-params-data.h"
namespace device {
namespace mojom {

namespace internal {


// static
bool WakeLockProvider_GetWakeLockContextForID_Params_Data::Validate(
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
  [[maybe_unused]] const WakeLockProvider_GetWakeLockContextForID_Params_Data* object =
      static_cast<const WakeLockProvider_GetWakeLockContextForID_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->context, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->context,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WakeLockProvider_GetWakeLockContextForID_Params_Data::WakeLockProvider_GetWakeLockContextForID_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WakeLockProvider_GetWakeLockWithoutContext_Params_Data::Validate(
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
  [[maybe_unused]] const WakeLockProvider_GetWakeLockWithoutContext_Params_Data* object =
      static_cast<const WakeLockProvider_GetWakeLockWithoutContext_Params_Data*>(data);


  if (!::device::mojom::internal::WakeLockType_Data
        ::Validate(object->type, validation_context))
    return false;


  if (!::device::mojom::internal::WakeLockReason_Data
        ::Validate(object->reason, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->description, validation_context,
                                         &description_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->wake_lock, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->wake_lock,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WakeLockProvider_GetWakeLockWithoutContext_Params_Data::WakeLockProvider_GetWakeLockWithoutContext_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data::Validate(
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
  [[maybe_unused]] const WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data* object =
      static_cast<const WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data*>(data);


  if (!::device::mojom::internal::WakeLockType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WakeLockProvider_GetActiveWakeLocksForTests_Params_Data::Validate(
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
  [[maybe_unused]] const WakeLockProvider_GetActiveWakeLocksForTests_Params_Data* object =
      static_cast<const WakeLockProvider_GetActiveWakeLocksForTests_Params_Data*>(data);


  if (!::device::mojom::internal::WakeLockType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

WakeLockProvider_GetActiveWakeLocksForTests_Params_Data::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data* object =
      static_cast<const WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data*>(data);

  return true;
}

WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WakeLockObserver_OnWakeLockDeactivated_Params_Data::Validate(
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
  [[maybe_unused]] const WakeLockObserver_OnWakeLockDeactivated_Params_Data* object =
      static_cast<const WakeLockObserver_OnWakeLockDeactivated_Params_Data*>(data);


  if (!::device::mojom::internal::WakeLockType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

WakeLockObserver_OnWakeLockDeactivated_Params_Data::WakeLockObserver_OnWakeLockDeactivated_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace device