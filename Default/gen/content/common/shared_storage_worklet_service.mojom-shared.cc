// content/common/shared_storage_worklet_service.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/common/shared_storage_worklet_service.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "content/common/shared_storage_worklet_service.mojom-params-data.h"
namespace shared_storage_worklet {
namespace mojom {

static NOINLINE const char* SharedStorageGetStatusToStringHelper(SharedStorageGetStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case SharedStorageGetStatus::kSuccess:
      return "kSuccess";
    case SharedStorageGetStatus::kNotFound:
      return "kNotFound";
    case SharedStorageGetStatus::kError:
      return "kError";
    default:
      return nullptr;
  }
}

std::string SharedStorageGetStatusToString(SharedStorageGetStatus value) {
  const char *str = SharedStorageGetStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown SharedStorageGetStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, SharedStorageGetStatus value) {
  return os << SharedStorageGetStatusToString(value);
}

namespace internal {


// static
bool SharedStorageWorkletServiceClient_SharedStorageSet_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageSet_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageSet_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->value, validation_context))
    return false;

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageSet_Params_Data::SharedStorageWorkletServiceClient_SharedStorageSet_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageSet_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageSet_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageSet_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageSet_ResponseParams_Data::SharedStorageWorkletServiceClient_SharedStorageSet_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageAppend_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageAppend_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageAppend_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->value, validation_context))
    return false;

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageAppend_Params_Data::SharedStorageWorkletServiceClient_SharedStorageAppend_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageAppend_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageAppend_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageAppend_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageAppend_ResponseParams_Data::SharedStorageWorkletServiceClient_SharedStorageAppend_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageDelete_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageDelete_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageDelete_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageDelete_Params_Data::SharedStorageWorkletServiceClient_SharedStorageDelete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageDelete_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageDelete_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageDelete_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageDelete_ResponseParams_Data::SharedStorageWorkletServiceClient_SharedStorageDelete_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageClear_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageClear_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageClear_Params_Data*>(data);

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageClear_Params_Data::SharedStorageWorkletServiceClient_SharedStorageClear_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageClear_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageClear_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageClear_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageClear_ResponseParams_Data::SharedStorageWorkletServiceClient_SharedStorageClear_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageGet_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageGet_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageGet_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageGet_Params_Data::SharedStorageWorkletServiceClient_SharedStorageGet_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageGet_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageGet_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageGet_ResponseParams_Data*>(data);


  if (!::shared_storage_worklet::mojom::internal::SharedStorageGetStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->value, validation_context))
    return false;

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageGet_ResponseParams_Data::SharedStorageWorkletServiceClient_SharedStorageGet_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageKeys_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageKeys_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageKeys_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->listener, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->listener,
                                                 validation_context)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageKeys_Params_Data::SharedStorageWorkletServiceClient_SharedStorageKeys_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageEntries_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageEntries_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageEntries_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->listener, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->listener,
                                                 validation_context)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageEntries_Params_Data::SharedStorageWorkletServiceClient_SharedStorageEntries_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageLength_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageLength_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageLength_Params_Data*>(data);

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageLength_Params_Data::SharedStorageWorkletServiceClient_SharedStorageLength_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_SharedStorageLength_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_SharedStorageLength_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_SharedStorageLength_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_SharedStorageLength_ResponseParams_Data::SharedStorageWorkletServiceClient_SharedStorageLength_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletServiceClient_ConsoleLog_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletServiceClient_ConsoleLog_Params_Data* object =
      static_cast<const SharedStorageWorkletServiceClient_ConsoleLog_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletServiceClient_ConsoleLog_Params_Data::SharedStorageWorkletServiceClient_ConsoleLog_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_BindSharedStorageWorkletServiceClient_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_BindSharedStorageWorkletServiceClient_Params_Data* object =
      static_cast<const SharedStorageWorkletService_BindSharedStorageWorkletServiceClient_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

SharedStorageWorkletService_BindSharedStorageWorkletServiceClient_Params_Data::SharedStorageWorkletService_BindSharedStorageWorkletServiceClient_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_AddModule_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_AddModule_Params_Data* object =
      static_cast<const SharedStorageWorkletService_AddModule_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->url_loader_factory, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->url_loader_factory,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_source_url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->script_source_url, validation_context))
    return false;

  return true;
}

SharedStorageWorkletService_AddModule_Params_Data::SharedStorageWorkletService_AddModule_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_AddModule_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_AddModule_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletService_AddModule_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletService_AddModule_ResponseParams_Data::SharedStorageWorkletService_AddModule_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_RunURLSelectionOperation_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_RunURLSelectionOperation_Params_Data* object =
      static_cast<const SharedStorageWorkletService_RunURLSelectionOperation_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->urls, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams urls_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->urls, validation_context,
                                         &urls_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serialized_data, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serialized_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serialized_data, validation_context,
                                         &serialized_data_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletService_RunURLSelectionOperation_Params_Data::SharedStorageWorkletService_RunURLSelectionOperation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_RunURLSelectionOperation_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_RunURLSelectionOperation_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletService_RunURLSelectionOperation_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletService_RunURLSelectionOperation_ResponseParams_Data::SharedStorageWorkletService_RunURLSelectionOperation_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_RunOperation_Params_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_RunOperation_Params_Data* object =
      static_cast<const SharedStorageWorkletService_RunOperation_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serialized_data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serialized_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serialized_data, validation_context,
                                         &serialized_data_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletService_RunOperation_Params_Data::SharedStorageWorkletService_RunOperation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedStorageWorkletService_RunOperation_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const SharedStorageWorkletService_RunOperation_ResponseParams_Data* object =
      static_cast<const SharedStorageWorkletService_RunOperation_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

SharedStorageWorkletService_RunOperation_ResponseParams_Data::SharedStorageWorkletService_RunOperation_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace shared_storage_worklet

namespace perfetto {

// static
void TraceFormatTraits<::shared_storage_worklet::mojom::SharedStorageGetStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::shared_storage_worklet::mojom::SharedStorageGetStatus value) {
  return std::move(context).WriteString(::shared_storage_worklet::mojom::SharedStorageGetStatusToString(value));
}

} // namespace perfetto