package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.video_tutorials.VideoTutorialServiceFactory.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.video_tutorials.VideoTutorialService)
   */
  public static final native Object org_chromium_chrome_browser_video_1tutorials_VideoTutorialServiceFactory_getForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge.getAvailableLanguagesForTutorial
   * @param nativeVideoTutorialServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge)
   * @param feature (int)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_video_1tutorials_bridges_VideoTutorialServiceBridge_getAvailableLanguagesForTutorial(
      long nativeVideoTutorialServiceBridge, Object caller, int feature);

  /**
   * org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge.getPreferredLocale
   * @param nativeVideoTutorialServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_video_1tutorials_bridges_VideoTutorialServiceBridge_getPreferredLocale(
      long nativeVideoTutorialServiceBridge, Object caller);

  /**
   * org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge.getSupportedLanguages
   * @param nativeVideoTutorialServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_video_1tutorials_bridges_VideoTutorialServiceBridge_getSupportedLanguages(
      long nativeVideoTutorialServiceBridge, Object caller);

  /**
   * org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge.getTutorial
   * @param nativeVideoTutorialServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge)
   * @param feature (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.video_tutorials.Tutorial>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_video_1tutorials_bridges_VideoTutorialServiceBridge_getTutorial(
      long nativeVideoTutorialServiceBridge, Object caller, int feature, Object callback);

  /**
   * org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge.getTutorials
   * @param nativeVideoTutorialServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.video_tutorials.Tutorial>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_video_1tutorials_bridges_VideoTutorialServiceBridge_getTutorials(
      long nativeVideoTutorialServiceBridge, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge.setPreferredLocale
   * @param nativeVideoTutorialServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.video_tutorials.bridges.VideoTutorialServiceBridge)
   * @param locale (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_video_1tutorials_bridges_VideoTutorialServiceBridge_setPreferredLocale(
      long nativeVideoTutorialServiceBridge, Object caller, String locale);
}
