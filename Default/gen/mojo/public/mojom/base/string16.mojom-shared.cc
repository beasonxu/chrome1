// mojo/public/mojom/base/string16.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "mojo/public/mojom/base/string16.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "mojo/public/mojom/base/string16.mojom-params-data.h"
namespace mojo_base {
namespace mojom {

namespace internal {


// static
bool String16_Data::Validate(
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
  [[maybe_unused]] const String16_Data* object =
      static_cast<const String16_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

String16_Data::String16_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BigString16_Data::Validate(
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
  [[maybe_unused]] const BigString16_Data* object =
      static_cast<const BigString16_Data*>(data);

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  return true;
}

BigString16_Data::BigString16_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base