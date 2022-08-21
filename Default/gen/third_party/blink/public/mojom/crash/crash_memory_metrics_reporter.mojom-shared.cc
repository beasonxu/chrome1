// third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool CrashMemoryMetricsReporter_SetSharedMemory_Params_Data::Validate(
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
  [[maybe_unused]] const CrashMemoryMetricsReporter_SetSharedMemory_Params_Data* object =
      static_cast<const CrashMemoryMetricsReporter_SetSharedMemory_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->shared_metrics_buffer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->shared_metrics_buffer, validation_context))
    return false;

  return true;
}

CrashMemoryMetricsReporter_SetSharedMemory_Params_Data::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink