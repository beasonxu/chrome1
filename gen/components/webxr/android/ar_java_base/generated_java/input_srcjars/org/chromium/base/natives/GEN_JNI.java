package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.webxr.ArCoreInstallUtils.onRequestInstallSupportedArCoreResult
   * @param nativeArCoreInstallHelper (long)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_webxr_ArCoreInstallUtils_onRequestInstallSupportedArCoreResult(
      long nativeArCoreInstallHelper, boolean success);

  /**
   * org.chromium.components.webxr.ArCoreJavaUtils.onDrawingSurfaceDestroyed
   * @param nativeArCoreJavaUtils (long)
   * @param caller (org.chromium.components.webxr.ArCoreJavaUtils)
   * @return (void)
   */
  public static final native void org_chromium_components_webxr_ArCoreJavaUtils_onDrawingSurfaceDestroyed(
      long nativeArCoreJavaUtils, Object caller);

  /**
   * org.chromium.components.webxr.ArCoreJavaUtils.onDrawingSurfaceReady
   * @param nativeArCoreJavaUtils (long)
   * @param caller (org.chromium.components.webxr.ArCoreJavaUtils)
   * @param surface (android.view.Surface)
   * @param rootWindow (org.chromium.ui.base.WindowAndroid)
   * @param rotation (int)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_components_webxr_ArCoreJavaUtils_onDrawingSurfaceReady(
      long nativeArCoreJavaUtils, Object caller, Object surface, Object rootWindow, int rotation,
      int width, int height);

  /**
   * org.chromium.components.webxr.ArCoreJavaUtils.onDrawingSurfaceTouch
   * @param nativeArCoreJavaUtils (long)
   * @param caller (org.chromium.components.webxr.ArCoreJavaUtils)
   * @param primary (boolean)
   * @param touching (boolean)
   * @param pointerId (int)
   * @param x (float)
   * @param y (float)
   * @return (void)
   */
  public static final native void org_chromium_components_webxr_ArCoreJavaUtils_onDrawingSurfaceTouch(
      long nativeArCoreJavaUtils, Object caller, boolean primary, boolean touching, int pointerId,
      float x, float y);
}
