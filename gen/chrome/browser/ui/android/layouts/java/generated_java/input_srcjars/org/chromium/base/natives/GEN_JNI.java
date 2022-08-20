package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.layouts.scene_layer.SceneLayer.destroy
   * @param nativeSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_layouts_scene_1layer_SceneLayer_destroy(
      long nativeSceneLayer, Object caller);

  /**
   * org.chromium.chrome.browser.layouts.scene_layer.SceneLayer.init
   * @param caller (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_layouts_scene_1layer_SceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.layouts.scene_layer.SceneLayer.removeFromParent
   * @param nativeSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_layouts_scene_1layer_SceneLayer_removeFromParent(
      long nativeSceneLayer, Object caller);
}
