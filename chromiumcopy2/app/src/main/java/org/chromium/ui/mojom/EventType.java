// EventType.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     ui/events/mojom/event_constants.mojom
//

package org.chromium.ui.mojom;

import androidx.annotation.IntDef;

public final class EventType {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        EventType.UNKNOWN,
        EventType.KEY_PRESSED,
        EventType.KEY_RELEASED,
        EventType.GESTURE_TAP,
        EventType.GESTURE_SWIPE,
        EventType.GESTURE_PINCH_BEGIN,
        EventType.GESTURE_PINCH_END,
        EventType.GESTURE_PINCH_UPDATE,
        EventType.SCROLL,
        EventType.SCROLL_FLING_START,
        EventType.SCROLL_FLING_CANCEL,
        EventType.CANCEL_MODE,
        EventType.MOUSE_PRESSED_EVENT,
        EventType.MOUSE_DRAGGED_EVENT,
        EventType.MOUSE_RELEASED_EVENT,
        EventType.MOUSE_MOVED_EVENT,
        EventType.MOUSE_ENTERED_EVENT,
        EventType.MOUSE_EXITED_EVENT,
        EventType.MOUSE_WHEEL_EVENT,
        EventType.MOUSE_CAPTURE_CHANGED_EVENT,
        EventType.TOUCH_RELEASED,
        EventType.TOUCH_PRESSED,
        EventType.TOUCH_MOVED,
        EventType.TOUCH_CANCELLED})
    public @interface EnumType {}

    public static final int UNKNOWN = 0;
    public static final int KEY_PRESSED = 1;
    public static final int KEY_RELEASED = 2;
    public static final int GESTURE_TAP = 3;
    public static final int GESTURE_SWIPE = 4;
    public static final int GESTURE_PINCH_BEGIN = 5;
    public static final int GESTURE_PINCH_END = 6;
    public static final int GESTURE_PINCH_UPDATE = 7;
    public static final int SCROLL = 8;
    public static final int SCROLL_FLING_START = 9;
    public static final int SCROLL_FLING_CANCEL = 10;
    public static final int CANCEL_MODE = 11;
    public static final int MOUSE_PRESSED_EVENT = 12;
    public static final int MOUSE_DRAGGED_EVENT = 13;
    public static final int MOUSE_RELEASED_EVENT = 14;
    public static final int MOUSE_MOVED_EVENT = 15;
    public static final int MOUSE_ENTERED_EVENT = 16;
    public static final int MOUSE_EXITED_EVENT = 17;
    public static final int MOUSE_WHEEL_EVENT = 18;
    public static final int MOUSE_CAPTURE_CHANGED_EVENT = 19;
    public static final int TOUCH_RELEASED = 20;
    public static final int TOUCH_PRESSED = 21;
    public static final int TOUCH_MOVED = 22;
    public static final int TOUCH_CANCELLED = 23;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 23;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 23;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private EventType() {}
}