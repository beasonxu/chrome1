// third_party/blink/public/mojom/mediastream/media_devices.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* MediaDeviceTypeToStringHelper(MediaDeviceType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case MediaDeviceType::MEDIA_AUDIO_INPUT:
      return "MEDIA_AUDIO_INPUT";
    case MediaDeviceType::MEDIA_VIDEO_INPUT:
      return "MEDIA_VIDEO_INPUT";
    case MediaDeviceType::MEDIA_AUDIO_OUTPUT:
      return "MEDIA_AUDIO_OUTPUT";
    case MediaDeviceType::NUM_MEDIA_DEVICE_TYPES:
      return "NUM_MEDIA_DEVICE_TYPES";
    default:
      return nullptr;
  }
}

std::string MediaDeviceTypeToString(MediaDeviceType value) {
  const char *str = MediaDeviceTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown MediaDeviceType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, MediaDeviceType value) {
  return os << MediaDeviceTypeToString(value);
}

static NOINLINE const char* FacingModeToStringHelper(FacingMode value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case FacingMode::NONE:
      return "NONE";
    case FacingMode::USER:
      return "USER";
    case FacingMode::ENVIRONMENT:
      return "ENVIRONMENT";
    case FacingMode::LEFT:
      return "LEFT";
    case FacingMode::RIGHT:
      return "RIGHT";
    default:
      return nullptr;
  }
}

std::string FacingModeToString(FacingMode value) {
  const char *str = FacingModeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown FacingMode value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, FacingMode value) {
  return os << FacingModeToString(value);
}

namespace internal {


// static
bool MediaDeviceInfo_Data::Validate(
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
  [[maybe_unused]] const MediaDeviceInfo_Data* object =
      static_cast<const MediaDeviceInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->label, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  return true;
}

MediaDeviceInfo_Data::MediaDeviceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoInputDeviceCapabilities_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 48, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VideoInputDeviceCapabilities_Data* object =
      static_cast<const VideoInputDeviceCapabilities_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->control_support, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->control_support, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->formats, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->formats, validation_context,
                                         &formats_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::FacingMode_Data
        ::Validate(object->facing_mode, validation_context))
    return false;

  return true;
}

VideoInputDeviceCapabilities_Data::VideoInputDeviceCapabilities_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioInputDeviceCapabilities_Data::Validate(
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
  [[maybe_unused]] const AudioInputDeviceCapabilities_Data* object =
      static_cast<const AudioInputDeviceCapabilities_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->parameters, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parameters, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->latency, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->latency, validation_context))
    return false;

  return true;
}

AudioInputDeviceCapabilities_Data::AudioInputDeviceCapabilities_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_EnumerateDevices_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_EnumerateDevices_Params_Data*>(data);

  return true;
}

MediaDevicesDispatcherHost_EnumerateDevices_Params_Data::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* object =
      static_cast<const MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->enumeration, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams enumeration_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->enumeration, validation_context,
                                         &enumeration_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_input_device_capabilities, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_input_device_capabilities, validation_context,
                                         &video_input_device_capabilities_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->audio_input_device_capabilities, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->audio_input_device_capabilities, validation_context,
                                         &audio_input_device_capabilities_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data*>(data);

  return true;
}

MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_input_device_capabilities, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_input_device_capabilities, validation_context,
                                         &video_input_device_capabilities_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->formats, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->formats, validation_context,
                                         &formats_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->formats, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->formats, validation_context,
                                         &formats_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data*>(data);

  return true;
}

MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* object =
      static_cast<const MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->audio_input_device_capabilities, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->audio_input_device_capabilities, validation_context,
                                         &audio_input_device_capabilities_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->listener, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->listener,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_SetCaptureHandleConfig_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesDispatcherHost_SetCaptureHandleConfig_Params_Data* object =
      static_cast<const MediaDevicesDispatcherHost_SetCaptureHandleConfig_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->config, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->config, validation_context))
    return false;

  return true;
}

MediaDevicesDispatcherHost_SetCaptureHandleConfig_Params_Data::MediaDevicesDispatcherHost_SetCaptureHandleConfig_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesListener_OnDevicesChanged_Params_Data::Validate(
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
  [[maybe_unused]] const MediaDevicesListener_OnDevicesChanged_Params_Data* object =
      static_cast<const MediaDevicesListener_OnDevicesChanged_Params_Data*>(data);


  if (!::blink::mojom::internal::MediaDeviceType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_infos, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_infos_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_infos, validation_context,
                                         &device_infos_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesListener_OnDevicesChanged_Params_Data::MediaDevicesListener_OnDevicesChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::MediaDeviceType>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::MediaDeviceType value) {
  return std::move(context).WriteString(::blink::mojom::MediaDeviceTypeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::FacingMode>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::FacingMode value) {
  return std::move(context).WriteString(::blink::mojom::FacingModeToString(value));
}

} // namespace perfetto