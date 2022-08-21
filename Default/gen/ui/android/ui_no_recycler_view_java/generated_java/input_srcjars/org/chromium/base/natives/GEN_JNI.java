package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.ui.base.Clipboard.cleanupForTesting
   * @return (void)
   */
  public static final native void org_chromium_ui_base_Clipboard_cleanupForTesting();

  /**
   * org.chromium.ui.base.Clipboard.getLastModifiedTimeToJavaTime
   * @param nativeClipboardAndroid (long)
   * @return (long)
   */
  public static final native long org_chromium_ui_base_Clipboard_getLastModifiedTimeToJavaTime(
      long nativeClipboardAndroid);

  /**
   * org.chromium.ui.base.Clipboard.onPrimaryClipChanged
   * @param nativeClipboardAndroid (long)
   * @param caller (org.chromium.ui.base.Clipboard)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_Clipboard_onPrimaryClipChanged(
      long nativeClipboardAndroid, Object caller);

  /**
   * org.chromium.ui.base.Clipboard.onPrimaryClipTimestampInvalidated
   * @param nativeClipboardAndroid (long)
   * @param caller (org.chromium.ui.base.Clipboard)
   * @param timestamp (long)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_Clipboard_onPrimaryClipTimestampInvalidated(
      long nativeClipboardAndroid, Object caller, long timestamp);

  /**
   * org.chromium.ui.base.EventForwarder.cancelFling
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param timeMs (long)
   * @param preventBoosting (boolean)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_cancelFling(
      long nativeEventForwarder, Object caller, long timeMs, boolean preventBoosting);

  /**
   * org.chromium.ui.base.EventForwarder.dispatchKeyEvent
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param event (android.view.KeyEvent)
   * @return (boolean)
   */
  public static final native boolean org_chromium_ui_base_EventForwarder_dispatchKeyEvent(
      long nativeEventForwarder, Object caller, Object event);

  /**
   * org.chromium.ui.base.EventForwarder.doubleTap
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param timeMs (long)
   * @param x (int)
   * @param y (int)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_doubleTap(
      long nativeEventForwarder, Object caller, long timeMs, int x, int y);

  /**
   * org.chromium.ui.base.EventForwarder.getJavaWindowAndroid
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @return (org.chromium.ui.base.WindowAndroid)
   */
  public static final native Object org_chromium_ui_base_EventForwarder_getJavaWindowAndroid(
      long nativeEventForwarder, Object caller);

  /**
   * org.chromium.ui.base.EventForwarder.onDragEvent
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param action (int)
   * @param x (float)
   * @param y (float)
   * @param screenX (float)
   * @param screenY (float)
   * @param mimeTypes (java.lang.String[])
   * @param content (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_onDragEvent(
      long nativeEventForwarder, Object caller, int action, float x, float y, float screenX,
      float screenY, String[] mimeTypes, String content);

  /**
   * org.chromium.ui.base.EventForwarder.onGenericMotionEvent
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param event (android.view.MotionEvent)
   * @param timeMs (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_ui_base_EventForwarder_onGenericMotionEvent(
      long nativeEventForwarder, Object caller, Object event, long timeMs);

  /**
   * org.chromium.ui.base.EventForwarder.onGestureEvent
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param type (int)
   * @param timeMs (long)
   * @param delta (float)
   * @return (boolean)
   */
  public static final native boolean org_chromium_ui_base_EventForwarder_onGestureEvent(
      long nativeEventForwarder, Object caller, int type, long timeMs, float delta);

  /**
   * org.chromium.ui.base.EventForwarder.onKeyUp
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param event (android.view.KeyEvent)
   * @param keyCode (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_ui_base_EventForwarder_onKeyUp(
      long nativeEventForwarder, Object caller, Object event, int keyCode);

  /**
   * org.chromium.ui.base.EventForwarder.onMouseEvent
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param timeMs (long)
   * @param action (int)
   * @param x (float)
   * @param y (float)
   * @param pointerId (int)
   * @param pressure (float)
   * @param orientation (float)
   * @param tilt (float)
   * @param changedButton (int)
   * @param buttonState (int)
   * @param metaState (int)
   * @param toolType (int)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_onMouseEvent(
      long nativeEventForwarder, Object caller, long timeMs, int action, float x, float y,
      int pointerId, float pressure, float orientation, float tilt, int changedButton,
      int buttonState, int metaState, int toolType);

  /**
   * org.chromium.ui.base.EventForwarder.onTouchEvent
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param event (android.view.MotionEvent)
   * @param timeMs (long)
   * @param action (int)
   * @param pointerCount (int)
   * @param historySize (int)
   * @param actionIndex (int)
   * @param x0 (float)
   * @param y0 (float)
   * @param x1 (float)
   * @param y1 (float)
   * @param pointerId0 (int)
   * @param pointerId1 (int)
   * @param touchMajor0 (float)
   * @param touchMajor1 (float)
   * @param touchMinor0 (float)
   * @param touchMinor1 (float)
   * @param orientation0 (float)
   * @param orientation1 (float)
   * @param tilt0 (float)
   * @param tilt1 (float)
   * @param rawX (float)
   * @param rawY (float)
   * @param androidToolType0 (int)
   * @param androidToolType1 (int)
   * @param gestureClassification (int)
   * @param androidButtonState (int)
   * @param androidMetaState (int)
   * @param isTouchHandleEvent (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_ui_base_EventForwarder_onTouchEvent(
      long nativeEventForwarder, Object caller, Object event, long timeMs, int action,
      int pointerCount, int historySize, int actionIndex, float x0, float y0, float x1, float y1,
      int pointerId0, int pointerId1, float touchMajor0, float touchMajor1, float touchMinor0,
      float touchMinor1, float orientation0, float orientation1, float tilt0, float tilt1,
      float rawX, float rawY, int androidToolType0, int androidToolType1, int gestureClassification,
      int androidButtonState, int androidMetaState, boolean isTouchHandleEvent);

  /**
   * org.chromium.ui.base.EventForwarder.scrollBy
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param deltaX (float)
   * @param deltaY (float)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_scrollBy(
      long nativeEventForwarder, Object caller, float deltaX, float deltaY);

  /**
   * org.chromium.ui.base.EventForwarder.scrollTo
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param x (float)
   * @param y (float)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_scrollTo(
      long nativeEventForwarder, Object caller, float x, float y);

  /**
   * org.chromium.ui.base.EventForwarder.startFling
   * @param nativeEventForwarder (long)
   * @param caller (org.chromium.ui.base.EventForwarder)
   * @param timeMs (long)
   * @param velocityX (float)
   * @param velocityY (float)
   * @param syntheticScroll (boolean)
   * @param preventBoosting (boolean)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_EventForwarder_startFling(
      long nativeEventForwarder, Object caller, long timeMs, float velocityX, float velocityY,
      boolean syntheticScroll, boolean preventBoosting);

  /**
   * org.chromium.ui.base.LocalizationUtils.getFirstStrongCharacterDirection
   * @param string (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_ui_base_LocalizationUtils_getFirstStrongCharacterDirection(
      String string);

  /**
   * org.chromium.ui.base.LocalizationUtils.getNativeUiLocale
   * @return (java.lang.String)
   */
  public static final native String org_chromium_ui_base_LocalizationUtils_getNativeUiLocale();

  /**
   * org.chromium.ui.base.SelectFileDialog.onContactsSelected
   * @param nativeSelectFileDialogImpl (long)
   * @param caller (org.chromium.ui.base.SelectFileDialog)
   * @param contacts (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_SelectFileDialog_onContactsSelected(
      long nativeSelectFileDialogImpl, Object caller, String contacts);

  /**
   * org.chromium.ui.base.SelectFileDialog.onFileNotSelected
   * @param nativeSelectFileDialogImpl (long)
   * @param caller (org.chromium.ui.base.SelectFileDialog)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_SelectFileDialog_onFileNotSelected(
      long nativeSelectFileDialogImpl, Object caller);

  /**
   * org.chromium.ui.base.SelectFileDialog.onFileSelected
   * @param nativeSelectFileDialogImpl (long)
   * @param caller (org.chromium.ui.base.SelectFileDialog)
   * @param filePath (java.lang.String)
   * @param displayName (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_SelectFileDialog_onFileSelected(
      long nativeSelectFileDialogImpl, Object caller, String filePath, String displayName);

  /**
   * org.chromium.ui.base.SelectFileDialog.onMultipleFilesSelected
   * @param nativeSelectFileDialogImpl (long)
   * @param caller (org.chromium.ui.base.SelectFileDialog)
   * @param filePathArray (java.lang.String[])
   * @param displayNameArray (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_ui_base_SelectFileDialog_onMultipleFilesSelected(
      long nativeSelectFileDialogImpl, Object caller, String[] filePathArray,
      String[] displayNameArray);

  /**
   * org.chromium.ui.base.WindowAndroid.destroy
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_destroy(
      long nativeWindowAndroid, Object caller);

  /**
   * org.chromium.ui.base.WindowAndroid.init
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @param displayId (int)
   * @param scrollFactor (float)
   * @param windowIsWideColorGamut (boolean)
   * @return (long)
   */
  public static final native long org_chromium_ui_base_WindowAndroid_init(Object caller,
      int displayId, float scrollFactor, boolean windowIsWideColorGamut);

  /**
   * org.chromium.ui.base.WindowAndroid.onActivityStarted
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_onActivityStarted(
      long nativeWindowAndroid, Object caller);

  /**
   * org.chromium.ui.base.WindowAndroid.onActivityStopped
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_onActivityStopped(
      long nativeWindowAndroid, Object caller);

  /**
   * org.chromium.ui.base.WindowAndroid.onSupportedRefreshRatesUpdated
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @param supportedRefreshRates (float[])
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_onSupportedRefreshRatesUpdated(
      long nativeWindowAndroid, Object caller, float[] supportedRefreshRates);

  /**
   * org.chromium.ui.base.WindowAndroid.onUpdateRefreshRate
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @param refreshRate (float)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_onUpdateRefreshRate(
      long nativeWindowAndroid, Object caller, float refreshRate);

  /**
   * org.chromium.ui.base.WindowAndroid.onVisibilityChanged
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @param visible (boolean)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_onVisibilityChanged(
      long nativeWindowAndroid, Object caller, boolean visible);

  /**
   * org.chromium.ui.base.WindowAndroid.setVSyncPaused
   * @param nativeWindowAndroid (long)
   * @param caller (org.chromium.ui.base.WindowAndroid)
   * @param paused (boolean)
   * @return (void)
   */
  public static final native void org_chromium_ui_base_WindowAndroid_setVSyncPaused(
      long nativeWindowAndroid, Object caller, boolean paused);

  /**
   * org.chromium.ui.display.DisplayAndroidManager.removeDisplay
   * @param nativeDisplayAndroidManager (long)
   * @param caller (org.chromium.ui.display.DisplayAndroidManager)
   * @param sdkDisplayId (int)
   * @return (void)
   */
  public static final native void org_chromium_ui_display_DisplayAndroidManager_removeDisplay(
      long nativeDisplayAndroidManager, Object caller, int sdkDisplayId);

  /**
   * org.chromium.ui.display.DisplayAndroidManager.setPrimaryDisplayId
   * @param nativeDisplayAndroidManager (long)
   * @param caller (org.chromium.ui.display.DisplayAndroidManager)
   * @param sdkDisplayId (int)
   * @return (void)
   */
  public static final native void org_chromium_ui_display_DisplayAndroidManager_setPrimaryDisplayId(
      long nativeDisplayAndroidManager, Object caller, int sdkDisplayId);

  /**
   * org.chromium.ui.display.DisplayAndroidManager.updateDisplay
   * @param nativeDisplayAndroidManager (long)
   * @param caller (org.chromium.ui.display.DisplayAndroidManager)
   * @param sdkDisplayId (int)
   * @param width (int)
   * @param height (int)
   * @param dipScale (float)
   * @param rotationDegrees (int)
   * @param bitsPerPixel (int)
   * @param bitsPerComponent (int)
   * @param isWideColorGamut (boolean)
   * @return (void)
   */
  public static final native void org_chromium_ui_display_DisplayAndroidManager_updateDisplay(
      long nativeDisplayAndroidManager, Object caller, int sdkDisplayId, int width, int height,
      float dipScale, int rotationDegrees, int bitsPerPixel, int bitsPerComponent,
      boolean isWideColorGamut);

  /**
   * org.chromium.ui.events.devices.InputDeviceObserver.inputConfigurationChanged
   * @param caller (org.chromium.ui.events.devices.InputDeviceObserver)
   * @return (void)
   */
  public static final native void org_chromium_ui_events_devices_InputDeviceObserver_inputConfigurationChanged(
      Object caller);

  /**
   * org.chromium.ui.gfx.ViewConfigurationHelper.updateSharedViewConfiguration
   * @param caller (org.chromium.ui.gfx.ViewConfigurationHelper)
   * @param maximumFlingVelocity (float)
   * @param minimumFlingVelocity (float)
   * @param touchSlop (float)
   * @param doubleTapSlop (float)
   * @param minScalingSpan (float)
   * @return (void)
   */
  public static final native void org_chromium_ui_gfx_ViewConfigurationHelper_updateSharedViewConfiguration(
      Object caller, float maximumFlingVelocity, float minimumFlingVelocity, float touchSlop,
      float doubleTapSlop, float minScalingSpan);

  /**
   * org.chromium.ui.gl.SurfaceTextureListener.destroy
   * @param nativeSurfaceTextureListener (long)
   * @param caller (org.chromium.ui.gl.SurfaceTextureListener)
   * @return (void)
   */
  public static final native void org_chromium_ui_gl_SurfaceTextureListener_destroy(
      long nativeSurfaceTextureListener, Object caller);

  /**
   * org.chromium.ui.gl.SurfaceTextureListener.frameAvailable
   * @param nativeSurfaceTextureListener (long)
   * @param caller (org.chromium.ui.gl.SurfaceTextureListener)
   * @return (void)
   */
  public static final native void org_chromium_ui_gl_SurfaceTextureListener_frameAvailable(
      long nativeSurfaceTextureListener, Object caller);

  /**
   * org.chromium.ui.resources.ResourceFactory.createBitmapResource
   * @return (long)
   */
  public static final native long org_chromium_ui_resources_ResourceFactory_createBitmapResource();

  /**
   * org.chromium.ui.resources.ResourceFactory.createNinePatchBitmapResource
   * @param paddingLeft (int)
   * @param paddingTop (int)
   * @param paddingRight (int)
   * @param paddingBottom (int)
   * @param apertureLeft (int)
   * @param apertureTop (int)
   * @param apertureRight (int)
   * @param apertureBottom (int)
   * @return (long)
   */
  public static final native long org_chromium_ui_resources_ResourceFactory_createNinePatchBitmapResource(
      int paddingLeft, int paddingTop, int paddingRight, int paddingBottom, int apertureLeft,
      int apertureTop, int apertureRight, int apertureBottom);

  /**
   * org.chromium.ui.resources.ResourceManager.clearTintedResourceCache
   * @param nativeResourceManagerImpl (long)
   * @param caller (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_ui_resources_ResourceManager_clearTintedResourceCache(
      long nativeResourceManagerImpl, Object caller);

  /**
   * org.chromium.ui.resources.ResourceManager.onResourceReady
   * @param nativeResourceManagerImpl (long)
   * @param caller (org.chromium.ui.resources.ResourceManager)
   * @param resType (int)
   * @param resId (int)
   * @param bitmap (android.graphics.Bitmap)
   * @param width (int)
   * @param height (int)
   * @param nativeResource (long)
   * @return (void)
   */
  public static final native void org_chromium_ui_resources_ResourceManager_onResourceReady(
      long nativeResourceManagerImpl, Object caller, int resType, int resId, Object bitmap,
      int width, int height, long nativeResource);

  /**
   * org.chromium.ui.resources.ResourceManager.removeResource
   * @param nativeResourceManagerImpl (long)
   * @param caller (org.chromium.ui.resources.ResourceManager)
   * @param resType (int)
   * @param resId (int)
   * @return (void)
   */
  public static final native void org_chromium_ui_resources_ResourceManager_removeResource(
      long nativeResourceManagerImpl, Object caller, int resType, int resId);
}
