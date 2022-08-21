package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.browserservices.metrics.WebApkUkmRecorder.recordSessionDuration
   * @param manifestUrl (java.lang.String)
   * @param distributor (int)
   * @param versionCode (int)
   * @param duration (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_metrics_WebApkUkmRecorder_recordSessionDuration(
      String manifestUrl, int distributor, int versionCode, long duration);

  /**
   * org.chromium.chrome.browser.browserservices.metrics.WebApkUkmRecorder.recordUninstall
   * @param manifestUrl (java.lang.String)
   * @param distributor (int)
   * @param versionCode (int)
   * @param launchCount (int)
   * @param installedDurationMs (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_metrics_WebApkUkmRecorder_recordUninstall(
      String manifestUrl, int distributor, int versionCode, int launchCount,
      long installedDurationMs);

  /**
   * org.chromium.chrome.browser.browserservices.metrics.WebApkUkmRecorder.recordVisit
   * @param manifestUrl (java.lang.String)
   * @param distributor (int)
   * @param versionCode (int)
   * @param source (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_metrics_WebApkUkmRecorder_recordVisit(
      String manifestUrl, int distributor, int versionCode, int source);
}
