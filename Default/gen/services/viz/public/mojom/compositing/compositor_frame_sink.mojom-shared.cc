// services/viz/public/mojom/compositing/compositor_frame_sink.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/viz/public/mojom/compositing/compositor_frame_sink.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/viz/public/mojom/compositing/compositor_frame_sink.mojom-params-data.h"
namespace viz {
namespace mojom {

static NOINLINE const char* CompositorFrameSinkTypeToStringHelper(CompositorFrameSinkType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case CompositorFrameSinkType::kUnspecified:
      return "kUnspecified";
    case CompositorFrameSinkType::kVideo:
      return "kVideo";
    case CompositorFrameSinkType::kMediaStream:
      return "kMediaStream";
    case CompositorFrameSinkType::kLayerTree:
      return "kLayerTree";
    default:
      return nullptr;
  }
}

std::string CompositorFrameSinkTypeToString(CompositorFrameSinkType value) {
  const char *str = CompositorFrameSinkTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown CompositorFrameSinkType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, CompositorFrameSinkType value) {
  return os << CompositorFrameSinkTypeToString(value);
}

namespace internal {


// static
bool CompositorFrameSink_SetNeedsBeginFrame_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_SetNeedsBeginFrame_Params_Data* object =
      static_cast<const CompositorFrameSink_SetNeedsBeginFrame_Params_Data*>(data);

  return true;
}

CompositorFrameSink_SetNeedsBeginFrame_Params_Data::CompositorFrameSink_SetNeedsBeginFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* object =
      static_cast<const CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data*>(data);

  return true;
}

CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SubmitCompositorFrame_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_SubmitCompositorFrame_Params_Data* object =
      static_cast<const CompositorFrameSink_SubmitCompositorFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->local_surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->hit_test_region_list, validation_context))
    return false;

  return true;
}

CompositorFrameSink_SubmitCompositorFrame_Params_Data::CompositorFrameSink_SubmitCompositorFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SubmitCompositorFrameSync_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* object =
      static_cast<const CompositorFrameSink_SubmitCompositorFrameSync_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->local_surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->hit_test_region_list, validation_context))
    return false;

  return true;
}

CompositorFrameSink_SubmitCompositorFrameSync_Params_Data::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* object =
      static_cast<const CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->resources, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->resources, validation_context,
                                         &resources_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_DidNotProduceFrame_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_DidNotProduceFrame_Params_Data* object =
      static_cast<const CompositorFrameSink_DidNotProduceFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ack, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ack, validation_context))
    return false;

  return true;
}

CompositorFrameSink_DidNotProduceFrame_Params_Data::CompositorFrameSink_DidNotProduceFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_DidAllocateSharedBitmap_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* object =
      static_cast<const CompositorFrameSink_DidAllocateSharedBitmap_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->region, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->region, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  return true;
}

CompositorFrameSink_DidAllocateSharedBitmap_Params_Data::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_DidDeleteSharedBitmap_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* object =
      static_cast<const CompositorFrameSink_DidDeleteSharedBitmap_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  return true;
}

CompositorFrameSink_DidDeleteSharedBitmap_Params_Data::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_InitializeCompositorFrameSinkType_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_InitializeCompositorFrameSinkType_Params_Data* object =
      static_cast<const CompositorFrameSink_InitializeCompositorFrameSinkType_Params_Data*>(data);


  if (!::viz::mojom::internal::CompositorFrameSinkType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

CompositorFrameSink_InitializeCompositorFrameSinkType_Params_Data::CompositorFrameSink_InitializeCompositorFrameSinkType_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSink_SetThreadIds_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSink_SetThreadIds_Params_Data* object =
      static_cast<const CompositorFrameSink_SetThreadIds_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->thread_ids, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams thread_ids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->thread_ids, validation_context,
                                         &thread_ids_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSink_SetThreadIds_Params_Data::CompositorFrameSink_SetThreadIds_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* object =
      static_cast<const CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->resources, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->resources, validation_context,
                                         &resources_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_OnBeginFrame_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSinkClient_OnBeginFrame_Params_Data* object =
      static_cast<const CompositorFrameSinkClient_OnBeginFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->args, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->args, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->details, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams details_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->details, validation_context,
                                         &details_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSinkClient_OnBeginFrame_Params_Data::CompositorFrameSinkClient_OnBeginFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* object =
      static_cast<const CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data*>(data);

  return true;
}

CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_ReclaimResources_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSinkClient_ReclaimResources_Params_Data* object =
      static_cast<const CompositorFrameSinkClient_ReclaimResources_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->resources, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->resources, validation_context,
                                         &resources_validate_params)) {
    return false;
  }

  return true;
}

CompositorFrameSinkClient_ReclaimResources_Params_Data::CompositorFrameSinkClient_ReclaimResources_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositorFrameSinkClient_OnCompositorFrameTransitionDirectiveProcessed_Params_Data::Validate(
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
  [[maybe_unused]] const CompositorFrameSinkClient_OnCompositorFrameTransitionDirectiveProcessed_Params_Data* object =
      static_cast<const CompositorFrameSinkClient_OnCompositorFrameTransitionDirectiveProcessed_Params_Data*>(data);

  return true;
}

CompositorFrameSinkClient_OnCompositorFrameTransitionDirectiveProcessed_Params_Data::CompositorFrameSinkClient_OnCompositorFrameTransitionDirectiveProcessed_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

namespace perfetto {

// static
void TraceFormatTraits<::viz::mojom::CompositorFrameSinkType>::WriteIntoTrace(
   perfetto::TracedValue context, ::viz::mojom::CompositorFrameSinkType value) {
  return std::move(context).WriteString(::viz::mojom::CompositorFrameSinkTypeToString(value));
}

} // namespace perfetto