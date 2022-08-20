// DisplayConnectionType.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     ui/display/mojom/display_constants.mojom
//

package org.chromium.display.mojom;

import androidx.annotation.IntDef;

public final class DisplayConnectionType {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_NONE,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_UNKNOWN,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_INTERNAL,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_VGA,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_HDMI,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_DVI,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_DISPLAYPORT,
        DisplayConnectionType.DISPLAY_CONNECTION_TYPE_NETWORK})
    public @interface EnumType {}

    public static final int DISPLAY_CONNECTION_TYPE_NONE = 0;
    public static final int DISPLAY_CONNECTION_TYPE_UNKNOWN = 1;
    public static final int DISPLAY_CONNECTION_TYPE_INTERNAL = 2;
    public static final int DISPLAY_CONNECTION_TYPE_VGA = 4;
    public static final int DISPLAY_CONNECTION_TYPE_HDMI = 8;
    public static final int DISPLAY_CONNECTION_TYPE_DVI = 16;
    public static final int DISPLAY_CONNECTION_TYPE_DISPLAYPORT = 32;
    public static final int DISPLAY_CONNECTION_TYPE_NETWORK = 64;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 64;

    public static boolean isKnownValue(int value) {
        switch (value) {
            case 0:
            case 1:
            case 2:
            case 4:
            case 8:
            case 16:
            case 32:
            case 64:
                return true;
        }
        return false;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private DisplayConnectionType() {}
}