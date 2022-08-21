
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../components/download/public/common/resume_mode.h

package org.chromium.components.download;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    ResumeMode.INVALID, ResumeMode.IMMEDIATE_CONTINUE, ResumeMode.IMMEDIATE_RESTART,
    ResumeMode.USER_CONTINUE, ResumeMode.USER_RESTART
})
@Retention(RetentionPolicy.SOURCE)
public @interface ResumeMode {
  int INVALID = 0;
  int IMMEDIATE_CONTINUE = 1;
  int IMMEDIATE_RESTART = 2;
  int USER_CONTINUE = 3;
  int USER_RESTART = 4;
}
