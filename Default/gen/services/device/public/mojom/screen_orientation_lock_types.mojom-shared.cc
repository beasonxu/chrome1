// services/device/public/mojom/screen_orientation_lock_types.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/device/public/mojom/screen_orientation_lock_types.mojom-params-data.h"
namespace device {
namespace mojom {

static NOINLINE const char* ScreenOrientationLockResultToStringHelper(ScreenOrientationLockResult value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_SUCCESS:
      return "SCREEN_ORIENTATION_LOCK_RESULT_SUCCESS";
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_NOT_AVAILABLE:
      return "SCREEN_ORIENTATION_LOCK_RESULT_ERROR_NOT_AVAILABLE";
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_FULLSCREEN_REQUIRED:
      return "SCREEN_ORIENTATION_LOCK_RESULT_ERROR_FULLSCREEN_REQUIRED";
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_CANCELED:
      return "SCREEN_ORIENTATION_LOCK_RESULT_ERROR_CANCELED";
    default:
      return nullptr;
  }
}

std::string ScreenOrientationLockResultToString(ScreenOrientationLockResult value) {
  const char *str = ScreenOrientationLockResultToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ScreenOrientationLockResult value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ScreenOrientationLockResult value) {
  return os << ScreenOrientationLockResultToString(value);
}

static NOINLINE const char* ScreenOrientationLockTypeToStringHelper(ScreenOrientationLockType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ScreenOrientationLockType::DEFAULT:
      return "DEFAULT";
    case ScreenOrientationLockType::PORTRAIT_PRIMARY:
      return "PORTRAIT_PRIMARY";
    case ScreenOrientationLockType::PORTRAIT_SECONDARY:
      return "PORTRAIT_SECONDARY";
    case ScreenOrientationLockType::LANDSCAPE_PRIMARY:
      return "LANDSCAPE_PRIMARY";
    case ScreenOrientationLockType::LANDSCAPE_SECONDARY:
      return "LANDSCAPE_SECONDARY";
    case ScreenOrientationLockType::ANY:
      return "ANY";
    case ScreenOrientationLockType::LANDSCAPE:
      return "LANDSCAPE";
    case ScreenOrientationLockType::PORTRAIT:
      return "PORTRAIT";
    case ScreenOrientationLockType::NATURAL:
      return "NATURAL";
    default:
      return nullptr;
  }
}

std::string ScreenOrientationLockTypeToString(ScreenOrientationLockType value) {
  const char *str = ScreenOrientationLockTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ScreenOrientationLockType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ScreenOrientationLockType value) {
  return os << ScreenOrientationLockTypeToString(value);
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace device

namespace perfetto {

// static
void TraceFormatTraits<::device::mojom::ScreenOrientationLockResult>::WriteIntoTrace(
   perfetto::TracedValue context, ::device::mojom::ScreenOrientationLockResult value) {
  return std::move(context).WriteString(::device::mojom::ScreenOrientationLockResultToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::device::mojom::ScreenOrientationLockType>::WriteIntoTrace(
   perfetto::TracedValue context, ::device::mojom::ScreenOrientationLockType value) {
  return std::move(context).WriteString(::device::mojom::ScreenOrientationLockTypeToString(value));
}

} // namespace perfetto