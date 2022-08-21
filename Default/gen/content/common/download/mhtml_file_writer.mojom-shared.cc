// content/common/download/mhtml_file_writer.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/common/download/mhtml_file_writer.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "content/common/download/mhtml_file_writer.mojom-params-data.h"
namespace content {
namespace mojom {

static NOINLINE const char* MhtmlSaveStatusToStringHelper(MhtmlSaveStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case MhtmlSaveStatus::kSuccess:
      return "kSuccess";
    case MhtmlSaveStatus::kFileClosingError:
      return "kFileClosingError";
    case MhtmlSaveStatus::kFileCreationError:
      return "kFileCreationError";
    case MhtmlSaveStatus::kFileWritingError:
      return "kFileWritingError";
    case MhtmlSaveStatus::kFrameNoLongerExists:
      return "kFrameNoLongerExists";
    case MhtmlSaveStatus::kDeprecatedFrameSerializationForbidden:
      return "kDeprecatedFrameSerializationForbidden";
    case MhtmlSaveStatus::kRenderProcessExited:
      return "kRenderProcessExited";
    case MhtmlSaveStatus::kStreamingError:
      return "kStreamingError";
    default:
      return nullptr;
  }
}

std::string MhtmlSaveStatusToString(MhtmlSaveStatus value) {
  const char *str = MhtmlSaveStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown MhtmlSaveStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, MhtmlSaveStatus value) {
  return os << MhtmlSaveStatusToString(value);
}

namespace internal {
// static
bool MhtmlOutputHandle_Data::Validate(
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

  const MhtmlOutputHandle_Data* object = static_cast<const MhtmlOutputHandle_Data*>(data);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case MhtmlOutputHandle_Tag::kFileHandle: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_file_handle, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_file_handle, validation_context))
        return false;
      return true;
    }
    case MhtmlOutputHandle_Tag::kProducerHandle: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_producer_handle, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_producer_handle,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    default: {

      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in MhtmlOutputHandle");
      return false;
    }
  }
}


// static
bool SerializeAsMHTMLParams_Data::Validate(
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
  [[maybe_unused]] const SerializeAsMHTMLParams_Data* object =
      static_cast<const SerializeAsMHTMLParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mhtml_boundary_marker, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mhtml_boundary_marker_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mhtml_boundary_marker, validation_context,
                                         &mhtml_boundary_marker_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->digests_of_uris_to_skip, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams digests_of_uris_to_skip_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->digests_of_uris_to_skip, validation_context,
                                         &digests_of_uris_to_skip_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->salt, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams salt_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->salt, validation_context,
                                         &salt_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->output_handle, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->output_handle, validation_context))
    return false;

  return true;
}

SerializeAsMHTMLParams_Data::SerializeAsMHTMLParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MhtmlFileWriter_SerializeAsMHTML_Params_Data::Validate(
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
  [[maybe_unused]] const MhtmlFileWriter_SerializeAsMHTML_Params_Data* object =
      static_cast<const MhtmlFileWriter_SerializeAsMHTML_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

MhtmlFileWriter_SerializeAsMHTML_Params_Data::MhtmlFileWriter_SerializeAsMHTML_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MhtmlFileWriter_SerializeAsMHTML_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const MhtmlFileWriter_SerializeAsMHTML_ResponseParams_Data* object =
      static_cast<const MhtmlFileWriter_SerializeAsMHTML_ResponseParams_Data*>(data);


  if (!::content::mojom::internal::MhtmlSaveStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->digests_of_uris_to_skip, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams digests_of_uris_to_skip_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->digests_of_uris_to_skip, validation_context,
                                         &digests_of_uris_to_skip_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->renderer_main_thread_time, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->renderer_main_thread_time, validation_context))
    return false;

  return true;
}

MhtmlFileWriter_SerializeAsMHTML_ResponseParams_Data::MhtmlFileWriter_SerializeAsMHTML_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content

namespace perfetto {

// static
void TraceFormatTraits<::content::mojom::MhtmlSaveStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::content::mojom::MhtmlSaveStatus value) {
  return std::move(context).WriteString(::content::mojom::MhtmlSaveStatusToString(value));
}

} // namespace perfetto