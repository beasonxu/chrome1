// media/mojo/mojom/gpu_accelerated_video_decoder.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/mojo/mojom/gpu_accelerated_video_decoder.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "media/mojo/mojom/gpu_accelerated_video_decoder.mojom-params-data.h"
namespace media {
namespace mojom {

namespace internal {


// static
bool PictureBufferAssignment_Data::Validate(
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
  [[maybe_unused]] const PictureBufferAssignment_Data* object =
      static_cast<const PictureBufferAssignment_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->texture_ids, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams texture_ids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->texture_ids, validation_context,
                                         &texture_ids_validate_params)) {
    return false;
  }

  return true;
}

PictureBufferAssignment_Data::PictureBufferAssignment_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PictureReadyParams_Data::Validate(
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
  [[maybe_unused]] const PictureReadyParams_Data* object =
      static_cast<const PictureReadyParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_rect, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_space, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  return true;
}

PictureReadyParams_Data::PictureReadyParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->config, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->config, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_Params_Data::GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_ResponseParams_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_ResponseParams_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_ResponseParams_Data::GpuAcceleratedVideoDecoderProvider_CreateAcceleratedVideoDecoder_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_Decode_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_Decode_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_Decode_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->buffer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->buffer, validation_context))
    return false;

  return true;
}

GpuAcceleratedVideoDecoder_Decode_Params_Data::GpuAcceleratedVideoDecoder_Decode_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_AssignPictureBuffers_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_AssignPictureBuffers_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_AssignPictureBuffers_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->assignments, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams assignments_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->assignments, validation_context,
                                         &assignments_validate_params)) {
    return false;
  }

  return true;
}

GpuAcceleratedVideoDecoder_AssignPictureBuffers_Params_Data::GpuAcceleratedVideoDecoder_AssignPictureBuffers_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_ReusePictureBuffer_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_ReusePictureBuffer_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_ReusePictureBuffer_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoder_ReusePictureBuffer_Params_Data::GpuAcceleratedVideoDecoder_ReusePictureBuffer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_Flush_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_Flush_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_Flush_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoder_Flush_Params_Data::GpuAcceleratedVideoDecoder_Flush_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_Flush_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_Flush_ResponseParams_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_Flush_ResponseParams_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoder_Flush_ResponseParams_Data::GpuAcceleratedVideoDecoder_Flush_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_Reset_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_Reset_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_Reset_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoder_Reset_Params_Data::GpuAcceleratedVideoDecoder_Reset_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_Reset_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_Reset_ResponseParams_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_Reset_ResponseParams_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoder_Reset_ResponseParams_Data::GpuAcceleratedVideoDecoder_Reset_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoder_SetOverlayInfo_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoder_SetOverlayInfo_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoder_SetOverlayInfo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->overlay_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->overlay_info, validation_context))
    return false;

  return true;
}

GpuAcceleratedVideoDecoder_SetOverlayInfo_Params_Data::GpuAcceleratedVideoDecoder_SetOverlayInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderClient_OnInitializationComplete_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderClient_OnInitializationComplete_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderClient_OnInitializationComplete_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoderClient_OnInitializationComplete_Params_Data::GpuAcceleratedVideoDecoderClient_OnInitializationComplete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderClient_OnBitstreamBufferProcessed_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderClient_OnBitstreamBufferProcessed_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderClient_OnBitstreamBufferProcessed_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoderClient_OnBitstreamBufferProcessed_Params_Data::GpuAcceleratedVideoDecoderClient_OnBitstreamBufferProcessed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderClient_OnProvidePictureBuffers_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderClient_OnProvidePictureBuffers_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderClient_OnProvidePictureBuffers_Params_Data*>(data);


  if (!::media::mojom::internal::VideoPixelFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->buffer_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->buffer_size, validation_context))
    return false;

  return true;
}

GpuAcceleratedVideoDecoderClient_OnProvidePictureBuffers_Params_Data::GpuAcceleratedVideoDecoderClient_OnProvidePictureBuffers_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderClient_OnPictureReady_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderClient_OnPictureReady_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderClient_OnPictureReady_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

GpuAcceleratedVideoDecoderClient_OnPictureReady_Params_Data::GpuAcceleratedVideoDecoderClient_OnPictureReady_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderClient_OnDismissPictureBuffer_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderClient_OnDismissPictureBuffer_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderClient_OnDismissPictureBuffer_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoderClient_OnDismissPictureBuffer_Params_Data::GpuAcceleratedVideoDecoderClient_OnDismissPictureBuffer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuAcceleratedVideoDecoderClient_OnError_Params_Data::Validate(
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
  [[maybe_unused]] const GpuAcceleratedVideoDecoderClient_OnError_Params_Data* object =
      static_cast<const GpuAcceleratedVideoDecoderClient_OnError_Params_Data*>(data);

  return true;
}

GpuAcceleratedVideoDecoderClient_OnError_Params_Data::GpuAcceleratedVideoDecoderClient_OnError_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media