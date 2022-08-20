// third_party/blink/public/mojom/page/widget.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/page/widget.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/page/widget.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool FrameWidget_DragTargetDragEnter_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDragEnter_Params_Data* object =
      static_cast<const FrameWidget_DragTargetDragEnter_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->drag_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->drag_data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->point_in_viewport, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->point_in_viewport, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->screen_point, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->screen_point, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->operations_allowed, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->operations_allowed, validation_context))
    return false;

  return true;
}

FrameWidget_DragTargetDragEnter_Params_Data::FrameWidget_DragTargetDragEnter_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragTargetDragEnter_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDragEnter_ResponseParams_Data* object =
      static_cast<const FrameWidget_DragTargetDragEnter_ResponseParams_Data*>(data);


  if (!::ui::mojom::internal::DragOperation_Data
        ::Validate(object->operation, validation_context))
    return false;

  return true;
}

FrameWidget_DragTargetDragEnter_ResponseParams_Data::FrameWidget_DragTargetDragEnter_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragTargetDragOver_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDragOver_Params_Data* object =
      static_cast<const FrameWidget_DragTargetDragOver_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->point_in_viewport, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->point_in_viewport, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->screen_point, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->screen_point, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->operations_allowed, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->operations_allowed, validation_context))
    return false;

  return true;
}

FrameWidget_DragTargetDragOver_Params_Data::FrameWidget_DragTargetDragOver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragTargetDragOver_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDragOver_ResponseParams_Data* object =
      static_cast<const FrameWidget_DragTargetDragOver_ResponseParams_Data*>(data);


  if (!::ui::mojom::internal::DragOperation_Data
        ::Validate(object->operation, validation_context))
    return false;

  return true;
}

FrameWidget_DragTargetDragOver_ResponseParams_Data::FrameWidget_DragTargetDragOver_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragTargetDragLeave_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDragLeave_Params_Data* object =
      static_cast<const FrameWidget_DragTargetDragLeave_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->point_in_viewport, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->point_in_viewport, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->screen_point, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->screen_point, validation_context))
    return false;

  return true;
}

FrameWidget_DragTargetDragLeave_Params_Data::FrameWidget_DragTargetDragLeave_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragTargetDrop_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDrop_Params_Data* object =
      static_cast<const FrameWidget_DragTargetDrop_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->drag_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->drag_data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->point_in_viewport, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->point_in_viewport, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->screen_point, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->screen_point, validation_context))
    return false;

  return true;
}

FrameWidget_DragTargetDrop_Params_Data::FrameWidget_DragTargetDrop_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragTargetDrop_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragTargetDrop_ResponseParams_Data* object =
      static_cast<const FrameWidget_DragTargetDrop_ResponseParams_Data*>(data);

  return true;
}

FrameWidget_DragTargetDrop_ResponseParams_Data::FrameWidget_DragTargetDrop_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragSourceEndedAt_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragSourceEndedAt_Params_Data* object =
      static_cast<const FrameWidget_DragSourceEndedAt_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->point_in_viewport, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->point_in_viewport, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->screen_point, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->screen_point, validation_context))
    return false;


  if (!::ui::mojom::internal::DragOperation_Data
        ::Validate(object->drag_operation, validation_context))
    return false;

  return true;
}

FrameWidget_DragSourceEndedAt_Params_Data::FrameWidget_DragSourceEndedAt_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragSourceEndedAt_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragSourceEndedAt_ResponseParams_Data* object =
      static_cast<const FrameWidget_DragSourceEndedAt_ResponseParams_Data*>(data);

  return true;
}

FrameWidget_DragSourceEndedAt_ResponseParams_Data::FrameWidget_DragSourceEndedAt_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DragSourceSystemDragEnded_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DragSourceSystemDragEnded_Params_Data* object =
      static_cast<const FrameWidget_DragSourceSystemDragEnded_Params_Data*>(data);

  return true;
}

FrameWidget_DragSourceSystemDragEnded_Params_Data::FrameWidget_DragSourceSystemDragEnded_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_OnStartStylusWriting_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_OnStartStylusWriting_Params_Data* object =
      static_cast<const FrameWidget_OnStartStylusWriting_Params_Data*>(data);

  return true;
}

FrameWidget_OnStartStylusWriting_Params_Data::FrameWidget_OnStartStylusWriting_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_OnStartStylusWriting_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_OnStartStylusWriting_ResponseParams_Data* object =
      static_cast<const FrameWidget_OnStartStylusWriting_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->focused_edit_bounds, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->caret_bounds, validation_context))
    return false;

  return true;
}

