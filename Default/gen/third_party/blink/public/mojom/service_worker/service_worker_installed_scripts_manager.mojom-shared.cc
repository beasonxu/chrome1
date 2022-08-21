// third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool ServiceWorkerInstalledScriptsInfo_Data::Validate(
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
  [[maybe_unused]] const ServiceWorkerInstalledScriptsInfo_Data* object =
      static_cast<const ServiceWorkerInstalledScriptsInfo_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->manager_receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->manager_receiver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->manager_host_remote, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->manager_host_remote,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->installed_urls, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams installed_urls_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->installed_urls, validation_context,
                                         &installed_urls_validate_params)) {
    return false;
  }

  return true;
}

ServiceWorkerInstalledScriptsInfo_Data::ServiceWorkerInstalledScriptsInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerScriptInfo_Data::Validate(
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
  [[maybe_unused]] const ServiceWorkerScriptInfo_Data* object =
      static_cast<const ServiceWorkerScriptInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->encoding, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams encoding_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->encoding, validation_context,
                                         &encoding_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->headers, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams headers_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->headers, validation_context,
                                         &headers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->body, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->body,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->meta_data,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ServiceWorkerScriptInfo_Data::ServiceWorkerScriptInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data::Validate(
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
  [[maybe_unused]] const ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data* object =
      static_cast<const ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_url, validation_context))
    return false;

  return true;
}

ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data::Validate(
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
  [[maybe_unused]] const ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data* object =
      static_cast<const ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_info, validation_context))
    return false;

  return true;
}

ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink