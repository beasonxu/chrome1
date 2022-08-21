// components/media_router/common/mojom/logger.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/media_router/common/mojom/logger.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/media_router/common/mojom/logger.mojom-params-data.h"
namespace media_router {
namespace mojom {

static NOINLINE const char* LogCategoryToStringHelper(LogCategory value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case LogCategory::kDiscovery:
      return "kDiscovery";
    case LogCategory::kRoute:
      return "kRoute";
    case LogCategory::kMirroring:
      return "kMirroring";
    case LogCategory::kUi:
      return "kUi";
    default:
      return nullptr;
  }
}

std::string LogCategoryToString(LogCategory value) {
  const char *str = LogCategoryToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown LogCategory value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, LogCategory value) {
  return os << LogCategoryToString(value);
}

namespace internal {


// static
bool Logger_LogInfo_Params_Data::Validate(
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
  [[maybe_unused]] const Logger_LogInfo_Params_Data* object =
      static_cast<const Logger_LogInfo_Params_Data*>(data);


  if (!::media_router::mojom::internal::LogCategory_Data
        ::Validate(object->category, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->component, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams component_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->component, validation_context,
                                         &component_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sink_id, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_id, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

Logger_LogInfo_Params_Data::Logger_LogInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Logger_LogWarning_Params_Data::Validate(
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
  [[maybe_unused]] const Logger_LogWarning_Params_Data* object =
      static_cast<const Logger_LogWarning_Params_Data*>(data);


  if (!::media_router::mojom::internal::LogCategory_Data
        ::Validate(object->category, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->component, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams component_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->component, validation_context,
                                         &component_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sink_id, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_id, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

Logger_LogWarning_Params_Data::Logger_LogWarning_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Logger_LogError_Params_Data::Validate(
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
  [[maybe_unused]] const Logger_LogError_Params_Data* object =
      static_cast<const Logger_LogError_Params_Data*>(data);


  if (!::media_router::mojom::internal::LogCategory_Data
        ::Validate(object->category, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->component, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams component_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->component, validation_context,
                                         &component_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sink_id, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_id, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

Logger_LogError_Params_Data::Logger_LogError_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Logger_BindReceiver_Params_Data::Validate(
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
  [[maybe_unused]] const Logger_BindReceiver_Params_Data* object =
      static_cast<const Logger_BindReceiver_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Logger_BindReceiver_Params_Data::Logger_BindReceiver_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

namespace perfetto {

// static
void TraceFormatTraits<::media_router::mojom::LogCategory>::WriteIntoTrace(
   perfetto::TracedValue context, ::media_router::mojom::LogCategory value) {
  return std::move(context).WriteString(::media_router::mojom::LogCategoryToString(value));
}

} // namespace perfetto