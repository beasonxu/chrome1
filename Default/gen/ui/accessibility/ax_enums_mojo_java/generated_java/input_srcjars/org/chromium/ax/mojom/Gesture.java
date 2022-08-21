// Gesture.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     ui/accessibility/ax_enums.mojom
//

package org.chromium.ax.mojom;

import androidx.annotation.IntDef;

public final class Gesture {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        Gesture.NONE,
        Gesture.CLICK,
        Gesture.SWIPE_LEFT1,
        Gesture.SWIPE_UP1,
        Gesture.SWIPE_RIGHT1,
        Gesture.SWIPE_DOWN1,
        Gesture.SWIPE_LEFT2,
        Gesture.SWIPE_UP2,
        Gesture.SWIPE_RIGHT2,
        Gesture.SWIPE_DOWN2,
        Gesture.SWIPE_LEFT3,
        Gesture.SWIPE_UP3,
        Gesture.SWIPE_RIGHT3,
        Gesture.SWIPE_DOWN3,
        Gesture.SWIPE_LEFT4,
        Gesture.SWIPE_UP4,
        Gesture.SWIPE_RIGHT4,
        Gesture.SWIPE_DOWN4,
        Gesture.TAP2,
        Gesture.TAP3,
        Gesture.TAP4,
        Gesture.TOUCH_EXPLORE})
    public @interface EnumType {}

    public static final int NONE = 0;
    public static final int CLICK = 1;
    public static final int SWIPE_LEFT1 = 2;
    public static final int SWIPE_UP1 = 3;
    public static final int SWIPE_RIGHT1 = 4;
    public static final int SWIPE_DOWN1 = 5;
    public static final int SWIPE_LEFT2 = 6;
    public static final int SWIPE_UP2 = 7;
    public static final int SWIPE_RIGHT2 = 8;
    public static final int SWIPE_DOWN2 = 9;
    public static final int SWIPE_LEFT3 = 10;
    public static final int SWIPE_UP3 = 11;
    public static final int SWIPE_RIGHT3 = 12;
    public static final int SWIPE_DOWN3 = 13;
    public static final int SWIPE_LEFT4 = 14;
    public static final int SWIPE_UP4 = 15;
    public static final int SWIPE_RIGHT4 = 16;
    public static final int SWIPE_DOWN4 = 17;
    public static final int TAP2 = 18;
    public static final int TAP3 = 19;
    public static final int TAP4 = 20;
    public static final int TOUCH_EXPLORE = 21;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 21;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 21;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private Gesture() {}
}