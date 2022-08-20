package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.enterprise.util.EnterpriseInfo.updateNativeOwnedState
   * @param hasProfileOwnerApp (boolean)
   * @param hasDeviceOwnerApp (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_enterprise_util_EnterpriseInfo_updateNativeOwnedState(
      boolean hasProfileOwnerApp, boolean hasDeviceOwnerApp);

  /**
   * org.chromium.chrome.browser.enterprise.util.ManagedBrowserUtils.getAccountManagerName
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_enterprise_util_ManagedBrowserUtils_getAccountManagerName(
      Object profile);

  /**
   * org.chromium.chrome.browser.enterprise.util.ManagedBrowserUtils.isBrowserManaged
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_enterprise_util_ManagedBrowserUtils_isBrowserManaged(
      Object profile);
}
