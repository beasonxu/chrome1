// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.homepage;

import androidx.test.filters.SmallTest;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Matchers;
import org.mockito.Mock;
import org.mockito.Mockito;
import org.mockito.MockitoAnnotations;
import org.robolectric.annotation.Config;
import org.robolectric.annotation.Implementation;
import org.robolectric.annotation.Implements;

import org.chromium.base.test.BaseRobolectricTestRunner;
import org.chromium.chrome.browser.partnercustomizations.PartnerBrowserCustomizations;
import org.chromium.chrome.browser.preferences.ChromePreferenceKeys;
import org.chromium.chrome.browser.preferences.SharedPreferencesManager;
import org.chromium.components.embedder_support.util.UrlConstants;
import org.chromium.components.embedder_support.util.UrlUtilities;
import org.chromium.url.JUnitTestGURLs;

/** Unit tests for {@link HomepageManager}. */
@RunWith(BaseRobolectricTestRunner.class)
@Config(shadows = {HomepageManagerTest.ShadowHomepagePolicyManager.class,
                HomepageManagerTest.ShadowUrlUtilities.class,
                HomepageManagerTest.ShadowPartnerBrowserCustomizations.class})
public class HomepageManagerTest {
    /** Shadow for {@link HomepagePolicyManager}. */
    @Implements(HomepagePolicyManager.class)
    public static class ShadowHomepagePolicyManager {
        static String sHomepageUrl;

        @Implementation
        public static boolean isHomepageManagedByPolicy() {
            return true;
        }

        @Implementation
        public static String getHomepageUrl() {
            return sHomepageUrl;
        }
    }

    @Implements(UrlUtilities.class)
    static class ShadowUrlUtilities {
        @Implementation
        public static boolean isNTPUrl(String url) {
            return UrlConstants.NTP_URL.equals(url);
        }
    }

    @Implements(PartnerBrowserCustomizations.class)
    static class ShadowPartnerBrowserCustomizations {
        private static PartnerBrowserCustomizations sPartnerBrowserCustomizations;

        @Implementation
        public static PartnerBrowserCustomizations getInstance() {
            return sPartnerBrowserCustomizations;
        }

        static void setPartnerBrowserCustomizations(
                PartnerBrowserCustomizations partnerBrowserCustomizations) {
            sPartnerBrowserCustomizations = partnerBrowserCustomizations;
        }
    }

    @Mock
    private PartnerBrowserCustomizations mPartnerBrowserCustomizations;

    @Before
    public void setUp() {
        MockitoAnnotations.initMocks(this);
    }

    @Test
    @SmallTest
    public void testIsHomepageNonNtp() {
        ShadowHomepagePolicyManager.sHomepageUrl = "";
        Assert.assertFalse(
                "Empty string should fall back to NTP", HomepageManager.isHomepageNonNtp());

        ShadowHomepagePolicyManager.sHomepageUrl = null;
        Assert.assertFalse("Null should fall back to the NTP", HomepageManager.isHomepageNonNtp());

        ShadowHomepagePolicyManager.sHomepageUrl = "www.example.com";
        Assert.assertTrue("Random web page is not the NTP", HomepageManager.isHomepageNonNtp());

        ShadowHomepagePolicyManager.sHomepageUrl = UrlConstants.NTP_URL;
        Assert.assertFalse("NTP should be considered the NTP", HomepageManager.isHomepageNonNtp());
    }

    @Test
    @SmallTest
    public void testGetDefaultHomepageUri() {
        ShadowPartnerBrowserCustomizations.setPartnerBrowserCustomizations(
                mPartnerBrowserCustomizations);
        Mockito.doNothing()
                .when(mPartnerBrowserCustomizations)
                .setPartnerHomepageListener(Matchers.anyObject());
        Mockito.doReturn(false)
                .when(mPartnerBrowserCustomizations)
                .isHomepageProviderAvailableAndEnabled();

        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_URI, null);
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_GURL, null);
        Assert.assertEquals(
                UrlConstants.NTP_NON_NATIVE_URL, HomepageManager.getDefaultHomepageUri());

        final String blueUrl = "https://www.blue.com/";
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_URI, blueUrl);
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_GURL, null);
        Assert.assertEquals(blueUrl, HomepageManager.getDefaultHomepageUri());

        final String redUrl = JUnitTestGURLs.RED_1;
        final String serializedRedGurl = JUnitTestGURLs.getGURL(redUrl).serialize();
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_URI, null);
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_GURL, serializedRedGurl);
        Assert.assertEquals(redUrl, HomepageManager.getDefaultHomepageUri());

        final String url1 = JUnitTestGURLs.URL_1;
        final String url2 = JUnitTestGURLs.URL_2;
        final String serializedGurl2 = JUnitTestGURLs.getGURL(url2).serialize();
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_URI, url1);
        SharedPreferencesManager.getInstance().writeString(
                ChromePreferenceKeys.HOMEPAGE_PARTNER_CUSTOMIZED_DEFAULT_GURL, serializedGurl2);
        Assert.assertEquals(url2, HomepageManager.getDefaultHomepageUri());
    }
}
