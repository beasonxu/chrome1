package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.logo.LogoBridge.destroy
   * @param nativeLogoBridge (long)
   * @param caller (org.chromium.chrome.browser.logo.LogoBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_logo_LogoBridge_destroy(
      long nativeLogoBridge, Object caller);

  /**
   * org.chromium.chrome.browser.logo.LogoBridge.getCurrentLogo
   * @param nativeLogoBridge (long)
   * @param caller (org.chromium.chrome.browser.logo.LogoBridge)
   * @param logoObserver (org.chromium.chrome.browser.logo.LogoBridge.LogoObserver)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_logo_LogoBridge_getCurrentLogo(
      long nativeLogoBridge, Object caller, Object logoObserver);

  /**
   * org.chromium.chrome.browser.logo.LogoBridge.init
   * @param caller (org.chromium.chrome.browser.logo.LogoBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_logo_LogoBridge_init(Object caller,
      Object profile);
}
