// BoolAttribute.java is auto generated by mojom_bindings_generator.py, do not edit


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

public final class BoolAttribute {
    private static final boolean IS_EXTENSIBLE = true;
    @IntDef({

        BoolAttribute.NONE,
        BoolAttribute.BUSY,
        BoolAttribute.NON_ATOMIC_TEXT_FIELD_ROOT,
        BoolAttribute.CONTAINER_LIVE_ATOMIC,
        BoolAttribute.CONTAINER_LIVE_BUSY,
        BoolAttribute.LIVE_ATOMIC,
        BoolAttribute.MODAL,
        BoolAttribute.UPDATE_LOCATION_ONLY,
        BoolAttribute.CANVAS_HAS_FALLBACK,
        BoolAttribute.SCROLLABLE,
        BoolAttribute.CLICKABLE,
        BoolAttribute.CLIPS_CHILDREN,
        BoolAttribute.NOT_USER_SELECTABLE_STYLE,
        BoolAttribute.SELECTED,
        BoolAttribute.SELECTED_FROM_FOCUS,
        BoolAttribute.SUPPORTS_TEXT_LOCATION,
        BoolAttribute.GRABBED,
        BoolAttribute.IS_LINE_BREAKING_OBJECT,
        BoolAttribute.IS_PAGE_BREAKING_OBJECT,
        BoolAttribute.HAS_ARIA_ATTRIBUTE,
        BoolAttribute.TOUCH_PASSTHROUGH})
    public @interface EnumType {}

    public static final int NONE = 0;
    public static final int BUSY = 1;
    public static final int NON_ATOMIC_TEXT_FIELD_ROOT = 2;
    public static final int CONTAINER_LIVE_ATOMIC = 3;
    public static final int CONTAINER_LIVE_BUSY = 4;
    public static final int LIVE_ATOMIC = 5;
    public static final int MODAL = 6;
    public static final int UPDATE_LOCATION_ONLY = 7;
    public static final int CANVAS_HAS_FALLBACK = 8;
    public static final int SCROLLABLE = 9;
    public static final int CLICKABLE = 10;
    public static final int CLIPS_CHILDREN = 11;
    public static final int NOT_USER_SELECTABLE_STYLE = 12;
    public static final int SELECTED = 13;
    public static final int SELECTED_FROM_FOCUS = 14;
    public static final int SUPPORTS_TEXT_LOCATION = 15;
    public static final int GRABBED = 16;
    public static final int IS_LINE_BREAKING_OBJECT = 17;
    public static final int IS_PAGE_BREAKING_OBJECT = 18;
    public static final int HAS_ARIA_ATTRIBUTE = 19;
    public static final int TOUCH_PASSTHROUGH = 20;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 20;
    public static final int DEFAULT_VALUE = 0;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 20;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      if (isKnownValue(value)) {
        return value;
      }
      return DEFAULT_VALUE;
    }

    private BoolAttribute() {}
}