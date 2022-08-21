// services/audio/public/mojom/debug_recording.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/audio/public/mojom/debug_recording.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/audio/public/mojom/debug_recording.mojom-params-data.h"
namespace audio {
namespace mojom {

static NOINLINE const char* DebugRecordingStreamTypeToStringHelper(DebugRecordingStreamType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case DebugRecordingStreamType::kInput:
      return "kInput";
    case DebugRecordingStreamType::kOutput:
      return "kOutput";
    default:
      return nullptr;
  }
}

std::string DebugRecordingStreamTypeToString(DebugRecordingStreamType value) {
  const char *str = DebugRecordingStreamTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown DebugRecordingStreamType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, DebugRecordingStreamType value) {
  return os << DebugRecordingStreamTypeToString(value);
}

namespace internal {


// static
bool DebugRecordingFileProvider_CreateWavFile_Params_Data::Validate(
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
  [[maybe_unused]] const DebugRecordingFileProvider_CreateWavFile_Params_Data* object =
      static_cast<const DebugRecordingFileProvider_CreateWavFile_Params_Data*>(data);


  if (!::audio::mojom::internal::DebugRecordingStreamType_Data
        ::Validate(object->stream_type, validation_context))
    return false;

  return true;
}

DebugRecordingFileProvider_CreateWavFile_Params_Data::DebugRecordingFileProvider_CreateWavFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data* object =
      static_cast<const DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;

  return true;
}

DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DebugRecordingFileProvider_CreateAecdumpFile_Params_Data::Validate(
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
  [[maybe_unused]] const DebugRecordingFileProvider_CreateAecdumpFile_Params_Data* object =
      static_cast<const DebugRecordingFileProvider_CreateAecdumpFile_Params_Data*>(data);

  return true;
}

DebugRecordingFileProvider_CreateAecdumpFile_Params_Data::DebugRecordingFileProvider_CreateAecdumpFile_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DebugRecordingFileProvider_CreateAecdumpFile_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const DebugRecordingFileProvider_CreateAecdumpFile_ResponseParams_Data* object =
      static_cast<const DebugRecordingFileProvider_CreateAecdumpFile_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->file, validation_context))
    return false;

  return true;
}

DebugRecordingFileProvider_CreateAecdumpFile_ResponseParams_Data::DebugRecordingFileProvider_CreateAecdumpFile_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DebugRecording_Enable_Params_Data::Validate(
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
  [[maybe_unused]] const DebugRecording_Enable_Params_Data* object =
      static_cast<const DebugRecording_Enable_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->file_provider, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->file_provider,
                                                 validation_context)) {
    return false;
  }

  return true;
}

DebugRecording_Enable_Params_Data::DebugRecording_Enable_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace audio

namespace perfetto {

// static
void TraceFormatTraits<::audio::mojom::DebugRecordingStreamType>::WriteIntoTrace(
   perfetto::TracedValue context, ::audio::mojom::DebugRecordingStreamType value) {
  return std::move(context).WriteString(::audio::mojom::DebugRecordingStreamTypeToString(value));
}

} // namespace perfetto