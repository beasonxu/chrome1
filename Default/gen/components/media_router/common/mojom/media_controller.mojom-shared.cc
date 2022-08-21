// components/media_router/common/mojom/media_controller.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/media_router/common/mojom/media_controller.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/media_router/common/mojom/media_controller.mojom-params-data.h"
namespace media_router {
namespace mojom {

namespace internal {


// static
bool MediaController_Play_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_Play_Params_Data* object =
      static_cast<const MediaController_Play_Params_Data*>(data);

  return true;
}

MediaController_Play_Params_Data::MediaController_Play_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Pause_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_Pause_Params_Data* object =
      static_cast<const MediaController_Pause_Params_Data*>(data);

  return true;
}

MediaController_Pause_Params_Data::MediaController_Pause_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_SetMute_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_SetMute_Params_Data* object =
      static_cast<const MediaController_SetMute_Params_Data*>(data);

  return true;
}

MediaController_SetMute_Params_Data::MediaController_SetMute_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_SetVolume_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_SetVolume_Params_Data* object =
      static_cast<const MediaController_SetVolume_Params_Data*>(data);

  return true;
}

MediaController_SetVolume_Params_Data::MediaController_SetVolume_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Seek_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_Seek_Params_Data* object =
      static_cast<const MediaController_Seek_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->time, validation_context))
    return false;

  return true;
}

MediaController_Seek_Params_Data::MediaController_Seek_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_NextTrack_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_NextTrack_Params_Data* object =
      static_cast<const MediaController_NextTrack_Params_Data*>(data);

  return true;
}

MediaController_NextTrack_Params_Data::MediaController_NextTrack_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_PreviousTrack_Params_Data::Validate(
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
  [[maybe_unused]] const MediaController_PreviousTrack_Params_Data* object =
      static_cast<const MediaController_PreviousTrack_Params_Data*>(data);

  return true;
}

MediaController_PreviousTrack_Params_Data::MediaController_PreviousTrack_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media_router