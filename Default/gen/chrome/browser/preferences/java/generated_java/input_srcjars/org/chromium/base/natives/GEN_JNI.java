package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.preferences.PrefChangeRegistrar.add
   * @param nativePrefChangeRegistrarAndroid (long)
   * @param caller (org.chromium.chrome.browser.preferences.PrefChangeRegistrar)
   * @param preference (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_preferences_PrefChangeRegistrar_add(
      long nativePrefChangeRegistrarAndroid, Object caller, String preference);

  /**
   * org.chromium.chrome.browser.preferences.PrefChangeRegistrar.destroy
   * @param nativePrefChangeRegistrarAndroid (long)
   * @param caller (org.chromium.chrome.browser.preferences.PrefChangeRegistrar)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_preferences_PrefChangeRegistrar_destroy(
      long nativePrefChangeRegistrarAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.preferences.PrefChangeRegistrar.init
   * @param caller (org.chromium.chrome.browser.preferences.PrefChangeRegistrar)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_preferences_PrefChangeRegistrar_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.preferences.PrefChangeRegistrar.remove
   * @param nativePrefChangeRegistrarAndroid (long)
   * @param caller (org.chromium.chrome.browser.preferences.PrefChangeRegistrar)
   * @param preference (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_preferences_PrefChangeRegistrar_remove(
      long nativePrefChangeRegistrarAndroid, Object caller, String preference);
}
