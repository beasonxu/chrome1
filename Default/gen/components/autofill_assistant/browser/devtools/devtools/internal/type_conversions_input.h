// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INPUT_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INPUT_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_input.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<input::TouchPoint> {
  static std::unique_ptr<input::TouchPoint> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::TouchPoint::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::TouchPoint& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<input::GestureSourceType> {
  static input::GestureSourceType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::GestureSourceType::DEFAULT;
    }
    if (value.GetString() == "default")
      return input::GestureSourceType::DEFAULT;
    if (value.GetString() == "touch")
      return input::GestureSourceType::TOUCH;
    if (value.GetString() == "mouse")
      return input::GestureSourceType::MOUSE;
    errors->AddError("invalid enum value");
    return input::GestureSourceType::DEFAULT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::GestureSourceType& value, T*) {
  switch (value) {
    case input::GestureSourceType::DEFAULT:
      return std::make_unique<base::Value>("default");
    case input::GestureSourceType::TOUCH:
      return std::make_unique<base::Value>("touch");
    case input::GestureSourceType::MOUSE:
      return std::make_unique<base::Value>("mouse");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<input::MouseButton> {
  static input::MouseButton Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::MouseButton::NONE;
    }
    if (value.GetString() == "none")
      return input::MouseButton::NONE;
    if (value.GetString() == "left")
      return input::MouseButton::LEFT;
    if (value.GetString() == "middle")
      return input::MouseButton::MIDDLE;
    if (value.GetString() == "right")
      return input::MouseButton::RIGHT;
    if (value.GetString() == "back")
      return input::MouseButton::BACK;
    if (value.GetString() == "forward")
      return input::MouseButton::FORWARD;
    errors->AddError("invalid enum value");
    return input::MouseButton::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::MouseButton& value, T*) {
  switch (value) {
    case input::MouseButton::NONE:
      return std::make_unique<base::Value>("none");
    case input::MouseButton::LEFT:
      return std::make_unique<base::Value>("left");
    case input::MouseButton::MIDDLE:
      return std::make_unique<base::Value>("middle");
    case input::MouseButton::RIGHT:
      return std::make_unique<base::Value>("right");
    case input::MouseButton::BACK:
      return std::make_unique<base::Value>("back");
    case input::MouseButton::FORWARD:
      return std::make_unique<base::Value>("forward");
  };
  NOTREACHED();
  return nullptr;
}


template <>
struct FromValue<input::DragDataItem> {
  static std::unique_ptr<input::DragDataItem> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DragDataItem::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DragDataItem& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::DragData> {
  static std::unique_ptr<input::DragData> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DragData::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DragData& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<input::DispatchDragEventType> {
  static input::DispatchDragEventType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::DispatchDragEventType::DRAG_ENTER;
    }
    if (value.GetString() == "dragEnter")
      return input::DispatchDragEventType::DRAG_ENTER;
    if (value.GetString() == "dragOver")
      return input::DispatchDragEventType::DRAG_OVER;
    if (value.GetString() == "drop")
      return input::DispatchDragEventType::DROP;
    if (value.GetString() == "dragCancel")
      return input::DispatchDragEventType::DRAG_CANCEL;
    errors->AddError("invalid enum value");
    return input::DispatchDragEventType::DRAG_ENTER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchDragEventType& value, T*) {
  switch (value) {
    case input::DispatchDragEventType::DRAG_ENTER:
      return std::make_unique<base::Value>("dragEnter");
    case input::DispatchDragEventType::DRAG_OVER:
      return std::make_unique<base::Value>("dragOver");
    case input::DispatchDragEventType::DROP:
      return std::make_unique<base::Value>("drop");
    case input::DispatchDragEventType::DRAG_CANCEL:
      return std::make_unique<base::Value>("dragCancel");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<input::DispatchDragEventParams> {
  static std::unique_ptr<input::DispatchDragEventParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchDragEventParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchDragEventParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::DispatchDragEventResult> {
  static std::unique_ptr<input::DispatchDragEventResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchDragEventResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchDragEventResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<input::DispatchKeyEventType> {
  static input::DispatchKeyEventType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::DispatchKeyEventType::KEY_DOWN;
    }
    if (value.GetString() == "keyDown")
      return input::DispatchKeyEventType::KEY_DOWN;
    if (value.GetString() == "keyUp")
      return input::DispatchKeyEventType::KEY_UP;
    if (value.GetString() == "rawKeyDown")
      return input::DispatchKeyEventType::RAW_KEY_DOWN;
    if (value.GetString() == "char")
      return input::DispatchKeyEventType::CHAR;
    errors->AddError("invalid enum value");
    return input::DispatchKeyEventType::KEY_DOWN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchKeyEventType& value, T*) {
  switch (value) {
    case input::DispatchKeyEventType::KEY_DOWN:
      return std::make_unique<base::Value>("keyDown");
    case input::DispatchKeyEventType::KEY_UP:
      return std::make_unique<base::Value>("keyUp");
    case input::DispatchKeyEventType::RAW_KEY_DOWN:
      return std::make_unique<base::Value>("rawKeyDown");
    case input::DispatchKeyEventType::CHAR:
      return std::make_unique<base::Value>("char");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<input::DispatchKeyEventParams> {
  static std::unique_ptr<input::DispatchKeyEventParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchKeyEventParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchKeyEventParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::DispatchKeyEventResult> {
  static std::unique_ptr<input::DispatchKeyEventResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchKeyEventResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchKeyEventResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::InsertTextParams> {
  static std::unique_ptr<input::InsertTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::InsertTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::InsertTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::InsertTextResult> {
  static std::unique_ptr<input::InsertTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::InsertTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::InsertTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::ImeSetCompositionParams> {
  static std::unique_ptr<input::ImeSetCompositionParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::ImeSetCompositionParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::ImeSetCompositionParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::ImeSetCompositionResult> {
  static std::unique_ptr<input::ImeSetCompositionResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::ImeSetCompositionResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::ImeSetCompositionResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<input::DispatchMouseEventType> {
  static input::DispatchMouseEventType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::DispatchMouseEventType::MOUSE_PRESSED;
    }
    if (value.GetString() == "mousePressed")
      return input::DispatchMouseEventType::MOUSE_PRESSED;
    if (value.GetString() == "mouseReleased")
      return input::DispatchMouseEventType::MOUSE_RELEASED;
    if (value.GetString() == "mouseMoved")
      return input::DispatchMouseEventType::MOUSE_PTR_MOVED;
    if (value.GetString() == "mouseWheel")
      return input::DispatchMouseEventType::MOUSE_WHEEL;
    errors->AddError("invalid enum value");
    return input::DispatchMouseEventType::MOUSE_PRESSED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchMouseEventType& value, T*) {
  switch (value) {
    case input::DispatchMouseEventType::MOUSE_PRESSED:
      return std::make_unique<base::Value>("mousePressed");
    case input::DispatchMouseEventType::MOUSE_RELEASED:
      return std::make_unique<base::Value>("mouseReleased");
    case input::DispatchMouseEventType::MOUSE_PTR_MOVED:
      return std::make_unique<base::Value>("mouseMoved");
    case input::DispatchMouseEventType::MOUSE_WHEEL:
      return std::make_unique<base::Value>("mouseWheel");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<input::DispatchMouseEventPointerType> {
  static input::DispatchMouseEventPointerType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::DispatchMouseEventPointerType::MOUSE;
    }
    if (value.GetString() == "mouse")
      return input::DispatchMouseEventPointerType::MOUSE;
    if (value.GetString() == "pen")
      return input::DispatchMouseEventPointerType::PEN;
    errors->AddError("invalid enum value");
    return input::DispatchMouseEventPointerType::MOUSE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchMouseEventPointerType& value, T*) {
  switch (value) {
    case input::DispatchMouseEventPointerType::MOUSE:
      return std::make_unique<base::Value>("mouse");
    case input::DispatchMouseEventPointerType::PEN:
      return std::make_unique<base::Value>("pen");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<input::DispatchMouseEventParams> {
  static std::unique_ptr<input::DispatchMouseEventParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchMouseEventParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchMouseEventParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::DispatchMouseEventResult> {
  static std::unique_ptr<input::DispatchMouseEventResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchMouseEventResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchMouseEventResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<input::DispatchTouchEventType> {
  static input::DispatchTouchEventType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::DispatchTouchEventType::TOUCH_START;
    }
    if (value.GetString() == "touchStart")
      return input::DispatchTouchEventType::TOUCH_START;
    if (value.GetString() == "touchEnd")
      return input::DispatchTouchEventType::TOUCH_END;
    if (value.GetString() == "touchMove")
      return input::DispatchTouchEventType::TOUCH_MOVE;
    if (value.GetString() == "touchCancel")
      return input::DispatchTouchEventType::TOUCH_CANCEL;
    errors->AddError("invalid enum value");
    return input::DispatchTouchEventType::TOUCH_START;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchTouchEventType& value, T*) {
  switch (value) {
    case input::DispatchTouchEventType::TOUCH_START:
      return std::make_unique<base::Value>("touchStart");
    case input::DispatchTouchEventType::TOUCH_END:
      return std::make_unique<base::Value>("touchEnd");
    case input::DispatchTouchEventType::TOUCH_MOVE:
      return std::make_unique<base::Value>("touchMove");
    case input::DispatchTouchEventType::TOUCH_CANCEL:
      return std::make_unique<base::Value>("touchCancel");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<input::DispatchTouchEventParams> {
  static std::unique_ptr<input::DispatchTouchEventParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchTouchEventParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchTouchEventParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::DispatchTouchEventResult> {
  static std::unique_ptr<input::DispatchTouchEventResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DispatchTouchEventResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DispatchTouchEventResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<input::EmulateTouchFromMouseEventType> {
  static input::EmulateTouchFromMouseEventType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return input::EmulateTouchFromMouseEventType::MOUSE_PRESSED;
    }
    if (value.GetString() == "mousePressed")
      return input::EmulateTouchFromMouseEventType::MOUSE_PRESSED;
    if (value.GetString() == "mouseReleased")
      return input::EmulateTouchFromMouseEventType::MOUSE_RELEASED;
    if (value.GetString() == "mouseMoved")
      return input::EmulateTouchFromMouseEventType::MOUSE_PTR_MOVED;
    if (value.GetString() == "mouseWheel")
      return input::EmulateTouchFromMouseEventType::MOUSE_WHEEL;
    errors->AddError("invalid enum value");
    return input::EmulateTouchFromMouseEventType::MOUSE_PRESSED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::EmulateTouchFromMouseEventType& value, T*) {
  switch (value) {
    case input::EmulateTouchFromMouseEventType::MOUSE_PRESSED:
      return std::make_unique<base::Value>("mousePressed");
    case input::EmulateTouchFromMouseEventType::MOUSE_RELEASED:
      return std::make_unique<base::Value>("mouseReleased");
    case input::EmulateTouchFromMouseEventType::MOUSE_PTR_MOVED:
      return std::make_unique<base::Value>("mouseMoved");
    case input::EmulateTouchFromMouseEventType::MOUSE_WHEEL:
      return std::make_unique<base::Value>("mouseWheel");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<input::EmulateTouchFromMouseEventParams> {
  static std::unique_ptr<input::EmulateTouchFromMouseEventParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::EmulateTouchFromMouseEventParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::EmulateTouchFromMouseEventParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::EmulateTouchFromMouseEventResult> {
  static std::unique_ptr<input::EmulateTouchFromMouseEventResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::EmulateTouchFromMouseEventResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::EmulateTouchFromMouseEventResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SetIgnoreInputEventsParams> {
  static std::unique_ptr<input::SetIgnoreInputEventsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SetIgnoreInputEventsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SetIgnoreInputEventsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SetIgnoreInputEventsResult> {
  static std::unique_ptr<input::SetIgnoreInputEventsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SetIgnoreInputEventsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SetIgnoreInputEventsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SetInterceptDragsParams> {
  static std::unique_ptr<input::SetInterceptDragsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SetInterceptDragsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SetInterceptDragsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SetInterceptDragsResult> {
  static std::unique_ptr<input::SetInterceptDragsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SetInterceptDragsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SetInterceptDragsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SynthesizePinchGestureParams> {
  static std::unique_ptr<input::SynthesizePinchGestureParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SynthesizePinchGestureParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SynthesizePinchGestureParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SynthesizePinchGestureResult> {
  static std::unique_ptr<input::SynthesizePinchGestureResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SynthesizePinchGestureResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SynthesizePinchGestureResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SynthesizeScrollGestureParams> {
  static std::unique_ptr<input::SynthesizeScrollGestureParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SynthesizeScrollGestureParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SynthesizeScrollGestureParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SynthesizeScrollGestureResult> {
  static std::unique_ptr<input::SynthesizeScrollGestureResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SynthesizeScrollGestureResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SynthesizeScrollGestureResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SynthesizeTapGestureParams> {
  static std::unique_ptr<input::SynthesizeTapGestureParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SynthesizeTapGestureParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SynthesizeTapGestureParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::SynthesizeTapGestureResult> {
  static std::unique_ptr<input::SynthesizeTapGestureResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::SynthesizeTapGestureResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::SynthesizeTapGestureResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<input::DragInterceptedParams> {
  static std::unique_ptr<input::DragInterceptedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return input::DragInterceptedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const input::DragInterceptedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INPUT_H_
