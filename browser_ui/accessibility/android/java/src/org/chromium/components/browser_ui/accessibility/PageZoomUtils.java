// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.components.browser_ui.accessibility;

import static org.chromium.content_public.browser.HostZoomMap.AVAILABLE_ZOOM_FACTORS;
import static org.chromium.content_public.browser.HostZoomMap.TEXT_SIZE_MULTIPLIER_RATIO;

import org.chromium.base.ContextUtils;
import org.chromium.base.MathUtils;
import org.chromium.content_public.browser.BrowserContextHandle;
import org.chromium.content_public.browser.ContentFeatureList;
import org.chromium.content_public.browser.HostZoomMap;

import java.util.Arrays;

/**
 * General purpose utils class for page zoom feature. This is for methods that are shared by both
 * the settings UI and the MVC component (e.g. shared prefs calls), and is accessed by each
 * individually rather than having the settings UI depend on the MVC component.
 *
 * The zoom of a page is calculated internally with a base an exponent. The base is set to
 * |kTextSizeMultiplierRatio| = 1.2. See: third_party/blink/common/page/page_zoom.cc.
 * E.g. To get a zoom level of 25%, internally the number -7.6 is used, because: 1.2^-7.6 = 0.25.
 *
 * To help with confusion, we will consistently stick to the following verbiage:
 *
 * "zoom factor" = the internal number used by HostZoomMap, acts as the exponent. (double)
 * "zoom level" = the percentage for the zoom that is presented externally to the user. (double)
 * "zoom string" = the string that is actually presented to the user for zoom percentage. (String)
 * "zoom seek value" = an arbitrary int to map the factor to an integer value for a SeekBar. (int)
 *
 * For example, some common zoom values are:
 *
 *        string        factor      level      seek value
 *          25%     |   -7.6    |   0.25    |      0      |
 *          50%     |   -3.8    |   0.50    |     25      |
 *         100%     |    0.0    |   1.00    |    125      |
 *         250%     |   5.03    |   2.50    |    275      |
 *         500%     |   8.83    |   5.00    |    475      |
 *
 */
public class PageZoomUtils {
    // The default value for zoom that user can change in the accessibility settings page.
    public static final int PAGE_ZOOM_DEFAULT_SEEK_VALUE = convertZoomFactorToSeekBarValue(0.0);

    // The max value for the seek bar to help with rounding effects (not shown to user).
    public static final int PAGE_ZOOM_MAXIMUM_SEEKBAR_VALUE = 475;

    // The minimum and maximum zoom values as a percentage (e.g. 25% = 0.25, 500% = 5.0)
    private static final float PAGE_ZOOM_MINIMUM_ZOOM_LEVEL = 0.25f;
    private static final float PAGE_ZOOM_MAXIMUM_ZOOM_LEVEL = 5.00f;

    /**
     * Returns whether the Accessibility Settings page should include the 'Zoom' UI. The page
     * should always display the UI if the feature is enabled.
     * @return boolean
     */
    public static boolean shouldShowSettingsUI() {
        return ContentFeatureList.isEnabled(ContentFeatureList.ACCESSIBILITY_PAGE_ZOOM);
    }

    /**
     * Seekbars have values 0 to 100 by default. For simplicity, we will keep these values and
     * convert to the correct zoom factor under-the-hood. See comment at top of class.
     *
     * @param newValue  int value of the seekbar.
     * @return double
     */
    public static double convertSeekBarValueToZoomFactor(int newValue) {
        // Zoom levels are from |PAGE_ZOOM_MINIMUM_ZOOM_LEVEL| to |PAGE_ZOOM_MAXIMUM_ZOOM_LEVEL|,
        // and these should map linearly to the seekbar's 0 - 100 range.
        float seekbarPercent = (float) newValue / PAGE_ZOOM_MAXIMUM_SEEKBAR_VALUE;
        float chosenZoomLevel = PAGE_ZOOM_MINIMUM_ZOOM_LEVEL
                + ((PAGE_ZOOM_MAXIMUM_ZOOM_LEVEL - PAGE_ZOOM_MINIMUM_ZOOM_LEVEL) * seekbarPercent);

        // The zoom level maps internally to a zoom factor, which is the exponent that
        // |kTextSizeMultiplierRatio| = 1.2 is raised to. For example, 1.2^-7.6 = 0.25, or
        // 1.2^3.8 = 2.0. See: third_party/blink/common/page/page_zoom.cc
        // This means zoomFactor = log_base1.2(chosenZoomLevel). Java has natural log and base
        // 10, we can rewrite the above as: log10(chosenZoomLevel) / log10(1.2);
        double result = Math.log10(chosenZoomLevel) / Math.log10(TEXT_SIZE_MULTIPLIER_RATIO);

        return MathUtils.roundTwoDecimalPlaces(result);
    }

