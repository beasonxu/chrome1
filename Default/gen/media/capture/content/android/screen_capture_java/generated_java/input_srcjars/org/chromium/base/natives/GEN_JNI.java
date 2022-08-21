package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.media.ScreenCapture.onActivityResult
   * @param nativeScreenCaptureMachineAndroid (long)
   * @param caller (org.chromium.media.ScreenCapture)
   * @param result (boolean)
   * @return (void)
   */
  public static final native void org_chromium_media_ScreenCapture_onActivityResult(
      long nativeScreenCaptureMachineAndroid, Object caller, boolean result);

  /**
   * org.chromium.media.ScreenCapture.onI420FrameAvailable
   * @param nativeScreenCaptureMachineAndroid (long)
   * @param caller (org.chromium.media.ScreenCapture)
   * @param yBuffer (java.nio.ByteBuffer)
   * @param yStride (int)
   * @param uBuffer (java.nio.ByteBuffer)
   * @param vBuffer (java.nio.ByteBuffer)
   * @param uvRowStride (int)
   * @param uvPixelStride (int)
   * @param left (int)
   * @param top (int)
   * @param width (int)
   * @param height (int)
   * @param timestamp (long)
   * @return (void)
   */
  public static final native void org_chromium_media_ScreenCapture_onI420FrameAvailable(
      long nativeScreenCaptureMachineAndroid, Object caller, Object yBuffer, int yStride,
      Object uBuffer, Object vBuffer, int uvRowStride, int uvPixelStride, int left, int top,
      int width, int height, long timestamp);

  /**
   * org.chromium.media.ScreenCapture.onOrientationChange
   * @param nativeScreenCaptureMachineAndroid (long)
   * @param caller (org.chromium.media.ScreenCapture)
   * @param rotation (int)
   * @return (void)
   */
  public static final native void org_chromium_media_ScreenCapture_onOrientationChange(
      long nativeScreenCaptureMachineAndroid, Object caller, int rotation);

  /**
   * org.chromium.media.ScreenCapture.onRGBAFrameAvailable
   * @param nativeScreenCaptureMachineAndroid (long)
   * @param caller (org.chromium.media.ScreenCapture)
   * @param buf (java.nio.ByteBuffer)
   * @param rowStride (int)
   * @param left (int)
   * @param top (int)
   * @param width (int)
   * @param height (int)
   * @param timestamp (long)
   * @return (void)
   */
  public static final native void org_chromium_media_ScreenCapture_onRGBAFrameAvailable(
      long nativeScreenCaptureMachineAndroid, Object caller, Object buf, int rowStride, int left,
      int top, int width, int height, long timestamp);
}
