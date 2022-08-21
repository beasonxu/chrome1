// media/mojo/mojom/video_decode_perf_history.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/mojo/mojom/video_decode_perf_history.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "media/mojo/mojom/video_decode_perf_history.mojom-params-data.h"
namespace media {
namespace mojom {

namespace internal {


// static
bool VideoDecodePerfHistory_GetPerfInfo_Params_Data::Validate(
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
  [[maybe_unused]] const VideoDecodePerfHistory_GetPerfInfo_Params_Data* object =
      static_cast<const VideoDecodePerfHistory_GetPerfInfo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->features, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->features, validation_context))
    return false;

  return true;
}

VideoDecodePerfHistory_GetPerfInfo_Params_Data::VideoDecodePerfHistory_GetPerfInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* object =
      static_cast<const VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data*>(data);

  return true;
}

VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media