package org.chromium.base.natives;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.webauthn.CableAuthenticatorModuleProvider.freeEvent
   * @param event (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webauthn_CableAuthenticatorModuleProvider_freeEvent(
      long event);

  /**
   * org.chromium.chrome.browser.webauthn.CableAuthenticatorModuleProvider.getRegistration
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_webauthn_CableAuthenticatorModuleProvider_getRegistration(
      );

  /**
   * org.chromium.chrome.browser.webauthn.CableAuthenticatorModuleProvider.getSecret
   * @return (byte[])
   */
  public static final native byte[] org_chromium_chrome_browser_webauthn_CableAuthenticatorModuleProvider_getSecret(
      );

  /**
   * org.chromium.chrome.browser.webauthn.CableAuthenticatorModuleProvider.getSystemNetworkContext
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_webauthn_CableAuthenticatorModuleProvider_getSystemNetworkContext(
      );

  /**
   * org.chromium.chrome.browser.webauthn.CableAuthenticatorModuleProvider.isMetricsAndCrashReportingEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_webauthn_CableAuthenticatorModuleProvider_isMetricsAndCrashReportingEnabled(
      );

  /**
   * org.chromium.chrome.browser.webauthn.PrivacySettingsFragment.revokeAllLinkedDevices
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webauthn_PrivacySettingsFragment_revokeAllLinkedDevices(
      );
}
