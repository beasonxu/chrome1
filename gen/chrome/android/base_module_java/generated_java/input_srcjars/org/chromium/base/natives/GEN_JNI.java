package org.chromium.base.natives;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.metrics.UmaUtils.isClientInMetricsReportingSample
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_metrics_UmaUtils_isClientInMetricsReportingSample(
      );

  /**
   * org.chromium.chrome.browser.metrics.UmaUtils.recordMetricsReportingDefaultOptIn
   * @param optIn (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaUtils_recordMetricsReportingDefaultOptIn(
      boolean optIn);
}
