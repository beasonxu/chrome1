package org.chromium.base.natives;

import java.lang.Class;
import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.content.browser.AppWebMessagePort.closeAndDestroy
   * @param nativeAppWebMessagePort (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AppWebMessagePort_closeAndDestroy(
      long nativeAppWebMessagePort);

  /**
   * org.chromium.content.browser.AppWebMessagePort.createPair
   * @return (org.chromium.content.browser.AppWebMessagePort[])
   */
  public static final native Object[] org_chromium_content_browser_AppWebMessagePort_createPair();

  /**
   * org.chromium.content.browser.AppWebMessagePort.postMessage
   * @param nativeAppWebMessagePort (long)
   * @param messagePayload (org.chromium.content_public.browser.MessagePayload)
   * @param sentPorts (org.chromium.content_public.browser.MessagePort[])
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AppWebMessagePort_postMessage(
      long nativeAppWebMessagePort, Object messagePayload, Object[] sentPorts);

  /**
   * org.chromium.content.browser.AppWebMessagePort.setShouldReceiveMessages
   * @param nativeAppWebMessagePort (long)
   * @param shouldReceiveMessage (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AppWebMessagePort_setShouldReceiveMessages(
      long nativeAppWebMessagePort, boolean shouldReceiveMessage);

  /**
   * org.chromium.content.browser.AudioFocusDelegate.onResume
   * @param nativeAudioFocusDelegateAndroid (long)
   * @param caller (org.chromium.content.browser.AudioFocusDelegate)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AudioFocusDelegate_onResume(
      long nativeAudioFocusDelegateAndroid, Object caller);

  /**
   * org.chromium.content.browser.AudioFocusDelegate.onStartDucking
   * @param nativeAudioFocusDelegateAndroid (long)
   * @param caller (org.chromium.content.browser.AudioFocusDelegate)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AudioFocusDelegate_onStartDucking(
      long nativeAudioFocusDelegateAndroid, Object caller);

  /**
   * org.chromium.content.browser.AudioFocusDelegate.onStopDucking
   * @param nativeAudioFocusDelegateAndroid (long)
   * @param caller (org.chromium.content.browser.AudioFocusDelegate)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AudioFocusDelegate_onStopDucking(
      long nativeAudioFocusDelegateAndroid, Object caller);

  /**
   * org.chromium.content.browser.AudioFocusDelegate.onSuspend
   * @param nativeAudioFocusDelegateAndroid (long)
   * @param caller (org.chromium.content.browser.AudioFocusDelegate)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AudioFocusDelegate_onSuspend(
      long nativeAudioFocusDelegateAndroid, Object caller);

  /**
   * org.chromium.content.browser.AudioFocusDelegate.recordSessionDuck
   * @param nativeAudioFocusDelegateAndroid (long)
   * @param caller (org.chromium.content.browser.AudioFocusDelegate)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_AudioFocusDelegate_recordSessionDuck(
      long nativeAudioFocusDelegateAndroid, Object caller);

  /**
   * org.chromium.content.browser.BackgroundSyncNetworkObserver.notifyConnectionTypeChanged
   * @param nativePtr (long)
   * @param caller (org.chromium.content.browser.BackgroundSyncNetworkObserver)
   * @param newConnectionType (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_BackgroundSyncNetworkObserver_notifyConnectionTypeChanged(
      long nativePtr, Object caller, int newConnectionType);

  /**
   * org.chromium.content.browser.ChildProcessLauncherHelperImpl.onChildProcessStarted
   * @param nativeChildProcessLauncherHelper (long)
   * @param pid (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ChildProcessLauncherHelperImpl_onChildProcessStarted(
      long nativeChildProcessLauncherHelper, int pid);

  /**
   * org.chromium.content.browser.ChildProcessLauncherHelperImpl.serviceGroupImportanceEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_ChildProcessLauncherHelperImpl_serviceGroupImportanceEnabled(
      );

  /**
   * org.chromium.content.browser.ChildProcessLauncherHelperImpl.setTerminationInfo
   * @param termiantionInfoPtr (long)
   * @param bindingState (int)
   * @param killedByUs (boolean)
   * @param cleanExit (boolean)
   * @param exceptionDuringInit (boolean)
   * @param reverseRank (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ChildProcessLauncherHelperImpl_setTerminationInfo(
      long termiantionInfoPtr, int bindingState, boolean killedByUs, boolean cleanExit,
      boolean exceptionDuringInit, int reverseRank);

  /**
   * org.chromium.content.browser.ClientDataJsonImpl.buildClientDataJson
   * @param clientDataRequestType (int)
   * @param callerOrigin (java.lang.String)
   * @param challenge (byte[])
   * @param isCrossOrigin (boolean)
   * @param optionsByteBuffer (java.nio.ByteBuffer)
   * @param relyingPartyId (java.lang.String)
   * @param topOrigin (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_content_browser_ClientDataJsonImpl_buildClientDataJson(
      int clientDataRequestType, String callerOrigin, byte[] challenge, boolean isCrossOrigin,
      Object optionsByteBuffer, String relyingPartyId, String topOrigin);

  /**
   * org.chromium.content.browser.ContactsDialogHost.addContact
   * @param nativeContactsProviderAndroid (long)
   * @param names (java.lang.String[])
   * @param emails (java.lang.String[])
   * @param tel (java.lang.String[])
   * @param addresses (java.nio.ByteBuffer[])
   * @param icons (java.nio.ByteBuffer[])
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContactsDialogHost_addContact(
      long nativeContactsProviderAndroid, String[] names, String[] emails, String[] tel,
      Object[] addresses, Object[] icons);

  /**
   * org.chromium.content.browser.ContactsDialogHost.endContactsList
   * @param nativeContactsProviderAndroid (long)
   * @param percentageShared (int)
   * @param propertiesRequested (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContactsDialogHost_endContactsList(
      long nativeContactsProviderAndroid, int percentageShared, int propertiesRequested);

  /**
   * org.chromium.content.browser.ContactsDialogHost.endWithPermissionDenied
   * @param nativeContactsProviderAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContactsDialogHost_endWithPermissionDenied(
      long nativeContactsProviderAndroid);

  /**
   * org.chromium.content.browser.ContentFeatureListImpl.getFieldTrialParamByFeatureAsBoolean
   * @param featureName (java.lang.String)
   * @param paramName (java.lang.String)
   * @param defaultValue (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_ContentFeatureListImpl_getFieldTrialParamByFeatureAsBoolean(
      String featureName, String paramName, boolean defaultValue);

  /**
   * org.chromium.content.browser.ContentFeatureListImpl.getFieldTrialParamByFeatureAsInt
   * @param featureName (java.lang.String)
   * @param paramName (java.lang.String)
   * @param defaultValue (int)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_ContentFeatureListImpl_getFieldTrialParamByFeatureAsInt(
      String featureName, String paramName, int defaultValue);

  /**
   * org.chromium.content.browser.ContentFeatureListImpl.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_ContentFeatureListImpl_isEnabled(
      String featureName);

  /**
   * org.chromium.content.browser.ContentUiEventHandler.cancelFling
   * @param nativeContentUiEventHandler (long)
   * @param caller (org.chromium.content.browser.ContentUiEventHandler)
   * @param timeMs (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContentUiEventHandler_cancelFling(
      long nativeContentUiEventHandler, Object caller, long timeMs);

  /**
   * org.chromium.content.browser.ContentUiEventHandler.init
   * @param caller (org.chromium.content.browser.ContentUiEventHandler)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_ContentUiEventHandler_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.ContentUiEventHandler.sendMouseEvent
   * @param nativeContentUiEventHandler (long)
   * @param caller (org.chromium.content.browser.ContentUiEventHandler)
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
  public static final native void org_chromium_content_browser_ContentUiEventHandler_sendMouseEvent(
      long nativeContentUiEventHandler, Object caller, long timeMs, int action, float x, float y,
      int pointerId, float pressure, float orientation, float tilt, int changedButton,
      int buttonState, int metaState, int toolType);

  /**
   * org.chromium.content.browser.ContentUiEventHandler.sendMouseWheelEvent
   * @param nativeContentUiEventHandler (long)
   * @param caller (org.chromium.content.browser.ContentUiEventHandler)
   * @param timeMs (long)
   * @param x (float)
   * @param y (float)
   * @param ticksX (float)
   * @param ticksY (float)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContentUiEventHandler_sendMouseWheelEvent(
      long nativeContentUiEventHandler, Object caller, long timeMs, float x, float y, float ticksX,
      float ticksY);

  /**
   * org.chromium.content.browser.ContentUiEventHandler.sendScrollEvent
   * @param nativeContentUiEventHandler (long)
   * @param caller (org.chromium.content.browser.ContentUiEventHandler)
   * @param timeMs (long)
   * @param deltaX (float)
   * @param deltaY (float)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContentUiEventHandler_sendScrollEvent(
      long nativeContentUiEventHandler, Object caller, long timeMs, float deltaX, float deltaY);

  /**
   * org.chromium.content.browser.ContentViewStaticsImpl.setWebKitSharedTimersSuspended
   * @param suspend (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_ContentViewStaticsImpl_setWebKitSharedTimersSuspended(
      boolean suspend);

  /**
   * org.chromium.content.browser.GestureListenerManagerImpl.init
   * @param caller (org.chromium.content.browser.GestureListenerManagerImpl)
   * @param webContents (org.chromium.content.browser.webcontents.WebContentsImpl)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_GestureListenerManagerImpl_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.GestureListenerManagerImpl.resetGestureDetection
   * @param nativeGestureListenerManager (long)
   * @param caller (org.chromium.content.browser.GestureListenerManagerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_GestureListenerManagerImpl_resetGestureDetection(
      long nativeGestureListenerManager, Object caller);

  /**
   * org.chromium.content.browser.GestureListenerManagerImpl.setDoubleTapSupportEnabled
   * @param nativeGestureListenerManager (long)
   * @param caller (org.chromium.content.browser.GestureListenerManagerImpl)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_GestureListenerManagerImpl_setDoubleTapSupportEnabled(
      long nativeGestureListenerManager, Object caller, boolean enabled);

  /**
   * org.chromium.content.browser.GestureListenerManagerImpl.setHasListenersAttached
   * @param nativeGestureListenerManager (long)
   * @param hasListeners (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_GestureListenerManagerImpl_setHasListenersAttached(
      long nativeGestureListenerManager, boolean hasListeners);

  /**
   * org.chromium.content.browser.GestureListenerManagerImpl.setMultiTouchZoomSupportEnabled
   * @param nativeGestureListenerManager (long)
   * @param caller (org.chromium.content.browser.GestureListenerManagerImpl)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_GestureListenerManagerImpl_setMultiTouchZoomSupportEnabled(
      long nativeGestureListenerManager, Object caller, boolean enabled);

  /**
   * org.chromium.content.browser.GpuProcessCallback.completeScopedSurfaceRequest
   * @param requestToken (org.chromium.base.UnguessableToken)
   * @param surface (android.view.Surface)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_GpuProcessCallback_completeScopedSurfaceRequest(
      Object requestToken, Object surface);

  /**
   * org.chromium.content.browser.GpuProcessCallback.getViewSurface
   * @param surfaceId (int)
   * @return (org.chromium.content.common.SurfaceWrapper)
   */
  public static final native Object org_chromium_content_browser_GpuProcessCallback_getViewSurface(
      int surfaceId);

  /**
   * org.chromium.content.browser.HostZoomMapImpl.getDefaultZoomLevel
   * @param context (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (double)
   */
  public static final native double org_chromium_content_browser_HostZoomMapImpl_getDefaultZoomLevel(
      Object context);

  /**
   * org.chromium.content.browser.HostZoomMapImpl.getZoomLevel
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (double)
   */
  public static final native double org_chromium_content_browser_HostZoomMapImpl_getZoomLevel(
      Object webContents);

  /**
   * org.chromium.content.browser.HostZoomMapImpl.setDefaultZoomLevel
   * @param context (org.chromium.content_public.browser.BrowserContextHandle)
   * @param newDefaultZoomLevel (double)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_HostZoomMapImpl_setDefaultZoomLevel(
      Object context, double newDefaultZoomLevel);

  /**
   * org.chromium.content.browser.HostZoomMapImpl.setZoomLevel
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param newZoomLevel (double)
   * @param adjustedZoomLevel (double)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_HostZoomMapImpl_setZoomLevel(
      Object webContents, double newZoomLevel, double adjustedZoomLevel);

  /**
   * org.chromium.content.browser.JavascriptInjectorImpl.addInterface
   * @param nativeJavascriptInjector (long)
   * @param caller (org.chromium.content.browser.JavascriptInjectorImpl)
   * @param object (java.lang.Object)
   * @param name (java.lang.String)
   * @param requiredAnnotation (java.lang.Class)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_JavascriptInjectorImpl_addInterface(
      long nativeJavascriptInjector, Object caller, Object object, String name,
      Class requiredAnnotation);

  /**
   * org.chromium.content.browser.JavascriptInjectorImpl.init
   * @param caller (org.chromium.content.browser.JavascriptInjectorImpl)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param retainedObjects (java.lang.Object)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_JavascriptInjectorImpl_init(
      Object caller, Object webContents, Object retainedObjects);

  /**
   * org.chromium.content.browser.JavascriptInjectorImpl.removeInterface
   * @param nativeJavascriptInjector (long)
   * @param caller (org.chromium.content.browser.JavascriptInjectorImpl)
   * @param name (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_JavascriptInjectorImpl_removeInterface(
      long nativeJavascriptInjector, Object caller, String name);

  /**
   * org.chromium.content.browser.JavascriptInjectorImpl.setAllowInspection
   * @param nativeJavascriptInjector (long)
   * @param caller (org.chromium.content.browser.JavascriptInjectorImpl)
   * @param allow (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_JavascriptInjectorImpl_setAllowInspection(
      long nativeJavascriptInjector, Object caller, boolean allow);

  /**
   * org.chromium.content.browser.MediaSessionImpl.didReceiveAction
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @param action (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_didReceiveAction(
      long nativeMediaSessionAndroid, Object caller, int action);

  /**
   * org.chromium.content.browser.MediaSessionImpl.getMediaSessionFromWebContents
   * @param contents (org.chromium.content_public.browser.WebContents)
   * @return (org.chromium.content.browser.MediaSessionImpl)
   */
  public static final native Object org_chromium_content_browser_MediaSessionImpl_getMediaSessionFromWebContents(
      Object contents);

  /**
   * org.chromium.content.browser.MediaSessionImpl.requestSystemAudioFocus
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_requestSystemAudioFocus(
      long nativeMediaSessionAndroid, Object caller);

  /**
   * org.chromium.content.browser.MediaSessionImpl.resume
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_resume(
      long nativeMediaSessionAndroid, Object caller);

  /**
   * org.chromium.content.browser.MediaSessionImpl.seek
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @param millis (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_seek(
      long nativeMediaSessionAndroid, Object caller, long millis);

  /**
   * org.chromium.content.browser.MediaSessionImpl.seekTo
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @param millis (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_seekTo(
      long nativeMediaSessionAndroid, Object caller, long millis);

  /**
   * org.chromium.content.browser.MediaSessionImpl.stop
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_stop(
      long nativeMediaSessionAndroid, Object caller);

  /**
   * org.chromium.content.browser.MediaSessionImpl.suspend
   * @param nativeMediaSessionAndroid (long)
   * @param caller (org.chromium.content.browser.MediaSessionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_MediaSessionImpl_suspend(
      long nativeMediaSessionAndroid, Object caller);

  /**
   * org.chromium.content.browser.RenderWidgetHostViewImpl.dismissTextHandles
   * @param nativeRenderWidgetHostViewAndroid (long)
   * @param caller (org.chromium.content.browser.RenderWidgetHostViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_RenderWidgetHostViewImpl_dismissTextHandles(
      long nativeRenderWidgetHostViewAndroid, Object caller);

  /**
   * org.chromium.content.browser.RenderWidgetHostViewImpl.getBackgroundColor
   * @param nativeRenderWidgetHostViewAndroid (long)
   * @param caller (org.chromium.content.browser.RenderWidgetHostViewImpl)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_RenderWidgetHostViewImpl_getBackgroundColor(
      long nativeRenderWidgetHostViewAndroid, Object caller);

  /**
   * org.chromium.content.browser.RenderWidgetHostViewImpl.isReady
   * @param nativeRenderWidgetHostViewAndroid (long)
   * @param caller (org.chromium.content.browser.RenderWidgetHostViewImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_RenderWidgetHostViewImpl_isReady(
      long nativeRenderWidgetHostViewAndroid, Object caller);

  /**
   * org.chromium.content.browser.RenderWidgetHostViewImpl.onViewportInsetBottomChanged
   * @param nativeRenderWidgetHostViewAndroid (long)
   * @param caller (org.chromium.content.browser.RenderWidgetHostViewImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_RenderWidgetHostViewImpl_onViewportInsetBottomChanged(
      long nativeRenderWidgetHostViewAndroid, Object caller);

  /**
   * org.chromium.content.browser.RenderWidgetHostViewImpl.showContextMenuAtTouchHandle
   * @param nativeRenderWidgetHostViewAndroid (long)
   * @param caller (org.chromium.content.browser.RenderWidgetHostViewImpl)
   * @param x (int)
   * @param y (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_RenderWidgetHostViewImpl_showContextMenuAtTouchHandle(
      long nativeRenderWidgetHostViewAndroid, Object caller, int x, int y);

  /**
   * org.chromium.content.browser.RenderWidgetHostViewImpl.writeContentBitmapToDiskAsync
   * @param nativeRenderWidgetHostViewAndroid (long)
   * @param caller (org.chromium.content.browser.RenderWidgetHostViewImpl)
   * @param width (int)
   * @param height (int)
   * @param path (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.String>)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_RenderWidgetHostViewImpl_writeContentBitmapToDiskAsync(
      long nativeRenderWidgetHostViewAndroid, Object caller, int width, int height, String path,
      Object callback);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onAudioEnd
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onAudioEnd(
      long nativeSpeechRecognizerImplAndroid, Object caller);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onAudioStart
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onAudioStart(
      long nativeSpeechRecognizerImplAndroid, Object caller);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onRecognitionEnd
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onRecognitionEnd(
      long nativeSpeechRecognizerImplAndroid, Object caller);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onRecognitionError
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @param error (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onRecognitionError(
      long nativeSpeechRecognizerImplAndroid, Object caller, int error);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onRecognitionResults
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @param results (java.lang.String[])
   * @param scores (float[])
   * @param provisional (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onRecognitionResults(
      long nativeSpeechRecognizerImplAndroid, Object caller, String[] results, float[] scores,
      boolean provisional);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onSoundEnd
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onSoundEnd(
      long nativeSpeechRecognizerImplAndroid, Object caller);

  /**
   * org.chromium.content.browser.SpeechRecognitionImpl.onSoundStart
   * @param nativeSpeechRecognizerImplAndroid (long)
   * @param caller (org.chromium.content.browser.SpeechRecognitionImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_SpeechRecognitionImpl_onSoundStart(
      long nativeSpeechRecognizerImplAndroid, Object caller);

  /**
   * org.chromium.content.browser.TtsPlatformImpl.onEndEvent
   * @param nativeTtsPlatformImplAndroid (long)
   * @param utteranceId (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_TtsPlatformImpl_onEndEvent(
      long nativeTtsPlatformImplAndroid, int utteranceId);

  /**
   * org.chromium.content.browser.TtsPlatformImpl.onErrorEvent
   * @param nativeTtsPlatformImplAndroid (long)
   * @param utteranceId (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_TtsPlatformImpl_onErrorEvent(
      long nativeTtsPlatformImplAndroid, int utteranceId);

  /**
   * org.chromium.content.browser.TtsPlatformImpl.onStartEvent
   * @param nativeTtsPlatformImplAndroid (long)
   * @param utteranceId (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_TtsPlatformImpl_onStartEvent(
      long nativeTtsPlatformImplAndroid, int utteranceId);

  /**
   * org.chromium.content.browser.TtsPlatformImpl.voicesChanged
   * @param nativeTtsPlatformImplAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_TtsPlatformImpl_voicesChanged(
      long nativeTtsPlatformImplAndroid);

  /**
   * org.chromium.content.browser.accessibility.BrowserAccessibilityState.onAnimatorDurationScaleChanged
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_BrowserAccessibilityState_onAnimatorDurationScaleChanged(
      );

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.addSpellingErrorForTesting
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param startOffset (int)
   * @param endOffset (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_addSpellingErrorForTesting(
      long nativeWebContentsAccessibilityAndroid, int id, int startOffset, int endOffset);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.adjustSlider
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param increment (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_adjustSlider(
      long nativeWebContentsAccessibilityAndroid, int id, boolean increment);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.areInlineTextBoxesLoaded
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_areInlineTextBoxesLoaded(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.blur
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_blur(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.click
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_click(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.deleteEarly
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_deleteEarly(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.enable
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param screenReaderMode (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_enable(
      long nativeWebContentsAccessibilityAndroid, boolean screenReaderMode);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.findElementType
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param startId (int)
   * @param elementType (java.lang.String)
   * @param forwards (boolean)
   * @param canWrapToLastElement (boolean)
   * @param useDefaultPredicate (boolean)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_findElementType(
      long nativeWebContentsAccessibilityAndroid, int startId, String elementType, boolean forwards,
      boolean canWrapToLastElement, boolean useDefaultPredicate);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.focus
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_focus(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getAbsolutePositionForNode
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (int[])
   */
  public static final native int[] org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getAbsolutePositionForNode(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getCharacterBoundingBoxes
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param start (int)
   * @param len (int)
   * @return (int[])
   */
  public static final native int[] org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getCharacterBoundingBoxes(
      long nativeWebContentsAccessibilityAndroid, int id, int start, int len);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getEditableTextSelectionEnd
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getEditableTextSelectionEnd(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getEditableTextSelectionStart
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getEditableTextSelectionStart(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getIdForElementAfterElementHostingAutofillPopup
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getIdForElementAfterElementHostingAutofillPopup(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getImageData
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param info (androidx.core.view.accessibility.AccessibilityNodeInfoCompat)
   * @param id (int)
   * @param hasSentPreviousRequest (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getImageData(
      long nativeWebContentsAccessibilityAndroid, Object info, int id,
      boolean hasSentPreviousRequest);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getMaxContentChangedEventsToFireForTesting
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getMaxContentChangedEventsToFireForTesting(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getRootId
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getRootId(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getSupportedHtmlElementTypes
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getSupportedHtmlElementTypes(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.getTextLength
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_getTextLength(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.init
   * @param caller (org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.initWithAXTree
   * @param caller (org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl)
   * @param axTreePtr (long)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_initWithAXTree(
      Object caller, long axTreePtr);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.isAutofillPopupNode
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_isAutofillPopupNode(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.isEditableText
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_isEditableText(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.isEnabled
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_isEnabled(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.isFocused
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_isFocused(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.isNodeValid
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_isNodeValid(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.isSlider
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_isSlider(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.loadInlineTextBoxes
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_loadInlineTextBoxes(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.moveAccessibilityFocus
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param oldId (int)
   * @param newId (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_moveAccessibilityFocus(
      long nativeWebContentsAccessibilityAndroid, int oldId, int newId);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.nextAtGranularity
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param selectionGranularity (int)
   * @param extendSelection (boolean)
   * @param id (int)
   * @param cursorIndex (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_nextAtGranularity(
      long nativeWebContentsAccessibilityAndroid, int selectionGranularity, boolean extendSelection,
      int id, int cursorIndex);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.onAutofillPopupDismissed
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_onAutofillPopupDismissed(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.onAutofillPopupDisplayed
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_onAutofillPopupDisplayed(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.onHoverEventNoRenderer
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param x (float)
   * @param y (float)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_onHoverEventNoRenderer(
      long nativeWebContentsAccessibilityAndroid, float x, float y);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.populateAccessibilityEvent
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param event (android.view.accessibility.AccessibilityEvent)
   * @param id (int)
   * @param eventType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_populateAccessibilityEvent(
      long nativeWebContentsAccessibilityAndroid, Object event, int id, int eventType);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.populateAccessibilityNodeInfo
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param info (androidx.core.view.accessibility.AccessibilityNodeInfoCompat)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_populateAccessibilityNodeInfo(
      long nativeWebContentsAccessibilityAndroid, Object info, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.previousAtGranularity
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param selectionGranularity (int)
   * @param extendSelection (boolean)
   * @param id (int)
   * @param cursorIndex (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_previousAtGranularity(
      long nativeWebContentsAccessibilityAndroid, int selectionGranularity, boolean extendSelection,
      int id, int cursorIndex);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.scroll
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param direction (int)
   * @param pageScroll (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_scroll(
      long nativeWebContentsAccessibilityAndroid, int id, int direction, boolean pageScroll);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.scrollToMakeNodeVisible
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_scrollToMakeNodeVisible(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.setAXMode
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param screenReaderMode (boolean)
   * @param isAccessibilityEnabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_setAXMode(
      long nativeWebContentsAccessibilityAndroid, boolean screenReaderMode,
      boolean isAccessibilityEnabled);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.setAllowImageDescriptions
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param allowImageDescriptions (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_setAllowImageDescriptions(
      long nativeWebContentsAccessibilityAndroid, boolean allowImageDescriptions);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.setMaxContentChangedEventsToFireForTesting
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param maxEvents (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_setMaxContentChangedEventsToFireForTesting(
      long nativeWebContentsAccessibilityAndroid, int maxEvents);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.setRangeValue
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param value (float)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_setRangeValue(
      long nativeWebContentsAccessibilityAndroid, int id, float value);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.setSelection
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param start (int)
   * @param end (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_setSelection(
      long nativeWebContentsAccessibilityAndroid, int id, int start, int end);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.setTextFieldValue
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @param newValue (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_setTextFieldValue(
      long nativeWebContentsAccessibilityAndroid, int id, String newValue);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.showContextMenu
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param id (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_showContextMenu(
      long nativeWebContentsAccessibilityAndroid, int id);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.signalEndOfTestForTesting
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_signalEndOfTestForTesting(
      long nativeWebContentsAccessibilityAndroid);

  /**
   * org.chromium.content.browser.accessibility.WebContentsAccessibilityImpl.updateCachedAccessibilityNodeInfo
   * @param nativeWebContentsAccessibilityAndroid (long)
   * @param info (androidx.core.view.accessibility.AccessibilityNodeInfoCompat)
   * @param id (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_accessibility_WebContentsAccessibilityImpl_updateCachedAccessibilityNodeInfo(
      long nativeWebContentsAccessibilityAndroid, Object info, int id);

  /**
   * org.chromium.content.browser.accessibility.captioning.CaptioningController.init
   * @param caller (org.chromium.content.browser.accessibility.captioning.CaptioningController)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_accessibility_captioning_CaptioningController_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.accessibility.captioning.CaptioningController.setTextTrackSettings
   * @param nativeCaptioningController (long)
   * @param caller (org.chromium.content.browser.accessibility.captioning.CaptioningController)
   * @param textTracksEnabled (boolean)
   * @param textTrackBackgroundColor (java.lang.String)
   * @param textTrackFontFamily (java.lang.String)
   * @param textTrackFontStyle (java.lang.String)
   * @param textTrackFontVariant (java.lang.String)
   * @param textTrackTextColor (java.lang.String)
   * @param textTrackTextShadow (java.lang.String)
   * @param textTrackTextSize (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_accessibility_captioning_CaptioningController_setTextTrackSettings(
      long nativeCaptioningController, Object caller, boolean textTracksEnabled,
      String textTrackBackgroundColor, String textTrackFontFamily, String textTrackFontStyle,
      String textTrackFontVariant, String textTrackTextColor, String textTrackTextShadow,
      String textTrackTextSize);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.completeInit
   * @param nativeDialogOverlayImpl (long)
   * @param caller (org.chromium.content.browser.androidoverlay.DialogOverlayImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_androidoverlay_DialogOverlayImpl_completeInit(
      long nativeDialogOverlayImpl, Object caller);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.destroy
   * @param nativeDialogOverlayImpl (long)
   * @param caller (org.chromium.content.browser.androidoverlay.DialogOverlayImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_androidoverlay_DialogOverlayImpl_destroy(
      long nativeDialogOverlayImpl, Object caller);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.getCompositorOffset
   * @param nativeDialogOverlayImpl (long)
   * @param caller (org.chromium.content.browser.androidoverlay.DialogOverlayImpl)
   * @param rect (org.chromium.gfx.mojom.Rect)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_androidoverlay_DialogOverlayImpl_getCompositorOffset(
      long nativeDialogOverlayImpl, Object caller, Object rect);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.init
   * @param caller (org.chromium.content.browser.androidoverlay.DialogOverlayImpl)
   * @param high (long)
   * @param low (long)
   * @param isPowerEfficient (boolean)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_androidoverlay_DialogOverlayImpl_init(
      Object caller, long high, long low, boolean isPowerEfficient);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.lookupSurfaceForTesting
   * @param surfaceId (int)
   * @return (android.view.Surface)
   */
  public static final native Object org_chromium_content_browser_androidoverlay_DialogOverlayImpl_lookupSurfaceForTesting(
      int surfaceId);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.notifyDestroyedSynchronously
   * @param messagePipeHandle (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_androidoverlay_DialogOverlayImpl_notifyDestroyedSynchronously(
      long messagePipeHandle);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.registerSurface
   * @param surface (android.view.Surface)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_androidoverlay_DialogOverlayImpl_registerSurface(
      Object surface);

  /**
   * org.chromium.content.browser.androidoverlay.DialogOverlayImpl.unregisterSurface
   * @param surfaceId (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_androidoverlay_DialogOverlayImpl_unregisterSurface(
      int surfaceId);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.canGoBack
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_canGoBack(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.canGoForward
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_canGoForward(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.canGoToOffset
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param offset (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_canGoToOffset(
      long nativeNavigationControllerAndroid, Object caller, int offset);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.cancelPendingReload
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_cancelPendingReload(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.clearHistory
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_clearHistory(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.clearSslPreferences
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_clearSslPreferences(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.continuePendingReload
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_continuePendingReload(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getDirectedNavigationHistory
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param history (org.chromium.content_public.browser.NavigationHistory)
   * @param isForward (boolean)
   * @param itemLimit (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_getDirectedNavigationHistory(
      long nativeNavigationControllerAndroid, Object caller, Object history, boolean isForward,
      int itemLimit);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getEntryAtIndex
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param index (int)
   * @return (org.chromium.content_public.browser.NavigationEntry)
   */
  public static final native Object org_chromium_content_browser_framehost_NavigationControllerImpl_getEntryAtIndex(
      long nativeNavigationControllerAndroid, Object caller, int index);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getEntryExtraData
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param index (int)
   * @param key (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_content_browser_framehost_NavigationControllerImpl_getEntryExtraData(
      long nativeNavigationControllerAndroid, Object caller, int index, String key);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getLastCommittedEntryIndex
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_framehost_NavigationControllerImpl_getLastCommittedEntryIndex(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getNavigationHistory
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param history (java.lang.Object)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_framehost_NavigationControllerImpl_getNavigationHistory(
      long nativeNavigationControllerAndroid, Object caller, Object history);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getPendingEntry
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (org.chromium.content_public.browser.NavigationEntry)
   */
  public static final native Object org_chromium_content_browser_framehost_NavigationControllerImpl_getPendingEntry(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getUseDesktopUserAgent
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_getUseDesktopUserAgent(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.getVisibleEntry
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (org.chromium.content_public.browser.NavigationEntry)
   */
  public static final native Object org_chromium_content_browser_framehost_NavigationControllerImpl_getVisibleEntry(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.goBack
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_goBack(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.goForward
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_goForward(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.goToNavigationIndex
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param index (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_goToNavigationIndex(
      long nativeNavigationControllerAndroid, Object caller, int index);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.goToOffset
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param offset (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_goToOffset(
      long nativeNavigationControllerAndroid, Object caller, int offset);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.isEntryMarkedToBeSkipped
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param index (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_isEntryMarkedToBeSkipped(
      long nativeNavigationControllerAndroid, Object caller, int index);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.isInitialNavigation
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_isInitialNavigation(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.loadIfNecessary
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_loadIfNecessary(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.loadUrl
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param url (java.lang.String)
   * @param loadUrlType (int)
   * @param transitionType (int)
   * @param referrerUrl (java.lang.String)
   * @param referrerPolicy (int)
   * @param uaOverrideOption (int)
   * @param extraHeaders (java.lang.String)
   * @param postData (org.chromium.content_public.common.ResourceRequestBody)
   * @param baseUrlForDataUrl (java.lang.String)
   * @param virtualUrlForDataUrl (java.lang.String)
   * @param dataUrlAsString (java.lang.String)
   * @param canLoadLocalResources (boolean)
   * @param isRendererInitiated (boolean)
   * @param shouldReplaceCurrentEntry (boolean)
   * @param initiatorOrigin (org.chromium.url.Origin)
   * @param hasUserGesture (boolean)
   * @param shouldClearHistoryList (boolean)
   * @param inputStart (long)
   * @param navigationUIDataPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_loadUrl(
      long nativeNavigationControllerAndroid, Object caller, String url, int loadUrlType,
      int transitionType, String referrerUrl, int referrerPolicy, int uaOverrideOption,
      String extraHeaders, Object postData, String baseUrlForDataUrl, String virtualUrlForDataUrl,
      String dataUrlAsString, boolean canLoadLocalResources, boolean isRendererInitiated,
      boolean shouldReplaceCurrentEntry, Object initiatorOrigin, boolean hasUserGesture,
      boolean shouldClearHistoryList, long inputStart, long navigationUIDataPtr);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.needsReload
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_needsReload(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.pruneForwardEntries
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_pruneForwardEntries(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.reload
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param checkForRepost (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_reload(
      long nativeNavigationControllerAndroid, Object caller, boolean checkForRepost);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.reloadBypassingCache
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param checkForRepost (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_reloadBypassingCache(
      long nativeNavigationControllerAndroid, Object caller, boolean checkForRepost);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.removeEntryAtIndex
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param index (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_NavigationControllerImpl_removeEntryAtIndex(
      long nativeNavigationControllerAndroid, Object caller, int index);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.setEntryExtraData
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param index (int)
   * @param key (java.lang.String)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_setEntryExtraData(
      long nativeNavigationControllerAndroid, Object caller, int index, String key, String value);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.setNeedsReload
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_setNeedsReload(
      long nativeNavigationControllerAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.NavigationControllerImpl.setUseDesktopUserAgent
   * @param nativeNavigationControllerAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.NavigationControllerImpl)
   * @param override (boolean)
   * @param reloadOnChange (boolean)
   * @param source (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_NavigationControllerImpl_setUseDesktopUserAgent(
      long nativeNavigationControllerAndroid, Object caller, boolean override,
      boolean reloadOnChange, int source);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getAllRenderFrameHosts
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (org.chromium.content_public.browser.RenderFrameHost[])
   */
  public static final native Object[] org_chromium_content_browser_framehost_RenderFrameHostImpl_getAllRenderFrameHosts(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getAndroidOverlayRoutingToken
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (org.chromium.base.UnguessableToken)
   */
  public static final native Object org_chromium_content_browser_framehost_RenderFrameHostImpl_getAndroidOverlayRoutingToken(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getCanonicalUrlForSharing
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @param callback (org.chromium.base.Callback<org.chromium.url.GURL>)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_RenderFrameHostImpl_getCanonicalUrlForSharing(
      long nativeRenderFrameHostAndroid, Object caller, Object callback);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getInterfaceToRendererFrame
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @param interfacename (java.lang.String)
   * @param messagePipeRawHandle (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_RenderFrameHostImpl_getInterfaceToRendererFrame(
      long nativeRenderFrameHostAndroid, Object caller, String interfacename,
      long messagePipeRawHandle);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getLastCommittedOrigin
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (org.chromium.url.Origin)
   */
  public static final native Object org_chromium_content_browser_framehost_RenderFrameHostImpl_getLastCommittedOrigin(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getLastCommittedURL
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_content_browser_framehost_RenderFrameHostImpl_getLastCommittedURL(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.getLifecycleState
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_framehost_RenderFrameHostImpl_getLifecycleState(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.isFeatureEnabled
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @param feature (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_RenderFrameHostImpl_isFeatureEnabled(
      long nativeRenderFrameHostAndroid, Object caller, int feature);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.isProcessBlocked
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_RenderFrameHostImpl_isProcessBlocked(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.isRenderFrameLive
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_RenderFrameHostImpl_isRenderFrameLive(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.notifyUserActivation
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_RenderFrameHostImpl_notifyUserActivation(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.performGetAssertionWebAuthSecurityChecks
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @param relyingPartyId (java.lang.String)
   * @param effectiveOrigin (org.chromium.url.Origin)
   * @param isPaymentCredentialGetAssertion (boolean)
   * @return (org.chromium.content_public.browser.RenderFrameHost.WebAuthSecurityChecksResults)
   */
  public static final native Object org_chromium_content_browser_framehost_RenderFrameHostImpl_performGetAssertionWebAuthSecurityChecks(
      long nativeRenderFrameHostAndroid, Object caller, String relyingPartyId,
      Object effectiveOrigin, boolean isPaymentCredentialGetAssertion);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.performMakeCredentialWebAuthSecurityChecks
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @param relyingPartyId (java.lang.String)
   * @param effectiveOrigin (org.chromium.url.Origin)
   * @param isPaymentCredentialCreation (boolean)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_framehost_RenderFrameHostImpl_performMakeCredentialWebAuthSecurityChecks(
      long nativeRenderFrameHostAndroid, Object caller, String relyingPartyId,
      Object effectiveOrigin, boolean isPaymentCredentialCreation);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.signalCloseWatcherIfActive
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_framehost_RenderFrameHostImpl_signalCloseWatcherIfActive(
      long nativeRenderFrameHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.framehost.RenderFrameHostImpl.terminateRendererDueToBadMessage
   * @param nativeRenderFrameHostAndroid (long)
   * @param caller (org.chromium.content.browser.framehost.RenderFrameHostImpl)
   * @param reason (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_framehost_RenderFrameHostImpl_terminateRendererDueToBadMessage(
      long nativeRenderFrameHostAndroid, Object caller, int reason);

  /**
   * org.chromium.content.browser.input.DateTimeChooserAndroid.cancelDialog
   * @param nativeDateTimeChooserAndroid (long)
   * @param caller (org.chromium.content.browser.input.DateTimeChooserAndroid)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_DateTimeChooserAndroid_cancelDialog(
      long nativeDateTimeChooserAndroid, Object caller);

  /**
   * org.chromium.content.browser.input.DateTimeChooserAndroid.replaceDateTime
   * @param nativeDateTimeChooserAndroid (long)
   * @param caller (org.chromium.content.browser.input.DateTimeChooserAndroid)
   * @param dialogValue (double)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_DateTimeChooserAndroid_replaceDateTime(
      long nativeDateTimeChooserAndroid, Object caller, double dialogValue);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.advanceFocusForIME
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param focusType (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_advanceFocusForIME(
      long nativeImeAdapterAndroid, Object caller, int focusType);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.appendBackgroundColorSpan
   * @param spanPtr (long)
   * @param start (int)
   * @param end (int)
   * @param backgroundColor (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_appendBackgroundColorSpan(
      long spanPtr, int start, int end, int backgroundColor);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.appendSuggestionSpan
   * @param spanPtr (long)
   * @param start (int)
   * @param end (int)
   * @param isMisspelling (boolean)
   * @param removeOnFinishComposing (boolean)
   * @param underlineColor (int)
   * @param suggestionHighlightColor (int)
   * @param suggestions (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_appendSuggestionSpan(
      long spanPtr, int start, int end, boolean isMisspelling, boolean removeOnFinishComposing,
      int underlineColor, int suggestionHighlightColor, String[] suggestions);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.appendUnderlineSpan
   * @param spanPtr (long)
   * @param start (int)
   * @param end (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_appendUnderlineSpan(
      long spanPtr, int start, int end);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.commitText
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param text (java.lang.CharSequence)
   * @param textStr (java.lang.String)
   * @param newCursorPosition (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_commitText(
      long nativeImeAdapterAndroid, Object caller, Object text, String textStr,
      int newCursorPosition);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.deleteSurroundingText
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param before (int)
   * @param after (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_deleteSurroundingText(
      long nativeImeAdapterAndroid, Object caller, int before, int after);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.deleteSurroundingTextInCodePoints
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param before (int)
   * @param after (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_deleteSurroundingTextInCodePoints(
      long nativeImeAdapterAndroid, Object caller, int before, int after);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.finishComposingText
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_finishComposingText(
      long nativeImeAdapterAndroid, Object caller);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.handleStylusWritingGestureAction
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param gestureData (java.nio.ByteBuffer)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_handleStylusWritingGestureAction(
      long nativeImeAdapterAndroid, Object caller, Object gestureData);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.init
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_input_ImeAdapterImpl_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.requestCursorUpdate
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param immediateRequest (boolean)
   * @param monitorRequest (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_requestCursorUpdate(
      long nativeImeAdapterAndroid, Object caller, boolean immediateRequest,
      boolean monitorRequest);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.requestTextInputStateUpdate
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_input_ImeAdapterImpl_requestTextInputStateUpdate(
      long nativeImeAdapterAndroid, Object caller);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.sendKeyEvent
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param event (android.view.KeyEvent)
   * @param type (int)
   * @param modifiers (int)
   * @param timestampMs (long)
   * @param keyCode (int)
   * @param scanCode (int)
   * @param isSystemKey (boolean)
   * @param unicodeChar (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_input_ImeAdapterImpl_sendKeyEvent(
      long nativeImeAdapterAndroid, Object caller, Object event, int type, int modifiers,
      long timestampMs, int keyCode, int scanCode, boolean isSystemKey, int unicodeChar);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.setComposingRegion
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param start (int)
   * @param end (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_setComposingRegion(
      long nativeImeAdapterAndroid, Object caller, int start, int end);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.setComposingText
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param text (java.lang.CharSequence)
   * @param textStr (java.lang.String)
   * @param newCursorPosition (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_setComposingText(
      long nativeImeAdapterAndroid, Object caller, Object text, String textStr,
      int newCursorPosition);

  /**
   * org.chromium.content.browser.input.ImeAdapterImpl.setEditableSelectionOffsets
   * @param nativeImeAdapterAndroid (long)
   * @param caller (org.chromium.content.browser.input.ImeAdapterImpl)
   * @param start (int)
   * @param end (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_ImeAdapterImpl_setEditableSelectionOffsets(
      long nativeImeAdapterAndroid, Object caller, int start, int end);

  /**
   * org.chromium.content.browser.input.SelectPopup.selectMenuItems
   * @param nativeSelectPopup (long)
   * @param caller (org.chromium.content.browser.input.SelectPopup)
   * @param nativeSelectPopupSourceFrame (long)
   * @param indices (int[])
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_SelectPopup_selectMenuItems(
      long nativeSelectPopup, Object caller, long nativeSelectPopupSourceFrame, int[] indices);

  /**
   * org.chromium.content.browser.input.TextSuggestionHost.applySpellCheckSuggestion
   * @param nativeTextSuggestionHostAndroid (long)
   * @param caller (org.chromium.content.browser.input.TextSuggestionHost)
   * @param suggestion (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_TextSuggestionHost_applySpellCheckSuggestion(
      long nativeTextSuggestionHostAndroid, Object caller, String suggestion);

  /**
   * org.chromium.content.browser.input.TextSuggestionHost.applyTextSuggestion
   * @param nativeTextSuggestionHostAndroid (long)
   * @param caller (org.chromium.content.browser.input.TextSuggestionHost)
   * @param markerTag (int)
   * @param suggestionIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_TextSuggestionHost_applyTextSuggestion(
      long nativeTextSuggestionHostAndroid, Object caller, int markerTag, int suggestionIndex);

  /**
   * org.chromium.content.browser.input.TextSuggestionHost.deleteActiveSuggestionRange
   * @param nativeTextSuggestionHostAndroid (long)
   * @param caller (org.chromium.content.browser.input.TextSuggestionHost)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_TextSuggestionHost_deleteActiveSuggestionRange(
      long nativeTextSuggestionHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.input.TextSuggestionHost.onNewWordAddedToDictionary
   * @param nativeTextSuggestionHostAndroid (long)
   * @param caller (org.chromium.content.browser.input.TextSuggestionHost)
   * @param word (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_TextSuggestionHost_onNewWordAddedToDictionary(
      long nativeTextSuggestionHostAndroid, Object caller, String word);

  /**
   * org.chromium.content.browser.input.TextSuggestionHost.onSuggestionMenuClosed
   * @param nativeTextSuggestionHostAndroid (long)
   * @param caller (org.chromium.content.browser.input.TextSuggestionHost)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_input_TextSuggestionHost_onSuggestionMenuClosed(
      long nativeTextSuggestionHostAndroid, Object caller);

  /**
   * org.chromium.content.browser.selection.SelectionPopupControllerImpl.init
   * @param caller (org.chromium.content.browser.selection.SelectionPopupControllerImpl)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_selection_SelectionPopupControllerImpl_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.selection.SelectionPopupControllerImpl.setTextHandlesTemporarilyHidden
   * @param nativeSelectionPopupController (long)
   * @param caller (org.chromium.content.browser.selection.SelectionPopupControllerImpl)
   * @param hidden (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_selection_SelectionPopupControllerImpl_setTextHandlesTemporarilyHidden(
      long nativeSelectionPopupController, Object caller, boolean hidden);

  /**
   * org.chromium.content.browser.selection.SmartSelectionClient.cancelAllRequests
   * @param nativeSmartSelectionClient (long)
   * @param caller (org.chromium.content.browser.selection.SmartSelectionClient)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_selection_SmartSelectionClient_cancelAllRequests(
      long nativeSmartSelectionClient, Object caller);

  /**
   * org.chromium.content.browser.selection.SmartSelectionClient.init
   * @param caller (org.chromium.content.browser.selection.SmartSelectionClient)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_selection_SmartSelectionClient_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content.browser.selection.SmartSelectionClient.requestSurroundingText
   * @param nativeSmartSelectionClient (long)
   * @param caller (org.chromium.content.browser.selection.SmartSelectionClient)
   * @param numExtraCharacters (int)
   * @param callbackData (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_selection_SmartSelectionClient_requestSurroundingText(
      long nativeSmartSelectionClient, Object caller, int numExtraCharacters, int callbackData);

  /**
   * org.chromium.content.browser.sms.SmsProviderGms.onCancel
   * @param nativeSmsProviderGms (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_sms_SmsProviderGms_onCancel(
      long nativeSmsProviderGms);

  /**
   * org.chromium.content.browser.sms.SmsProviderGms.onNotAvailable
   * @param nativeSmsProviderGms (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_sms_SmsProviderGms_onNotAvailable(
      long nativeSmsProviderGms);

  /**
   * org.chromium.content.browser.sms.SmsProviderGms.onReceive
   * @param nativeSmsProviderGms (long)
   * @param sms (java.lang.String)
   * @param backend (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_sms_SmsProviderGms_onReceive(
      long nativeSmsProviderGms, String sms, int backend);

  /**
   * org.chromium.content.browser.sms.SmsProviderGms.onTimeout
   * @param nativeSmsProviderGms (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_sms_SmsProviderGms_onTimeout(
      long nativeSmsProviderGms);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.addMessageToDevToolsConsole
   * @param nativeWebContentsAndroid (long)
   * @param level (int)
   * @param message (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_addMessageToDevToolsConsole(
      long nativeWebContentsAndroid, int level, String message);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.adjustSelectionByCharacterOffset
   * @param nativeWebContentsAndroid (long)
   * @param startAdjust (int)
   * @param endAdjust (int)
   * @param showSelectionMenu (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_adjustSelectionByCharacterOffset(
      long nativeWebContentsAndroid, int startAdjust, int endAdjust, boolean showSelectionMenu);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.clearNativeReference
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_clearNativeReference(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.collapseSelection
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_collapseSelection(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.copy
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_copy(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.cut
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_cut(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.destroyWebContents
   * @param webContentsAndroidPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_destroyWebContents(
      long webContentsAndroidPtr);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.dispatchBeforeUnload
   * @param nativeWebContentsAndroid (long)
   * @param autoCancel (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_dispatchBeforeUnload(
      long nativeWebContentsAndroid, boolean autoCancel);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.downloadImage
   * @param nativeWebContentsAndroid (long)
   * @param url (org.chromium.url.GURL)
   * @param isFavicon (boolean)
   * @param maxBitmapSize (int)
   * @param bypassCache (boolean)
   * @param callback (org.chromium.content_public.browser.ImageDownloadCallback)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_webcontents_WebContentsImpl_downloadImage(
      long nativeWebContentsAndroid, Object url, boolean isFavicon, int maxBitmapSize,
      boolean bypassCache, Object callback);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.evaluateJavaScript
   * @param nativeWebContentsAndroid (long)
   * @param script (java.lang.String)
   * @param callback (org.chromium.content_public.browser.JavaScriptCallback)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_evaluateJavaScript(
      long nativeWebContentsAndroid, String script, Object callback);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.evaluateJavaScriptForTests
   * @param nativeWebContentsAndroid (long)
   * @param script (java.lang.String)
   * @param callback (org.chromium.content_public.browser.JavaScriptCallback)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_evaluateJavaScriptForTests(
      long nativeWebContentsAndroid, String script, Object callback);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.exitFullscreen
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_exitFullscreen(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.focusLocationBarByDefault
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_focusLocationBarByDefault(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.fromNativePtr
   * @param webContentsAndroidPtr (long)
   * @return (org.chromium.content_public.browser.WebContents)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_fromNativePtr(
      long webContentsAndroidPtr);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getAllRenderFrameHosts
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.content_public.browser.RenderFrameHost[])
   */
  public static final native Object[] org_chromium_content_browser_webcontents_WebContentsImpl_getAllRenderFrameHosts(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getEncoding
   * @param nativeWebContentsAndroid (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_content_browser_webcontents_WebContentsImpl_getEncoding(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getFocusedFrame
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.content_public.browser.RenderFrameHost)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getFocusedFrame(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getFullscreenVideoSize
   * @param nativeWebContentsAndroid (long)
   * @return (android.graphics.Rect)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getFullscreenVideoSize(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getHeight
   * @param nativeWebContentsAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_webcontents_WebContentsImpl_getHeight(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getInnerWebContents
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.content.browser.webcontents.WebContentsImpl[])
   */
  public static final native Object[] org_chromium_content_browser_webcontents_WebContentsImpl_getInnerWebContents(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getLastCommittedURL
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getLastCommittedURL(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getLoadProgress
   * @param nativeWebContentsAndroid (long)
   * @return (float)
   */
  public static final native float org_chromium_content_browser_webcontents_WebContentsImpl_getLoadProgress(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getMainFrame
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.content_public.browser.RenderFrameHost)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getMainFrame(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getOrCreateEventForwarder
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.ui.base.EventForwarder)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getOrCreateEventForwarder(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getRenderFrameHostFromId
   * @param nativeWebContentsAndroid (long)
   * @param renderProcessId (int)
   * @param renderFrameId (int)
   * @return (org.chromium.content_public.browser.RenderFrameHost)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getRenderFrameHostFromId(
      long nativeWebContentsAndroid, int renderProcessId, int renderFrameId);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getRenderWidgetHostView
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.content.browser.RenderWidgetHostViewImpl)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getRenderWidgetHostView(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getThemeColor
   * @param nativeWebContentsAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_webcontents_WebContentsImpl_getThemeColor(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getTitle
   * @param nativeWebContentsAndroid (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_content_browser_webcontents_WebContentsImpl_getTitle(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getTopLevelNativeWindow
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.ui.base.WindowAndroid)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getTopLevelNativeWindow(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getVisibility
   * @param nativeWebContentsAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_webcontents_WebContentsImpl_getVisibility(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getVisibleURL
   * @param nativeWebContentsAndroid (long)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_content_browser_webcontents_WebContentsImpl_getVisibleURL(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.getWidth
   * @param nativeWebContentsAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_content_browser_webcontents_WebContentsImpl_getWidth(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.hasAccessedInitialDocument
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_hasAccessedInitialDocument(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.hasActiveEffectivelyFullscreenVideo
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_hasActiveEffectivelyFullscreenVideo(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.isBeingDestroyed
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_isBeingDestroyed(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.isFullscreenForCurrentTab
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_isFullscreenForCurrentTab(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.isIncognito
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_isIncognito(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.isLoading
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_isLoading(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.isPictureInPictureAllowedForFullscreenVideo
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_isPictureInPictureAllowedForFullscreenVideo(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.notifyBrowserControlsHeightChanged
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_notifyBrowserControlsHeightChanged(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.notifyRendererPreferenceUpdate
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_notifyRendererPreferenceUpdate(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.onHide
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_onHide(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.onScaleFactorChanged
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_onScaleFactorChanged(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.onShow
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_onShow(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.paste
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_paste(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.pasteAsPlainText
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_pasteAsPlainText(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.postMessageToMainFrame
   * @param nativeWebContentsAndroid (long)
   * @param payload (org.chromium.content_public.browser.MessagePayload)
   * @param sourceOrigin (java.lang.String)
   * @param targetOrigin (java.lang.String)
   * @param ports (org.chromium.content_public.browser.MessagePort[])
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_postMessageToMainFrame(
      long nativeWebContentsAndroid, Object payload, String sourceOrigin, String targetOrigin,
      Object[] ports);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.replace
   * @param nativeWebContentsAndroid (long)
   * @param word (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_replace(
      long nativeWebContentsAndroid, String word);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.requestAccessibilitySnapshot
   * @param nativeWebContentsAndroid (long)
   * @param viewStructureRoot (android.view.ViewStructure)
   * @param viewStructureBuilder (org.chromium.content.browser.accessibility.ViewStructureBuilder)
   * @param doneCallback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_requestAccessibilitySnapshot(
      long nativeWebContentsAndroid, Object viewStructureRoot, Object viewStructureBuilder,
      Object doneCallback);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.requestSmartClipExtract
   * @param nativeWebContentsAndroid (long)
   * @param callback (org.chromium.content.browser.webcontents.WebContentsImpl.SmartClipCallback)
   * @param x (int)
   * @param y (int)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_requestSmartClipExtract(
      long nativeWebContentsAndroid, Object callback, int x, int y, int width, int height);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.resumeLoadingCreatedWebContents
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_resumeLoadingCreatedWebContents(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.scrollFocusedEditableNodeIntoView
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_scrollFocusedEditableNodeIntoView(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.selectAll
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_selectAll(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.selectAroundCaret
   * @param nativeWebContentsAndroid (long)
   * @param granularity (int)
   * @param shouldShowHandle (boolean)
   * @param shouldShowContextMenu (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_selectAroundCaret(
      long nativeWebContentsAndroid, int granularity, boolean shouldShowHandle,
      boolean shouldShowContextMenu);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.sendOrientationChangeEvent
   * @param nativeWebContentsAndroid (long)
   * @param orientation (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_sendOrientationChangeEvent(
      long nativeWebContentsAndroid, int orientation);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setAudioMuted
   * @param nativeWebContentsAndroid (long)
   * @param mute (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setAudioMuted(
      long nativeWebContentsAndroid, boolean mute);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setDisplayCutoutSafeArea
   * @param nativeWebContentsAndroid (long)
   * @param top (int)
   * @param left (int)
   * @param bottom (int)
   * @param right (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setDisplayCutoutSafeArea(
      long nativeWebContentsAndroid, int top, int left, int bottom, int right);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setFocus
   * @param nativeWebContentsAndroid (long)
   * @param focused (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setFocus(
      long nativeWebContentsAndroid, boolean focused);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setHasPersistentVideo
   * @param nativeWebContentsAndroid (long)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setHasPersistentVideo(
      long nativeWebContentsAndroid, boolean value);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setImportance
   * @param nativeWebContentsAndroid (long)
   * @param importance (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setImportance(
      long nativeWebContentsAndroid, int importance);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setOverscrollRefreshHandler
   * @param nativeWebContentsAndroid (long)
   * @param nativeOverscrollRefreshHandler (org.chromium.ui.OverscrollRefreshHandler)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setOverscrollRefreshHandler(
      long nativeWebContentsAndroid, Object nativeOverscrollRefreshHandler);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setSize
   * @param nativeWebContentsAndroid (long)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setSize(
      long nativeWebContentsAndroid, int width, int height);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setSpatialNavigationDisabled
   * @param nativeWebContentsAndroid (long)
   * @param disabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setSpatialNavigationDisabled(
      long nativeWebContentsAndroid, boolean disabled);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setStylusHandwritingEnabled
   * @param nativeWebContentsAndroid (long)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setStylusHandwritingEnabled(
      long nativeWebContentsAndroid, boolean enabled);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setTopLevelNativeWindow
   * @param nativeWebContentsAndroid (long)
   * @param windowAndroid (org.chromium.ui.base.WindowAndroid)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setTopLevelNativeWindow(
      long nativeWebContentsAndroid, Object windowAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.setViewAndroidDelegate
   * @param nativeWebContentsAndroid (long)
   * @param viewDelegate (org.chromium.ui.base.ViewAndroidDelegate)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_setViewAndroidDelegate(
      long nativeWebContentsAndroid, Object viewDelegate);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.shouldShowLoadingUI
   * @param nativeWebContentsAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_browser_webcontents_WebContentsImpl_shouldShowLoadingUI(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.stop
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_stop(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsImpl.suspendAllMediaPlayers
   * @param nativeWebContentsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsImpl_suspendAllMediaPlayers(
      long nativeWebContentsAndroid);

  /**
   * org.chromium.content.browser.webcontents.WebContentsObserverProxy.destroy
   * @param nativeWebContentsObserverProxy (long)
   * @param caller (org.chromium.content.browser.webcontents.WebContentsObserverProxy)
   * @return (void)
   */
  public static final native void org_chromium_content_browser_webcontents_WebContentsObserverProxy_destroy(
      long nativeWebContentsObserverProxy, Object caller);

  /**
   * org.chromium.content.browser.webcontents.WebContentsObserverProxy.init
   * @param caller (org.chromium.content.browser.webcontents.WebContentsObserverProxy)
   * @param webContents (org.chromium.content.browser.webcontents.WebContentsImpl)
   * @return (long)
   */
  public static final native long org_chromium_content_browser_webcontents_WebContentsObserverProxy_init(
      Object caller, Object webContents);

  /**
   * org.chromium.content_public.browser.LoadUrlParams.isDataScheme
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_content_1public_browser_LoadUrlParams_isDataScheme(
      String url);

  /**
   * org.chromium.content_public.browser.NavigationHandle.removeRequestHeader
   * @param nativeNavigationHandleProxy (long)
   * @param headerName (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_1public_browser_NavigationHandle_removeRequestHeader(
      long nativeNavigationHandleProxy, String headerName);

  /**
   * org.chromium.content_public.browser.NavigationHandle.setRequestHeader
   * @param nativeNavigationHandleProxy (long)
   * @param headerName (java.lang.String)
   * @param headerValue (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_content_1public_browser_NavigationHandle_setRequestHeader(
      long nativeNavigationHandleProxy, String headerName, String headerValue);

  /**
   * org.chromium.content_public.browser.WebAuthenticationDelegate.getIntentSender
   * @param delegatePtr (long)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (org.chromium.content_public.browser.WebAuthenticationDelegate.IntentSender)
   */
  public static final native Object org_chromium_content_1public_browser_WebAuthenticationDelegate_getIntentSender(
      long delegatePtr, Object webContents);

  /**
   * org.chromium.content_public.browser.WebAuthenticationDelegate.getNativeDelegate
   * @return (long)
   */
  public static final native long org_chromium_content_1public_browser_WebAuthenticationDelegate_getNativeDelegate(
      );

  /**
   * org.chromium.content_public.browser.WebAuthenticationDelegate.getSupportLevel
   * @param delegatePtr (long)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (int)
   */
  public static final native int org_chromium_content_1public_browser_WebAuthenticationDelegate_getSupportLevel(
      long delegatePtr, Object webContents);
}
