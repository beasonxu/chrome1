package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.thumbnail.generator.ThumbnailGenerator.destroy
   * @param nativeThumbnailGenerator (long)
   * @param caller (org.chromium.chrome.browser.thumbnail.generator.ThumbnailGenerator)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_thumbnail_generator_ThumbnailGenerator_destroy(
      long nativeThumbnailGenerator, Object caller);

  /**
   * org.chromium.chrome.browser.thumbnail.generator.ThumbnailGenerator.init
   * @param caller (org.chromium.chrome.browser.thumbnail.generator.ThumbnailGenerator)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_thumbnail_generator_ThumbnailGenerator_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.thumbnail.generator.ThumbnailGenerator.retrieveThumbnail
   * @param nativeThumbnailGenerator (long)
   * @param caller (org.chromium.chrome.browser.thumbnail.generator.ThumbnailGenerator)
   * @param contentId (java.lang.String)
   * @param filePath (java.lang.String)
   * @param mimeType (java.lang.String)
   * @param thumbnailSize (int)
   * @param callback (org.chromium.chrome.browser.thumbnail.generator.ThumbnailGeneratorCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_thumbnail_generator_ThumbnailGenerator_retrieveThumbnail(
      long nativeThumbnailGenerator, Object caller, String contentId, String filePath,
      String mimeType, int thumbnailSize, Object callback);
}
