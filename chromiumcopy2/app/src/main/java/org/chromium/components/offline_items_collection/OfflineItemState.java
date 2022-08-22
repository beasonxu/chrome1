
// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     java_cpp_enum.py
// From
//     ../../components/offline_items_collection/core/offline_item_state.h

package org.chromium.components.offline_items_collection;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    OfflineItemState.IN_PROGRESS, OfflineItemState.PENDING, OfflineItemState.COMPLETE,
    OfflineItemState.CANCELLED, OfflineItemState.INTERRUPTED, OfflineItemState.FAILED,
    OfflineItemState.PAUSED
})
@Retention(RetentionPolicy.SOURCE)
public @interface OfflineItemState {
  int IN_PROGRESS = 0;
  int PENDING = 1;
  int COMPLETE = 2;
  int CANCELLED = 3;
  int INTERRUPTED = 4;
  int FAILED = 5;
  int PAUSED = 6;
  /**
   * downloads resumption.
   */
  int NUM_ENTRIES = 7;
}
