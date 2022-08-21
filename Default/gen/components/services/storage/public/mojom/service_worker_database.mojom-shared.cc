// components/services/storage/public/mojom/service_worker_database.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/services/storage/public/mojom/service_worker_database.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/services/storage/public/mojom/service_worker_database.mojom-params-data.h"
namespace storage {
namespace mojom {

static NOINLINE const char* ServiceWorkerDatabaseStatusToStringHelper(ServiceWorkerDatabaseStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ServiceWorkerDatabaseStatus::kOk:
      return "kOk";
    case ServiceWorkerDatabaseStatus::kErrorNotFound:
      return "kErrorNotFound";
    case ServiceWorkerDatabaseStatus::kErrorIOError:
      return "kErrorIOError";
    case ServiceWorkerDatabaseStatus::kErrorCorrupted:
      return "kErrorCorrupted";
    case ServiceWorkerDatabaseStatus::kErrorFailed:
      return "kErrorFailed";
    case ServiceWorkerDatabaseStatus::kErrorNotSupported:
      return "kErrorNotSupported";
    case ServiceWorkerDatabaseStatus::kErrorDisabled:
      return "kErrorDisabled";
    case ServiceWorkerDatabaseStatus::kErrorStorageDisconnected:
      return "kErrorStorageDisconnected";
    default:
      return nullptr;
  }
}

std::string ServiceWorkerDatabaseStatusToString(ServiceWorkerDatabaseStatus value) {
  const char *str = ServiceWorkerDatabaseStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ServiceWorkerDatabaseStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ServiceWorkerDatabaseStatus value) {
  return os << ServiceWorkerDatabaseStatusToString(value);
}

namespace internal {


// static
bool ServiceWorkerRegistrationData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 128, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const ServiceWorkerRegistrationData_Data* object =
      static_cast<const ServiceWorkerRegistrationData_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->scope, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scope, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script, validation_context))
    return false;


  if (!::blink::mojom::internal::ScriptType_Data
        ::Validate(object->script_type, validation_context))
    return false;


  if (!::blink::mojom::internal::ServiceWorkerUpdateViaCache_Data
        ::Validate(object->update_via_cache, validation_context))
    return false;


  if (!::blink::mojom::internal::ServiceWorkerFetchHandlerType_Data
        ::Validate(object->fetch_handler_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_update_check, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_update_check, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_response_time, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_response_time, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams origin_trial_tokens_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
  if (!mojo::internal::ValidateContainer(object->origin_trial_tokens, validation_context,
                                         &origin_trial_tokens_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->navigation_preload_state, 13, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->navigation_preload_state, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->used_features, 14, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams used_features_validate_params(
      0, ::blink::mojom::internal::WebFeature_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->used_features, validation_context,
                                         &used_features_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cross_origin_embedder_policy, 16, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cross_origin_embedder_policy, validation_context))
    return false;


  if (!::blink::mojom::internal::AncestorFrameType_Data
        ::Validate(object->ancestor_frame_type, validation_context))
    return false;

  return true;
}

ServiceWorkerRegistrationData_Data::ServiceWorkerRegistrationData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerResourceRecord_Data::Validate(
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
  [[maybe_unused]] const ServiceWorkerResourceRecord_Data* object =
      static_cast<const ServiceWorkerResourceRecord_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  return true;
}

ServiceWorkerResourceRecord_Data::ServiceWorkerResourceRecord_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace storage

namespace perfetto {

// static
void TraceFormatTraits<::storage::mojom::ServiceWorkerDatabaseStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::storage::mojom::ServiceWorkerDatabaseStatus value) {
  return std::move(context).WriteString(::storage::mojom::ServiceWorkerDatabaseStatusToString(value));
}

} // namespace perfetto