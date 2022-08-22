// ScrollDirection.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/input/scroll_direction.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;

public final class ScrollDirection {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        ScrollDirection.SCROLL_UP_IGNORING_WRITING_MODE,
        ScrollDirection.SCROLL_DOWN_IGNORING_WRITING_MODE,
        ScrollDirection.SCROLL_LEFT_IGNORING_WRITING_MODE,
        ScrollDirection.SCROLL_RIGHT_IGNORING_WRITING_MODE,
        ScrollDirection.SCROLL_BLOCK_DIRECTION_BACKWARD,
        ScrollDirection.SCROLL_BLOCK_DIRECTION_FORWARD,
        ScrollDirection.SCROLL_INLINE_DIRECTION_BACKWARD,
        ScrollDirection.SCROLL_INLINE_DIRECTION_FORWARD})
    public @interface EnumType {}

    public static final int SCROLL_UP_IGNORING_WRITING_MODE = 0;
    public static final int SCROLL_DOWN_IGNORING_WRITING_MODE = 1;
    public static final int SCROLL_LEFT_IGNORING_WRITING_MODE = 2;
    public static final int SCROLL_RIGHT_IGNORING_WRITING_MODE = 3;
    public static final int SCROLL_BLOCK_DIRECTION_BACKWARD = 4;
    public static final int SCROLL_BLOCK_DIRECTION_FORWARD = 5;
    public static final int SCROLL_INLINE_DIRECTION_BACKWARD = 6;
    public static final int SCROLL_INLINE_DIRECTION_FORWARD = 7;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 7;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 7;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private ScrollDirection() {}
}