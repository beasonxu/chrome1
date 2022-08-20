// third_party/blink/public/mojom/dom_storage/storage_area.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool KeyValue_Data::Validate(
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
  [[maybe_unused]] const KeyValue_Data* object =
      static_cast<const KeyValue_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

KeyValue_Data::KeyValue_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageAreaObserver_KeyChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 40, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const StorageAreaObserver_KeyChanged_Params_Data* object =
      static_cast<const StorageAreaObserver_KeyChanged_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_value, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams new_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->new_value, validation_context,
                                         &new_value_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->old_value, validation_context,
                                         &old_value_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

StorageAreaObserver_KeyChanged_Params_Data::StorageAreaObserver_KeyChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageAreaObserver_KeyChangeFailed_Params_Data::Validate(
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
  [[maybe_unused]] const StorageAreaObserver_KeyChangeFailed_Params_Data* object =
      static_cast<const StorageAreaObserver_KeyChangeFailed_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

StorageAreaObserver_KeyChangeFailed_Params_Data::StorageAreaObserver_KeyChangeFailed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageAreaObserver_KeyDeleted_Params_Data::Validate(
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
  [[maybe_unused]] const StorageAreaObserver_KeyDeleted_Params_Data* object =
      static_cast<const StorageAreaObserver_KeyDeleted_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->old_value, validation_context,
                                         &old_value_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

StorageAreaObserver_KeyDeleted_Params_Data::StorageAreaObserver_KeyDeleted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageAreaObserver_AllDeleted_Params_Data::Validate(
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
  [[maybe_unused]] const StorageAreaObserver_AllDeleted_Params_Data* object =
      static_cast<const StorageAreaObserver_AllDeleted_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

StorageAreaObserver_AllDeleted_Params_Data::StorageAreaObserver_AllDeleted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data::Validate(
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
  [[maybe_unused]] const StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data* object =
      static_cast<const StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data*>(data);

  return true;
}

StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_AddObserver_Params_Data::Validate(
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
  [[maybe_unused]] const StorageArea_AddObserver_Params_Data* object =
      static_cast<const StorageArea_AddObserver_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

StorageArea_AddObserver_Params_Data::StorageArea_AddObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_Put_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 40, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const StorageArea_Put_Params_Data* object =
      static_cast<const StorageArea_Put_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams client_old_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_old_value, validation_context,
                                         &client_old_value_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

StorageArea_Put_Params_Data::StorageArea_Put_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_Put_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const StorageArea_Put_ResponseParams_Data* object =
      static_cast<const StorageArea_Put_ResponseParams_Data*>(data);

  return true;
}

StorageArea_Put_ResponseParams_Data::StorageArea_Put_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_Delete_Params_Data::Validate(
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
  [[maybe_unused]] const StorageArea_Delete_Params_Data* object =
      static_cast<const StorageArea_Delete_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams client_old_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_old_value, validation_context,
                                         &client_old_value_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

StorageArea_Delete_Params_Data::StorageArea_Delete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_Delete_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const StorageArea_Delete_ResponseParams_Data* object =
      static_cast<const StorageArea_Delete_ResponseParams_Data*>(data);

  return true;
}

StorageArea_Delete_ResponseParams_Data::StorageArea_Delete_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_DeleteAll_Params_Data::Validate(
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
  [[maybe_unused]] const StorageArea_DeleteAll_Params_Data* object =
      static_cast<const StorageArea_DeleteAll_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->new_observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

StorageArea_DeleteAll_Params_Data::StorageArea_DeleteAll_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_DeleteAll_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const StorageArea_DeleteAll_ResponseParams_Data* object =
      static_cast<const StorageArea_DeleteAll_ResponseParams_Data*>(data);

  return true;
}

StorageArea_DeleteAll_ResponseParams_Data::StorageArea_DeleteAll_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_Get_Params_Data::Validate(
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
  [[maybe_unused]] const StorageArea_Get_Params_Data* object =
      static_cast<const StorageArea_Get_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  return true;
}

StorageArea_Get_Params_Data::StorageArea_Get_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_Get_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const StorageArea_Get_ResponseParams_Data* object =
      static_cast<const StorageArea_Get_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

StorageArea_Get_ResponseParams_Data::StorageArea_Get_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_GetAll_Params_Data::Validate(
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
  [[maybe_unused]] const StorageArea_GetAll_Params_Data* object =
      static_cast<const StorageArea_GetAll_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterface(object->new_observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

StorageArea_GetAll_Params_Data::StorageArea_GetAll_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StorageArea_GetAll_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const StorageArea_GetAll_ResponseParams_Data* object =
      static_cast<const StorageArea_GetAll_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

StorageArea_GetAll_ResponseParams_Data::StorageArea_GetAll_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink