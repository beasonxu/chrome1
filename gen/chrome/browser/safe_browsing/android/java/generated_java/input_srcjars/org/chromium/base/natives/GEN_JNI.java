package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.getSafeBrowsingExtendedReportingEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_getSafeBrowsingExtendedReportingEnabled(
      );

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.getSafeBrowsingExtendedReportingManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_getSafeBrowsingExtendedReportingManaged(
      );

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.getSafeBrowsingState
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_getSafeBrowsingState(
      );

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.hasAccountForLeakCheckRequest
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_hasAccountForLeakCheckRequest(
      );

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.isLeakDetectionUnauthenticatedEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_isLeakDetectionUnauthenticatedEnabled(
      );

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.isSafeBrowsingManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_isSafeBrowsingManaged(
      );

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.setSafeBrowsingExtendedReportingEnabled
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_setSafeBrowsingExtendedReportingEnabled(
      boolean enabled);

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.setSafeBrowsingState
   * @param state (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_setSafeBrowsingState(
      int state);

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingBridge.umaValueForFile
   * @param path (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_safe_1browsing_SafeBrowsingBridge_umaValueForFile(
      String path);
}
