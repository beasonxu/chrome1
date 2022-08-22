
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../media/base/encryption_scheme.h

package org.chromium.media;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    EncryptionScheme.UNENCRYPTED, EncryptionScheme.CENC, EncryptionScheme.CBCS,
    EncryptionScheme.MAX_VALUE
})
@Retention(RetentionPolicy.SOURCE)
public @interface EncryptionScheme {
  int UNENCRYPTED = 0;
  int CENC = 1;
  int CBCS = 2;
  int MAX_VALUE = 2;
}
