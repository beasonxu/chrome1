package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onCreateRouteRequestError
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param errorText (java.lang.String)
   * @param requestId (int)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onCreateRouteRequestError(
      long nativeMediaRouterAndroidBridge, Object caller, String errorText, int requestId);

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onJoinRouteRequestError
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param errorText (java.lang.String)
   * @param requestId (int)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onJoinRouteRequestError(
      long nativeMediaRouterAndroidBridge, Object caller, String errorText, int requestId);

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onMessage
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param mediaRouteId (java.lang.String)
   * @param message (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onMessage(
      long nativeMediaRouterAndroidBridge, Object caller, String mediaRouteId, String message);

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onRouteClosed
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param mediaRouteId (java.lang.String)
   * @param message (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onRouteClosed(
      long nativeMediaRouterAndroidBridge, Object caller, String mediaRouteId, String message);

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onRouteCreated
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param mediaRouteId (java.lang.String)
   * @param mediaSinkId (java.lang.String)
   * @param createRouteRequestId (int)
   * @param wasLaunched (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onRouteCreated(
      long nativeMediaRouterAndroidBridge, Object caller, String mediaRouteId, String mediaSinkId,
      int createRouteRequestId, boolean wasLaunched);

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onRouteTerminated
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param mediaRouteId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onRouteTerminated(
      long nativeMediaRouterAndroidBridge, Object caller, String mediaRouteId);

  /**
   * org.chromium.components.media_router.BrowserMediaRouter.onSinksReceived
   * @param nativeMediaRouterAndroidBridge (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouter)
   * @param sourceUrn (java.lang.String)
   * @param count (int)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouter_onSinksReceived(
      long nativeMediaRouterAndroidBridge, Object caller, String sourceUrn, int count);

  /**
   * org.chromium.components.media_router.BrowserMediaRouterDialogController.onDialogCancelled
   * @param nativeMediaRouterDialogControllerAndroid (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouterDialogController)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouterDialogController_onDialogCancelled(
      long nativeMediaRouterDialogControllerAndroid, Object caller);

  /**
   * org.chromium.components.media_router.BrowserMediaRouterDialogController.onMediaSourceNotSupported
   * @param nativeMediaRouterDialogControllerAndroid (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouterDialogController)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouterDialogController_onMediaSourceNotSupported(
      long nativeMediaRouterDialogControllerAndroid, Object caller);

  /**
   * org.chromium.components.media_router.BrowserMediaRouterDialogController.onRouteClosed
   * @param nativeMediaRouterDialogControllerAndroid (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouterDialogController)
   * @param routeId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouterDialogController_onRouteClosed(
      long nativeMediaRouterDialogControllerAndroid, Object caller, String routeId);

  /**
   * org.chromium.components.media_router.BrowserMediaRouterDialogController.onSinkSelected
   * @param nativeMediaRouterDialogControllerAndroid (long)
   * @param caller (org.chromium.components.media_router.BrowserMediaRouterDialogController)
   * @param sourceUrn (java.lang.String)
   * @param sinkId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_BrowserMediaRouterDialogController_onSinkSelected(
      long nativeMediaRouterDialogControllerAndroid, Object caller, String sourceUrn,
      String sinkId);

  /**
   * org.chromium.components.media_router.FlingingControllerBridge.onMediaStatusUpdated
   * @param nativeFlingingControllerBridge (long)
   * @param caller (org.chromium.components.media_router.FlingingControllerBridge)
   * @param status (org.chromium.components.media_router.MediaStatusBridge)
   * @return (void)
   */
  public static final native void org_chromium_components_media_1router_FlingingControllerBridge_onMediaStatusUpdated(
      long nativeFlingingControllerBridge, Object caller, Object status);
}
