package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.commerce.ShoppingServiceFactory.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.commerce.core.ShoppingService)
   */
  public static final native Object org_chromium_chrome_browser_commerce_ShoppingServiceFactory_getForProfile(
      Object profile);
}
