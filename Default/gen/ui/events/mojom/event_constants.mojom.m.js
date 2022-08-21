// ui/events/mojom/event_constants.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';


/**
 * @const { !number }
 */
export const EVENT_FLAG_NONE = 0x00000;


/**
 * @const { !number }
 */
export const EVENT_FLAG_IS_SYNTHESIZED = 0x00001;


/**
 * @const { !number }
 */
export const EVENT_FLAG_SHIFT_DOWN = 0x00002;


/**
 * @const { !number }
 */
export const EVENT_FLAG_CONTROL_DOWN = 0x00004;


/**
 * @const { !number }
 */
export const EVENT_FLAG_ALT_DOWN = 0x00008;


/**
 * @const { !number }
 */
export const EVENT_FLAG_COMMAND_DOWN = 0x00010;


/**
 * @const { !number }
 */
export const EVENT_FLAG_FUNCTION_DOWN = 0x00020;


/**
 * @const { !number }
 */
export const EVENT_FLAG_ALTGR_DOWN = 0x00040;


/**
 * @const { !number }
 */
export const EVENT_FLAG_MOD3_DOWN = 0x00080;


/**
 * @const { !number }
 */
export const EVENT_FLAG_NUM_LOCK_ON = 0x00100;


/**
 * @const { !number }
 */
export const EVENT_FLAG_CAPS_LOCK_ON = 0x00200;


/**
 * @const { !number }
 */
export const EVENT_FLAG_SCROLL_LOCK_ON = 0x00400;


/**
 * @const { !number }
 */
export const EVENT_FLAG_LEFT_MOUSE_BUTTON = 0x00800;


/**
 * @const { !number }
 */
export const EVENT_FLAG_MIDDLE_MOUSE_BUTTON = 0x01000;


/**
 * @const { !number }
 */
export const EVENT_FLAG_RIGHT_MOUSE_BUTTON = 0x02000;


/**
 * @const { !number }
 */
export const EVENT_FLAG_BACK_MOUSE_BUTTON = 0x04000;


/**
 * @const { !number }
 */
export const EVENT_FLAG_FORWARD_MOUSE_BUTTON = 0x08000;


/**
 * @const { !number }
 */
export const MOUSE_EVENT_FLAG_IS_DOUBLE_CLICK = 0x10000;


/**
 * @const { !number }
 */
export const MOUSE_EVENT_FLAG_IS_TRIPLE_CLICK = 0x20000;


/**
 * @const { !number }
 */
export const MOUSE_EVENT_FLAG_IS_NON_CLIENT = 0x40000;


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const AcceleratorPhaseSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const AcceleratorPhase = {
  
  PRE_TARGET: 0,
  POST_TARGET: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const EventTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const EventType = {
  
  UNKNOWN: 0,
  KEY_PRESSED: 1,
  KEY_RELEASED: 2,
  GESTURE_TAP: 3,
  GESTURE_SWIPE: 4,
  GESTURE_PINCH_BEGIN: 5,
  GESTURE_PINCH_END: 6,
  GESTURE_PINCH_UPDATE: 7,
  SCROLL: 8,
  SCROLL_FLING_START: 9,
  SCROLL_FLING_CANCEL: 10,
  CANCEL_MODE: 11,
  MOUSE_PRESSED_EVENT: 12,
  MOUSE_DRAGGED_EVENT: 13,
  MOUSE_RELEASED_EVENT: 14,
  MOUSE_MOVED_EVENT: 15,
  MOUSE_ENTERED_EVENT: 16,
  MOUSE_EXITED_EVENT: 17,
  MOUSE_WHEEL_EVENT: 18,
  MOUSE_CAPTURE_CHANGED_EVENT: 19,
  TOUCH_RELEASED: 20,
  TOUCH_PRESSED: 21,
  TOUCH_MOVED: 22,
  TOUCH_CANCELLED: 23,
  MIN_VALUE: 0,
  MAX_VALUE: 23,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const EventPointerTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const EventPointerType = {
  
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ScrollEventPhaseSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ScrollEventPhase = {
  
  kNone: 0,
  kBegan: 1,
  kUpdate: 2,
  kEnd: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const EventMomentumPhaseSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const EventMomentumPhase = {
  
  NONE: 0,
  BEGAN: 1,
  MAY_BEGIN: 2,
  INERTIAL_UPDATE: 3,
  END: 4,
  BLOCKED: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const GestureDeviceTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const GestureDeviceType = {
  
  DEVICE_UNKNOWN: 0,
  DEVICE_TOUCHPAD: 1,
  DEVICE_TOUCHSCREEN: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



