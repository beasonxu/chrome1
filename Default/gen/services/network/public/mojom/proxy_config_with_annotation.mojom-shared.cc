// services/network/public/mojom/proxy_config_with_annotation.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/proxy_config_with_annotation.mojom-params-data.h"
namespace network {
namespace mojom {

namespace internal {


// static
bool ProxyConfigWithAnnotation_Data::Validate(
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
  [[maybe_unused]] const ProxyConfigWithAnnotation_Data* object =
      static_cast<const ProxyConfigWithAnnotation_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->traffic_annotation, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->traffic_annotation, validation_context))
    return false;

  return true;
}

ProxyConfigWithAnnotation_Data::ProxyConfigWithAnnotation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyConfigClient_OnProxyConfigUpdated_Params_Data::Validate(
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
  [[maybe_unused]] const ProxyConfigClient_OnProxyConfigUpdated_Params_Data* object =
      static_cast<const ProxyConfigClient_OnProxyConfigUpdated_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxy_config, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxy_config, validation_context))
    return false;

  return true;
}

ProxyConfigClient_OnProxyConfigUpdated_Params_Data::ProxyConfigClient_OnProxyConfigUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyConfigClient_FlushProxyConfig_Params_Data::Validate(
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
  [[maybe_unused]] const ProxyConfigClient_FlushProxyConfig_Params_Data* object =
      static_cast<const ProxyConfigClient_FlushProxyConfig_Params_Data*>(data);

  return true;
}

ProxyConfigClient_FlushProxyConfig_Params_Data::ProxyConfigClient_FlushProxyConfig_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyConfigClient_FlushProxyConfig_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ProxyConfigClient_FlushProxyConfig_ResponseParams_Data* object =
      static_cast<const ProxyConfigClient_FlushProxyConfig_ResponseParams_Data*>(data);

  return true;
}

ProxyConfigClient_FlushProxyConfig_ResponseParams_Data::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data::Validate(
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
  [[maybe_unused]] const ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* object =
      static_cast<const ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data*>(data);

  return true;
}

ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyErrorClient_OnPACScriptError_Params_Data::Validate(
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
  [[maybe_unused]] const ProxyErrorClient_OnPACScriptError_Params_Data* object =
      static_cast<const ProxyErrorClient_OnPACScriptError_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->details, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams details_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->details, validation_context,
                                         &details_validate_params)) {
    return false;
  }

  return true;
}

ProxyErrorClient_OnPACScriptError_Params_Data::ProxyErrorClient_OnPACScriptError_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data::Validate(
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
  [[maybe_unused]] const ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data* object =
      static_cast<const ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data*>(data);

  return true;
}

ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network