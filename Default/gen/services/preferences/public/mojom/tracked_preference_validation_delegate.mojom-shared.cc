// services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-params-data.h"
namespace prefs {
namespace mojom {

static NOINLINE const char* TrackedPreferenceValidationDelegate_ValueStateToStringHelper(TrackedPreferenceValidationDelegate_ValueState value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrackedPreferenceValidationDelegate_ValueState::UNCHANGED:
      return "UNCHANGED";
    case TrackedPreferenceValidationDelegate_ValueState::CLEARED:
      return "CLEARED";
    case TrackedPreferenceValidationDelegate_ValueState::SECURE_LEGACY:
      return "SECURE_LEGACY";
    case TrackedPreferenceValidationDelegate_ValueState::CHANGED:
      return "CHANGED";
    case TrackedPreferenceValidationDelegate_ValueState::UNTRUSTED_UNKNOWN_VALUE:
      return "UNTRUSTED_UNKNOWN_VALUE";
    case TrackedPreferenceValidationDelegate_ValueState::TRUSTED_UNKNOWN_VALUE:
      return "TRUSTED_UNKNOWN_VALUE";
    case TrackedPreferenceValidationDelegate_ValueState::TRUSTED_NULL_VALUE:
      return "TRUSTED_NULL_VALUE";
    case TrackedPreferenceValidationDelegate_ValueState::UNSUPPORTED:
      return "UNSUPPORTED";
    default:
      return nullptr;
  }
}

std::string TrackedPreferenceValidationDelegate_ValueStateToString(TrackedPreferenceValidationDelegate_ValueState value) {
  const char *str = TrackedPreferenceValidationDelegate_ValueStateToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrackedPreferenceValidationDelegate_ValueState value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrackedPreferenceValidationDelegate_ValueState value) {
  return os << TrackedPreferenceValidationDelegate_ValueStateToString(value);
}

namespace internal {


// static
bool TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 48, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* object =
      static_cast<const TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pref_path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pref_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pref_path, validation_context,
                                         &pref_path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnion(object->value, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->value_state, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->external_validation_value_state, validation_context))
    return false;

  return true;
}

TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 48, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* object =
      static_cast<const TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pref_path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pref_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pref_path, validation_context,
                                         &pref_path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->invalid_keys, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams invalid_keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->invalid_keys, validation_context,
                                         &invalid_keys_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->external_validation_invalid_keys, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams external_validation_invalid_keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->external_validation_invalid_keys, validation_context,
                                         &external_validation_invalid_keys_validate_params)) {
    return false;
  }


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->value_state, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->external_validation_value_state, validation_context))
    return false;

  return true;
}

TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

namespace perfetto {

// static
void TraceFormatTraits<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>::WriteIntoTrace(
   perfetto::TracedValue context, ::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState value) {
  return std::move(context).WriteString(::prefs::mojom::TrackedPreferenceValidationDelegate_ValueStateToString(value));
}

} // namespace perfetto