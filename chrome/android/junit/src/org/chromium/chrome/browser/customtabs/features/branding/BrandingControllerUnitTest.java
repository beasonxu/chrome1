// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.customtabs.features.branding;

import static org.junit.Assert.assertEquals;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.never;
import static org.mockito.Mockito.times;
import static org.mockito.Mockito.verify;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;

import org.junit.After;
import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.junit.MockitoJUnit;
import org.mockito.junit.MockitoRule;
import org.robolectric.Shadows;
import org.robolectric.annotation.Config;
import org.robolectric.annotation.LooperMode;
import org.robolectric.annotation.LooperMode.Mode;
import org.robolectric.shadows.ShadowSystemClock;
import org.robolectric.shadows.ShadowToast;

import org.chromium.base.ContextUtils;
import org.chromium.base.FakeTimeTestRule;
import org.chromium.base.TimeUtils;
import org.chromium.base.task.TaskTraits;
import org.chromium.base.task.test.ShadowPostTask;
import org.chromium.base.test.BaseRobolectricTestRunner;

import java.util.concurrent.TimeUnit;

/**
 * Unit test for {@link BrandingController} and {@link SharedPreferencesBrandingTimeStorage}.
 */
@RunWith(BaseRobolectricTestRunner.class)
@Config(manifest = Config.NONE,
        shadows = {ShadowSystemClock.class, ShadowPostTask.class, ShadowToast.class})
@LooperMode(Mode.PAUSED)
public class BrandingControllerUnitTest {
    private static final int TEST_BRANDING_CADENCE = 10_000;
    private static final int TEST_MAX_TOOLBAR_BLANK_TIMEOUT = 1000;

    @Rule
    public MockitoRule mTestRule = MockitoJUnit.rule();
    @Rule
    public FakeTimeTestRule mFakeTimeTestRule = new FakeTimeTestRule();

    @Mock
    ToolbarBrandingDelegate mToolbarBrandingDelegate;

    private BrandingController mBrandingController;
    private ShadowPostTask.TestImpl mShadowPostTaskImpl;

    @Before
    public void setup() {
        mShadowPostTaskImpl = new ShadowPostTask.TestImpl() {
            final Handler mHandler = new Handler(Looper.getMainLooper());

            @Override
            public void postDelayedTask(TaskTraits taskTraits, Runnable task, long delay) {
                mHandler.postDelayed(task, delay);
            }
        };
        ShadowPostTask.setTestImpl(mShadowPostTaskImpl);

        SystemClock.setCurrentTimeMillis(TimeUtils.currentTimeMillis());

        BrandingController.BRANDING_CADENCE_MS.setForTesting(TEST_BRANDING_CADENCE);
        BrandingController.MAX_BLANK_TOOLBAR_TIMEOUT_MS.setForTesting(
                TEST_MAX_TOOLBAR_BLANK_TIMEOUT);
        BrandingController.USE_TEMPORARY_STORAGE.setForTesting(false);
    }

    @After
    public void tearDown() {
        mFakeTimeTestRule.resetTimes();
        SharedPreferencesBrandingTimeStorage.getInstance().resetSharedPref();
        ShadowPostTask.reset();
        ShadowSystemClock.reset();
        ShadowToast.reset();
    }

    @Test
    public void testBrandingWorkflow_FirstTime() {
        new BrandingCheckTester()
                .newBrandingController()
                .assertBrandingDecisionMade(null)
                .idleMainLooper() // Finish branding checker
                .assertBrandingDecisionMade(BrandingDecision.TOAST)
                .assertShownEmptyLocationBar(false)
                .onToolbarInitialized()
                .assertShownEmptyLocationBar(true)
                .assertShownBrandingLocationBar(false)
                .assertShownRegularLocationBar(true);
    }

    @Test
    public void testBrandingWorkflow_EmptyToolbarWithinCadence() {
        new BrandingCheckTester()
                .newBrandingController()
                .idleMainLooper() // Finish branding checker.
                .onToolbarInitialized()
                .assertShownToastBranding(true)
                .assertShownBrandingLocationBar(false)
                .assertShownRegularLocationBar(true)
                // Start 2nd branding immediately.
                .newBrandingController()
                .idleMainLooper()
                .assertBrandingDecisionMade(BrandingDecision.NONE)
                .onToolbarInitialized()
                .assertShownToastBranding(false)
                .assertShownEmptyLocationBar(true)
                .assertShownBrandingLocationBar(false)
                .assertShownRegularLocationBar(true);
    }

    @Test
    public void testBrandingWorkflow_ShowToolbarBranding() {
        new BrandingCheckTester()
                .newBrandingController()
                .idleMainLooper() // Finish branding checker.
                .assertBrandingDecisionMade(BrandingDecision.TOAST)
                .onToolbarInitialized()
                .assertShownToastBranding(true)
                .assertShownRegularLocationBar(true)
                // Start 2nd branding with delay.
                .advanceMills(TEST_BRANDING_CADENCE + 1)
                .newBrandingController()
                .idleMainLooper() // Finish branding checker.
                .assertBrandingDecisionMade(BrandingDecision.TOOLBAR)
                .onToolbarInitialized()
                .assertShownBrandingLocationBar(true)
                .assertShownToastBranding(false)
                .advanceMills(BrandingController.TOTAL_BRANDING_DELAY_MS + 1)
                .idleMainLooper() // Finish toolbar branding
                .assertShownRegularLocationBar(true);
    }

