// components/printing/common/print.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/printing/common/print.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "components/printing/common/print.mojom-params-data.h"
namespace printing {
namespace mojom {

static NOINLINE const char* PrintFailureReasonToStringHelper(PrintFailureReason value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case PrintFailureReason::kGeneralFailure:
      return "kGeneralFailure";
    case PrintFailureReason::kInvalidPageRange:
      return "kInvalidPageRange";
    default:
      return nullptr;
  }
}

std::string PrintFailureReasonToString(PrintFailureReason value) {
  const char *str = PrintFailureReasonToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown PrintFailureReason value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, PrintFailureReason value) {
  return os << PrintFailureReasonToString(value);
}

namespace internal {
// static
bool PrintWithParamsResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const PrintWithParamsResult_Data* object = static_cast<const PrintWithParamsResult_Data*>(data);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case PrintWithParamsResult_Tag::kParams: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_params, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_params, validation_context))
        return false;
      return true;
    }
    case PrintWithParamsResult_Tag::kFailureReason: {


      if (!::printing::mojom::internal::PrintFailureReason_Data
            ::Validate(object->data.f_failure_reason, validation_context))
        return false;
      return true;
    }
    default: {

      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in PrintWithParamsResult");
      return false;
    }
  }
}


// static
bool PrintFrameContentParams_Data::Validate(
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
  [[maybe_unused]] const PrintFrameContentParams_Data* object =
      static_cast<const PrintFrameContentParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->printable_area, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->printable_area, validation_context))
    return false;

  return true;
}

PrintFrameContentParams_Data::PrintFrameContentParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OptionsFromDocumentParams_Data::Validate(
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
  [[maybe_unused]] const OptionsFromDocumentParams_Data* object =
      static_cast<const OptionsFromDocumentParams_Data*>(data);


  if (!::printing::mojom::internal::DuplexMode_Data
        ::Validate(object->duplex, validation_context))
    return false;

  return true;
}

OptionsFromDocumentParams_Data::OptionsFromDocumentParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DidPrintContentParams_Data::Validate(
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
  [[maybe_unused]] const DidPrintContentParams_Data* object =
      static_cast<const DidPrintContentParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->metafile_data_region, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->subframe_content_info, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams subframe_content_info_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->subframe_content_info, validation_context,
                                         &subframe_content_info_validate_params)) {
    return false;
  }

  return true;
}

DidPrintContentParams_Data::DidPrintContentParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DidStartPreviewParams_Data::Validate(
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
  [[maybe_unused]] const DidStartPreviewParams_Data* object =
      static_cast<const DidStartPreviewParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pages_to_render, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pages_to_render_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pages_to_render, validation_context,
                                         &pages_to_render_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->page_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->page_size, validation_context))
    return false;

  return true;
}

DidStartPreviewParams_Data::DidStartPreviewParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DidPreviewPageParams_Data::Validate(
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
  [[maybe_unused]] const DidPreviewPageParams_Data* object =
      static_cast<const DidPreviewPageParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->content, validation_context))
    return false;

  return true;
}

DidPreviewPageParams_Data::DidPreviewPageParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DidPreviewDocumentParams_Data::Validate(
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
  [[maybe_unused]] const DidPreviewDocumentParams_Data* object =
      static_cast<const DidPreviewDocumentParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->content, validation_context))
    return false;

  return true;
}

DidPreviewDocumentParams_Data::DidPreviewDocumentParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 128, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const PrintParams_Data* object =
      static_cast<const PrintParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->page_size, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->page_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content_size, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->content_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->printable_area, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->printable_area, validation_context))
    return false;


  if (!::printing::mojom::internal::PageOrientation_Data
        ::Validate(object->page_orientation, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dpi, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dpi, validation_context))
    return false;


  if (!::printing::mojom::internal::PrintScalingOption_Data
        ::Validate(object->print_scaling_option, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 18, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->title, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 19, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->header_template, 20, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->header_template, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->footer_template, 21, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->footer_template, validation_context))
    return false;


  if (!::printing::mojom::internal::SkiaDocumentType_Data
        ::Validate(object->printed_doc_type, validation_context))
    return false;

  return true;
}

