package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.areScriptsRefreshed
   * @param nativePasswordCheckBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_password_1check_PasswordCheckBridge_areScriptsRefreshed(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.create
   * @param passwordCheckBridge (org.chromium.chrome.browser.password_check.PasswordCheckBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_password_1check_PasswordCheckBridge_create(
      Object passwordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.destroy
   * @param nativePasswordCheckBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_destroy(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.getCompromisedCredentials
   * @param nativePasswordCheckBridge (long)
   * @param credentials (org.chromium.chrome.browser.password_check.CompromisedCredential[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_getCompromisedCredentials(
      long nativePasswordCheckBridge, Object[] credentials);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.getCompromisedCredentialsCount
   * @param nativePasswordCheckBridge (long)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_password_1check_PasswordCheckBridge_getCompromisedCredentialsCount(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.getLastCheckTimestamp
   * @param nativePasswordCheckBridge (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_password_1check_PasswordCheckBridge_getLastCheckTimestamp(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.getSavedPasswordsCount
   * @param nativePasswordCheckBridge (long)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_password_1check_PasswordCheckBridge_getSavedPasswordsCount(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.launchCheckupInAccount
   * @param nativePasswordCheckBridge (long)
   * @param activity (android.app.Activity)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_launchCheckupInAccount(
      long nativePasswordCheckBridge, Object activity);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.onEditCredential
   * @param nativePasswordCheckBridge (long)
   * @param credential (org.chromium.chrome.browser.password_check.CompromisedCredential)
   * @param context (android.content.Context)
   * @param settingsLauncher (org.chromium.components.browser_ui.settings.SettingsLauncher)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_onEditCredential(
      long nativePasswordCheckBridge, Object credential, Object context, Object settingsLauncher);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.refreshScripts
   * @param nativePasswordCheckBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_refreshScripts(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.removeCredential
   * @param nativePasswordCheckBridge (long)
   * @param credentials (org.chromium.chrome.browser.password_check.CompromisedCredential)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_removeCredential(
      long nativePasswordCheckBridge, Object credentials);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.startCheck
   * @param nativePasswordCheckBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_startCheck(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.stopCheck
   * @param nativePasswordCheckBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_stopCheck(
      long nativePasswordCheckBridge);

  /**
   * org.chromium.chrome.browser.password_check.PasswordCheckBridge.updateCredential
   * @param nativePasswordCheckBridge (long)
   * @param credential (org.chromium.chrome.browser.password_check.CompromisedCredential)
   * @param newPassword (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1check_PasswordCheckBridge_updateCredential(
      long nativePasswordCheckBridge, Object credential, String newPassword);
}
