// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.download;

import org.chromium.base.annotations.IdentifierNameString;
import org.chromium.chrome.browser.base.SplitCompatService;

/** See {@link DownloadBroadcastManagerImpl}. */
public class DownloadBroadcastManager extends SplitCompatService {
    @IdentifierNameString
    private static String sImplClassName =
            "org.chromium.chrome.browser.download.DownloadBroadcastManagerImpl";

    public DownloadBroadcastManager() {
        super(sImplClassName);
    }
}
