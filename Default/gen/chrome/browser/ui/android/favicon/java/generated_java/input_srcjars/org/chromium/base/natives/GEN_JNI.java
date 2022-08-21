package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.ui.favicon.FaviconHelper.destroy
   * @param nativeFaviconHelper (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_favicon_FaviconHelper_destroy(
      long nativeFaviconHelper);

  /**
   * org.chromium.chrome.browser.ui.favicon.FaviconHelper.getComposedFaviconImage
   * @param nativeFaviconHelper (long)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param urls (org.chromium.url.GURL[])
   * @param desiredSizeInDip (int)
   * @param faviconImageCallback (org.chromium.chrome.browser.ui.favicon.FaviconHelper.FaviconImageCallback)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ui_favicon_FaviconHelper_getComposedFaviconImage(
      long nativeFaviconHelper, Object profile, Object[] urls, int desiredSizeInDip,
      Object faviconImageCallback);

  /**
   * org.chromium.chrome.browser.ui.favicon.FaviconHelper.getForeignFaviconImageForURL
   * @param nativeFaviconHelper (long)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param pageUrl (org.chromium.url.GURL)
   * @param desiredSizeInDip (int)
   * @param faviconImageCallback (org.chromium.chrome.browser.ui.favicon.FaviconHelper.FaviconImageCallback)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ui_favicon_FaviconHelper_getForeignFaviconImageForURL(
      long nativeFaviconHelper, Object profile, Object pageUrl, int desiredSizeInDip,
      Object faviconImageCallback);

  /**
   * org.chromium.chrome.browser.ui.favicon.FaviconHelper.getLocalFaviconImageForURL
   * @param nativeFaviconHelper (long)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param pageUrl (java.lang.String)
   * @param desiredSizeInDip (int)
   * @param faviconImageCallback (org.chromium.chrome.browser.ui.favicon.FaviconHelper.FaviconImageCallback)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ui_favicon_FaviconHelper_getLocalFaviconImageForURL(
      long nativeFaviconHelper, Object profile, String pageUrl, int desiredSizeInDip,
      Object faviconImageCallback);

  /**
   * org.chromium.chrome.browser.ui.favicon.FaviconHelper.init
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_ui_favicon_FaviconHelper_init();
}
