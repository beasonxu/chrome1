// components/content_capture/common/content_capture.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/content_capture/common/content_capture.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/content_capture/common/content_capture.mojom-params-data.h"
namespace content_capture {
namespace mojom {

namespace internal {


// static
bool ContentCaptureReceiver_DidCaptureContent_Params_Data::Validate(
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
  [[maybe_unused]] const ContentCaptureReceiver_DidCaptureContent_Params_Data* object =
      static_cast<const ContentCaptureReceiver_DidCaptureContent_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  return true;
}

ContentCaptureReceiver_DidCaptureContent_Params_Data::ContentCaptureReceiver_DidCaptureContent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentCaptureReceiver_DidUpdateContent_Params_Data::Validate(
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
  [[maybe_unused]] const ContentCaptureReceiver_DidUpdateContent_Params_Data* object =
      static_cast<const ContentCaptureReceiver_DidUpdateContent_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  return true;
}

ContentCaptureReceiver_DidUpdateContent_Params_Data::ContentCaptureReceiver_DidUpdateContent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentCaptureReceiver_DidRemoveContent_Params_Data::Validate(
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
  [[maybe_unused]] const ContentCaptureReceiver_DidRemoveContent_Params_Data* object =
      static_cast<const ContentCaptureReceiver_DidRemoveContent_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ids, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams ids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->ids, validation_context,
                                         &ids_validate_params)) {
    return false;
  }

  return true;
}

ContentCaptureReceiver_DidRemoveContent_Params_Data::ContentCaptureReceiver_DidRemoveContent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentCaptureSender_StartCapture_Params_Data::Validate(
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
  [[maybe_unused]] const ContentCaptureSender_StartCapture_Params_Data* object =
      static_cast<const ContentCaptureSender_StartCapture_Params_Data*>(data);

  return true;
}

ContentCaptureSender_StartCapture_Params_Data::ContentCaptureSender_StartCapture_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentCaptureSender_StopCapture_Params_Data::Validate(
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
  [[maybe_unused]] const ContentCaptureSender_StopCapture_Params_Data* object =
      static_cast<const ContentCaptureSender_StopCapture_Params_Data*>(data);

  return true;
}

ContentCaptureSender_StopCapture_Params_Data::ContentCaptureSender_StopCapture_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content_capture