FrameWidget_OnStartStylusWriting_ResponseParams_Data::FrameWidget_OnStartStylusWriting_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_SetBackgroundOpaque_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_SetBackgroundOpaque_Params_Data* object =
      static_cast<const FrameWidget_SetBackgroundOpaque_Params_Data*>(data);

  return true;
}

FrameWidget_SetBackgroundOpaque_Params_Data::FrameWidget_SetBackgroundOpaque_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_SetTextDirection_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_SetTextDirection_Params_Data* object =
      static_cast<const FrameWidget_SetTextDirection_Params_Data*>(data);


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->direction, validation_context))
    return false;

  return true;
}

FrameWidget_SetTextDirection_Params_Data::FrameWidget_SetTextDirection_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_SetActive_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_SetActive_Params_Data* object =
      static_cast<const FrameWidget_SetActive_Params_Data*>(data);

  return true;
}

FrameWidget_SetActive_Params_Data::FrameWidget_SetActive_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_SetInheritedEffectiveTouchActionForSubFrame_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_SetInheritedEffectiveTouchActionForSubFrame_Params_Data* object =
      static_cast<const FrameWidget_SetInheritedEffectiveTouchActionForSubFrame_Params_Data*>(data);


  if (!::cc::mojom::internal::TouchAction_Data
        ::Validate(object->touch_action, validation_context))
    return false;

  return true;
}

FrameWidget_SetInheritedEffectiveTouchActionForSubFrame_Params_Data::FrameWidget_SetInheritedEffectiveTouchActionForSubFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_UpdateRenderThrottlingStatusForSubFrame_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_UpdateRenderThrottlingStatusForSubFrame_Params_Data* object =
      static_cast<const FrameWidget_UpdateRenderThrottlingStatusForSubFrame_Params_Data*>(data);

  return true;
}

FrameWidget_UpdateRenderThrottlingStatusForSubFrame_Params_Data::FrameWidget_UpdateRenderThrottlingStatusForSubFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_SetIsInertForSubFrame_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_SetIsInertForSubFrame_Params_Data* object =
      static_cast<const FrameWidget_SetIsInertForSubFrame_Params_Data*>(data);

  return true;
}

FrameWidget_SetIsInertForSubFrame_Params_Data::FrameWidget_SetIsInertForSubFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_ShowContextMenu_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_ShowContextMenu_Params_Data* object =
      static_cast<const FrameWidget_ShowContextMenu_Params_Data*>(data);


  if (!::ui::mojom::internal::MenuSourceType_Data
        ::Validate(object->source_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->location, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->location, validation_context))
    return false;

  return true;
}

FrameWidget_ShowContextMenu_Params_Data::FrameWidget_ShowContextMenu_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_EnableDeviceEmulation_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_EnableDeviceEmulation_Params_Data* object =
      static_cast<const FrameWidget_EnableDeviceEmulation_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->parameters, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parameters, validation_context))
    return false;

  return true;
}

FrameWidget_EnableDeviceEmulation_Params_Data::FrameWidget_EnableDeviceEmulation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_DisableDeviceEmulation_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_DisableDeviceEmulation_Params_Data* object =
      static_cast<const FrameWidget_DisableDeviceEmulation_Params_Data*>(data);

  return true;
}

FrameWidget_DisableDeviceEmulation_Params_Data::FrameWidget_DisableDeviceEmulation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_BindWidgetCompositor_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_BindWidgetCompositor_Params_Data* object =
      static_cast<const FrameWidget_BindWidgetCompositor_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->host, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->host,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FrameWidget_BindWidgetCompositor_Params_Data::FrameWidget_BindWidgetCompositor_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_BindInputTargetClient_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_BindInputTargetClient_Params_Data* object =
      static_cast<const FrameWidget_BindInputTargetClient_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->host, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->host,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FrameWidget_BindInputTargetClient_Params_Data::FrameWidget_BindInputTargetClient_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidget_SetViewportIntersection_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidget_SetViewportIntersection_Params_Data* object =
      static_cast<const FrameWidget_SetViewportIntersection_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->intersection_state, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->intersection_state, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->visual_properties, validation_context))
    return false;

  return true;
}

FrameWidget_SetViewportIntersection_Params_Data::FrameWidget_SetViewportIntersection_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_AnimateDoubleTapZoomInMainFrame_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_AnimateDoubleTapZoomInMainFrame_Params_Data* object =
      static_cast<const FrameWidgetHost_AnimateDoubleTapZoomInMainFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tap_point, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->tap_point, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rect_to_zoom, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->rect_to_zoom, validation_context))
    return false;

  return true;
}

