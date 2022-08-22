// NdefErrorType.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     services/device/public/mojom/nfc.mojom
//

package org.chromium.device.mojom;

import androidx.annotation.IntDef;

public final class NdefErrorType {
    private static final boolean IS_EXTENSIBLE = false;
    @IntDef({

        NdefErrorType.NOT_ALLOWED,
        NdefErrorType.NOT_SUPPORTED,
        NdefErrorType.NOT_READABLE,
        NdefErrorType.INVALID_MESSAGE,
        NdefErrorType.OPERATION_CANCELLED,
        NdefErrorType.IO_ERROR})
    public @interface EnumType {}

    public static final int NOT_ALLOWED = 0;
    public static final int NOT_SUPPORTED = 1;
    public static final int NOT_READABLE = 2;
    public static final int INVALID_MESSAGE = 3;
    public static final int OPERATION_CANCELLED = 4;
    public static final int IO_ERROR = 5;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 5;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 5;
    }

    public static void validate(int value) {
        if (IS_EXTENSIBLE || isKnownValue(value)) return;
        throw new org.chromium.mojo.bindings.DeserializationException("Invalid enum value.");
    }

    public static int toKnownValue(int value) {
      return value;
    }

    private NdefErrorType() {}
}