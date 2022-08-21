// third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool NavigationApiHistoryEntry_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 56, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const NavigationApiHistoryEntry_Data* object =
      static_cast<const NavigationApiHistoryEntry_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->state, validation_context))
    return false;

  return true;
}

NavigationApiHistoryEntry_Data::NavigationApiHistoryEntry_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NavigationApiHistoryEntryArrays_Data::Validate(
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
  [[maybe_unused]] const NavigationApiHistoryEntryArrays_Data* object =
      static_cast<const NavigationApiHistoryEntryArrays_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->back_entries, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams back_entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->back_entries, validation_context,
                                         &back_entries_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->forward_entries, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams forward_entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->forward_entries, validation_context,
                                         &forward_entries_validate_params)) {
    return false;
  }

  return true;
}

NavigationApiHistoryEntryArrays_Data::NavigationApiHistoryEntryArrays_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink