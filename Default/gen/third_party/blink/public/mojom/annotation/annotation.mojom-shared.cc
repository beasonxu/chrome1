// third_party/blink/public/mojom/annotation/annotation.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/annotation/annotation.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/annotation/annotation.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* AnnotationTypeToStringHelper(AnnotationType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case AnnotationType::kSharedHighlight:
      return "kSharedHighlight";
    case AnnotationType::kUserNote:
      return "kUserNote";
    default:
      return nullptr;
  }
}

std::string AnnotationTypeToString(AnnotationType value) {
  const char *str = AnnotationTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown AnnotationType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, AnnotationType value) {
  return os << AnnotationTypeToString(value);
}

namespace internal {


// static
bool AnnotationAgent_ScrollIntoView_Params_Data::Validate(
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
  [[maybe_unused]] const AnnotationAgent_ScrollIntoView_Params_Data* object =
      static_cast<const AnnotationAgent_ScrollIntoView_Params_Data*>(data);

  return true;
}

AnnotationAgent_ScrollIntoView_Params_Data::AnnotationAgent_ScrollIntoView_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AnnotationAgentHost_DidFinishAttachment_Params_Data::Validate(
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
  [[maybe_unused]] const AnnotationAgentHost_DidFinishAttachment_Params_Data* object =
      static_cast<const AnnotationAgentHost_DidFinishAttachment_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->document_relative_rect, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->document_relative_rect, validation_context))
    return false;

  return true;
}

AnnotationAgentHost_DidFinishAttachment_Params_Data::AnnotationAgentHost_DidFinishAttachment_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AnnotationAgentContainer_CreateAgent_Params_Data::Validate(
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
  [[maybe_unused]] const AnnotationAgentContainer_CreateAgent_Params_Data* object =
      static_cast<const AnnotationAgentContainer_CreateAgent_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->host_remote, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->host_remote,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->agent_receiver, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->agent_receiver,
                                                 validation_context)) {
    return false;
  }


  if (!::blink::mojom::internal::AnnotationType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serialized_selector, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serialized_selector_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serialized_selector, validation_context,
                                         &serialized_selector_validate_params)) {
    return false;
  }

  return true;
}

AnnotationAgentContainer_CreateAgent_Params_Data::AnnotationAgentContainer_CreateAgent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AnnotationAgentContainer_CreateAgentFromSelection_Params_Data::Validate(
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
  [[maybe_unused]] const AnnotationAgentContainer_CreateAgentFromSelection_Params_Data* object =
      static_cast<const AnnotationAgentContainer_CreateAgentFromSelection_Params_Data*>(data);


  if (!::blink::mojom::internal::AnnotationType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

AnnotationAgentContainer_CreateAgentFromSelection_Params_Data::AnnotationAgentContainer_CreateAgentFromSelection_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AnnotationAgentContainer_CreateAgentFromSelection_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const AnnotationAgentContainer_CreateAgentFromSelection_ResponseParams_Data* object =
      static_cast<const AnnotationAgentContainer_CreateAgentFromSelection_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterface(object->host_receiver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->agent_remote,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serialized_selector, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serialized_selector_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serialized_selector, validation_context,
                                         &serialized_selector_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->selected_text, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->selected_text, validation_context))
    return false;

  return true;
}

AnnotationAgentContainer_CreateAgentFromSelection_ResponseParams_Data::AnnotationAgentContainer_CreateAgentFromSelection_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::AnnotationType>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::AnnotationType value) {
  return std::move(context).WriteString(::blink::mojom::AnnotationTypeToString(value));
}

} // namespace perfetto