// third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool PictureInPictureSessionObserver_OnWindowSizeChanged_Params_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureSessionObserver_OnWindowSizeChanged_Params_Data* object =
      static_cast<const PictureInPictureSessionObserver_OnWindowSizeChanged_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->size, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->size, validation_context))
    return false;

  return true;
}

PictureInPictureSessionObserver_OnWindowSizeChanged_Params_Data::PictureInPictureSessionObserver_OnWindowSizeChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureInPictureSessionObserver_OnStopped_Params_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureSessionObserver_OnStopped_Params_Data* object =
      static_cast<const PictureInPictureSessionObserver_OnStopped_Params_Data*>(data);

  return true;
}

PictureInPictureSessionObserver_OnStopped_Params_Data::PictureInPictureSessionObserver_OnStopped_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureInPictureSession_Update_Params_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureSession_Update_Params_Data* object =
      static_cast<const PictureInPictureSession_Update_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->player_remote, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->player_remote,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->surface_id, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->natural_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->natural_size, validation_context))
    return false;

  return true;
}

PictureInPictureSession_Update_Params_Data::PictureInPictureSession_Update_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureInPictureSession_Stop_Params_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureSession_Stop_Params_Data* object =
      static_cast<const PictureInPictureSession_Stop_Params_Data*>(data);

  return true;
}

PictureInPictureSession_Stop_Params_Data::PictureInPictureSession_Stop_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureInPictureSession_Stop_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureSession_Stop_ResponseParams_Data* object =
      static_cast<const PictureInPictureSession_Stop_ResponseParams_Data*>(data);

  return true;
}

PictureInPictureSession_Stop_ResponseParams_Data::PictureInPictureSession_Stop_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureInPictureService_StartSession_Params_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureService_StartSession_Params_Data* object =
      static_cast<const PictureInPictureService_StartSession_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->player_remote, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->player_remote,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->surface_id, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->natural_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->natural_size, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_bounds, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->source_bounds, validation_context))
    return false;

  return true;
}

PictureInPictureService_StartSession_Params_Data::PictureInPictureService_StartSession_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureInPictureService_StartSession_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PictureInPictureService_StartSession_ResponseParams_Data* object =
      static_cast<const PictureInPictureService_StartSession_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterface(object->session,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->size, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->size, validation_context))
    return false;

  return true;
}

PictureInPictureService_StartSession_ResponseParams_Data::PictureInPictureService_StartSession_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink