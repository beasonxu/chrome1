// third_party/blink/public/mojom/widget/platform_widget.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/widget/platform_widget.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/widget/platform_widget.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool WidgetCompositor_VisualStateRequest_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetCompositor_VisualStateRequest_Params_Data* object =
      static_cast<const WidgetCompositor_VisualStateRequest_Params_Data*>(data);

  return true;
}

WidgetCompositor_VisualStateRequest_Params_Data::WidgetCompositor_VisualStateRequest_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetCompositor_VisualStateRequest_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const WidgetCompositor_VisualStateRequest_ResponseParams_Data* object =
      static_cast<const WidgetCompositor_VisualStateRequest_ResponseParams_Data*>(data);

  return true;
}

WidgetCompositor_VisualStateRequest_ResponseParams_Data::WidgetCompositor_VisualStateRequest_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_SetCursor_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_SetCursor_Params_Data* object =
      static_cast<const WidgetHost_SetCursor_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cursor, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cursor, validation_context))
    return false;

  return true;
}

WidgetHost_SetCursor_Params_Data::WidgetHost_SetCursor_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_UpdateTooltipUnderCursor_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_UpdateTooltipUnderCursor_Params_Data* object =
      static_cast<const WidgetHost_UpdateTooltipUnderCursor_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tooltip_text, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->tooltip_text, validation_context))
    return false;


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->text_direction_hint, validation_context))
    return false;

  return true;
}

WidgetHost_UpdateTooltipUnderCursor_Params_Data::WidgetHost_UpdateTooltipUnderCursor_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_UpdateTooltipFromKeyboard_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_UpdateTooltipFromKeyboard_Params_Data* object =
      static_cast<const WidgetHost_UpdateTooltipFromKeyboard_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tooltip_text, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->tooltip_text, validation_context))
    return false;


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->text_direction_hint, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounds, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  return true;
}

WidgetHost_UpdateTooltipFromKeyboard_Params_Data::WidgetHost_UpdateTooltipFromKeyboard_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data* object =
      static_cast<const WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data*>(data);

  return true;
}

WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data::WidgetHost_ClearKeyboardTriggeredTooltip_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_TextInputStateChanged_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_TextInputStateChanged_Params_Data* object =
      static_cast<const WidgetHost_TextInputStateChanged_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->state, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->state, validation_context))
    return false;

  return true;
}

WidgetHost_TextInputStateChanged_Params_Data::WidgetHost_TextInputStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_SelectionBoundsChanged_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_SelectionBoundsChanged_Params_Data* object =
      static_cast<const WidgetHost_SelectionBoundsChanged_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->anchor_rect, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->anchor_rect, validation_context))
    return false;


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->anchor_dir, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->focus_rect, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->focus_rect, validation_context))
    return false;


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->focus_dir, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box_rect, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box_rect, validation_context))
    return false;

  return true;
}

WidgetHost_SelectionBoundsChanged_Params_Data::WidgetHost_SelectionBoundsChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_CreateFrameSink_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_CreateFrameSink_Params_Data* object =
      static_cast<const WidgetHost_CreateFrameSink_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->compositor_frame_sink_receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->compositor_frame_sink_receiver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->compositor_frame_sink_client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->compositor_frame_sink_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WidgetHost_CreateFrameSink_Params_Data::WidgetHost_CreateFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data::Validate(
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
  [[maybe_unused]] const WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data* object =
      static_cast<const WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->render_frame_metadata_observer_client_receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->render_frame_metadata_observer_client_receiver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->render_frame_metadata_observer, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->render_frame_metadata_observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data::WidgetHost_RegisterRenderFrameMetadataObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_ForceRedraw_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_ForceRedraw_Params_Data* object =
      static_cast<const Widget_ForceRedraw_Params_Data*>(data);

  return true;
}

Widget_ForceRedraw_Params_Data::Widget_ForceRedraw_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_ForceRedraw_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Widget_ForceRedraw_ResponseParams_Data* object =
      static_cast<const Widget_ForceRedraw_ResponseParams_Data*>(data);

  return true;
}

Widget_ForceRedraw_ResponseParams_Data::Widget_ForceRedraw_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_GetWidgetInputHandler_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_GetWidgetInputHandler_Params_Data* object =
      static_cast<const Widget_GetWidgetInputHandler_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->request,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->host, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->host,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Widget_GetWidgetInputHandler_Params_Data::Widget_GetWidgetInputHandler_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_UpdateVisualProperties_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_UpdateVisualProperties_Params_Data* object =
      static_cast<const Widget_UpdateVisualProperties_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visual_properties, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visual_properties, validation_context))
    return false;

  return true;
}

Widget_UpdateVisualProperties_Params_Data::Widget_UpdateVisualProperties_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_UpdateScreenRects_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_UpdateScreenRects_Params_Data* object =
      static_cast<const Widget_UpdateScreenRects_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->widget_screen_rect, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->widget_screen_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->window_screen_rect, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->window_screen_rect, validation_context))
    return false;

  return true;
}

Widget_UpdateScreenRects_Params_Data::Widget_UpdateScreenRects_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_UpdateScreenRects_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Widget_UpdateScreenRects_ResponseParams_Data* object =
      static_cast<const Widget_UpdateScreenRects_ResponseParams_Data*>(data);

  return true;
}

Widget_UpdateScreenRects_ResponseParams_Data::Widget_UpdateScreenRects_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_WasHidden_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_WasHidden_Params_Data* object =
      static_cast<const Widget_WasHidden_Params_Data*>(data);

  return true;
}

Widget_WasHidden_Params_Data::Widget_WasHidden_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_WasShown_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_WasShown_Params_Data* object =
      static_cast<const Widget_WasShown_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->record_tab_switch_time_request, validation_context))
    return false;

  return true;
}

Widget_WasShown_Params_Data::Widget_WasShown_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_RequestPresentationTimeForNextFrame_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_RequestPresentationTimeForNextFrame_Params_Data* object =
      static_cast<const Widget_RequestPresentationTimeForNextFrame_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_time_request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_time_request, validation_context))
    return false;

  return true;
}

Widget_RequestPresentationTimeForNextFrame_Params_Data::Widget_RequestPresentationTimeForNextFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Widget_CancelPresentationTimeRequest_Params_Data::Validate(
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
  [[maybe_unused]] const Widget_CancelPresentationTimeRequest_Params_Data* object =
      static_cast<const Widget_CancelPresentationTimeRequest_Params_Data*>(data);

  return true;
}

Widget_CancelPresentationTimeRequest_Params_Data::Widget_CancelPresentationTimeRequest_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink