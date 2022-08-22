// StreamSelectionStrategy.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     third_party/blink/public/mojom/mediastream/media_stream.mojom
//

package org.chromium.blink.mojom;

import androidx.annotation.IntDef;

public final class StreamSelectionStrategy {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        StreamSelectionStrategy.SEARCH_BY_SESSION_ID,
        StreamSelectionStrategy.SEARCH_BY_DEVICE_ID,
        StreamSelectionStrategy.FORCE_NEW_STREAM})
    public @interface EnumType {}

    public static final int SEARCH_BY_SESSION_ID = 0;
    public static final int SEARCH_BY_DEVICE_ID = 1;
    public static final int FORCE_NEW_STREAM = 2;
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

    private StreamSelectionStrategy() {}
}