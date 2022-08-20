package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.download.DangerousDownloadDialogBridge.accepted
   * @param nativeDangerousDownloadDialogBridge (long)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_accepted(
      long nativeDangerousDownloadDialogBridge, String guid);

  /**
   * org.chromium.chrome.browser.download.DangerousDownloadDialogBridge.cancelled
   * @param nativeDangerousDownloadDialogBridge (long)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DangerousDownloadDialogBridge_cancelled(
      long nativeDangerousDownloadDialogBridge, String guid);

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.getDownloadDefaultDirectory
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_download_DownloadDialogBridge_getDownloadDefaultDirectory(
      );

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.getDownloadLaterMinFileSize
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_download_DownloadDialogBridge_getDownloadLaterMinFileSize(
      );

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.isLocationDialogManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_download_DownloadDialogBridge_isLocationDialogManaged(
      );

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.onCanceled
   * @param nativeDownloadDialogBridge (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadDialogBridge_onCanceled(
      long nativeDownloadDialogBridge, Object caller);

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.onComplete
   * @param nativeDownloadDialogBridge (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadDialogBridge)
   * @param returnedPath (java.lang.String)
   * @param onWifi (boolean)
   * @param startTime (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadDialogBridge_onComplete(
      long nativeDownloadDialogBridge, Object caller, String returnedPath, boolean onWifi,
      long startTime);

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.setDownloadAndSaveFileDefaultDirectory
   * @param directory (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadDialogBridge_setDownloadAndSaveFileDefaultDirectory(
      String directory);

  /**
   * org.chromium.chrome.browser.download.DownloadDialogBridge.shouldShowDateTimePicker
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_download_DownloadDialogBridge_shouldShowDateTimePicker(
      );

  /**
   * org.chromium.chrome.browser.download.DownloadManagerBridge.onAddCompletedDownloadDone
   * @param callbackId (long)
   * @param downloadId (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerBridge_onAddCompletedDownloadDone(
      long callbackId, long downloadId);

  /**
   * org.chromium.chrome.browser.download.DownloadStartupUtils.ensureDownloadSystemInitialized
   * @param isFullBrowserStarted (boolean)
   * @param isInCognito (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadStartupUtils_ensureDownloadSystemInitialized(
      boolean isFullBrowserStarted, boolean isInCognito);

  /**
   * org.chromium.chrome.browser.download.MixedContentDownloadDialogBridge.onConfirmed
   * @param nativeMixedContentDownloadDialogBridge (long)
   * @param callbackId (long)
   * @param accepted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_MixedContentDownloadDialogBridge_onConfirmed(
      long nativeMixedContentDownloadDialogBridge, long callbackId, boolean accepted);

  /**
   * org.chromium.chrome.browser.download.StringUtils.getFailStateMessage
   * @param failState (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_download_StringUtils_getFailStateMessage(
      int failState);

  /**
   * org.chromium.chrome.browser.download.items.OfflineContentAggregatorFactory.getOfflineContentAggregator
   * @return (org.chromium.components.offline_items_collection.OfflineContentProvider)
   */
  public static final native Object org_chromium_chrome_browser_download_items_OfflineContentAggregatorFactory_getOfflineContentAggregator(
      );
}
