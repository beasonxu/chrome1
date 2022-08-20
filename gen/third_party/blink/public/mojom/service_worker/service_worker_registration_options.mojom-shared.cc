// third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* ServiceWorkerUpdateViaCacheToStringHelper(ServiceWorkerUpdateViaCache value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ServiceWorkerUpdateViaCache::kImports:
      return "kImports";
    case ServiceWorkerUpdateViaCache::kAll:
      return "kAll";
    case ServiceWorkerUpdateViaCache::kNone:
      return "kNone";
    default:
      return nullptr;
  }
}

std::string ServiceWorkerUpdateViaCacheToString(ServiceWorkerUpdateViaCache value) {
  const char *str = ServiceWorkerUpdateViaCacheToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ServiceWorkerUpdateViaCache value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ServiceWorkerUpdateViaCache value) {
  return os << ServiceWorkerUpdateViaCacheToString(value);
}

namespace internal {


// static
bool ServiceWorkerRegistrationOptions_Data::Validate(
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
  [[maybe_unused]] const ServiceWorkerRegistrationOptions_Data* object =
      static_cast<const ServiceWorkerRegistrationOptions_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->scope, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scope, validation_context))
    return false;


  if (!::blink::mojom::internal::ScriptType_Data
        ::Validate(object->type, validation_context))
    return false;


  if (!::blink::mojom::internal::ServiceWorkerUpdateViaCache_Data
        ::Validate(object->update_via_cache, validation_context))
    return false;

  return true;
}

ServiceWorkerRegistrationOptions_Data::ServiceWorkerRegistrationOptions_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::ServiceWorkerUpdateViaCache>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::ServiceWorkerUpdateViaCache value) {
  return std::move(context).WriteString(::blink::mojom::ServiceWorkerUpdateViaCacheToString(value));
}

} // namespace perfetto