package org.chromium.chrome.browser.android.httpclient;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.Callback;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.url.GURL;

@CheckDiscard("crbug.com/993421")
class SimpleHttpClientJni implements SimpleHttpClient.Natives {
  private static SimpleHttpClient.Natives testInstance;

  public static final JniStaticTestMocker<SimpleHttpClient.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public long init(Profile profile) {
    return (long)GEN_JNI.org_chromium_chrome_browser_android_httpclient_SimpleHttpClient_init(profile);
  }

  @Override
  public void destroy(long nativeHttpClientBridge) {
    GEN_JNI.org_chromium_chrome_browser_android_httpclient_SimpleHttpClient_destroy(nativeHttpClientBridge);
  }

  @Override
  public void sendNetworkRequest(long nativeHttpClientBridge, GURL gurl, String requestType,
      byte[] body, String[] headerKeys, String[] headerValues, int annotation,
      Callback<SimpleHttpClient.HttpResponse> responseCallback) {
    GEN_JNI.org_chromium_chrome_browser_android_httpclient_SimpleHttpClient_sendNetworkRequest(nativeHttpClientBridge, gurl, requestType, body, headerKeys, headerValues, annotation, responseCallback);
  }

  public static SimpleHttpClient.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new SimpleHttpClientJni();
  }
}
