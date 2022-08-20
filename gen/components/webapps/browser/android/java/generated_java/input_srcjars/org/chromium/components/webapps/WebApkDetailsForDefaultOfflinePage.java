
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../components/webapps/browser/android/webapk/webapk_types.h

package org.chromium.components.webapps;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    WebApkDetailsForDefaultOfflinePage.SHORT_NAME, WebApkDetailsForDefaultOfflinePage.ICON,
    WebApkDetailsForDefaultOfflinePage.BACKGROUND_COLOR,
    WebApkDetailsForDefaultOfflinePage.BACKGROUND_COLOR_DARK_MODE,
    WebApkDetailsForDefaultOfflinePage.THEME_COLOR,
    WebApkDetailsForDefaultOfflinePage.THEME_COLOR_DARK_MODE
})
@Retention(RetentionPolicy.SOURCE)
public @interface WebApkDetailsForDefaultOfflinePage {
  int SHORT_NAME = 0;
  int ICON = 1;
  int BACKGROUND_COLOR = 2;
  int BACKGROUND_COLOR_DARK_MODE = 3;
  int THEME_COLOR = 4;
  int THEME_COLOR_DARK_MODE = 5;
}
