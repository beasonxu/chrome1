
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../chrome/browser/android/vr/vrcore_install_helper.h

package org.chromium.chrome.browser.vr;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    VrSupportLevel.VR_DISABLED, VrSupportLevel.VR_NEEDS_UPDATE, VrSupportLevel.VR_CARDBOARD,
    VrSupportLevel.VR_DAYDREAM
})
@Retention(RetentionPolicy.SOURCE)
public @interface VrSupportLevel {
  int VR_DISABLED = 0;
  int VR_NEEDS_UPDATE = 1;
  int VR_CARDBOARD = 2;
  int VR_DAYDREAM = 3;
}