PrintParams_Data::PrintParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintPagesParams_Data::Validate(
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
  [[maybe_unused]] const PrintPagesParams_Data* object =
      static_cast<const PrintPagesParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pages, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pages_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pages, validation_context,
                                         &pages_validate_params)) {
    return false;
  }

  return true;
}

PrintPagesParams_Data::PrintPagesParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DidPrintDocumentParams_Data::Validate(
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
  [[maybe_unused]] const DidPrintDocumentParams_Data* object =
      static_cast<const DidPrintDocumentParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->content, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->page_size, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->page_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content_area, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->content_area, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->physical_offsets, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->physical_offsets, validation_context))
    return false;

  return true;
}

DidPrintDocumentParams_Data::DidPrintDocumentParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ScriptedPrintParams_Data::Validate(
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
  [[maybe_unused]] const ScriptedPrintParams_Data* object =
      static_cast<const ScriptedPrintParams_Data*>(data);


  if (!::printing::mojom::internal::MarginType_Data
        ::Validate(object->margin_type, validation_context))
    return false;

  return true;
}

ScriptedPrintParams_Data::ScriptedPrintParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderer_CreatePreviewDocument_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderer_CreatePreviewDocument_Params_Data* object =
      static_cast<const PrintRenderer_CreatePreviewDocument_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->job_settings, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->job_settings, validation_context))
    return false;

  return true;
}

PrintRenderer_CreatePreviewDocument_Params_Data::PrintRenderer_CreatePreviewDocument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderer_CreatePreviewDocument_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PrintRenderer_CreatePreviewDocument_ResponseParams_Data* object =
      static_cast<const PrintRenderer_CreatePreviewDocument_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->preview_document_region, validation_context))
    return false;

  return true;
}

PrintRenderer_CreatePreviewDocument_ResponseParams_Data::PrintRenderer_CreatePreviewDocument_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintRequestedPages_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintRequestedPages_Params_Data* object =
      static_cast<const PrintRenderFrame_PrintRequestedPages_Params_Data*>(data);

  return true;
}

PrintRenderFrame_PrintRequestedPages_Params_Data::PrintRenderFrame_PrintRequestedPages_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintWithParams_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintWithParams_Params_Data* object =
      static_cast<const PrintRenderFrame_PrintWithParams_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

PrintRenderFrame_PrintWithParams_Params_Data::PrintRenderFrame_PrintWithParams_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintWithParams_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintWithParams_ResponseParams_Data* object =
      static_cast<const PrintRenderFrame_PrintWithParams_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

PrintRenderFrame_PrintWithParams_ResponseParams_Data::PrintRenderFrame_PrintWithParams_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintFrameContent_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintFrameContent_Params_Data* object =
      static_cast<const PrintRenderFrame_PrintFrameContent_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

PrintRenderFrame_PrintFrameContent_Params_Data::PrintRenderFrame_PrintFrameContent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintFrameContent_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintFrameContent_ResponseParams_Data* object =
      static_cast<const PrintRenderFrame_PrintFrameContent_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

PrintRenderFrame_PrintFrameContent_ResponseParams_Data::PrintRenderFrame_PrintFrameContent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_SetPrintingEnabled_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_SetPrintingEnabled_Params_Data* object =
      static_cast<const PrintRenderFrame_SetPrintingEnabled_Params_Data*>(data);

  return true;
}

PrintRenderFrame_SetPrintingEnabled_Params_Data::PrintRenderFrame_SetPrintingEnabled_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintingDone_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintingDone_Params_Data* object =
      static_cast<const PrintRenderFrame_PrintingDone_Params_Data*>(data);

  return true;
}

PrintRenderFrame_PrintingDone_Params_Data::PrintRenderFrame_PrintingDone_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintRenderFrame_PrintNodeUnderContextMenu_Params_Data::Validate(
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
  [[maybe_unused]] const PrintRenderFrame_PrintNodeUnderContextMenu_Params_Data* object =
      static_cast<const PrintRenderFrame_PrintNodeUnderContextMenu_Params_Data*>(data);

  return true;
}

