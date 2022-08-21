package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.password_edit_dialog.PasswordEditDialogBridge.onDialogAccepted
   * @param nativePasswordEditDialogBridge (long)
   * @param username (java.lang.String)
   * @param password (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1edit_1dialog_PasswordEditDialogBridge_onDialogAccepted(
      long nativePasswordEditDialogBridge, String username, String password);

  /**
   * org.chromium.chrome.browser.password_edit_dialog.PasswordEditDialogBridge.onDialogDismissed
   * @param nativePasswordEditDialogBridge (long)
   * @param dialogAccepted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1edit_1dialog_PasswordEditDialogBridge_onDialogDismissed(
      long nativePasswordEditDialogBridge, boolean dialogAccepted);
}
