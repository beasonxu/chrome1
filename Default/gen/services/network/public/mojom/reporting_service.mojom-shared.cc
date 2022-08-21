// services/network/public/mojom/reporting_service.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/reporting_service.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/reporting_service.mojom-params-data.h"
namespace network {
namespace mojom {

static NOINLINE const char* ReportingApiReportStatusToStringHelper(ReportingApiReportStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ReportingApiReportStatus::kQueued:
      return "kQueued";
    case ReportingApiReportStatus::kPending:
      return "kPending";
    case ReportingApiReportStatus::kDoomed:
      return "kDoomed";
    case ReportingApiReportStatus::kSuccess:
      return "kSuccess";
    default:
      return nullptr;
  }
}

std::string ReportingApiReportStatusToString(ReportingApiReportStatus value) {
  const char *str = ReportingApiReportStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ReportingApiReportStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ReportingApiReportStatus value) {
  return os << ReportingApiReportStatusToString(value);
}

namespace internal {


// static
bool ReportingApiReport_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 72, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const ReportingApiReport_Data* object =
      static_cast<const ReportingApiReport_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group, validation_context,
                                         &group_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->type, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->type, validation_context,
                                         &type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->body, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->body, validation_context))
    return false;


  if (!::network::mojom::internal::ReportingApiReportStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

ReportingApiReport_Data::ReportingApiReport_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingApiEndpoint_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 72, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const ReportingApiEndpoint_Data* object =
      static_cast<const ReportingApiEndpoint_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_name, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_name, validation_context,
                                         &group_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->network_isolation_key, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->network_isolation_key, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->reporting_source, validation_context))
    return false;

  return true;
}

ReportingApiEndpoint_Data::ReportingApiEndpoint_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingApiObserver_OnReportAdded_Params_Data::Validate(
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
  [[maybe_unused]] const ReportingApiObserver_OnReportAdded_Params_Data* object =
      static_cast<const ReportingApiObserver_OnReportAdded_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->report, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->report, validation_context))
    return false;

  return true;
}

ReportingApiObserver_OnReportAdded_Params_Data::ReportingApiObserver_OnReportAdded_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingApiObserver_OnReportUpdated_Params_Data::Validate(
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
  [[maybe_unused]] const ReportingApiObserver_OnReportUpdated_Params_Data* object =
      static_cast<const ReportingApiObserver_OnReportUpdated_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->report, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->report, validation_context))
    return false;

  return true;
}

ReportingApiObserver_OnReportUpdated_Params_Data::ReportingApiObserver_OnReportUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params_Data::Validate(
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
  [[maybe_unused]] const ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params_Data* object =
      static_cast<const ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->endpoints, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams endpoints_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->endpoints, validation_context,
                                         &endpoints_validate_params)) {
    return false;
  }

  return true;
}

ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params_Data::ReportingApiObserver_OnEndpointsUpdatedForOrigin_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::ReportingApiReportStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::ReportingApiReportStatus value) {
  return std::move(context).WriteString(::network::mojom::ReportingApiReportStatusToString(value));
}

} // namespace perfetto