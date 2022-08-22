package org.chromium.chrome.browser.webapps;

import java.lang.Boolean;
import java.lang.Object;
import java.lang.Override;
import java.lang.String;
import org.chromium.base.Callback;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class WebApkUpdateManagerJni implements WebApkUpdateManager.Natives {
  private static WebApkUpdateManager.Natives testInstance;

  public static final JniStaticTestMocker<WebApkUpdateManager.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.webapps.WebApkUpdateManager.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.webapps.WebApkUpdateManager.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void storeWebApkUpdateRequestToFile(String updateRequestPath, String startUrl,
      String scope, String name, String shortName, String manifestId, String appKey,
      String primaryIconUrl, String primaryIconData, boolean isPrimaryIconMaskable,
      String splashIconUrl, String splashIconData, boolean isSplashIconMaskable, String[] iconUrls,
      String[] iconHashes, int displayMode, int orientation, long themeColor, long backgroundColor,
      String shareTargetAction, String shareTargetParamTitle, String shareTargetParamText,
      boolean shareTargetParamIsMethodPost, boolean shareTargetParamIsEncTypeMultipart,
      String[] shareTargetParamFileNames, Object[] shareTargetParamAccepts, String[][] shortcuts,
      byte[][] shortcutIconData, String manifestUrl, String webApkPackage, int webApkVersion,
      boolean isManifestStale, boolean isAppIdentityUpdateSupported, int[] updateReasons,
      Callback<Boolean> callback) {
    GEN_JNI.org_chromium_chrome_browser_webapps_WebApkUpdateManager_storeWebApkUpdateRequestToFile(updateRequestPath, startUrl, scope, name, shortName, manifestId, appKey, primaryIconUrl, primaryIconData, isPrimaryIconMaskable, splashIconUrl, splashIconData, isSplashIconMaskable, iconUrls, iconHashes, displayMode, orientation, themeColor, backgroundColor, shareTargetAction, shareTargetParamTitle, shareTargetParamText, shareTargetParamIsMethodPost, shareTargetParamIsEncTypeMultipart, shareTargetParamFileNames, shareTargetParamAccepts, shortcuts, shortcutIconData, manifestUrl, webApkPackage, webApkVersion, isManifestStale, isAppIdentityUpdateSupported, updateReasons, callback);
  }

  @Override
  public void updateWebApkFromFile(String updateRequestPath,
      WebApkUpdateManager.WebApkUpdateCallback callback) {
    GEN_JNI.org_chromium_chrome_browser_webapps_WebApkUpdateManager_updateWebApkFromFile(updateRequestPath, callback);
  }

  @Override
  public int getWebApkTargetShellVersion() {
    return (int)GEN_JNI.org_chromium_chrome_browser_webapps_WebApkUpdateManager_getWebApkTargetShellVersion();
  }

  public static WebApkUpdateManager.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.webapps.WebApkUpdateManager.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new WebApkUpdateManagerJni();
  }
}
