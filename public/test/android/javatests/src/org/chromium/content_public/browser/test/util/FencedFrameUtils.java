// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.content_public.browser.test.util;

import org.junit.Assert;

import org.chromium.base.annotations.JNINamespace;
import org.chromium.base.test.util.CallbackHelper;
import org.chromium.content_public.browser.NavigationHandle;
import org.chromium.content_public.browser.RenderFrameHost;
import org.chromium.content_public.browser.WebContents;
import org.chromium.content_public.browser.WebContentsObserver;
import org.chromium.content_public.browser.test.RenderFrameHostTestExt;

import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/**
 * This class implements FencedFrameUtils
 */
@JNINamespace("content")
public class FencedFrameUtils {
    private FencedFrameUtils() {
        // no-op constructor; won't be called.
    }

    private static int getCount(final RenderFrameHost frame) {
        return TestThreadUtils.runOnUiThreadBlockingNoException(
                () -> { return nativeGetCount(frame); });
    }

    private static RenderFrameHost getLastFencedFrame(
            final RenderFrameHost frame, final String url) {
        return TestThreadUtils.runOnUiThreadBlockingNoException(
                () -> { return nativeGetLastFencedFrame(frame, url); });
    }

    public static RenderFrameHost createFencedFrame(final WebContents webContents,
            final RenderFrameHost parentFrame, String url) throws TimeoutException {
        RenderFrameHostTestExt frameExt = TestThreadUtils.runOnUiThreadBlockingNoException(
                () -> new RenderFrameHostTestExt(parentFrame));

        int previousFencedFrameCount = getCount(parentFrame);
        final CountDownLatch latch = new CountDownLatch(1);
        TestThreadUtils.runOnUiThreadBlocking(() -> {
            new WebContentsObserver(webContents) {
                @Override
                public void didFinishNavigation(NavigationHandle navigation) {
                    latch.countDown();
                    webContents.removeObserver(this);
                }
            };

            String script = "((async() => {"
                    + " const fenced_frame = document.createElement('fencedframe');"
                    + " fenced_frame.src = '" + url + "';"
                    + " document.body.appendChild(fenced_frame);"
                    + "})());";
            frameExt.executeJavaScript(script, (String r) -> {});
        });

        try {
            Assert.assertTrue(latch.await(CallbackHelper.WAIT_TIMEOUT_SECONDS, TimeUnit.SECONDS));
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }

        Assert.assertEquals(previousFencedFrameCount + 1, getCount(parentFrame));
        RenderFrameHost fencedFrame = getLastFencedFrame(parentFrame, url);
        Assert.assertNotNull(fencedFrame);
        return fencedFrame;
    }

    private static native int nativeGetCount(RenderFrameHost frame);
    private static native RenderFrameHost nativeGetLastFencedFrame(
            RenderFrameHost frame, String url);
}
