// ui/gfx/mojom/presentation_feedback.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/gfx/mojom/presentation_feedback.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "ui/gfx/mojom/presentation_feedback.mojom-params-data.h"
namespace gfx {
namespace mojom {

namespace internal {


// static
bool PresentationFeedback_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 64, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PresentationFeedback_Data* object =
      static_cast<const PresentationFeedback_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->interval, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->interval, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->available_timestamp, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->available_timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ready_timestamp, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ready_timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->latch_timestamp, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->latch_timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->writes_done_timestamp, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->writes_done_timestamp, validation_context))
    return false;

  return true;
}

PresentationFeedback_Data::PresentationFeedback_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gfx