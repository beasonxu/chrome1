// services/viz/public/mojom/compositing/compositor_frame_transition_directive.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/viz/public/mojom/compositing/compositor_frame_transition_directive.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/viz/public/mojom/compositing/compositor_frame_transition_directive.mojom-params-data.h"
namespace viz {
namespace mojom {

static NOINLINE const char* CompositorFrameTransitionDirectiveTypeToStringHelper(CompositorFrameTransitionDirectiveType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case CompositorFrameTransitionDirectiveType::kSave:
      return "kSave";
    case CompositorFrameTransitionDirectiveType::kAnimate:
      return "kAnimate";
    case CompositorFrameTransitionDirectiveType::kAnimateRenderer:
      return "kAnimateRenderer";
    case CompositorFrameTransitionDirectiveType::kRelease:
      return "kRelease";
    default:
      return nullptr;
  }
}

std::string CompositorFrameTransitionDirectiveTypeToString(CompositorFrameTransitionDirectiveType value) {
  const char *str = CompositorFrameTransitionDirectiveTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown CompositorFrameTransitionDirectiveType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, CompositorFrameTransitionDirectiveType value) {
  return os << CompositorFrameTransitionDirectiveTypeToString(value);
}

static NOINLINE const char* CompositorFrameTransitionDirectiveEffectToStringHelper(CompositorFrameTransitionDirectiveEffect value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case CompositorFrameTransitionDirectiveEffect::kNone:
      return "kNone";
    case CompositorFrameTransitionDirectiveEffect::kCoverDown:
      return "kCoverDown";
    case CompositorFrameTransitionDirectiveEffect::kCoverLeft:
      return "kCoverLeft";
    case CompositorFrameTransitionDirectiveEffect::kCoverRight:
      return "kCoverRight";
    case CompositorFrameTransitionDirectiveEffect::kCoverUp:
      return "kCoverUp";
    case CompositorFrameTransitionDirectiveEffect::kExplode:
      return "kExplode";
    case CompositorFrameTransitionDirectiveEffect::kFade:
      return "kFade";
    case CompositorFrameTransitionDirectiveEffect::kImplode:
      return "kImplode";
    case CompositorFrameTransitionDirectiveEffect::kRevealDown:
      return "kRevealDown";
    case CompositorFrameTransitionDirectiveEffect::kRevealLeft:
      return "kRevealLeft";
    case CompositorFrameTransitionDirectiveEffect::kRevealRight:
      return "kRevealRight";
    case CompositorFrameTransitionDirectiveEffect::kRevealUp:
      return "kRevealUp";
    default:
      return nullptr;
  }
}

std::string CompositorFrameTransitionDirectiveEffectToString(CompositorFrameTransitionDirectiveEffect value) {
  const char *str = CompositorFrameTransitionDirectiveEffectToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown CompositorFrameTransitionDirectiveEffect value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, CompositorFrameTransitionDirectiveEffect value) {
  return os << CompositorFrameTransitionDirectiveEffectToString(value);
}

namespace internal {


// static
bool CompositorFrameTransitionDirectiveConfig_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameTransitionDirectiveConfig_Data* object =
      static_cast<const CompositorFrameTransitionDirectiveConfig_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->duration, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->duration, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->delay, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->delay, validation_context))
    return false;

  return true;
}

CompositorFrameTransitionDirectiveConfig_Data::CompositorFrameTransitionDirectiveConfig_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameTransitionDirectiveSharedElement_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameTransitionDirectiveSharedElement_Data* object =
      static_cast<const CompositorFrameTransitionDirectiveSharedElement_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->render_pass_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->render_pass_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->config, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->config, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->shared_element_resource_id, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->shared_element_resource_id, validation_context))
    return false;

  return true;
}

CompositorFrameTransitionDirectiveSharedElement_Data::CompositorFrameTransitionDirectiveSharedElement_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameTransitionDirective_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameTransitionDirective_Data* object =
      static_cast<const CompositorFrameTransitionDirective_Data*>(data);


  if (!::viz::mojom::internal::CompositorFrameTransitionDirectiveType_Data
        ::Validate(object->type, validation_context))
    return false;


  if (!::viz::mojom::internal::CompositorFrameTransitionDirectiveEffect_Data
        ::Validate(object->effect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->root_config, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->root_config, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->shared_elements, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams shared_elements_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->shared_elements, validation_context,
                                         &shared_elements_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameTransitionDirective_Data::CompositorFrameTransitionDirective_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

namespace perfetto {

// static
void TraceFormatTraits<::viz::mojom::CompositorFrameTransitionDirectiveType>::WriteIntoTrace(
   perfetto::TracedValue context, ::viz::mojom::CompositorFrameTransitionDirectiveType value) {
  return std::move(context).WriteString(::viz::mojom::CompositorFrameTransitionDirectiveTypeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::viz::mojom::CompositorFrameTransitionDirectiveEffect>::WriteIntoTrace(
   perfetto::TracedValue context, ::viz::mojom::CompositorFrameTransitionDirectiveEffect value) {
  return std::move(context).WriteString(::viz::mojom::CompositorFrameTransitionDirectiveEffectToString(value));
}

} // namespace perfetto