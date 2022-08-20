package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.cancelAllBitmapRequests
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_cancelAllBitmapRequests(
      long nativePlayerCompositorDelegateAndroid);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.cancelBitmapRequest
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @param requestId (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_cancelBitmapRequest(
      long nativePlayerCompositorDelegateAndroid, int requestId);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.destroy
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_destroy(
      long nativePlayerCompositorDelegateAndroid);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.getRootFrameOffsets
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @return (int[])
   */
  public static final native int[] org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_getRootFrameOffsets(
      long nativePlayerCompositorDelegateAndroid);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.initialize
   * @param caller (org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl)
   * @param nativePaintPreviewBaseService (long)
   * @param captureResultPtr (long)
   * @param urlSpec (java.lang.String)
   * @param directoryKey (java.lang.String)
   * @param mainFrameMode (boolean)
   * @param compositorErrorCallback (org.chromium.base.Callback<java.lang.Integer>)
   * @param isLowMemory (boolean)
   * @return (long)
   */
  public static final native long org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_initialize(
      Object caller, long nativePaintPreviewBaseService, long captureResultPtr, String urlSpec,
      String directoryKey, boolean mainFrameMode, Object compositorErrorCallback,
      boolean isLowMemory);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.onClick
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @param frameGuid (org.chromium.base.UnguessableToken)
   * @param x (int)
   * @param y (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_onClick(
      long nativePlayerCompositorDelegateAndroid, Object frameGuid, int x, int y);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.requestBitmap
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @param frameGuid (org.chromium.base.UnguessableToken)
   * @param bitmapCallback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @param errorCallback (java.lang.Runnable)
   * @param scaleFactor (float)
   * @param clipX (int)
   * @param clipY (int)
   * @param clipWidth (int)
   * @param clipHeight (int)
   * @return (int)
   */
  public static final native int org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_requestBitmap(
      long nativePlayerCompositorDelegateAndroid, Object frameGuid, Object bitmapCallback,
      Object errorCallback, float scaleFactor, int clipX, int clipY, int clipWidth, int clipHeight);

  /**
   * org.chromium.components.paintpreview.player.PlayerCompositorDelegateImpl.setCompressOnClose
   * @param nativePlayerCompositorDelegateAndroid (long)
   * @param compressOnClose (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_paintpreview_player_PlayerCompositorDelegateImpl_setCompressOnClose(
      long nativePlayerCompositorDelegateAndroid, boolean compressOnClose);
}