PrintRenderFrame_PrintNodeUnderContextMenu_Params_Data::PrintRenderFrame_PrintNodeUnderContextMenu_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_DidGetPrintedPagesCount_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_DidGetPrintedPagesCount_Params_Data* object =
      static_cast<const PrintManagerHost_DidGetPrintedPagesCount_Params_Data*>(data);

  return true;
}

PrintManagerHost_DidGetPrintedPagesCount_Params_Data::PrintManagerHost_DidGetPrintedPagesCount_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_GetDefaultPrintSettings_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_GetDefaultPrintSettings_Params_Data* object =
      static_cast<const PrintManagerHost_GetDefaultPrintSettings_Params_Data*>(data);

  return true;
}

PrintManagerHost_GetDefaultPrintSettings_Params_Data::PrintManagerHost_GetDefaultPrintSettings_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_GetDefaultPrintSettings_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_GetDefaultPrintSettings_ResponseParams_Data* object =
      static_cast<const PrintManagerHost_GetDefaultPrintSettings_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->default_settings, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->default_settings, validation_context))
    return false;

  return true;
}

PrintManagerHost_GetDefaultPrintSettings_ResponseParams_Data::PrintManagerHost_GetDefaultPrintSettings_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_DidShowPrintDialog_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_DidShowPrintDialog_Params_Data* object =
      static_cast<const PrintManagerHost_DidShowPrintDialog_Params_Data*>(data);

  return true;
}

PrintManagerHost_DidShowPrintDialog_Params_Data::PrintManagerHost_DidShowPrintDialog_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_DidPrintDocument_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_DidPrintDocument_Params_Data* object =
      static_cast<const PrintManagerHost_DidPrintDocument_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

PrintManagerHost_DidPrintDocument_Params_Data::PrintManagerHost_DidPrintDocument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_DidPrintDocument_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_DidPrintDocument_ResponseParams_Data* object =
      static_cast<const PrintManagerHost_DidPrintDocument_ResponseParams_Data*>(data);

  return true;
}

PrintManagerHost_DidPrintDocument_ResponseParams_Data::PrintManagerHost_DidPrintDocument_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_ScriptedPrint_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_ScriptedPrint_Params_Data* object =
      static_cast<const PrintManagerHost_ScriptedPrint_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

PrintManagerHost_ScriptedPrint_Params_Data::PrintManagerHost_ScriptedPrint_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_ScriptedPrint_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_ScriptedPrint_ResponseParams_Data* object =
      static_cast<const PrintManagerHost_ScriptedPrint_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->settings, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->settings, validation_context))
    return false;

  return true;
}

PrintManagerHost_ScriptedPrint_ResponseParams_Data::PrintManagerHost_ScriptedPrint_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_ShowInvalidPrinterSettingsError_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_ShowInvalidPrinterSettingsError_Params_Data* object =
      static_cast<const PrintManagerHost_ShowInvalidPrinterSettingsError_Params_Data*>(data);

  return true;
}

PrintManagerHost_ShowInvalidPrinterSettingsError_Params_Data::PrintManagerHost_ShowInvalidPrinterSettingsError_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrintManagerHost_PrintingFailed_Params_Data::Validate(
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
  [[maybe_unused]] const PrintManagerHost_PrintingFailed_Params_Data* object =
      static_cast<const PrintManagerHost_PrintingFailed_Params_Data*>(data);


  if (!::printing::mojom::internal::PrintFailureReason_Data
        ::Validate(object->reason, validation_context))
    return false;

  return true;
}

PrintManagerHost_PrintingFailed_Params_Data::PrintManagerHost_PrintingFailed_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace printing

namespace perfetto {

// static
void TraceFormatTraits<::printing::mojom::PrintFailureReason>::WriteIntoTrace(
   perfetto::TracedValue context, ::printing::mojom::PrintFailureReason value) {
  return std::move(context).WriteString(::printing::mojom::PrintFailureReasonToString(value));
}

} // namespace perfetto