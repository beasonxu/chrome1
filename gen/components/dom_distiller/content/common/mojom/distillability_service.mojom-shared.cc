// components/dom_distiller/content/common/mojom/distillability_service.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/dom_distiller/content/common/mojom/distillability_service.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/dom_distiller/content/common/mojom/distillability_service.mojom-params-data.h"
namespace dom_distiller {
namespace mojom {

namespace internal {


// static
bool DistillabilityService_NotifyIsDistillable_Params_Data::Validate(
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
  [[maybe_unused]] const DistillabilityService_NotifyIsDistillable_Params_Data* object =
      static_cast<const DistillabilityService_NotifyIsDistillable_Params_Data*>(data);

  return true;
}

DistillabilityService_NotifyIsDistillable_Params_Data::DistillabilityService_NotifyIsDistillable_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller