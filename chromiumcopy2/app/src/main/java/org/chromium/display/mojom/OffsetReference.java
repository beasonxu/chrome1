// OffsetReference.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     ui/display/mojom/display_layout.mojom
//

package org.chromium.display.mojom;

import androidx.annotation.IntDef;

public final class OffsetReference {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        OffsetReference.TOP_LEFT,
        OffsetReference.BOTTOM_RIGHT})
    public @interface EnumType {}

    public static final int TOP_LEFT = 0;
    public static final int BOTTOM_RIGHT = 1;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 1;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 1;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private OffsetReference() {}
}