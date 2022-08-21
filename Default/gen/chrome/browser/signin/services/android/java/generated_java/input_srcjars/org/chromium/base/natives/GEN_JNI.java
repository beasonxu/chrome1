package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.signin.services.IdentityServicesProvider.getAccountTrackerService
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.signin.identitymanager.AccountTrackerService)
   */
  public static final native Object org_chromium_chrome_browser_signin_services_IdentityServicesProvider_getAccountTrackerService(
      Object profile);

  /**
   * org.chromium.chrome.browser.signin.services.IdentityServicesProvider.getIdentityManager
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.signin.identitymanager.IdentityManager)
   */
  public static final native Object org_chromium_chrome_browser_signin_services_IdentityServicesProvider_getIdentityManager(
      Object profile);

  /**
   * org.chromium.chrome.browser.signin.services.IdentityServicesProvider.getSigninManager
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.signin.services.SigninManager)
   */
  public static final native Object org_chromium_chrome_browser_signin_services_IdentityServicesProvider_getSigninManager(
      Object profile);

  /**
   * org.chromium.chrome.browser.signin.services.SigninMetricsUtils.logProfileAccountManagementMenu
   * @param metric (int)
   * @param gaiaServiceType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_services_SigninMetricsUtils_logProfileAccountManagementMenu(
      int metric, int gaiaServiceType);

  /**
   * org.chromium.chrome.browser.signin.services.SigninMetricsUtils.logSigninUserActionForAccessPoint
   * @param accessPoint (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_services_SigninMetricsUtils_logSigninUserActionForAccessPoint(
      int accessPoint);

  /**
   * org.chromium.chrome.browser.signin.services.UnifiedConsentServiceBridge.isUrlKeyedAnonymizedDataCollectionEnabled
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_signin_services_UnifiedConsentServiceBridge_isUrlKeyedAnonymizedDataCollectionEnabled(
      Object profile);

  /**
   * org.chromium.chrome.browser.signin.services.UnifiedConsentServiceBridge.isUrlKeyedAnonymizedDataCollectionManaged
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_signin_services_UnifiedConsentServiceBridge_isUrlKeyedAnonymizedDataCollectionManaged(
      Object profile);

  /**
   * org.chromium.chrome.browser.signin.services.UnifiedConsentServiceBridge.recordSyncSetupDataTypesHistogram
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_services_UnifiedConsentServiceBridge_recordSyncSetupDataTypesHistogram(
      Object profile);

  /**
   * org.chromium.chrome.browser.signin.services.UnifiedConsentServiceBridge.setUrlKeyedAnonymizedDataCollectionEnabled
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_services_UnifiedConsentServiceBridge_setUrlKeyedAnonymizedDataCollectionEnabled(
      Object profile, boolean enabled);

  /**
   * org.chromium.chrome.browser.signin.services.WebSigninBridge.create
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param account (org.chromium.components.signin.base.CoreAccountInfo)
   * @param listener (org.chromium.chrome.browser.signin.services.WebSigninBridge.Listener)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_signin_services_WebSigninBridge_create(
      Object profile, Object account, Object listener);

  /**
   * org.chromium.chrome.browser.signin.services.WebSigninBridge.destroy
   * @param webSigninBridgePtr (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_services_WebSigninBridge_destroy(
      long webSigninBridgePtr);
}
