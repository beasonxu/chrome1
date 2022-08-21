// ScreenAvailability.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/presentation/presentation.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;

public final class ScreenAvailability {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        ScreenAvailability.UNKNOWN,
        ScreenAvailability.UNAVAILABLE,
        ScreenAvailability.SOURCE_NOT_SUPPORTED,
        ScreenAvailability.DISABLED,
        ScreenAvailability.AVAILABLE})
    public @interface EnumType {}

    public static final int UNKNOWN = 0;
    public static final int UNAVAILABLE = 1;
    public static final int SOURCE_NOT_SUPPORTED = 2;
    public static final int DISABLED = 3;
    public static final int AVAILABLE = 4;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 4;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 4;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private ScreenAvailability() {}
}