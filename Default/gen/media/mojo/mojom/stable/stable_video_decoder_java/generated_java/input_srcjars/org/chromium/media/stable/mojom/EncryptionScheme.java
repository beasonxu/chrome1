// EncryptionScheme.java is auto generated by mojom_bindings_generator.py, do not edit


// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     media/mojo/mojom/stable/stable_video_decoder_types.mojom
//

package org.chromium.media.stable.mojom;

import androidx.annotation.IntDef;

public final class EncryptionScheme {
    private static final boolean IS_EXTENSIBLE = true;
    @IntDef({

        EncryptionScheme.UNENCRYPTED,
        EncryptionScheme.CENC,
        EncryptionScheme.CBCS})
    public @interface EnumType {}

    public static final int UNENCRYPTED = 0;
    public static final int CENC = 1;
    public static final int CBCS = 2;
    public static final int MIN_VALUE = 0;
    public static final int MAX_VALUE = 2;
    public static final int DEFAULT_VALUE = 0;

    public static boolean isKnownValue(int value) {
        return value >= 0 && value <= 2;
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

    private EncryptionScheme() {}
}