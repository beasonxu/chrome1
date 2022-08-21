package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.device_reauth.BiometricAuthenticatorBridge.onAuthenticationCompleted
   * @param nativeBiometricAuthenticatorBridgeImpl (long)
   * @param result (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_device_1reauth_BiometricAuthenticatorBridge_onAuthenticationCompleted(
      long nativeBiometricAuthenticatorBridgeImpl, int result);

  /**
   * org.chromium.chrome.browser.device_reauth.ReauthenticatorBridge.canUseAuthentication
   * @param nativeReauthenticatorBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_canUseAuthentication(
      long nativeReauthenticatorBridge);

  /**
   * org.chromium.chrome.browser.device_reauth.ReauthenticatorBridge.create
   * @param reauthenticatorBridge (org.chromium.chrome.browser.device_reauth.ReauthenticatorBridge)
   * @param requester (int)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_create(
      Object reauthenticatorBridge, int requester);

  /**
   * org.chromium.chrome.browser.device_reauth.ReauthenticatorBridge.reauthenticate
   * @param nativeReauthenticatorBridge (long)
   * @param useLastValidAuth (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_device_1reauth_ReauthenticatorBridge_reauthenticate(
      long nativeReauthenticatorBridge, boolean useLastValidAuth);
}
