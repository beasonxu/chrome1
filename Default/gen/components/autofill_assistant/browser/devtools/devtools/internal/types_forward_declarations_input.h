// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_INPUT_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_INPUT_H_

#include "base/values.h"

namespace autofill_assistant {

namespace input {
class TouchPoint;
class DragDataItem;
class DragData;
class DispatchDragEventParams;
class DispatchDragEventResult;
class DispatchKeyEventParams;
class DispatchKeyEventResult;
class InsertTextParams;
class InsertTextResult;
class ImeSetCompositionParams;
class ImeSetCompositionResult;
class DispatchMouseEventParams;
class DispatchMouseEventResult;
class DispatchTouchEventParams;
class DispatchTouchEventResult;
class EmulateTouchFromMouseEventParams;
class EmulateTouchFromMouseEventResult;
class SetIgnoreInputEventsParams;
class SetIgnoreInputEventsResult;
class SetInterceptDragsParams;
class SetInterceptDragsResult;
class SynthesizePinchGestureParams;
class SynthesizePinchGestureResult;
class SynthesizeScrollGestureParams;
class SynthesizeScrollGestureResult;
class SynthesizeTapGestureParams;
class SynthesizeTapGestureResult;
class DragInterceptedParams;

enum class GestureSourceType {
  DEFAULT,
  TOUCH,
  MOUSE
};

enum class MouseButton {
  NONE,
  LEFT,
  MIDDLE,
  RIGHT,
  BACK,
  FORWARD
};

enum class DispatchDragEventType {
  DRAG_ENTER,
  DRAG_OVER,
  DROP,
  DRAG_CANCEL
};

enum class DispatchKeyEventType {
  KEY_DOWN,
  KEY_UP,
  RAW_KEY_DOWN,
  CHAR
};

enum class DispatchMouseEventType {
  MOUSE_PRESSED,
  MOUSE_RELEASED,
  MOUSE_PTR_MOVED,
  MOUSE_WHEEL
};

enum class DispatchMouseEventPointerType {
  MOUSE,
  PEN
};

enum class DispatchTouchEventType {
  TOUCH_START,
  TOUCH_END,
  TOUCH_MOVE,
  TOUCH_CANCEL
};

enum class EmulateTouchFromMouseEventType {
  MOUSE_PRESSED,
  MOUSE_RELEASED,
  MOUSE_PTR_MOVED,
  MOUSE_WHEEL
};

}  // namespace input

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_INPUT_H_
