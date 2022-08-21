package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.embedder_support.delegate.ColorChooserAndroid.onColorChosen
   * @param nativeColorChooserAndroid (long)
   * @param caller (org.chromium.components.embedder_support.delegate.ColorChooserAndroid)
   * @param color (int)
   * @return (void)
   */
  public static final native void org_chromium_components_embedder_1support_delegate_ColorChooserAndroid_onColorChosen(
      long nativeColorChooserAndroid, Object caller, int color);
}