    @Test
    public void testBrandingWorkflow_CheckDoneLaterThanToolbar() {
        new BrandingCheckTester()
                .newBrandingController()
                .onToolbarInitialized()
                .assertShownEmptyLocationBar(true)
                .assertBrandingDecisionMade(null)
                .assertShownBrandingLocationBar(false)
                .advanceMills(300)
                .idleMainLooper() // Finish branding checker.
                .assertBrandingDecisionMade(BrandingDecision.TOAST)
                .assertShownToastBranding(true)
                .assertShownRegularLocationBar(true);
    }

    @Test
    public void testBrandingWorkflow_CheckerTimeout() {
        new BrandingCheckTester()
                .newBrandingController()
                .onToolbarInitialized()
                .idleMainLooper()
                .assertBrandingDecisionMade(BrandingDecision.TOAST)
                .assertShownToastBranding(true)
                .newBrandingController()
                .onToolbarInitialized()
                .advanceMills(TEST_MAX_TOOLBAR_BLANK_TIMEOUT)
                .idleMainLooper() // Branding checker is finished, but timed out comes first.
                .assertBrandingDecisionMade(BrandingDecision.TOAST)
                .assertShownRegularLocationBar(true);

        // BrandingController.TOTAL_BRANDING_DELAY_MS - TEST_MAX_TOOLBAR_BLANK_TIMEOUT = 800
        assertEquals(
                "Toast duration is different.", 800, ShadowToast.getLatestToast().getDuration());
    }

    @Test
    public void testInMemoryStorage() {
        BrandingController.USE_TEMPORARY_STORAGE.setForTesting(true);

        new BrandingCheckTester()
                .newBrandingController()
                .idleMainLooper()
                .onToolbarInitialized()
                .assertBrandingDecisionMade(BrandingDecision.TOAST)
                .assertShownBrandingLocationBar(false)
                .advanceMills(TEST_BRANDING_CADENCE - 1)
                .newBrandingController()
                .idleMainLooper()
                .onToolbarInitialized()
                .assertBrandingDecisionMade(BrandingDecision.NONE)
                // Advance one more bit so branding will show again with toolbar.
                .advanceMills(1)
                .newBrandingController()
                .idleMainLooper()
                .onToolbarInitialized()
                .assertBrandingDecisionMade(BrandingDecision.TOOLBAR);

        SharedPreferencesBrandingTimeStorage.resetInstanceForTesting();

        // After reset storage instance, decision should be in use again.
        new BrandingCheckTester()
                .newBrandingController()
                .idleMainLooper()
                .onToolbarInitialized()
                .assertBrandingDecisionMade(BrandingDecision.TOAST);
    }

    class BrandingCheckTester {
        public BrandingCheckTester newBrandingController() {
            Context context = ContextUtils.getApplicationContext();
            mBrandingController = new BrandingController(context, context.getPackageName());

            // Always initialize a new mock, as some tests were testing multiple branding runs.
            mToolbarBrandingDelegate = mock(ToolbarBrandingDelegate.class);
            ShadowToast.reset(); // Reset the shadow toast so the toast shown count resets.
            return this;
        }

        public BrandingCheckTester assertShownEmptyLocationBar(boolean shown) {
            verify(mToolbarBrandingDelegate, shown ? times(1) : never()).showEmptyLocationBar();
            return this;
        }

        public BrandingCheckTester assertShownBrandingLocationBar(boolean shown) {
            verify(mToolbarBrandingDelegate, shown ? times(1) : never()).showBrandingLocationBar();
            return this;
        }

        public BrandingCheckTester assertShownRegularLocationBar(boolean shown) {
            verify(mToolbarBrandingDelegate, shown ? times(1) : never()).showRegularToolbar();
            return this;
        }

        public BrandingCheckTester assertBrandingDecisionMade(@BrandingDecision Integer decision) {
            assertEquals("BrandingDecision is different.", decision,
                    mBrandingController.getBrandingDecisionForTest());
            return this;
        }

        public BrandingCheckTester assertShownToastBranding(boolean shown) {
            assertEquals("Toast shown count does not match.", shown ? 1 : 0,
                    ShadowToast.shownToastCount());
            return this;
        }

        public BrandingCheckTester onToolbarInitialized() {
            mBrandingController.onToolbarInitialized(mToolbarBrandingDelegate);
            return this;
        }

        public BrandingCheckTester idleMainLooper() {
            Shadows.shadowOf(Looper.getMainLooper()).idle();
            return this;
        }

        public BrandingCheckTester advanceMills(long duration) {
            ShadowSystemClock.advanceBy(duration, TimeUnit.MILLISECONDS);
            mFakeTimeTestRule.advanceMillis(duration);
            return this;
        }
    }
}
