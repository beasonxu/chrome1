package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.canApplyOptimization
   * @param nativeOptimizationGuideBridge (long)
   * @param url (org.chromium.url.GURL)
   * @param optimizationType (int)
   * @param callback (org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.OptimizationGuideCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_canApplyOptimization(
      long nativeOptimizationGuideBridge, Object url, int optimizationType, Object callback);

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.canApplyOptimizationAsync
   * @param nativeOptimizationGuideBridge (long)
   * @param url (org.chromium.url.GURL)
   * @param optimizationType (int)
   * @param callback (org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.OptimizationGuideCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_canApplyOptimizationAsync(
      long nativeOptimizationGuideBridge, Object url, int optimizationType, Object callback);

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.destroy
   * @param nativeOptimizationGuideBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_destroy(
      long nativeOptimizationGuideBridge);

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.init
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_init(
      );

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.onDeferredStartup
   * @param nativeOptimizationGuideBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_onDeferredStartup(
      long nativeOptimizationGuideBridge);

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.onNewPushNotification
   * @param nativeOptimizationGuideBridge (long)
   * @param encodedNotification (byte[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_onNewPushNotification(
      long nativeOptimizationGuideBridge, byte[] encodedNotification);

  /**
   * org.chromium.chrome.browser.optimization_guide.OptimizationGuideBridge.registerOptimizationTypes
   * @param nativeOptimizationGuideBridge (long)
   * @param optimizationTypes (int[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_optimization_1guide_OptimizationGuideBridge_registerOptimizationTypes(
      long nativeOptimizationGuideBridge, int[] optimizationTypes);
}
