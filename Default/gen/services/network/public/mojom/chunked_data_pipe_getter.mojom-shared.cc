// services/network/public/mojom/chunked_data_pipe_getter.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-params-data.h"
namespace network {
namespace mojom {

namespace internal {


// static
bool ChunkedDataPipeGetter_GetSize_Params_Data::Validate(
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
  [[maybe_unused]] const ChunkedDataPipeGetter_GetSize_Params_Data* object =
      static_cast<const ChunkedDataPipeGetter_GetSize_Params_Data*>(data);

  return true;
}

ChunkedDataPipeGetter_GetSize_Params_Data::ChunkedDataPipeGetter_GetSize_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ChunkedDataPipeGetter_GetSize_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ChunkedDataPipeGetter_GetSize_ResponseParams_Data* object =
      static_cast<const ChunkedDataPipeGetter_GetSize_ResponseParams_Data*>(data);

  return true;
}

ChunkedDataPipeGetter_GetSize_ResponseParams_Data::ChunkedDataPipeGetter_GetSize_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ChunkedDataPipeGetter_StartReading_Params_Data::Validate(
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
  [[maybe_unused]] const ChunkedDataPipeGetter_StartReading_Params_Data* object =
      static_cast<const ChunkedDataPipeGetter_StartReading_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->pipe, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->pipe,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ChunkedDataPipeGetter_StartReading_Params_Data::ChunkedDataPipeGetter_StartReading_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network