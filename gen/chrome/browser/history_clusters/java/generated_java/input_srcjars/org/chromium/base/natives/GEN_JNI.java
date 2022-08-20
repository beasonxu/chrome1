package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.history_clusters.HistoryClustersBridge.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.history_clusters.HistoryClustersBridge)
   */
  public static final native Object org_chromium_chrome_browser_history_1clusters_HistoryClustersBridge_getForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.history_clusters.HistoryClustersBridge.loadMoreClusters
   * @param nativeHistoryClustersBridge (long)
   * @param caller (org.chromium.chrome.browser.history_clusters.HistoryClustersBridge)
   * @param query (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.history_clusters.HistoryClustersResult>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_1clusters_HistoryClustersBridge_loadMoreClusters(
      long nativeHistoryClustersBridge, Object caller, String query, Object callback);

  /**
   * org.chromium.chrome.browser.history_clusters.HistoryClustersBridge.queryClusters
   * @param nativeHistoryClustersBridge (long)
   * @param caller (org.chromium.chrome.browser.history_clusters.HistoryClustersBridge)
   * @param query (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.history_clusters.HistoryClustersResult>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_1clusters_HistoryClustersBridge_queryClusters(
      long nativeHistoryClustersBridge, Object caller, String query, Object callback);

  /**
   * org.chromium.chrome.browser.history_clusters.HistoryClustersTabHelper.onCurrentTabUrlCopied
   * @param contents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_1clusters_HistoryClustersTabHelper_onCurrentTabUrlCopied(
      Object contents);

  /**
   * org.chromium.chrome.browser.history_clusters.HistoryClustersTabHelper.onCurrentTabUrlShared
   * @param contents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_1clusters_HistoryClustersTabHelper_onCurrentTabUrlShared(
      Object contents);
}
