package org.chromium.base.natives;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.prefetch.settings.PreloadPagesSettingsBridge.getState
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_prefetch_settings_PreloadPagesSettingsBridge_getState(
      );

  /**
   * org.chromium.chrome.browser.prefetch.settings.PreloadPagesSettingsBridge.isNetworkPredictionManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_prefetch_settings_PreloadPagesSettingsBridge_isNetworkPredictionManaged(
      );

  /**
   * org.chromium.chrome.browser.prefetch.settings.PreloadPagesSettingsBridge.setState
   * @param mode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_prefetch_settings_PreloadPagesSettingsBridge_setState(
      int mode);
}
