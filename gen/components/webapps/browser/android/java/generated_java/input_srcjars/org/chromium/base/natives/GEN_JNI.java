package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.webapps.AddToHomescreenMediator.addToHomescreen
   * @param nativeAddToHomescreenMediator (long)
   * @param title (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AddToHomescreenMediator_addToHomescreen(
      long nativeAddToHomescreenMediator, String title);

  /**
   * org.chromium.components.webapps.AddToHomescreenMediator.destroy
   * @param nativeAddToHomescreenMediator (long)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AddToHomescreenMediator_destroy(
      long nativeAddToHomescreenMediator);

  /**
   * org.chromium.components.webapps.AddToHomescreenMediator.initialize
   * @param instance (org.chromium.components.webapps.AddToHomescreenMediator)
   * @return (long)
   */
  public static final native long org_chromium_components_webapps_AddToHomescreenMediator_initialize(
      Object instance);

  /**
   * org.chromium.components.webapps.AddToHomescreenMediator.onNativeDetailsShown
   * @param nativeAddToHomescreenMediator (long)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AddToHomescreenMediator_onNativeDetailsShown(
      long nativeAddToHomescreenMediator);

  /**
   * org.chromium.components.webapps.AddToHomescreenMediator.onUiDismissed
   * @param nativeAddToHomescreenMediator (long)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AddToHomescreenMediator_onUiDismissed(
      long nativeAddToHomescreenMediator);

  /**
   * org.chromium.components.webapps.AddToHomescreenMediator.startForAppMenu
   * @param nativeAddToHomescreenMediator (long)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param titleId (int)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AddToHomescreenMediator_startForAppMenu(
      long nativeAddToHomescreenMediator, Object webContents, int titleId);

  /**
   * org.chromium.components.webapps.AppBannerManager.getInstallableWebAppName
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_webapps_AppBannerManager_getInstallableWebAppName(
      Object webContents);

  /**
   * org.chromium.components.webapps.AppBannerManager.getJavaBannerManagerForWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (org.chromium.components.webapps.AppBannerManager)
   */
  public static final native Object org_chromium_components_webapps_AppBannerManager_getJavaBannerManagerForWebContents(
      Object webContents);

  /**
   * org.chromium.components.webapps.AppBannerManager.getPipelineStatusForTesting
   * @param nativeAppBannerManagerAndroid (long)
   * @return (int)
   */
  public static final native int org_chromium_components_webapps_AppBannerManager_getPipelineStatusForTesting(
      long nativeAppBannerManagerAndroid);

  /**
   * org.chromium.components.webapps.AppBannerManager.ignoreChromeChannelForTesting
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AppBannerManager_ignoreChromeChannelForTesting(
      );

  /**
   * org.chromium.components.webapps.AppBannerManager.isRunningForTesting
   * @param nativeAppBannerManagerAndroid (long)
   * @param caller (org.chromium.components.webapps.AppBannerManager)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_webapps_AppBannerManager_isRunningForTesting(
      long nativeAppBannerManagerAndroid, Object caller);

  /**
   * org.chromium.components.webapps.AppBannerManager.onAppDetailsRetrieved
   * @param nativeAppBannerManagerAndroid (long)
   * @param caller (org.chromium.components.webapps.AppBannerManager)
   * @param data (org.chromium.components.webapps.AppData)
   * @param title (java.lang.String)
   * @param packageName (java.lang.String)
   * @param imageUrl (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_webapps_AppBannerManager_onAppDetailsRetrieved(
      long nativeAppBannerManagerAndroid, Object caller, Object data, String title,
      String packageName, String imageUrl);

  /**
   * org.chromium.components.webapps.AppBannerManager.setDaysAfterDismissAndIgnoreToTrigger
   * @param dismissDays (int)
   * @param ignoreDays (int)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AppBannerManager_setDaysAfterDismissAndIgnoreToTrigger(
      int dismissDays, int ignoreDays);

  /**
   * org.chromium.components.webapps.AppBannerManager.setTimeDeltaForTesting
   * @param days (int)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AppBannerManager_setTimeDeltaForTesting(
      int days);

  /**
   * org.chromium.components.webapps.AppBannerManager.setTotalEngagementToTrigger
   * @param engagement (double)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_AppBannerManager_setTotalEngagementToTrigger(
      double engagement);

  /**
   * org.chromium.components.webapps.bottomsheet.PwaBottomSheetController.destroy
   * @param nativePwaBottomSheetController (long)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_bottomsheet_PwaBottomSheetController_destroy(
      long nativePwaBottomSheetController);

  /**
   * org.chromium.components.webapps.bottomsheet.PwaBottomSheetController.onAddToHomescreen
   * @param nativePwaBottomSheetController (long)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_bottomsheet_PwaBottomSheetController_onAddToHomescreen(
      long nativePwaBottomSheetController, Object webContents);

  /**
   * org.chromium.components.webapps.bottomsheet.PwaBottomSheetController.onSheetClosedWithSwipe
   * @param nativePwaBottomSheetController (long)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_bottomsheet_PwaBottomSheetController_onSheetClosedWithSwipe(
      long nativePwaBottomSheetController);

  /**
   * org.chromium.components.webapps.bottomsheet.PwaBottomSheetController.onSheetExpanded
   * @param nativePwaBottomSheetController (long)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_bottomsheet_PwaBottomSheetController_onSheetExpanded(
      long nativePwaBottomSheetController);

  /**
   * org.chromium.components.webapps.bottomsheet.PwaBottomSheetController.requestOrExpandBottomSheetInstaller
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param trigger (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_webapps_bottomsheet_PwaBottomSheetController_requestOrExpandBottomSheetInstaller(
      Object webContents, int trigger);

  /**
   * org.chromium.components.webapps.bottomsheet.PwaBottomSheetController.updateInstallSource
   * @param nativePwaBottomSheetController (long)
   * @param installSource (int)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_bottomsheet_PwaBottomSheetController_updateInstallSource(
      long nativePwaBottomSheetController, int installSource);

  /**
   * org.chromium.components.webapps.installable.InstallableAmbientBadgeInfoBar.addToHomescreen
   * @param nativeInstallableAmbientBadgeInfoBar (long)
   * @param caller (org.chromium.components.webapps.installable.InstallableAmbientBadgeInfoBar)
   * @return (void)
   */
  public static final native void org_chromium_components_webapps_installable_InstallableAmbientBadgeInfoBar_addToHomescreen(
      long nativeInstallableAmbientBadgeInfoBar, Object caller);
}
