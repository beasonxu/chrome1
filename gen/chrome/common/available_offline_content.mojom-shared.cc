// chrome/common/available_offline_content.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/common/available_offline_content.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "chrome/common/available_offline_content.mojom-params-data.h"
namespace chrome {
namespace mojom {

static NOINLINE const char* AvailableContentTypeToStringHelper(AvailableContentType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case AvailableContentType::kPrefetchedPage:
      return "kPrefetchedPage";
    case AvailableContentType::kVideo:
      return "kVideo";
    case AvailableContentType::kAudio:
      return "kAudio";
    case AvailableContentType::kOtherPage:
      return "kOtherPage";
    case AvailableContentType::kUninteresting:
      return "kUninteresting";
    default:
      return nullptr;
  }
}

std::string AvailableContentTypeToString(AvailableContentType value) {
  const char *str = AvailableContentTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown AvailableContentType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, AvailableContentType value) {
  return os << AvailableContentTypeToString(value);
}

namespace internal {


// static
bool AvailableOfflineContent_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 80, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const AvailableOfflineContent_Data* object =
      static_cast<const AvailableOfflineContent_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name_space, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_space_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name_space, validation_context,
                                         &name_space_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->snippet, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams snippet_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->snippet, validation_context,
                                         &snippet_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->date_modified, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams date_modified_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->date_modified, validation_context,
                                         &date_modified_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->attribution, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams attribution_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->attribution, validation_context,
                                         &attribution_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->thumbnail_data_uri, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->thumbnail_data_uri, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->favicon_data_uri, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->favicon_data_uri, validation_context))
    return false;


  if (!::chrome::mojom::internal::AvailableContentType_Data
        ::Validate(object->content_type, validation_context))
    return false;

  return true;
}

AvailableOfflineContent_Data::AvailableOfflineContent_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AvailableOfflineContentProvider_List_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const AvailableOfflineContentProvider_List_Params_Data* object =
      static_cast<const AvailableOfflineContentProvider_List_Params_Data*>(data);

  return true;
}

AvailableOfflineContentProvider_List_Params_Data::AvailableOfflineContentProvider_List_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AvailableOfflineContentProvider_List_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const AvailableOfflineContentProvider_List_ResponseParams_Data* object =
      static_cast<const AvailableOfflineContentProvider_List_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->out, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams out_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->out, validation_context,
                                         &out_validate_params)) {
    return false;
  }

  return true;
}

AvailableOfflineContentProvider_List_ResponseParams_Data::AvailableOfflineContentProvider_List_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AvailableOfflineContentProvider_LaunchItem_Params_Data::Validate(
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
  [[maybe_unused]] const AvailableOfflineContentProvider_LaunchItem_Params_Data* object =
      static_cast<const AvailableOfflineContentProvider_LaunchItem_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->item_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams item_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->item_id, validation_context,
                                         &item_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name_space, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_space_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name_space, validation_context,
                                         &name_space_validate_params)) {
    return false;
  }

  return true;
}

AvailableOfflineContentProvider_LaunchItem_Params_Data::AvailableOfflineContentProvider_LaunchItem_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data::Validate(
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
  [[maybe_unused]] const AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data* object =
      static_cast<const AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data*>(data);

  return true;
}

AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data::AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data::Validate(
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
  [[maybe_unused]] const AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data* object =
      static_cast<const AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data*>(data);

  return true;
}

AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data::AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

namespace perfetto {

// static
void TraceFormatTraits<::chrome::mojom::AvailableContentType>::WriteIntoTrace(
   perfetto::TracedValue context, ::chrome::mojom::AvailableContentType value) {
  return std::move(context).WriteString(::chrome::mojom::AvailableContentTypeToString(value));
}

} // namespace perfetto