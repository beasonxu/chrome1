package org.chromium.chrome.browser.history_clusters;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.Callback;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;

@CheckDiscard("crbug.com/993421")
class HistoryClustersBridgeJni implements HistoryClustersBridge.Natives {
  private static HistoryClustersBridge.Natives testInstance;

  public static final JniStaticTestMocker<HistoryClustersBridge.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.history_clusters.HistoryClustersBridge.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.history_clusters.HistoryClustersBridge.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public HistoryClustersBridge getForProfile(Profile profile) {
    return (HistoryClustersBridge)GEN_JNI.org_chromium_chrome_browser_history_1clusters_HistoryClustersBridge_getForProfile(profile);
  }

  @Override
  public void queryClusters(long nativeHistoryClustersBridge, HistoryClustersBridge caller,
      String query, Callback<HistoryClustersResult> callback) {
    GEN_JNI.org_chromium_chrome_browser_history_1clusters_HistoryClustersBridge_queryClusters(nativeHistoryClustersBridge, caller, query, callback);
  }

  @Override
  public void loadMoreClusters(long nativeHistoryClustersBridge, HistoryClustersBridge caller,
      String query, Callback<HistoryClustersResult> callback) {
    GEN_JNI.org_chromium_chrome_browser_history_1clusters_HistoryClustersBridge_loadMoreClusters(nativeHistoryClustersBridge, caller, query, callback);
  }

  public static HistoryClustersBridge.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.history_clusters.HistoryClustersBridge.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new HistoryClustersBridgeJni();
  }
}
