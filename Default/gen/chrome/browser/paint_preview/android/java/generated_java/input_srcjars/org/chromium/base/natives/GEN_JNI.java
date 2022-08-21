package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.paint_preview.PaintPreviewCompositorUtils.stopWarmCompositor
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_paint_1preview_PaintPreviewCompositorUtils_stopWarmCompositor(
      );

  /**
   * org.chromium.chrome.browser.paint_preview.PaintPreviewCompositorUtils.warmupCompositor
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_paint_1preview_PaintPreviewCompositorUtils_warmupCompositor(
      );

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService.auditArtifactsAndroid
   * @param nativePaintPreviewTabService (long)
   * @param activeTabIds (int[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_auditArtifactsAndroid(
      long nativePaintPreviewTabService, int[] activeTabIds);

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService.captureTabAndroid
   * @param nativePaintPreviewTabService (long)
   * @param tabId (int)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param accessibilityEnabled (boolean)
   * @param pageScaleFactor (float)
   * @param scrollOffsetX (int)
   * @param scrollOffsetY (int)
   * @param successCallback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_captureTabAndroid(
      long nativePaintPreviewTabService, int tabId, Object webContents,
      boolean accessibilityEnabled, float pageScaleFactor, int scrollOffsetX, int scrollOffsetY,
      Object successCallback);

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService.getPathAndroid
   * @param nativePaintPreviewTabService (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_getPathAndroid(
      long nativePaintPreviewTabService);

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService.hasCaptureForTabAndroid
   * @param nativePaintPreviewTabService (long)
   * @param tabId (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_hasCaptureForTabAndroid(
      long nativePaintPreviewTabService, int tabId);

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService.isCacheInitializedAndroid
   * @param nativePaintPreviewTabService (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_isCacheInitializedAndroid(
      long nativePaintPreviewTabService);

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService.tabClosedAndroid
   * @param nativePaintPreviewTabService (long)
   * @param tabId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabService_tabClosedAndroid(
      long nativePaintPreviewTabService, int tabId);

  /**
   * org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabServiceFactory.getServiceInstanceForCurrentProfile
   * @return (org.chromium.chrome.browser.paint_preview.services.PaintPreviewTabService)
   */
  public static final native Object org_chromium_chrome_browser_paint_1preview_services_PaintPreviewTabServiceFactory_getServiceInstanceForCurrentProfile(
      );
}
