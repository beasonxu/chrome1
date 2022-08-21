// third_party/blink/public/mojom/context_menu/context_menu.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/context_menu/context_menu.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/context_menu/context_menu.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* ContextMenuDataMediaTypeToStringHelper(ContextMenuDataMediaType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ContextMenuDataMediaType::kNone:
      return "kNone";
    case ContextMenuDataMediaType::kImage:
      return "kImage";
    case ContextMenuDataMediaType::kVideo:
      return "kVideo";
    case ContextMenuDataMediaType::kAudio:
      return "kAudio";
    case ContextMenuDataMediaType::kCanvas:
      return "kCanvas";
    case ContextMenuDataMediaType::kFile:
      return "kFile";
    case ContextMenuDataMediaType::kPlugin:
      return "kPlugin";
    default:
      return nullptr;
  }
}

std::string ContextMenuDataMediaTypeToString(ContextMenuDataMediaType value) {
  const char *str = ContextMenuDataMediaTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ContextMenuDataMediaType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ContextMenuDataMediaType value) {
  return os << ContextMenuDataMediaTypeToString(value);
}

static NOINLINE const char* ContextMenuDataInputFieldTypeToStringHelper(ContextMenuDataInputFieldType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ContextMenuDataInputFieldType::kNone:
      return "kNone";
    case ContextMenuDataInputFieldType::kPlainText:
      return "kPlainText";
    case ContextMenuDataInputFieldType::kPassword:
      return "kPassword";
    case ContextMenuDataInputFieldType::kNumber:
      return "kNumber";
    case ContextMenuDataInputFieldType::kTelephone:
      return "kTelephone";
    case ContextMenuDataInputFieldType::kOther:
      return "kOther";
    default:
      return nullptr;
  }
}

std::string ContextMenuDataInputFieldTypeToString(ContextMenuDataInputFieldType value) {
  const char *str = ContextMenuDataInputFieldTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ContextMenuDataInputFieldType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ContextMenuDataInputFieldType value) {
  return os << ContextMenuDataInputFieldTypeToString(value);
}

static NOINLINE const char* CustomContextMenuItemTypeToStringHelper(CustomContextMenuItemType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case CustomContextMenuItemType::kOption:
      return "kOption";
    case CustomContextMenuItemType::kCheckableOption:
      return "kCheckableOption";
    case CustomContextMenuItemType::kGroup:
      return "kGroup";
    case CustomContextMenuItemType::kSeparator:
      return "kSeparator";
    case CustomContextMenuItemType::kSubMenu:
      return "kSubMenu";
    default:
      return nullptr;
  }
}

std::string CustomContextMenuItemTypeToString(CustomContextMenuItemType value) {
  const char *str = CustomContextMenuItemTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown CustomContextMenuItemType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, CustomContextMenuItemType value) {
  return os << CustomContextMenuItemTypeToString(value);
}

namespace internal {


// static
bool FieldRendererId_Data::Validate(
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
  [[maybe_unused]] const FieldRendererId_Data* object =
      static_cast<const FieldRendererId_Data*>(data);

  return true;
}

FieldRendererId_Data::FieldRendererId_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CustomContextMenuItem_Data::Validate(
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
  [[maybe_unused]] const CustomContextMenuItem_Data* object =
      static_cast<const CustomContextMenuItem_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->label, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->label, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tool_tip, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->tool_tip, validation_context))
    return false;


  if (!::blink::mojom::internal::CustomContextMenuItemType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->submenu, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams submenu_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->submenu, validation_context,
                                         &submenu_validate_params)) {
    return false;
  }

  return true;
}

CustomContextMenuItem_Data::CustomContextMenuItem_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UntrustworthyContextMenuParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 192, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const UntrustworthyContextMenuParams_Data* object =
      static_cast<const UntrustworthyContextMenuParams_Data*>(data);


  if (!::blink::mojom::internal::ContextMenuDataMediaType_Data
        ::Validate(object->media_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->link_url, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->link_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->link_text, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->link_text, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->impression, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->unfiltered_link_url, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->unfiltered_link_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->src_url, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->src_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->selection_text, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->selection_text, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title_text, 12, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->title_text, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->alt_text, 13, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->alt_text, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->suggested_filename, 14, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->suggested_filename, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->misspelled_word, 15, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->misspelled_word, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dictionary_suggestions, 16, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams dictionary_suggestions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->dictionary_suggestions, validation_context,
                                         &dictionary_suggestions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_charset, 23, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams frame_charset_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->frame_charset, validation_context,
                                         &frame_charset_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::ReferrerPolicy_Data
        ::Validate(object->referrer_policy, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->link_followed, 25, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->link_followed, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->custom_items, 26, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams custom_items_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->custom_items, validation_context,
                                         &custom_items_validate_params)) {
    return false;
  }


  if (!::ui::mojom::internal::MenuSourceType_Data
        ::Validate(object->source_type, validation_context))
    return false;


  if (!::blink::mojom::internal::ContextMenuDataInputFieldType_Data
        ::Validate(object->input_field_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->selection_rect, 29, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->selection_rect, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->field_renderer_id, validation_context))
    return false;

  return true;
}

UntrustworthyContextMenuParams_Data::UntrustworthyContextMenuParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContextMenuClient_CustomContextMenuAction_Params_Data::Validate(
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
  [[maybe_unused]] const ContextMenuClient_CustomContextMenuAction_Params_Data* object =
      static_cast<const ContextMenuClient_CustomContextMenuAction_Params_Data*>(data);

  return true;
}

ContextMenuClient_CustomContextMenuAction_Params_Data::ContextMenuClient_CustomContextMenuAction_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContextMenuClient_ContextMenuClosed_Params_Data::Validate(
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
  [[maybe_unused]] const ContextMenuClient_ContextMenuClosed_Params_Data* object =
      static_cast<const ContextMenuClient_ContextMenuClosed_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->link_followed, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->link_followed, validation_context))
    return false;

  return true;
}

ContextMenuClient_ContextMenuClosed_Params_Data::ContextMenuClient_ContextMenuClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::ContextMenuDataMediaType>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::ContextMenuDataMediaType value) {
  return std::move(context).WriteString(::blink::mojom::ContextMenuDataMediaTypeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::ContextMenuDataInputFieldType>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::ContextMenuDataInputFieldType value) {
  return std::move(context).WriteString(::blink::mojom::ContextMenuDataInputFieldTypeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::CustomContextMenuItemType>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::CustomContextMenuItemType value) {
  return std::move(context).WriteString(::blink::mojom::CustomContextMenuItemTypeToString(value));
}

} // namespace perfetto