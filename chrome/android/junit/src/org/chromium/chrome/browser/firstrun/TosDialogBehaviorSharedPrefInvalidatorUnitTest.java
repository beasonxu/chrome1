// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.firstrun;

import static org.mockito.ArgumentMatchers.any;

import androidx.test.filters.SmallTest;

import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.Mockito;
import org.mockito.junit.MockitoJUnit;
import org.mockito.junit.MockitoRule;
import org.robolectric.annotation.Config;
import org.robolectric.annotation.LooperMode;

import org.chromium.base.Callback;
import org.chromium.base.test.BaseRobolectricTestRunner;
import org.chromium.chrome.browser.policy.PolicyServiceFactory;
import org.chromium.components.policy.PolicyService;
import org.chromium.content_public.browser.test.util.TestThreadUtils;

/** Unit test for {@link TosDialogBehaviorSharedPrefInvalidator}. */
@RunWith(BaseRobolectricTestRunner.class)
@Config(manifest = Config.NONE)
@LooperMode(LooperMode.Mode.LEGACY)
public class TosDialogBehaviorSharedPrefInvalidatorUnitTest {
    @Rule
    public MockitoRule mMockitoRule = MockitoJUnit.rule();
    @Mock
    public FirstRunAppRestrictionInfo mMockAppRestrictionInfo;
    @Mock
    public PolicyService mMockPolicyService;
    @Mock
    public SkipTosDialogPolicyListener mMockPolicyListener;

    private TosDialogBehaviorSharedPrefInvalidator mStatusHelper;
    private Callback<Boolean> mOnPolicyAvailableCallback;

    @Before
    public void setUp() {
        Mockito.doAnswer(invocation -> {
                   mOnPolicyAvailableCallback = invocation.getArgument(0);
                   return null;
               })
                .when(mMockPolicyListener)
                .onAvailable(any());
        Mockito.doReturn(null).when(mMockPolicyListener).get();

        FirstRunStatus.setFirstRunSkippedByPolicy(false);
        FirstRunAppRestrictionInfo.setInitializedInstanceForTest(mMockAppRestrictionInfo);
        PolicyServiceFactory.setPolicyServiceForTest(mMockPolicyService);
    }

    @After
    public void tearDown() {
        FirstRunStatus.setFirstRunSkippedByPolicy(false);
        FirstRunAppRestrictionInfo.setInitializedInstanceForTest(null);
        PolicyServiceFactory.setPolicyServiceForTest(null);
    }

    @Test
    @SmallTest
    public void testSkipNotTriggered() {
        TestThreadUtils.runOnUiThreadBlocking(
                TosDialogBehaviorSharedPrefInvalidator::refreshSharedPreferenceIfTosSkipped);

        Mockito.verify(mMockAppRestrictionInfo, Mockito.never()).getHasAppRestriction(any());
        Mockito.verify(mMockPolicyService, Mockito.never()).addObserver(any());
    }

    @Test
    @SmallTest
    public void testSkipTriggered() {
        FirstRunStatus.setFirstRunSkippedByPolicy(true);
        TestThreadUtils.runOnUiThreadBlocking(
                TosDialogBehaviorSharedPrefInvalidator::refreshSharedPreferenceIfTosSkipped);

        Mockito.verify(mMockAppRestrictionInfo).getHasAppRestriction(any());
        Mockito.verify(mMockPolicyService).addObserver(any());
    }

    @Test
    @SmallTest
    public void testRefreshTriggered_NotSkippedByPolicy() {
        FirstRunStatus.setFirstRunSkippedByPolicy(true);
        launchSharedPrefInvalidator();

        // Assuming SkipTosDialogPolicyListener supplied with "False".
        mOnPolicyAvailableCallback.onResult(false);
        Assert.assertFalse("Value for #isFirstRunSkippedByPolicy should be set to false.",
                FirstRunStatus.isFirstRunSkippedByPolicy());
        Mockito.verify(mMockPolicyListener).destroy();
        Mockito.verify(mMockAppRestrictionInfo).destroy();
    }

    /**
     * Test to verify if #mOnPolicyAvailableCallback in TosDialogBehaviorSharedPrefInvalidator is
     * doing correct task.
     *
     * Noting that shared preference only controls whether a TosDialogBehaviorSharedPrefInvalidator
     * will be created or not. Once an instance is created, it runs regardless the value of
     * FirstRunStatus#isFirstRunSkippedByPolicy.
     */
    @Test
    @SmallTest
    public void testRefreshTriggered_RemainSkippedByPolicy() {
        FirstRunStatus.setFirstRunSkippedByPolicy(true);
        launchSharedPrefInvalidator();

        // Assuming SkipTosDialogPolicyListener supplied with "True".
        mOnPolicyAvailableCallback.onResult(true);
        Assert.assertTrue("Value for #isFirstRunSkippedByPolicy should stay true.",
                FirstRunStatus.isFirstRunSkippedByPolicy());
        Mockito.verify(mMockPolicyListener).destroy();
        Mockito.verify(mMockAppRestrictionInfo).destroy();
    }

    private void launchSharedPrefInvalidator() {
        new TosDialogBehaviorSharedPrefInvalidator(mMockPolicyListener, mMockAppRestrictionInfo);
        Assert.assertNotNull("Callback should registered for SkipTosDialogPolicyListener.",
                mOnPolicyAvailableCallback);
    }
}
