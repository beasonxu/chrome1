package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.password_entry_edit.CredentialEditBridge.deleteCredential
   * @param nativeCredentialEditBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1entry_1edit_CredentialEditBridge_deleteCredential(
      long nativeCredentialEditBridge);

  /**
   * org.chromium.chrome.browser.password_entry_edit.CredentialEditBridge.getCredential
   * @param nativeCredentialEditBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1entry_1edit_CredentialEditBridge_getCredential(
      long nativeCredentialEditBridge);

  /**
   * org.chromium.chrome.browser.password_entry_edit.CredentialEditBridge.getExistingUsernames
   * @param nativeCredentialEditBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1entry_1edit_CredentialEditBridge_getExistingUsernames(
      long nativeCredentialEditBridge);

  /**
   * org.chromium.chrome.browser.password_entry_edit.CredentialEditBridge.onUIDismissed
   * @param nativeCredentialEditBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1entry_1edit_CredentialEditBridge_onUIDismissed(
      long nativeCredentialEditBridge);

  /**
   * org.chromium.chrome.browser.password_entry_edit.CredentialEditBridge.saveChanges
   * @param nativeCredentialEditBridge (long)
   * @param username (java.lang.String)
   * @param password (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1entry_1edit_CredentialEditBridge_saveChanges(
      long nativeCredentialEditBridge, String username, String password);
}
