package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.toolbar.LocationBarModel.destroy
   * @param nativeLocationBarModelAndroid (long)
   * @param caller (org.chromium.chrome.browser.toolbar.LocationBarModel)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_toolbar_LocationBarModel_destroy(
      long nativeLocationBarModelAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.toolbar.LocationBarModel.getFormattedFullURL
   * @param nativeLocationBarModelAndroid (long)
   * @param caller (org.chromium.chrome.browser.toolbar.LocationBarModel)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_toolbar_LocationBarModel_getFormattedFullURL(
      long nativeLocationBarModelAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.toolbar.LocationBarModel.getPageClassification
   * @param nativeLocationBarModelAndroid (long)
   * @param caller (org.chromium.chrome.browser.toolbar.LocationBarModel)
   * @param isFocusedFromFakebox (boolean)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_toolbar_LocationBarModel_getPageClassification(
      long nativeLocationBarModelAndroid, Object caller, boolean isFocusedFromFakebox);

  /**
   * org.chromium.chrome.browser.toolbar.LocationBarModel.getURLForDisplay
   * @param nativeLocationBarModelAndroid (long)
   * @param caller (org.chromium.chrome.browser.toolbar.LocationBarModel)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_toolbar_LocationBarModel_getURLForDisplay(
      long nativeLocationBarModelAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.toolbar.LocationBarModel.init
   * @param caller (org.chromium.chrome.browser.toolbar.LocationBarModel)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_toolbar_LocationBarModel_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.toolbar.bottom.ScrollingBottomViewSceneLayer.init
   * @param caller (org.chromium.chrome.browser.toolbar.bottom.ScrollingBottomViewSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_toolbar_bottom_ScrollingBottomViewSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.toolbar.bottom.ScrollingBottomViewSceneLayer.setContentTree
   * @param nativeScrollingBottomViewSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.toolbar.bottom.ScrollingBottomViewSceneLayer)
   * @param contentTree (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_toolbar_bottom_ScrollingBottomViewSceneLayer_setContentTree(
      long nativeScrollingBottomViewSceneLayer, Object caller, Object contentTree);

  /**
   * org.chromium.chrome.browser.toolbar.bottom.ScrollingBottomViewSceneLayer.updateScrollingBottomViewLayer
   * @param nativeScrollingBottomViewSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.toolbar.bottom.ScrollingBottomViewSceneLayer)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @param viewResourceId (int)
   * @param shadowHeightPx (int)
   * @param xOffset (float)
   * @param yOffset (float)
   * @param showShadow (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_toolbar_bottom_ScrollingBottomViewSceneLayer_updateScrollingBottomViewLayer(
      long nativeScrollingBottomViewSceneLayer, Object caller, Object resourceManager,
      int viewResourceId, int shadowHeightPx, float xOffset, float yOffset, boolean showShadow);

  /**
   * org.chromium.chrome.browser.toolbar.top.ResourceFactory.createToolbarContainerResource
   * @param toolbarLeft (int)
   * @param toolbarTop (int)
   * @param toolbarRight (int)
   * @param toolbarBottom (int)
   * @param locationBarLeft (int)
   * @param locationBarTop (int)
   * @param locationBarRight (int)
   * @param locationBarBottom (int)
   * @param shadowHeight (int)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_toolbar_top_ResourceFactory_createToolbarContainerResource(
      int toolbarLeft, int toolbarTop, int toolbarRight, int toolbarBottom, int locationBarLeft,
      int locationBarTop, int locationBarRight, int locationBarBottom, int shadowHeight);

  /**
   * org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer.init
   * @param caller (org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_toolbar_top_TopToolbarSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer.setContentTree
   * @param nativeTopToolbarSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer)
   * @param contentTree (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_toolbar_top_TopToolbarSceneLayer_setContentTree(
      long nativeTopToolbarSceneLayer, Object caller, Object contentTree);

  /**
   * org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer.updateProgressBar
   * @param nativeTopToolbarSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer)
   * @param progressBarX (int)
   * @param progressBarY (int)
   * @param progressBarWidth (int)
   * @param progressBarHeight (int)
   * @param progressBarColor (int)
   * @param progressBarBackgroundX (int)
   * @param progressBarBackgroundY (int)
   * @param progressBarBackgroundWidth (int)
   * @param progressBarBackgroundHeight (int)
   * @param progressBarBackgroundColor (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_toolbar_top_TopToolbarSceneLayer_updateProgressBar(
      long nativeTopToolbarSceneLayer, Object caller, int progressBarX, int progressBarY,
      int progressBarWidth, int progressBarHeight, int progressBarColor, int progressBarBackgroundX,
      int progressBarBackgroundY, int progressBarBackgroundWidth, int progressBarBackgroundHeight,
      int progressBarBackgroundColor);

  /**
   * org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer.updateToolbarLayer
   * @param nativeTopToolbarSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.toolbar.top.TopToolbarSceneLayer)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @param resourceId (int)
   * @param toolbarBackgroundColor (int)
   * @param urlBarResourceId (int)
   * @param urlBarColor (int)
   * @param xOffset (float)
   * @param contentOffset (float)
   * @param showShadow (boolean)
   * @param visible (boolean)
   * @param anonymize (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_toolbar_top_TopToolbarSceneLayer_updateToolbarLayer(
      long nativeTopToolbarSceneLayer, Object caller, Object resourceManager, int resourceId,
      int toolbarBackgroundColor, int urlBarResourceId, int urlBarColor, float xOffset,
      float contentOffset, boolean showShadow, boolean visible, boolean anonymize);
}
