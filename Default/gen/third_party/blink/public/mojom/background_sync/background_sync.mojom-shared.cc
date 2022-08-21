// third_party/blink/public/mojom/background_sync/background_sync.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* BackgroundSyncErrorToStringHelper(BackgroundSyncError value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case BackgroundSyncError::NONE:
      return "NONE";
    case BackgroundSyncError::STORAGE:
      return "STORAGE";
    case BackgroundSyncError::NOT_FOUND:
      return "NOT_FOUND";
    case BackgroundSyncError::NO_SERVICE_WORKER:
      return "NO_SERVICE_WORKER";
    case BackgroundSyncError::NOT_ALLOWED:
      return "NOT_ALLOWED";
    case BackgroundSyncError::PERMISSION_DENIED:
      return "{PERMISSION_DENIED, MAX}";
    default:
      return nullptr;
  }
}

std::string BackgroundSyncErrorToString(BackgroundSyncError value) {
  const char *str = BackgroundSyncErrorToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown BackgroundSyncError value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncError value) {
  return os << BackgroundSyncErrorToString(value);
}

static NOINLINE const char* BackgroundSyncStateToStringHelper(BackgroundSyncState value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case BackgroundSyncState::PENDING:
      return "PENDING";
    case BackgroundSyncState::FIRING:
      return "FIRING";
    case BackgroundSyncState::REREGISTERED_WHILE_FIRING:
      return "REREGISTERED_WHILE_FIRING";
    default:
      return nullptr;
  }
}

std::string BackgroundSyncStateToString(BackgroundSyncState value) {
  const char *str = BackgroundSyncStateToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown BackgroundSyncState value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncState value) {
  return os << BackgroundSyncStateToString(value);
}

static NOINLINE const char* BackgroundSyncEventLastChanceToStringHelper(BackgroundSyncEventLastChance value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE:
      return "IS_NOT_LAST_CHANCE";
    case BackgroundSyncEventLastChance::IS_LAST_CHANCE:
      return "IS_LAST_CHANCE";
    default:
      return nullptr;
  }
}

std::string BackgroundSyncEventLastChanceToString(BackgroundSyncEventLastChance value) {
  const char *str = BackgroundSyncEventLastChanceToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown BackgroundSyncEventLastChance value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncEventLastChance value) {
  return os << BackgroundSyncEventLastChanceToString(value);
}

static NOINLINE const char* BackgroundSyncTypeToStringHelper(BackgroundSyncType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case BackgroundSyncType::ONE_SHOT:
      return "ONE_SHOT";
    case BackgroundSyncType::PERIODIC:
      return "PERIODIC";
    default:
      return nullptr;
  }
}

std::string BackgroundSyncTypeToString(BackgroundSyncType value) {
  const char *str = BackgroundSyncTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown BackgroundSyncType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncType value) {
  return os << BackgroundSyncTypeToString(value);
}

namespace internal {


// static
bool SyncRegistrationOptions_Data::Validate(
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
  [[maybe_unused]] const SyncRegistrationOptions_Data* object =
      static_cast<const SyncRegistrationOptions_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tag, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tag, validation_context,
                                         &tag_validate_params)) {
    return false;
  }

  return true;
}

SyncRegistrationOptions_Data::SyncRegistrationOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncRegistrationInfo_Data::Validate(
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
  [[maybe_unused]] const BackgroundSyncRegistrationInfo_Data* object =
      static_cast<const BackgroundSyncRegistrationInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tag, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tag, validation_context,
                                         &tag_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::BackgroundSyncType_Data
        ::Validate(object->sync_type, validation_context))
    return false;

  return true;
}

BackgroundSyncRegistrationInfo_Data::BackgroundSyncRegistrationInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OneShotBackgroundSyncService_Register_Params_Data::Validate(
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
  [[maybe_unused]] const OneShotBackgroundSyncService_Register_Params_Data* object =
      static_cast<const OneShotBackgroundSyncService_Register_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

OneShotBackgroundSyncService_Register_Params_Data::OneShotBackgroundSyncService_Register_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OneShotBackgroundSyncService_Register_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const OneShotBackgroundSyncService_Register_ResponseParams_Data* object =
      static_cast<const OneShotBackgroundSyncService_Register_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

OneShotBackgroundSyncService_Register_ResponseParams_Data::OneShotBackgroundSyncService_Register_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OneShotBackgroundSyncService_DidResolveRegistration_Params_Data::Validate(
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
  [[maybe_unused]] const OneShotBackgroundSyncService_DidResolveRegistration_Params_Data* object =
      static_cast<const OneShotBackgroundSyncService_DidResolveRegistration_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registration_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->registration_info, validation_context))
    return false;

  return true;
}

