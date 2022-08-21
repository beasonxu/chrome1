package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.segmentation_platform.SegmentationPlatformServiceFactory.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.segmentation_platform.SegmentationPlatformService)
   */
  public static final native Object org_chromium_chrome_browser_segmentation_1platform_SegmentationPlatformServiceFactory_getForProfile(
      Object profile);
}
