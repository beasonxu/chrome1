// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.background_task_scheduler;

import org.chromium.base.Log;
import org.chromium.base.library_loader.ProcessInitException;
import org.chromium.base.task.PostTask;
import org.chromium.chrome.browser.init.BrowserParts;
import org.chromium.chrome.browser.init.ChromeBrowserInitializer;
import org.chromium.chrome.browser.init.EmptyBrowserParts;
import org.chromium.components.background_task_scheduler.BackgroundTaskSchedulerExternalUma;
import org.chromium.components.background_task_scheduler.BackgroundTaskSchedulerFactory;
import org.chromium.components.background_task_scheduler.NativeBackgroundTaskDelegate;
import org.chromium.content_public.browser.UiThreadTaskTraits;

/**
 * Chrome implementation of {@link NativeBackgroundTaskDelegate} that handles native initialization.
 */
public class ChromeNativeBackgroundTaskDelegate implements NativeBackgroundTaskDelegate {
    private static final String TAG = "BTS_NativeBkgrdTask";

    @Override
    public void initializeNativeAsync(
            boolean minimalBrowserMode, Runnable onSuccess, Runnable onFailure) {
        final BrowserParts parts = new EmptyBrowserParts() {
            @Override
            public void finishNativeInitialization() {
                PostTask.postTask(UiThreadTaskTraits.DEFAULT, onSuccess);
            }
            @Override
            public boolean startMinimalBrowser() {
                return minimalBrowserMode;
            }
            @Override
            public void onStartupFailure(Exception failureCause) {
                PostTask.postTask(UiThreadTaskTraits.DEFAULT, onFailure);
            }
        };

        try {
            ChromeBrowserInitializer.getInstance().handlePreNativeStartupAndLoadLibraries(parts);

            ChromeBrowserInitializer.getInstance().handlePostNativeStartup(
                    true /* isAsync */, parts);
        } catch (ProcessInitException e) {
            Log.e(TAG, "Background Launch Error", e);
            onFailure.run();
        }
    }

    @Override
    public BackgroundTaskSchedulerExternalUma getUmaReporter() {
        return BackgroundTaskSchedulerFactory.getUmaReporter();
    }
}
