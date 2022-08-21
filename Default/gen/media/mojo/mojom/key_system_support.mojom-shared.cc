// media/mojo/mojom/key_system_support.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/mojo/mojom/key_system_support.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "media/mojo/mojom/key_system_support.mojom-params-data.h"
namespace media {
namespace mojom {

namespace internal {


// static
bool VideoCodecInfo_Data::Validate(
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
  [[maybe_unused]] const VideoCodecInfo_Data* object =
      static_cast<const VideoCodecInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_profiles, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_profiles_validate_params(
      0, ::media::mojom::internal::VideoCodecProfile_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_profiles, validation_context,
                                         &supported_profiles_validate_params)) {
    return false;
  }

  return true;
}

VideoCodecInfo_Data::VideoCodecInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CdmCapability_Data::Validate(
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
  [[maybe_unused]] const CdmCapability_Data* object =
      static_cast<const CdmCapability_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->audio_codecs, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_codecs_validate_params(
      0, ::media::mojom::internal::AudioCodec_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->audio_codecs, validation_context,
                                         &audio_codecs_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_codecs, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_codecs_validate_params(
      new mojo::internal::ContainerValidateParams(0, ::media::mojom::internal::VideoCodec_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->video_codecs, validation_context,
                                         &video_codecs_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->encryption_schemes, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams encryption_schemes_validate_params(
      0, ::media::mojom::internal::EncryptionScheme_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->encryption_schemes, validation_context,
                                         &encryption_schemes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_types, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_types_validate_params(
      0, ::media::mojom::internal::CdmSessionType_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->session_types, validation_context,
                                         &session_types_validate_params)) {
    return false;
  }

  return true;
}

CdmCapability_Data::CdmCapability_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool KeySystemCapability_Data::Validate(
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
  [[maybe_unused]] const KeySystemCapability_Data* object =
      static_cast<const KeySystemCapability_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->sw_secure_capability, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->hw_secure_capability, validation_context))
    return false;

  return true;
}

KeySystemCapability_Data::KeySystemCapability_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool KeySystemSupportObserver_OnKeySystemSupportUpdated_Params_Data::Validate(
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
  [[maybe_unused]] const KeySystemSupportObserver_OnKeySystemSupportUpdated_Params_Data* object =
      static_cast<const KeySystemSupportObserver_OnKeySystemSupportUpdated_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_systems, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_systems_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->key_systems, validation_context,
                                         &key_systems_validate_params)) {
    return false;
  }

  return true;
}

KeySystemSupportObserver_OnKeySystemSupportUpdated_Params_Data::KeySystemSupportObserver_OnKeySystemSupportUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool KeySystemSupport_AddObserver_Params_Data::Validate(
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
  [[maybe_unused]] const KeySystemSupport_AddObserver_Params_Data* object =
      static_cast<const KeySystemSupport_AddObserver_Params_Data*>(data);

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

KeySystemSupport_AddObserver_Params_Data::KeySystemSupport_AddObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media