package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.ukm.UkmRecorder.recordEventWithBooleanMetric
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param eventName (java.lang.String)
   * @param metricName (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_ukm_UkmRecorder_recordEventWithBooleanMetric(
      Object webContents, String eventName, String metricName);

  /**
   * org.chromium.components.ukm.UkmRecorder.recordEventWithIntegerMetric
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param eventName (java.lang.String)
   * @param metricName (java.lang.String)
   * @param metricValue (int)
   * @return (void)
   */
  public static final native void org_chromium_components_ukm_UkmRecorder_recordEventWithIntegerMetric(
      Object webContents, String eventName, String metricName, int metricValue);
}
