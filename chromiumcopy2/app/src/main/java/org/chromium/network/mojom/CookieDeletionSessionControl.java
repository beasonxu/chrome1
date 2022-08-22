// CookieDeletionSessionControl.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/network/public/mojom/cookie_manager.mojom
//

package org.chromium.network.mojom;

import androidx.annotation.IntDef;

public final class CookieDeletionSessionControl {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        CookieDeletionSessionControl.IGNORE_CONTROL,
        CookieDeletionSessionControl.SESSION_COOKIES,
        CookieDeletionSessionControl.PERSISTENT_COOKIES})
    public @interface EnumType {}

    public static final int IGNORE_CONTROL = 0;
    public static final int SESSION_COOKIES = 1;
    public static final int PERSISTENT_COOKIES = 2;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 2;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 2;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private CookieDeletionSessionControl() {}
}