OneShotBackgroundSyncService_DidResolveRegistration_Params_Data::OneShotBackgroundSyncService_DidResolveRegistration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OneShotBackgroundSyncService_GetRegistrations_Params_Data::Validate(
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
  [[maybe_unused]] const OneShotBackgroundSyncService_GetRegistrations_Params_Data* object =
      static_cast<const OneShotBackgroundSyncService_GetRegistrations_Params_Data*>(data);

  return true;
}

OneShotBackgroundSyncService_GetRegistrations_Params_Data::OneShotBackgroundSyncService_GetRegistrations_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OneShotBackgroundSyncService_GetRegistrations_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const OneShotBackgroundSyncService_GetRegistrations_ResponseParams_Data* object =
      static_cast<const OneShotBackgroundSyncService_GetRegistrations_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registrations, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams registrations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->registrations, validation_context,
                                         &registrations_validate_params)) {
    return false;
  }

  return true;
}

OneShotBackgroundSyncService_GetRegistrations_ResponseParams_Data::OneShotBackgroundSyncService_GetRegistrations_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PeriodicBackgroundSyncService_Register_Params_Data::Validate(
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
  [[maybe_unused]] const PeriodicBackgroundSyncService_Register_Params_Data* object =
      static_cast<const PeriodicBackgroundSyncService_Register_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

PeriodicBackgroundSyncService_Register_Params_Data::PeriodicBackgroundSyncService_Register_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PeriodicBackgroundSyncService_Register_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PeriodicBackgroundSyncService_Register_ResponseParams_Data* object =
      static_cast<const PeriodicBackgroundSyncService_Register_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

PeriodicBackgroundSyncService_Register_ResponseParams_Data::PeriodicBackgroundSyncService_Register_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PeriodicBackgroundSyncService_Unregister_Params_Data::Validate(
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
  [[maybe_unused]] const PeriodicBackgroundSyncService_Unregister_Params_Data* object =
      static_cast<const PeriodicBackgroundSyncService_Unregister_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tag, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tag, validation_context,
                                         &tag_validate_params)) {
    return false;
  }

  return true;
}

PeriodicBackgroundSyncService_Unregister_Params_Data::PeriodicBackgroundSyncService_Unregister_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PeriodicBackgroundSyncService_Unregister_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PeriodicBackgroundSyncService_Unregister_ResponseParams_Data* object =
      static_cast<const PeriodicBackgroundSyncService_Unregister_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  return true;
}

PeriodicBackgroundSyncService_Unregister_ResponseParams_Data::PeriodicBackgroundSyncService_Unregister_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PeriodicBackgroundSyncService_GetRegistrations_Params_Data::Validate(
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
  [[maybe_unused]] const PeriodicBackgroundSyncService_GetRegistrations_Params_Data* object =
      static_cast<const PeriodicBackgroundSyncService_GetRegistrations_Params_Data*>(data);

  return true;
}

PeriodicBackgroundSyncService_GetRegistrations_Params_Data::PeriodicBackgroundSyncService_GetRegistrations_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PeriodicBackgroundSyncService_GetRegistrations_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PeriodicBackgroundSyncService_GetRegistrations_ResponseParams_Data* object =
      static_cast<const PeriodicBackgroundSyncService_GetRegistrations_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registrations, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams registrations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->registrations, validation_context,
                                         &registrations_validate_params)) {
    return false;
  }

  return true;
}

PeriodicBackgroundSyncService_GetRegistrations_ResponseParams_Data::PeriodicBackgroundSyncService_GetRegistrations_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::BackgroundSyncError>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::BackgroundSyncError value) {
  return std::move(context).WriteString(::blink::mojom::BackgroundSyncErrorToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::BackgroundSyncState>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::BackgroundSyncState value) {
  return std::move(context).WriteString(::blink::mojom::BackgroundSyncStateToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::BackgroundSyncEventLastChance>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::BackgroundSyncEventLastChance value) {
  return std::move(context).WriteString(::blink::mojom::BackgroundSyncEventLastChanceToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::BackgroundSyncType>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::BackgroundSyncType value) {
  return std::move(context).WriteString(::blink::mojom::BackgroundSyncTypeToString(value));
}

} // namespace perfetto