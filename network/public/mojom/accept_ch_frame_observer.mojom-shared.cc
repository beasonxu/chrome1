// services/network/public/mojom/accept_ch_frame_observer.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/accept_ch_frame_observer.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/accept_ch_frame_observer.mojom-params-data.h"
namespace network {
namespace mojom {

namespace internal {


// static
bool AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params_Data::Validate(
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
  [[maybe_unused]] const AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params_Data* object =
      static_cast<const AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->accept_ch_frame, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accept_ch_frame_validate_params(
      0, ::network::mojom::internal::WebClientHintsType_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->accept_ch_frame, validation_context,
                                         &accept_ch_frame_validate_params)) {
    return false;
  }

  return true;
}

AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params_Data::AcceptCHFrameObserver_OnAcceptCHFrameReceived_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams_Data* object =
      static_cast<const AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams_Data*>(data);

  return true;
}

AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams_Data::AcceptCHFrameObserver_OnAcceptCHFrameReceived_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AcceptCHFrameObserver_Clone_Params_Data::Validate(
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
  [[maybe_unused]] const AcceptCHFrameObserver_Clone_Params_Data* object =
      static_cast<const AcceptCHFrameObserver_Clone_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->listener, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->listener,
                                                 validation_context)) {
    return false;
  }

  return true;
}

AcceptCHFrameObserver_Clone_Params_Data::AcceptCHFrameObserver_Clone_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network