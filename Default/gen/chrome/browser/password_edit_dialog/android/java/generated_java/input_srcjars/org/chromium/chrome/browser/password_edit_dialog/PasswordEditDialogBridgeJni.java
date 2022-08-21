package org.chromium.chrome.browser.password_edit_dialog;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class PasswordEditDialogBridgeJni implements PasswordEditDialogBridge.Natives {
  private static PasswordEditDialogBridge.Natives testInstance;

  public static final JniStaticTestMocker<PasswordEditDialogBridge.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.password_edit_dialog.PasswordEditDialogBridge.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.password_edit_dialog.PasswordEditDialogBridge.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void onDialogAccepted(long nativePasswordEditDialogBridge, String username,
      String password) {
    GEN_JNI.org_chromium_chrome_browser_password_1edit_1dialog_PasswordEditDialogBridge_onDialogAccepted(nativePasswordEditDialogBridge, username, password);
  }

  @Override
  public void onDialogDismissed(long nativePasswordEditDialogBridge, boolean dialogAccepted) {
    GEN_JNI.org_chromium_chrome_browser_password_1edit_1dialog_PasswordEditDialogBridge_onDialogDismissed(nativePasswordEditDialogBridge, dialogAccepted);
  }

  public static PasswordEditDialogBridge.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.password_edit_dialog.PasswordEditDialogBridge.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new PasswordEditDialogBridgeJni();
  }
}
