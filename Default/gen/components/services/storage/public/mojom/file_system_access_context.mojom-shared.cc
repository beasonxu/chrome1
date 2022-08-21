// components/services/storage/public/mojom/file_system_access_context.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/services/storage/public/mojom/file_system_access_context.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/services/storage/public/mojom/file_system_access_context.mojom-params-data.h"
namespace storage {
namespace mojom {

namespace internal {


// static
bool FileSystemAccessContext_SerializeHandle_Params_Data::Validate(
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
  [[maybe_unused]] const FileSystemAccessContext_SerializeHandle_Params_Data* object =
      static_cast<const FileSystemAccessContext_SerializeHandle_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->token, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->token,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FileSystemAccessContext_SerializeHandle_Params_Data::FileSystemAccessContext_SerializeHandle_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileSystemAccessContext_SerializeHandle_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FileSystemAccessContext_SerializeHandle_ResponseParams_Data* object =
      static_cast<const FileSystemAccessContext_SerializeHandle_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bits, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams bits_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->bits, validation_context,
                                         &bits_validate_params)) {
    return false;
  }

  return true;
}

FileSystemAccessContext_SerializeHandle_ResponseParams_Data::FileSystemAccessContext_SerializeHandle_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileSystemAccessContext_DeserializeHandle_Params_Data::Validate(
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
  [[maybe_unused]] const FileSystemAccessContext_DeserializeHandle_Params_Data* object =
      static_cast<const FileSystemAccessContext_DeserializeHandle_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->storage_key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->storage_key, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bits, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams bits_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->bits, validation_context,
                                         &bits_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->token, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->token,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FileSystemAccessContext_DeserializeHandle_Params_Data::FileSystemAccessContext_DeserializeHandle_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace storage