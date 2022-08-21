package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.endpoint_fetcher.EndpointFetcher.nativeFetchChromeAPIKey
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @param httpsMethod (java.lang.String)
   * @param contentType (java.lang.String)
   * @param postData (java.lang.String)
   * @param timeout (long)
   * @param headers (java.lang.String[])
   * @param annotationHashCode (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.endpoint_fetcher.EndpointResponse>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_endpoint_1fetcher_EndpointFetcher_nativeFetchChromeAPIKey(
      Object profile, String url, String httpsMethod, String contentType, String postData,
      long timeout, String[] headers, int annotationHashCode, Object callback);

  /**
   * org.chromium.chrome.browser.endpoint_fetcher.EndpointFetcher.nativeFetchOAuth
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param oathConsumerName (java.lang.String)
   * @param url (java.lang.String)
   * @param httpsMethod (java.lang.String)
   * @param contentType (java.lang.String)
   * @param scopes (java.lang.String[])
   * @param postData (java.lang.String)
   * @param timeout (long)
   * @param annotationHashCode (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.endpoint_fetcher.EndpointResponse>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_endpoint_1fetcher_EndpointFetcher_nativeFetchOAuth(
      Object profile, String oathConsumerName, String url, String httpsMethod, String contentType,
      String[] scopes, String postData, long timeout, int annotationHashCode, Object callback);

  /**
   * org.chromium.chrome.browser.endpoint_fetcher.EndpointFetcher.nativeFetchWithNoAuth
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @param annotationHashCode (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.endpoint_fetcher.EndpointResponse>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_endpoint_1fetcher_EndpointFetcher_nativeFetchWithNoAuth(
      Object profile, String url, int annotationHashCode, Object callback);
}
