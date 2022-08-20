package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.feedback.FamilyInfoFeedbackSource.start
   * @param source (org.chromium.chrome.browser.feedback.FamilyInfoFeedbackSource)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feedback_FamilyInfoFeedbackSource_start(
      Object source, Object profile);

  /**
   * org.chromium.chrome.browser.feedback.ProcessIdFeedbackSource.getCurrentPid
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_feedback_ProcessIdFeedbackSource_getCurrentPid(
      );

  /**
   * org.chromium.chrome.browser.feedback.ProcessIdFeedbackSource.getProcessIdsForType
   * @param nativeProcessIdFeedbackSource (long)
   * @param caller (org.chromium.chrome.browser.feedback.ProcessIdFeedbackSource)
   * @param processType (int)
   * @return (long[])
   */
  public static final native long[] org_chromium_chrome_browser_feedback_ProcessIdFeedbackSource_getProcessIdsForType(
      long nativeProcessIdFeedbackSource, Object caller, int processType);

  /**
   * org.chromium.chrome.browser.feedback.ProcessIdFeedbackSource.start
   * @param source (org.chromium.chrome.browser.feedback.ProcessIdFeedbackSource)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feedback_ProcessIdFeedbackSource_start(
      Object source);

  /**
   * org.chromium.chrome.browser.feedback.SystemInfoFeedbackSource.getAvailableMemoryMB
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feedback_SystemInfoFeedbackSource_getAvailableMemoryMB(
      );

  /**
   * org.chromium.chrome.browser.feedback.SystemInfoFeedbackSource.getCpuArchitecture
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_feedback_SystemInfoFeedbackSource_getCpuArchitecture(
      );

  /**
   * org.chromium.chrome.browser.feedback.SystemInfoFeedbackSource.getGpuModel
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_feedback_SystemInfoFeedbackSource_getGpuModel(
      );

  /**
   * org.chromium.chrome.browser.feedback.SystemInfoFeedbackSource.getGpuVendor
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_feedback_SystemInfoFeedbackSource_getGpuVendor(
      );

  /**
   * org.chromium.chrome.browser.feedback.SystemInfoFeedbackSource.getTotalMemoryMB
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_feedback_SystemInfoFeedbackSource_getTotalMemoryMB(
      );
}
