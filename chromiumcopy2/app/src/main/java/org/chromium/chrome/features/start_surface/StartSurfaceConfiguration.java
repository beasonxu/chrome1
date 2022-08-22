// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.features.start_surface;

import android.text.TextUtils;

import androidx.annotation.VisibleForTesting;

import org.chromium.base.Log;
import org.chromium.base.SysUtils;
import org.chromium.base.annotations.CalledByNative;
import org.chromium.base.annotations.NativeMethods;
import org.chromium.base.metrics.RecordHistogram;
import org.chromium.chrome.browser.flags.BooleanCachedFieldTrialParameter;
import org.chromium.chrome.browser.flags.ChromeFeatureList;
import org.chromium.chrome.browser.flags.IntCachedFieldTrialParameter;
import org.chromium.chrome.browser.flags.StringCachedFieldTrialParameter;
import org.chromium.chrome.browser.preferences.ChromePreferenceKeys;
import org.chromium.chrome.browser.preferences.SharedPreferencesManager;
import org.chromium.chrome.browser.profiles.Profile;

/**
 * Flag configuration for Start Surface. Source of truth for whether it should be enabled and
 * which variation should be used.
 */
public class StartSurfaceConfiguration {
    private static final String TAG = "StartSurfaceConfig";
    public static final StringCachedFieldTrialParameter START_SURFACE_VARIATION =
            new StringCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, "start_surface_variation", "");
    public static final BooleanCachedFieldTrialParameter START_SURFACE_EXCLUDE_MV_TILES =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, "exclude_mv_tiles", false);
    public static final BooleanCachedFieldTrialParameter
            START_SURFACE_HIDE_INCOGNITO_SWITCH_NO_TAB =
                    new BooleanCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                            "hide_switch_when_no_incognito_tabs", false);

    public static final BooleanCachedFieldTrialParameter START_SURFACE_LAST_ACTIVE_TAB_ONLY =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, "show_last_active_tab_only", false);
    public static final BooleanCachedFieldTrialParameter START_SURFACE_OPEN_NTP_INSTEAD_OF_START =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, "open_ntp_instead_of_start", false);

    private static final String TAB_COUNT_BUTTON_ON_START_SURFACE_PARAM =
            "tab_count_button_on_start_surface";
    public static final BooleanCachedFieldTrialParameter TAB_COUNT_BUTTON_ON_START_SURFACE =
            new BooleanCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    TAB_COUNT_BUTTON_ON_START_SURFACE_PARAM, false);

    private static final String SHOW_TABS_IN_MRU_ORDER_PARAM = "show_tabs_in_mru_order";
    public static final BooleanCachedFieldTrialParameter SHOW_TABS_IN_MRU_ORDER =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, SHOW_TABS_IN_MRU_ORDER_PARAM, false);

    private static final String SUPPORT_ACCESSIBILITY_PARAM = "support_accessibility";
    public static final BooleanCachedFieldTrialParameter SUPPORT_ACCESSIBILITY =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, SUPPORT_ACCESSIBILITY_PARAM, true);

    private static final String WARM_UP_RENDERER_PARAM = "warm_up_renderer";
    public static final BooleanCachedFieldTrialParameter WARM_UP_RENDERER =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, WARM_UP_RENDERER_PARAM, false);

    private static final String SPARE_RENDERER_DELAY_MS_PARAM = "spare_renderer_delay_ms";
    public static final IntCachedFieldTrialParameter SPARE_RENDERER_DELAY_MS =
            new IntCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, SPARE_RENDERER_DELAY_MS_PARAM, 1000);

    private static final String CHECK_SYNC_BEFORE_SHOW_START_AT_STARTUP_PARAM =
            "check_sync_before_show_start_at_startup";
    public static final BooleanCachedFieldTrialParameter CHECK_SYNC_BEFORE_SHOW_START_AT_STARTUP =
            new BooleanCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    CHECK_SYNC_BEFORE_SHOW_START_AT_STARTUP_PARAM, false);

    private static final String BEHAVIOURAL_TARGETING_PARAM = "behavioural_targeting";
    public static final StringCachedFieldTrialParameter BEHAVIOURAL_TARGETING =
            new StringCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, BEHAVIOURAL_TARGETING_PARAM, "");

    private static final String USER_CLICK_THRESHOLD_PARAM = "user_clicks_threshold";
    public static final IntCachedFieldTrialParameter USER_CLICK_THRESHOLD =
            new IntCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    USER_CLICK_THRESHOLD_PARAM, Integer.MAX_VALUE);

    private static final String NUM_DAYS_KEEP_SHOW_START_AT_STARTUP_PARAM =
            "num_days_keep_show_start_at_startup";
    public static final IntCachedFieldTrialParameter NUM_DAYS_KEEP_SHOW_START_AT_STARTUP =
            new IntCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    NUM_DAYS_KEEP_SHOW_START_AT_STARTUP_PARAM, 7);

    private static final String NUM_DAYS_USER_CLICK_BELOW_THRESHOLD_PARAM =
            "num_days_user_click_below_threshold";
    public static final IntCachedFieldTrialParameter NUM_DAYS_USER_CLICK_BELOW_THRESHOLD =
            new IntCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    NUM_DAYS_USER_CLICK_BELOW_THRESHOLD_PARAM, 7);

    private static final String SIGNIN_PROMO_NTP_COUNT_LIMIT_PARAM = "signin_promo_NTP_count_limit";
    public static final IntCachedFieldTrialParameter SIGNIN_PROMO_NTP_COUNT_LIMIT =
            new IntCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    SIGNIN_PROMO_NTP_COUNT_LIMIT_PARAM, Integer.MAX_VALUE);

    private static final String SIGNIN_PROMO_NTP_SINCE_FIRST_TIME_SHOWN_LIMIT_HOURS_PARAM =
            "signin_promo_NTP_since_first_time_shown_limit_hours";
    public static final IntCachedFieldTrialParameter
            SIGNIN_PROMO_NTP_SINCE_FIRST_TIME_SHOWN_LIMIT_HOURS =
                    new IntCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                            SIGNIN_PROMO_NTP_SINCE_FIRST_TIME_SHOWN_LIMIT_HOURS_PARAM, -1);

    private static final String SIGNIN_PROMO_NTP_RESET_AFTER_HOURS_PARAM =
            "signin_promo_NTP_reset_after_hours";
    public static final IntCachedFieldTrialParameter SIGNIN_PROMO_NTP_RESET_AFTER_HOURS =
            new IntCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    SIGNIN_PROMO_NTP_RESET_AFTER_HOURS_PARAM, -1);

    private static final String IS_DOODLE_SUPPORTED_PARAM = "is_doodle_supported";
    public static final BooleanCachedFieldTrialParameter IS_DOODLE_SUPPORTED =
            new BooleanCachedFieldTrialParameter(
                    ChromeFeatureList.START_SURFACE_ANDROID, IS_DOODLE_SUPPORTED_PARAM, false);

    private static final String HIDE_START_WHEN_LAST_VISITED_TAB_IS_SRP_PARAM =
            "hide_start_when_last_visited_tab_is_srp";
    public static final BooleanCachedFieldTrialParameter HIDE_START_WHEN_LAST_VISITED_TAB_IS_SRP =
            new BooleanCachedFieldTrialParameter(ChromeFeatureList.START_SURFACE_ANDROID,
                    HIDE_START_WHEN_LAST_VISITED_TAB_IS_SRP_PARAM, false);

    private static final String STARTUP_UMA_PREFIX = "Startup.Android.";
    private static final String INSTANT_START_SUBFIX = ".Instant";
    private static final String REGULAR_START_SUBFIX = ".NoInstant";

    /**
     * @return Whether the Start Surface feature flag is enabled.
     * @Deprecated Use {@link
     * org.chromium.chrome.browser.tasks.ReturnToChromeUtil#isStartSurfaceEnabled} instead.
     */
    public static boolean isStartSurfaceFlagEnabled() {
        return ChromeFeatureList.sStartSurfaceAndroid.isEnabled() && !SysUtils.isLowEndDevice();
    }

    /**
     * @return Whether the Start Surface SinglePane is enabled.
     */
    public static boolean isStartSurfaceSinglePaneEnabled() {
        return isStartSurfaceFlagEnabled() && START_SURFACE_VARIATION.getValue().equals("single");
    }

    /**
     * Records histograms of showing the StartSurface. Nothing will be recorded if timeDurationMs
     * isn't valid.
     */
    public static void recordHistogram(String name, long timeDurationMs, boolean isInstantStart) {
        if (timeDurationMs < 0) return;
        Log.i(TAG, "Recorded %s = %d ms", getHistogramName(name, isInstantStart), timeDurationMs);
        RecordHistogram.recordTimesHistogram(
                getHistogramName(name, isInstantStart), timeDurationMs);
    }

    @VisibleForTesting
    public static String getHistogramName(String name, boolean isInstantStart) {
        return STARTUP_UMA_PREFIX + name
                + (isInstantStart ? INSTANT_START_SUBFIX : REGULAR_START_SUBFIX);
    }

    @CalledByNative
    private static boolean isBehaviouralTargetingEnabled() {
        return !TextUtils.isEmpty(BEHAVIOURAL_TARGETING.getValue());
    }

    @VisibleForTesting
    static void setFeedVisibilityForTesting(boolean isVisible) {
        SharedPreferencesManager.getInstance().writeBoolean(
                ChromePreferenceKeys.FEED_ARTICLES_LIST_VISIBLE, isVisible);
    }

    @NativeMethods
    interface Natives {
        // Native methods
        void warmupRenderer(Profile profile);
    }
}