FrameWidgetHost_AnimateDoubleTapZoomInMainFrame_Params_Data::FrameWidgetHost_AnimateDoubleTapZoomInMainFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_ZoomToFindInPageRectInMainFrame_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_ZoomToFindInPageRectInMainFrame_Params_Data* object =
      static_cast<const FrameWidgetHost_ZoomToFindInPageRectInMainFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rect_to_zoom, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->rect_to_zoom, validation_context))
    return false;

  return true;
}

FrameWidgetHost_ZoomToFindInPageRectInMainFrame_Params_Data::FrameWidgetHost_ZoomToFindInPageRectInMainFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_SetHasTouchEventConsumers_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_SetHasTouchEventConsumers_Params_Data* object =
      static_cast<const FrameWidgetHost_SetHasTouchEventConsumers_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->touch_event_consumers, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->touch_event_consumers, validation_context))
    return false;

  return true;
}

FrameWidgetHost_SetHasTouchEventConsumers_Params_Data::FrameWidgetHost_SetHasTouchEventConsumers_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_IntrinsicSizingInfoChanged_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_IntrinsicSizingInfoChanged_Params_Data* object =
      static_cast<const FrameWidgetHost_IntrinsicSizingInfoChanged_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sizing_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sizing_info, validation_context))
    return false;

  return true;
}

FrameWidgetHost_IntrinsicSizingInfoChanged_Params_Data::FrameWidgetHost_IntrinsicSizingInfoChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_AutoscrollStart_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_AutoscrollStart_Params_Data* object =
      static_cast<const FrameWidgetHost_AutoscrollStart_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->position, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->position, validation_context))
    return false;

  return true;
}

FrameWidgetHost_AutoscrollStart_Params_Data::FrameWidgetHost_AutoscrollStart_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_AutoscrollFling_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_AutoscrollFling_Params_Data* object =
      static_cast<const FrameWidgetHost_AutoscrollFling_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->velocity, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->velocity, validation_context))
    return false;

  return true;
}

FrameWidgetHost_AutoscrollFling_Params_Data::FrameWidgetHost_AutoscrollFling_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_AutoscrollEnd_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_AutoscrollEnd_Params_Data* object =
      static_cast<const FrameWidgetHost_AutoscrollEnd_Params_Data*>(data);

  return true;
}

FrameWidgetHost_AutoscrollEnd_Params_Data::FrameWidgetHost_AutoscrollEnd_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameWidgetHost_StartDragging_Params_Data::Validate(
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
  [[maybe_unused]] const FrameWidgetHost_StartDragging_Params_Data* object =
      static_cast<const FrameWidgetHost_StartDragging_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->drag_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->drag_data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->operations_allowed, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->operations_allowed, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->image, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bitmap_offset_in_dip, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bitmap_offset_in_dip, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->event_info, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->event_info, validation_context))
    return false;

  return true;
}

FrameWidgetHost_StartDragging_Params_Data::FrameWidgetHost_StartDragging_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PopupWidgetHost_RequestClosePopup_Params_Data::Validate(
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
  [[maybe_unused]] const PopupWidgetHost_RequestClosePopup_Params_Data* object =
      static_cast<const PopupWidgetHost_RequestClosePopup_Params_Data*>(data);

  return true;
}

PopupWidgetHost_RequestClosePopup_Params_Data::PopupWidgetHost_RequestClosePopup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PopupWidgetHost_ShowPopup_Params_Data::Validate(
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
  [[maybe_unused]] const PopupWidgetHost_ShowPopup_Params_Data* object =
      static_cast<const PopupWidgetHost_ShowPopup_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->initial_rect, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->initial_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->anchor_rect, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->anchor_rect, validation_context))
    return false;

  return true;
}

PopupWidgetHost_ShowPopup_Params_Data::PopupWidgetHost_ShowPopup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PopupWidgetHost_ShowPopup_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PopupWidgetHost_ShowPopup_ResponseParams_Data* object =
      static_cast<const PopupWidgetHost_ShowPopup_ResponseParams_Data*>(data);

  return true;
}

PopupWidgetHost_ShowPopup_ResponseParams_Data::PopupWidgetHost_ShowPopup_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PopupWidgetHost_SetPopupBounds_Params_Data::Validate(
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
  [[maybe_unused]] const PopupWidgetHost_SetPopupBounds_Params_Data* object =
      static_cast<const PopupWidgetHost_SetPopupBounds_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounds, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  return true;
}

PopupWidgetHost_SetPopupBounds_Params_Data::PopupWidgetHost_SetPopupBounds_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PopupWidgetHost_SetPopupBounds_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const PopupWidgetHost_SetPopupBounds_ResponseParams_Data* object =
      static_cast<const PopupWidgetHost_SetPopupBounds_ResponseParams_Data*>(data);

  return true;
}

PopupWidgetHost_SetPopupBounds_ResponseParams_Data::PopupWidgetHost_SetPopupBounds_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink