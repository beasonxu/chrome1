// third_party/blink/public/mojom/content_index/content_index.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/content_index/content_index.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/content_index/content_index.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* ContentIndexErrorToStringHelper(ContentIndexError value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ContentIndexError::NONE:
      return "NONE";
    case ContentIndexError::INVALID_PARAMETER:
      return "INVALID_PARAMETER";
    case ContentIndexError::STORAGE_ERROR:
      return "STORAGE_ERROR";
    case ContentIndexError::NO_SERVICE_WORKER:
      return "NO_SERVICE_WORKER";
    default:
      return nullptr;
  }
}

std::string ContentIndexErrorToString(ContentIndexError value) {
  const char *str = ContentIndexErrorToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ContentIndexError value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ContentIndexError value) {
  return os << ContentIndexErrorToString(value);
}

static NOINLINE const char* ContentCategoryToStringHelper(ContentCategory value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ContentCategory::NONE:
      return "NONE";
    case ContentCategory::HOME_PAGE:
      return "HOME_PAGE";
    case ContentCategory::ARTICLE:
      return "ARTICLE";
    case ContentCategory::VIDEO:
      return "VIDEO";
    case ContentCategory::AUDIO:
      return "AUDIO";
    default:
      return nullptr;
  }
}

std::string ContentCategoryToString(ContentCategory value) {
  const char *str = ContentCategoryToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ContentCategory value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ContentCategory value) {
  return os << ContentCategoryToString(value);
}

namespace internal {


// static
bool ContentIconDefinition_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 32, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const ContentIconDefinition_Data* object =
      static_cast<const ContentIconDefinition_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->src, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams src_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->src, validation_context,
                                         &src_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams sizes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sizes, validation_context,
                                         &sizes_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->type, validation_context,
                                         &type_validate_params)) {
    return false;
  }

  return true;
}

ContentIconDefinition_Data::ContentIconDefinition_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDescription_Data::Validate(
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
  [[maybe_unused]] const ContentDescription_Data* object =
      static_cast<const ContentDescription_Data*>(data);

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
          object->title, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->description, validation_context,
                                         &description_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::ContentCategory_Data
        ::Validate(object->category, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icons, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams icons_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->icons, validation_context,
                                         &icons_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->launch_url, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams launch_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->launch_url, validation_context,
                                         &launch_url_validate_params)) {
    return false;
  }

  return true;
}

ContentDescription_Data::ContentDescription_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_GetIconSizes_Params_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_GetIconSizes_Params_Data* object =
      static_cast<const ContentIndexService_GetIconSizes_Params_Data*>(data);


  if (!::blink::mojom::internal::ContentCategory_Data
        ::Validate(object->category, validation_context))
    return false;

  return true;
}

ContentIndexService_GetIconSizes_Params_Data::ContentIndexService_GetIconSizes_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_GetIconSizes_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_GetIconSizes_ResponseParams_Data* object =
      static_cast<const ContentIndexService_GetIconSizes_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon_sizes, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams icon_sizes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->icon_sizes, validation_context,
                                         &icon_sizes_validate_params)) {
    return false;
  }

  return true;
}

ContentIndexService_GetIconSizes_ResponseParams_Data::ContentIndexService_GetIconSizes_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_CheckOfflineCapability_Params_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_CheckOfflineCapability_Params_Data* object =
      static_cast<const ContentIndexService_CheckOfflineCapability_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->launch_url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->launch_url, validation_context))
    return false;

  return true;
}

ContentIndexService_CheckOfflineCapability_Params_Data::ContentIndexService_CheckOfflineCapability_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_CheckOfflineCapability_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_CheckOfflineCapability_ResponseParams_Data* object =
      static_cast<const ContentIndexService_CheckOfflineCapability_ResponseParams_Data*>(data);

  return true;
}

ContentIndexService_CheckOfflineCapability_ResponseParams_Data::ContentIndexService_CheckOfflineCapability_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_Add_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 40, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const ContentIndexService_Add_Params_Data* object =
      static_cast<const ContentIndexService_Add_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->description, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams icon_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->icon, validation_context,
                                         &icon_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->launchUrl, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->launchUrl, validation_context))
    return false;

  return true;
}

ContentIndexService_Add_Params_Data::ContentIndexService_Add_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_Add_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_Add_ResponseParams_Data* object =
      static_cast<const ContentIndexService_Add_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::ContentIndexError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

ContentIndexService_Add_ResponseParams_Data::ContentIndexService_Add_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_Delete_Params_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_Delete_Params_Data* object =
      static_cast<const ContentIndexService_Delete_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  return true;
}

ContentIndexService_Delete_Params_Data::ContentIndexService_Delete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_Delete_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_Delete_ResponseParams_Data* object =
      static_cast<const ContentIndexService_Delete_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::ContentIndexError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

ContentIndexService_Delete_ResponseParams_Data::ContentIndexService_Delete_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_GetDescriptions_Params_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_GetDescriptions_Params_Data* object =
      static_cast<const ContentIndexService_GetDescriptions_Params_Data*>(data);

  return true;
}

ContentIndexService_GetDescriptions_Params_Data::ContentIndexService_GetDescriptions_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentIndexService_GetDescriptions_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const ContentIndexService_GetDescriptions_ResponseParams_Data* object =
      static_cast<const ContentIndexService_GetDescriptions_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::ContentIndexError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->descriptions, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams descriptions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptions, validation_context,
                                         &descriptions_validate_params)) {
    return false;
  }

  return true;
}

ContentIndexService_GetDescriptions_ResponseParams_Data::ContentIndexService_GetDescriptions_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::ContentIndexError>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::ContentIndexError value) {
  return std::move(context).WriteString(::blink::mojom::ContentIndexErrorToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::ContentCategory>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::ContentCategory value) {
  return std::move(context).WriteString(::blink::mojom::ContentCategoryToString(value));
}

} // namespace perfetto