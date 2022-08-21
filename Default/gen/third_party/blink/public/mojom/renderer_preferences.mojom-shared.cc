// third_party/blink/public/mojom/renderer_preferences.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/renderer_preferences.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool RendererPreferences_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 96, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const RendererPreferences_Data* object =
      static_cast<const RendererPreferences_Data*>(data);


  if (!::gfx::mojom::internal::Hinting_Data
        ::Validate(object->hinting, validation_context))
    return false;


  if (!::gfx::mojom::internal::SubpixelRendering_Data
        ::Validate(object->subpixel_rendering, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->caret_blink_interval, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->webrtc_ip_handling_policy, 20, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams webrtc_ip_handling_policy_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->webrtc_ip_handling_policy, validation_context,
                                         &webrtc_ip_handling_policy_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->webrtc_local_ips_allowed_urls, 23, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams webrtc_local_ips_allowed_urls_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->webrtc_local_ips_allowed_urls, validation_context,
                                         &webrtc_local_ips_allowed_urls_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->user_agent_override, 25, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->user_agent_override, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->accept_languages, 26, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accept_languages_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->accept_languages, validation_context,
                                         &accept_languages_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->explicitly_allowed_network_ports, 29, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams explicitly_allowed_network_ports_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->explicitly_allowed_network_ports, validation_context,
                                         &explicitly_allowed_network_ports_validate_params)) {
    return false;
  }

  return true;
}

RendererPreferences_Data::RendererPreferences_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink