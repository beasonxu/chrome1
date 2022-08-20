package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.touch_to_fill.TouchToFillBridge.onCredentialSelected
   * @param nativeTouchToFillViewImpl (long)
   * @param credential (org.chromium.chrome.browser.touch_to_fill.data.Credential)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_touch_1to_1fill_TouchToFillBridge_onCredentialSelected(
      long nativeTouchToFillViewImpl, Object credential);

  /**
   * org.chromium.chrome.browser.touch_to_fill.TouchToFillBridge.onDismiss
   * @param nativeTouchToFillViewImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_touch_1to_1fill_TouchToFillBridge_onDismiss(
      long nativeTouchToFillViewImpl);

  /**
   * org.chromium.chrome.browser.touch_to_fill.TouchToFillBridge.onManagePasswordsSelected
   * @param nativeTouchToFillViewImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_touch_1to_1fill_TouchToFillBridge_onManagePasswordsSelected(
      long nativeTouchToFillViewImpl);

  /**
   * org.chromium.chrome.browser.touch_to_fill.TouchToFillBridge.onWebAuthnCredentialSelected
   * @param nativeTouchToFillViewImpl (long)
   * @param credential (org.chromium.chrome.browser.touch_to_fill.data.WebAuthnCredential)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_touch_1to_1fill_TouchToFillBridge_onWebAuthnCredentialSelected(
      long nativeTouchToFillViewImpl, Object credential);
}
