package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.image_fetcher.ImageFetcherBridge.fetchImage
   * @param simpleFactoryKeyHandle (org.chromium.components.embedder_support.simple_factory_key.SimpleFactoryKeyHandle)
   * @param config (int)
   * @param url (java.lang.String)
   * @param clientName (java.lang.String)
   * @param frameWidth (int)
   * @param frameHeight (int)
   * @param expirationIntervalMinutes (int)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @return (void)
   */
  public static final native void org_chromium_components_image_1fetcher_ImageFetcherBridge_fetchImage(
      Object simpleFactoryKeyHandle, int config, String url, String clientName, int frameWidth,
      int frameHeight, int expirationIntervalMinutes, Object callback);

  /**
   * org.chromium.components.image_fetcher.ImageFetcherBridge.fetchImageData
   * @param simpleFactoryKeyHandle (org.chromium.components.embedder_support.simple_factory_key.SimpleFactoryKeyHandle)
   * @param config (int)
   * @param url (java.lang.String)
   * @param clientName (java.lang.String)
   * @param expirationIntervalMinutes (int)
   * @param callback (org.chromium.base.Callback<byte[]>)
   * @return (void)
   */
  public static final native void org_chromium_components_image_1fetcher_ImageFetcherBridge_fetchImageData(
      Object simpleFactoryKeyHandle, int config, String url, String clientName,
      int expirationIntervalMinutes, Object callback);

  /**
   * org.chromium.components.image_fetcher.ImageFetcherBridge.getFilePath
   * @param simpleFactoryKeyHandle (org.chromium.components.embedder_support.simple_factory_key.SimpleFactoryKeyHandle)
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_image_1fetcher_ImageFetcherBridge_getFilePath(
      Object simpleFactoryKeyHandle, String url);

  /**
   * org.chromium.components.image_fetcher.ImageFetcherBridge.reportCacheHitTime
   * @param clientName (java.lang.String)
   * @param startTimeMillis (long)
   * @return (void)
   */
  public static final native void org_chromium_components_image_1fetcher_ImageFetcherBridge_reportCacheHitTime(
      String clientName, long startTimeMillis);

  /**
   * org.chromium.components.image_fetcher.ImageFetcherBridge.reportEvent
   * @param clientName (java.lang.String)
   * @param eventId (int)
   * @return (void)
   */
  public static final native void org_chromium_components_image_1fetcher_ImageFetcherBridge_reportEvent(
      String clientName, int eventId);

  /**
   * org.chromium.components.image_fetcher.ImageFetcherBridge.reportTotalFetchTimeFromNative
   * @param clientName (java.lang.String)
   * @param startTimeMillis (long)
   * @return (void)
   */
  public static final native void org_chromium_components_image_1fetcher_ImageFetcherBridge_reportTotalFetchTimeFromNative(
      String clientName, long startTimeMillis);
}
