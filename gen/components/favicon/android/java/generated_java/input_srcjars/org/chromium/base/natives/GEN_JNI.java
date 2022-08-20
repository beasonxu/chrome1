package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.favicon.LargeIconBridge.destroy
   * @param nativeLargeIconBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_components_favicon_LargeIconBridge_destroy(
      long nativeLargeIconBridge);

  /**
   * org.chromium.components.favicon.LargeIconBridge.getLargeIconForURL
   * @param nativeLargeIconBridge (long)
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param pageUrl (org.chromium.url.GURL)
   * @param desiredSizePx (int)
   * @param callback (org.chromium.components.favicon.LargeIconBridge.LargeIconCallback)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_favicon_LargeIconBridge_getLargeIconForURL(
      long nativeLargeIconBridge, Object browserContextHandle, Object pageUrl, int desiredSizePx,
      Object callback);

  /**
   * org.chromium.components.favicon.LargeIconBridge.init
   * @return (long)
   */
  public static final native long org_chromium_components_favicon_LargeIconBridge_init();
}
