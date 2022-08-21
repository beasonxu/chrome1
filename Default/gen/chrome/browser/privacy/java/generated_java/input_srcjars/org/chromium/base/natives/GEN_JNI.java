package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.getConfig
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_getConfig(
      );

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.getManagementMode
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_getManagementMode(
      );

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.getMode
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_getMode(
      );

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.getProviders
   * @return (java.lang.String[][])
   */
  public static final native String[][] org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_getProviders(
      );

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.isModeManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_isModeManaged(
      );

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.probeConfig
   * @param dohConfig (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_probeConfig(
      String dohConfig);

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.setConfig
   * @param config (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_setConfig(
      String config);

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.setMode
   * @param mode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_setMode(
      int mode);

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.updateDropdownHistograms
   * @param oldConfig (java.lang.String)
   * @param newConfig (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_updateDropdownHistograms(
      String oldConfig, String newConfig);

  /**
   * org.chromium.chrome.browser.privacy.secure_dns.SecureDnsBridge.updateValidationHistogram
   * @param valid (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_secure_1dns_SecureDnsBridge_updateValidationHistogram(
      boolean valid);
}
