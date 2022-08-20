package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.destroy
   * @param nativeHttpClientBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_android_httpclient_SimpleHttpClient_destroy(
      long nativeHttpClientBridge);

  /**
   * org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.init
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_android_httpclient_SimpleHttpClient_init(
      Object profile);

  /**
   * org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.sendNetworkRequest
   * @param nativeHttpClientBridge (long)
   * @param gurl (org.chromium.url.GURL)
   * @param requestType (java.lang.String)
   * @param body (byte[])
   * @param headerKeys (java.lang.String[])
   * @param headerValues (java.lang.String[])
   * @param annotation (int)
   * @param responseCallback (org.chromium.base.Callback<org.chromium.chrome.browser.android.httpclient.SimpleHttpClient.HttpResponse>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_android_httpclient_SimpleHttpClient_sendNetworkRequest(
      long nativeHttpClientBridge, Object gurl, String requestType, byte[] body,
      String[] headerKeys, String[] headerValues, int annotation, Object responseCallback);
}
