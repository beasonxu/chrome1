package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.ui.fast_checkout.FastCheckoutBridge.onDismiss
   * @param nativeFastCheckoutViewImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_fast_1checkout_FastCheckoutBridge_onDismiss(
      long nativeFastCheckoutViewImpl);

  /**
   * org.chromium.chrome.browser.ui.fast_checkout.FastCheckoutBridge.onOptionsSelected
   * @param nativeFastCheckoutViewImpl (long)
   * @param profile (org.chromium.chrome.browser.ui.fast_checkout.data.FastCheckoutAutofillProfile)
   * @param creditCard (org.chromium.chrome.browser.ui.fast_checkout.data.FastCheckoutCreditCard)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_fast_1checkout_FastCheckoutBridge_onOptionsSelected(
      long nativeFastCheckoutViewImpl, Object profile, Object creditCard);
}
