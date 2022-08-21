// components/cast_streaming/public/mojom/demuxer_connector.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/cast_streaming/public/mojom/demuxer_connector.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/cast_streaming/public/mojom/demuxer_connector.mojom-params-data.h"
namespace cast_streaming {
namespace mojom {

namespace internal {
// static
bool GetAudioBufferResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const GetAudioBufferResponse_Data* object = static_cast<const GetAudioBufferResponse_Data*>(data);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case GetAudioBufferResponse_Tag::kStreamInfo: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_stream_info, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_stream_info, validation_context))
        return false;
      return true;
    }
    case GetAudioBufferResponse_Tag::kBuffer: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_buffer, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_buffer, validation_context))
        return false;
      return true;
    }
    default: {

      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in GetAudioBufferResponse");
      return false;
    }
  }
}
// static
bool GetVideoBufferResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const GetVideoBufferResponse_Data* object = static_cast<const GetVideoBufferResponse_Data*>(data);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case GetVideoBufferResponse_Tag::kStreamInfo: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_stream_info, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_stream_info, validation_context))
        return false;
      return true;
    }
    case GetVideoBufferResponse_Tag::kBuffer: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_buffer, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_buffer, validation_context))
        return false;
      return true;
    }
    default: {

      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in GetVideoBufferResponse");
      return false;
    }
  }
}


// static
bool AudioStreamInfo_Data::Validate(
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
  [[maybe_unused]] const AudioStreamInfo_Data* object =
      static_cast<const AudioStreamInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->decoder_config, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->decoder_config, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->data_pipe, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->data_pipe,
                                                 validation_context)) {
    return false;
  }

  return true;
}

AudioStreamInfo_Data::AudioStreamInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoStreamInfo_Data::Validate(
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
  [[maybe_unused]] const VideoStreamInfo_Data* object =
      static_cast<const VideoStreamInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->decoder_config, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->decoder_config, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->data_pipe, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->data_pipe,
                                                 validation_context)) {
    return false;
  }

  return true;
}

VideoStreamInfo_Data::VideoStreamInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioStreamInitializationInfo_Data::Validate(
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
  [[maybe_unused]] const AudioStreamInitializationInfo_Data* object =
      static_cast<const AudioStreamInitializationInfo_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->buffer_requester, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->buffer_requester,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stream_initialization_info, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->stream_initialization_info, validation_context))
    return false;

  return true;
}

AudioStreamInitializationInfo_Data::AudioStreamInitializationInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoStreamInitializationInfo_Data::Validate(
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
  [[maybe_unused]] const VideoStreamInitializationInfo_Data* object =
      static_cast<const VideoStreamInitializationInfo_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->buffer_requester, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->buffer_requester,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stream_initialization_info, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->stream_initialization_info, validation_context))
    return false;

  return true;
}

VideoStreamInitializationInfo_Data::VideoStreamInitializationInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioBufferRequester_GetBuffer_Params_Data::Validate(
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
  [[maybe_unused]] const AudioBufferRequester_GetBuffer_Params_Data* object =
      static_cast<const AudioBufferRequester_GetBuffer_Params_Data*>(data);

  return true;
}

AudioBufferRequester_GetBuffer_Params_Data::AudioBufferRequester_GetBuffer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioBufferRequester_GetBuffer_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const AudioBufferRequester_GetBuffer_ResponseParams_Data* object =
      static_cast<const AudioBufferRequester_GetBuffer_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->buffer_response, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->buffer_response, validation_context))
    return false;

  return true;
}

AudioBufferRequester_GetBuffer_ResponseParams_Data::AudioBufferRequester_GetBuffer_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioBufferRequester_EnableBitstreamConverter_Params_Data::Validate(
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
  [[maybe_unused]] const AudioBufferRequester_EnableBitstreamConverter_Params_Data* object =
      static_cast<const AudioBufferRequester_EnableBitstreamConverter_Params_Data*>(data);

  return true;
}

AudioBufferRequester_EnableBitstreamConverter_Params_Data::AudioBufferRequester_EnableBitstreamConverter_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioBufferRequester_EnableBitstreamConverter_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const AudioBufferRequester_EnableBitstreamConverter_ResponseParams_Data* object =
      static_cast<const AudioBufferRequester_EnableBitstreamConverter_ResponseParams_Data*>(data);

  return true;
}

AudioBufferRequester_EnableBitstreamConverter_ResponseParams_Data::AudioBufferRequester_EnableBitstreamConverter_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoBufferRequester_GetBuffer_Params_Data::Validate(
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
  [[maybe_unused]] const VideoBufferRequester_GetBuffer_Params_Data* object =
      static_cast<const VideoBufferRequester_GetBuffer_Params_Data*>(data);

  return true;
}

VideoBufferRequester_GetBuffer_Params_Data::VideoBufferRequester_GetBuffer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoBufferRequester_GetBuffer_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VideoBufferRequester_GetBuffer_ResponseParams_Data* object =
      static_cast<const VideoBufferRequester_GetBuffer_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->buffer_response, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->buffer_response, validation_context))
    return false;

  return true;
}

VideoBufferRequester_GetBuffer_ResponseParams_Data::VideoBufferRequester_GetBuffer_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoBufferRequester_EnableBitstreamConverter_Params_Data::Validate(
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
  [[maybe_unused]] const VideoBufferRequester_EnableBitstreamConverter_Params_Data* object =
      static_cast<const VideoBufferRequester_EnableBitstreamConverter_Params_Data*>(data);

  return true;
}

VideoBufferRequester_EnableBitstreamConverter_Params_Data::VideoBufferRequester_EnableBitstreamConverter_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoBufferRequester_EnableBitstreamConverter_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VideoBufferRequester_EnableBitstreamConverter_ResponseParams_Data* object =
      static_cast<const VideoBufferRequester_EnableBitstreamConverter_ResponseParams_Data*>(data);

  return true;
}

VideoBufferRequester_EnableBitstreamConverter_ResponseParams_Data::VideoBufferRequester_EnableBitstreamConverter_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DemuxerConnector_EnableReceiver_Params_Data::Validate(
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
  [[maybe_unused]] const DemuxerConnector_EnableReceiver_Params_Data* object =
      static_cast<const DemuxerConnector_EnableReceiver_Params_Data*>(data);

  return true;
}

DemuxerConnector_EnableReceiver_Params_Data::DemuxerConnector_EnableReceiver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DemuxerConnector_EnableReceiver_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const DemuxerConnector_EnableReceiver_ResponseParams_Data* object =
      static_cast<const DemuxerConnector_EnableReceiver_ResponseParams_Data*>(data);

  return true;
}

DemuxerConnector_EnableReceiver_ResponseParams_Data::DemuxerConnector_EnableReceiver_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DemuxerConnector_OnStreamsInitialized_Params_Data::Validate(
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
  [[maybe_unused]] const DemuxerConnector_OnStreamsInitialized_Params_Data* object =
      static_cast<const DemuxerConnector_OnStreamsInitialized_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->audio_buffer_requester, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->video_buffer_requester, validation_context))
    return false;

  return true;
}

DemuxerConnector_OnStreamsInitialized_Params_Data::DemuxerConnector_OnStreamsInitialized_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace cast_streaming