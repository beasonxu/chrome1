package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.safety_check.SafetyCheckBridge.checkSafeBrowsing
   * @param browserContext (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_safety_1check_SafetyCheckBridge_checkSafeBrowsing(
      Object browserContext);

  /**
   * org.chromium.chrome.browser.safety_check.SafetyCheckBridge.userSignedIn
   * @param browserContext (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_safety_1check_SafetyCheckBridge_userSignedIn(
      Object browserContext);
}
