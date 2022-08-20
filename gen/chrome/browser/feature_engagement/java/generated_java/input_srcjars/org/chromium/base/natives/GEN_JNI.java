package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.feature_engagement.TrackerFactory.getTrackerForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.feature_engagement.Tracker)
   */
  public static final native Object org_chromium_chrome_browser_feature_1engagement_TrackerFactory_getTrackerForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.feature_engagement.TrackerFactory.setTestingFactory
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param testTracker (org.chromium.components.feature_engagement.Tracker)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feature_1engagement_TrackerFactory_setTestingFactory(
      Object profile, Object testTracker);
}
