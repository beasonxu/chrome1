package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.subresource_filter.AdsBlockedDialog.onAllowAdsClicked
   * @param nativeAdsBlockedDialog (long)
   * @return (void)
   */
  public static final native void org_chromium_components_subresource_1filter_AdsBlockedDialog_onAllowAdsClicked(
      long nativeAdsBlockedDialog);

  /**
   * org.chromium.components.subresource_filter.AdsBlockedDialog.onDismissed
   * @param nativeAdsBlockedDialog (long)
   * @return (void)
   */
  public static final native void org_chromium_components_subresource_1filter_AdsBlockedDialog_onDismissed(
      long nativeAdsBlockedDialog);

  /**
   * org.chromium.components.subresource_filter.AdsBlockedDialog.onLearnMoreClicked
   * @param nativeAdsBlockedDialog (long)
   * @return (void)
   */
  public static final native void org_chromium_components_subresource_1filter_AdsBlockedDialog_onLearnMoreClicked(
      long nativeAdsBlockedDialog);

  /**
   * org.chromium.components.subresource_filter.SubresourceFilterFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_subresource_1filter_SubresourceFilterFeatureList_isEnabled(
      String featureName);
}
