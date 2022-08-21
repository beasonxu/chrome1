package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.performance_hints.PerformanceHintsObserver.getPerformanceClassForURL
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (org.chromium.url.GURL)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_performance_1hints_PerformanceHintsObserver_getPerformanceClassForURL(
      Object webContents, Object url);

  /**
   * org.chromium.chrome.browser.performance_hints.PerformanceHintsObserver.isContextMenuPerformanceInfoEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_performance_1hints_PerformanceHintsObserver_isContextMenuPerformanceInfoEnabled(
      );
}