    /**
     * This method does the reverse of the above method.
     * Seekbars have values 0 to 100 by default. For simplicity, we will keep these values and
     * convert to the correct zoom factor under-the-hood.
     *
     * @param zoomFactor    zoom factor to get seek bar value for.
     * @return int
     */
    public static int convertZoomFactorToSeekBarValue(double zoomFactor) {
        // To get to a seekbar value from an index, raise the base (1.2) to the given |zoomFactor|
        // exponent to get the zoom level. Find where this level sits proportionately between the
        // min and max level, and use that percentage as the corresponding seek value.
        double zoomLevel = Math.pow(TEXT_SIZE_MULTIPLIER_RATIO, zoomFactor);
        double zoomLevelPercent = (double) (zoomLevel - PAGE_ZOOM_MINIMUM_ZOOM_LEVEL)
                / (PAGE_ZOOM_MAXIMUM_ZOOM_LEVEL - PAGE_ZOOM_MINIMUM_ZOOM_LEVEL);

        return (int) Math.round(PAGE_ZOOM_MAXIMUM_SEEKBAR_VALUE * zoomLevelPercent);
    }

    /**
     * This method converts the seekbar value to a zoom level so that the level can be displayed
     * to the user in a human-readable format.
     * @param newValue      seek bar value to convert to zoom level
     * @return double
     */
    public static double convertSeekBarValueToZoomLevel(int newValue) {
        return PAGE_ZOOM_MINIMUM_ZOOM_LEVEL
                + ((PAGE_ZOOM_MAXIMUM_ZOOM_LEVEL - PAGE_ZOOM_MINIMUM_ZOOM_LEVEL)
                        * ((float) newValue / PAGE_ZOOM_MAXIMUM_SEEKBAR_VALUE));
    }

    /**
     * Set a new user choice for default zoom level given a SeekBar value.
     * This is part of the Profile and is set in Desktop through Settings > Appearance.
     * @param newValue int      The new zoom by seek bar value
     */
    public static void setDefaultZoomBySeekBarValue(BrowserContextHandle context, int newValue) {
        setDefaultZoomLevel(context, convertSeekBarValueToZoomFactor(newValue));
    }

    /**
     * Returns the current user choice for default zoom level as a seek bar value.
     * This is part of the Profile and is set in Desktop through Settings > Appearance.
     * @return int
     */
    public static int getDefaultZoomAsSeekValue(BrowserContextHandle context) {
        return convertZoomFactorToSeekBarValue(getDefaultZoomLevel(context));
    }

    // Methods to interact with SharedPreferences. These do not use SharedPreferencesManager so
    // that they can be used in //components.

    /**
     * Returns the current user choice for always showing the Zoom AppMenu item (set in
     * Accessibility Settings). This setting is Chrome Android specific.
     * @return boolean
     */
    public static boolean shouldAlwaysShowZoomMenuItem() {
        return ContextUtils.getAppSharedPreferences().getBoolean(
                AccessibilityConstants.PAGE_ZOOM_ALWAYS_SHOW_MENU_ITEM, false);
    }

    /**
     * Set a new user choice for always showing the Zoom AppMenu item. This setting is Chrome
     * Android specific.
     * @param newValue boolean
     */
    public static void setShouldAlwaysShowZoomMenuItem(boolean newValue) {
        ContextUtils.getAppSharedPreferences()
                .edit()
                .putBoolean(AccessibilityConstants.PAGE_ZOOM_ALWAYS_SHOW_MENU_ITEM, newValue)
                .apply();
    }

    /**
     * Get the index of the next closest zoom factor in the cached available values in the given
     * direction from the current zoom factor.
     * Current zoom factor must be within range of possible zoom factors.
     * @param decrease boolean      True if the next index should be decreasing from the current,
     *         false otherwise
     * @param currentZoomFactor double      The current zoom factor for which to search
     * @throws IllegalArgumentException if current zoom factor is <= the smallest cached zoom factor
     *         or >= the largest cached zoom factor
     * @return int      The index of the next closest zoom factor
     */
    public static int getNextIndex(boolean decrease, double currentZoomFactor) {
        // Assert valid current zoom factor
        if (decrease && currentZoomFactor <= AVAILABLE_ZOOM_FACTORS[0]) {
            throw new IllegalArgumentException(
                    "currentZoomFactor should be greater than " + AVAILABLE_ZOOM_FACTORS[0]);
        } else if (!decrease
                && currentZoomFactor >= AVAILABLE_ZOOM_FACTORS[AVAILABLE_ZOOM_FACTORS.length - 1]) {
            throw new IllegalArgumentException("currentZoomFactor should be less than "
                    + AVAILABLE_ZOOM_FACTORS[AVAILABLE_ZOOM_FACTORS.length - 1]);
        }

        // BinarySearch will return the index of the first value equal to the given value.
        // Otherwise it will return (-(insertion point) - 1).
        // If a negative value is returned, then add one and negate to get the insertion point.
        int index = Arrays.binarySearch(AVAILABLE_ZOOM_FACTORS, currentZoomFactor);

        // If the value is found, index will be >=0 and we will decrement/increment accordingly:
        if (index >= 0) {
            if (decrease) {
                --index;
            } else {
                ++index;
            }
        }

        // If the value is not found, index will be (-(index) - 1), so negate and add one:
        if (index < 0) {
            index = ++index * -1;

            // Index will now be the first index above the current value, so in the case of
            // decreasing zoom, we will decrement once.
            if (decrease) --index;
        }

        return index;
    }

    // Methods that interact with Prefs.

    private static void setDefaultZoomLevel(
            BrowserContextHandle context, double newDefaultZoomLevel) {
        HostZoomMap.setDefaultZoomLevel(context, newDefaultZoomLevel);
    }

    private static double getDefaultZoomLevel(BrowserContextHandle context) {
        return HostZoomMap.getDefaultZoomLevel(context);
    }
}