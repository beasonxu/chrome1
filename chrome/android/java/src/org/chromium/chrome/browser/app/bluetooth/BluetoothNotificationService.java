// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.app.bluetooth;

import org.chromium.base.annotations.IdentifierNameString;
import org.chromium.chrome.browser.base.SplitCompatService;

/** See {@link BluetoothNotificationServiceImpl}. */
public class BluetoothNotificationService extends SplitCompatService {
    @IdentifierNameString
    private static String sImplClassName =
            "org.chromium.chrome.browser.app.bluetooth.BluetoothNotificationServiceImpl";

    public BluetoothNotificationService() {
        super(sImplClassName);
    }
}
