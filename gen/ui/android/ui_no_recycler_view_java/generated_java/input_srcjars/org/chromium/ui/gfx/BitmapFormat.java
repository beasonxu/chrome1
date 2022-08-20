
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../ui/gfx/android/java_bitmap.h

package org.chromium.ui.gfx;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    BitmapFormat.NO_CONFIG, BitmapFormat.ARGB_8888, BitmapFormat.RGB_565, BitmapFormat.ARGB_4444,
    BitmapFormat.ALPHA_8
})
@Retention(RetentionPolicy.SOURCE)
public @interface BitmapFormat {
  int NO_CONFIG = 0;
  int ARGB_8888 = 1;
  int RGB_565 = 4;
  int ARGB_4444 = 7;
  int ALPHA_8 = 8;
}
