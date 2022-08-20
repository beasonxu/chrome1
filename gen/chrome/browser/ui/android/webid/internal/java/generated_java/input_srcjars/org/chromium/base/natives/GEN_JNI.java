package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.ui.android.webid.AccountSelectionBridge.onAccountSelected
   * @param nativeAccountSelectionViewAndroid (long)
   * @param accountFields (java.lang.String[])
   * @param accountPictureUrl (org.chromium.url.GURL)
   * @param isSignedIn (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_android_webid_AccountSelectionBridge_onAccountSelected(
      long nativeAccountSelectionViewAndroid, String[] accountFields, Object accountPictureUrl,
      boolean isSignedIn);

  /**
   * org.chromium.chrome.browser.ui.android.webid.AccountSelectionBridge.onAutoSignInCancelled
   * @param nativeAccountSelectionViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_android_webid_AccountSelectionBridge_onAutoSignInCancelled(
      long nativeAccountSelectionViewAndroid);

  /**
   * org.chromium.chrome.browser.ui.android.webid.AccountSelectionBridge.onDismiss
   * @param nativeAccountSelectionViewAndroid (long)
   * @param dismissReason (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_android_webid_AccountSelectionBridge_onDismiss(
      long nativeAccountSelectionViewAndroid, int dismissReason);
}
