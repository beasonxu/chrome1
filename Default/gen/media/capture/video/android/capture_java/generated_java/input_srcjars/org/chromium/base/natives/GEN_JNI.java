package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.media.VideoCapture.dCheckCurrentlyOnIncomingTaskRunner
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_dCheckCurrentlyOnIncomingTaskRunner(
      long nativeVideoCaptureDeviceAndroid, Object caller);

  /**
   * org.chromium.media.VideoCapture.onError
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @param androidVideoCaptureError (int)
   * @param message (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onError(
      long nativeVideoCaptureDeviceAndroid, Object caller, int androidVideoCaptureError,
      String message);

  /**
   * org.chromium.media.VideoCapture.onFrameAvailable
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @param data (byte[])
   * @param length (int)
   * @param rotation (int)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onFrameAvailable(
      long nativeVideoCaptureDeviceAndroid, Object caller, byte[] data, int length, int rotation);

  /**
   * org.chromium.media.VideoCapture.onFrameDropped
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @param androidVideoCaptureFrameDropReason (int)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onFrameDropped(
      long nativeVideoCaptureDeviceAndroid, Object caller, int androidVideoCaptureFrameDropReason);

  /**
   * org.chromium.media.VideoCapture.onGetPhotoCapabilitiesReply
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @param callbackId (long)
   * @param result (org.chromium.media.PhotoCapabilities)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onGetPhotoCapabilitiesReply(
      long nativeVideoCaptureDeviceAndroid, Object caller, long callbackId, Object result);

  /**
   * org.chromium.media.VideoCapture.onI420FrameAvailable
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @param yBuffer (java.nio.ByteBuffer)
   * @param yStride (int)
   * @param uBuffer (java.nio.ByteBuffer)
   * @param vBuffer (java.nio.ByteBuffer)
   * @param uvRowStride (int)
   * @param uvPixelStride (int)
   * @param width (int)
   * @param height (int)
   * @param rotation (int)
   * @param timestamp (long)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onI420FrameAvailable(
      long nativeVideoCaptureDeviceAndroid, Object caller, Object yBuffer, int yStride,
      Object uBuffer, Object vBuffer, int uvRowStride, int uvPixelStride, int width, int height,
      int rotation, long timestamp);

  /**
   * org.chromium.media.VideoCapture.onPhotoTaken
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @param callbackId (long)
   * @param data (byte[])
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onPhotoTaken(
      long nativeVideoCaptureDeviceAndroid, Object caller, long callbackId, byte[] data);

  /**
   * org.chromium.media.VideoCapture.onStarted
   * @param nativeVideoCaptureDeviceAndroid (long)
   * @param caller (org.chromium.media.VideoCapture)
   * @return (void)
   */
  public static final native void org_chromium_media_VideoCapture_onStarted(
      long nativeVideoCaptureDeviceAndroid, Object caller);
}
