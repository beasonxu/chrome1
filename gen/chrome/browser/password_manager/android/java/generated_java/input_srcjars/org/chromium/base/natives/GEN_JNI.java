package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.password_manager.PasswordChangeSuccessTrackerBridge.onAutomatedPasswordChangeStarted
   * @param url (org.chromium.url.GURL)
   * @param username (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordChangeSuccessTrackerBridge_onAutomatedPasswordChangeStarted(
      Object url, String username);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordChangeSuccessTrackerBridge.onManualPasswordChangeStarted
   * @param url (org.chromium.url.GURL)
   * @param username (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordChangeSuccessTrackerBridge_onManualPasswordChangeStarted(
      Object url, String username);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordManagerLifecycleHelper.onForegroundSessionStart
   * @param nativePasswordManagerLifecycleHelperImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordManagerLifecycleHelper_onForegroundSessionStart(
      long nativePasswordManagerLifecycleHelperImpl);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordScriptsFetcherBridge.prewarmCache
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordScriptsFetcherBridge_prewarmCache(
      );

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSettingsUpdaterBridge.onFailedSettingChange
   * @param nativePasswordSettingsUpdaterAndroidBridgeImpl (long)
   * @param setting (int)
   * @param error (int)
   * @param apiErrorCode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSettingsUpdaterBridge_onFailedSettingChange(
      long nativePasswordSettingsUpdaterAndroidBridgeImpl, int setting, int error,
      int apiErrorCode);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSettingsUpdaterBridge.onSettingFetchingError
   * @param nativePasswordSettingsUpdaterAndroidBridgeImpl (long)
   * @param setting (int)
   * @param error (int)
   * @param apiErrorCode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSettingsUpdaterBridge_onSettingFetchingError(
      long nativePasswordSettingsUpdaterAndroidBridgeImpl, int setting, int error,
      int apiErrorCode);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSettingsUpdaterBridge.onSettingValueAbsent
   * @param nativePasswordSettingsUpdaterAndroidBridgeImpl (long)
   * @param setting (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSettingsUpdaterBridge_onSettingValueAbsent(
      long nativePasswordSettingsUpdaterAndroidBridgeImpl, int setting);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSettingsUpdaterBridge.onSettingValueFetched
   * @param nativePasswordSettingsUpdaterAndroidBridgeImpl (long)
   * @param setting (int)
   * @param offerToSavePasswordsEnabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSettingsUpdaterBridge_onSettingValueFetched(
      long nativePasswordSettingsUpdaterAndroidBridgeImpl, int setting,
      boolean offerToSavePasswordsEnabled);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSettingsUpdaterBridge.onSuccessfulSettingChange
   * @param nativePasswordSettingsUpdaterAndroidBridgeImpl (long)
   * @param setting (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSettingsUpdaterBridge_onSuccessfulSettingChange(
      long nativePasswordSettingsUpdaterAndroidBridgeImpl, int setting);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreAndroidBackendBridgeImpl.onCompleteWithLogins
   * @param nativePasswordStoreAndroidBackendBridgeImpl (long)
   * @param jobId (int)
   * @param passwords (byte[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreAndroidBackendBridgeImpl_onCompleteWithLogins(
      long nativePasswordStoreAndroidBackendBridgeImpl, int jobId, byte[] passwords);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreAndroidBackendBridgeImpl.onError
   * @param nativePasswordStoreAndroidBackendBridgeImpl (long)
   * @param jobId (int)
   * @param errorType (int)
   * @param apiErrorCode (int)
   * @param hasConnectionResult (boolean)
   * @param connectionResultStatusCode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreAndroidBackendBridgeImpl_onError(
      long nativePasswordStoreAndroidBackendBridgeImpl, int jobId, int errorType, int apiErrorCode,
      boolean hasConnectionResult, int connectionResultStatusCode);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreAndroidBackendBridgeImpl.onLoginChanged
   * @param nativePasswordStoreAndroidBackendBridgeImpl (long)
   * @param jobId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreAndroidBackendBridgeImpl_onLoginChanged(
      long nativePasswordStoreAndroidBackendBridgeImpl, int jobId);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.clearAllPasswords
   * @param nativePasswordStoreBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_clearAllPasswords(
      long nativePasswordStoreBridge);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.destroy
   * @param nativePasswordStoreBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_destroy(
      long nativePasswordStoreBridge);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.editPassword
   * @param nativePasswordStoreBridge (long)
   * @param credential (org.chromium.chrome.browser.password_manager.PasswordStoreCredential)
   * @param newPassword (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_editPassword(
      long nativePasswordStoreBridge, Object credential, String newPassword);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.getAllCredentials
   * @param nativePasswordStoreBridge (long)
   * @param credentials (org.chromium.chrome.browser.password_manager.PasswordStoreCredential[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_getAllCredentials(
      long nativePasswordStoreBridge, Object[] credentials);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.getPasswordStoreCredentialsCount
   * @param nativePasswordStoreBridge (long)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_getPasswordStoreCredentialsCount(
      long nativePasswordStoreBridge);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.init
   * @param passwordStoreBridge (org.chromium.chrome.browser.password_manager.PasswordStoreBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_init(
      Object passwordStoreBridge);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordStoreBridge.insertPasswordCredentialForTesting
   * @param nativePasswordStoreBridge (long)
   * @param credential (org.chromium.chrome.browser.password_manager.PasswordStoreCredential)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordStoreBridge_insertPasswordCredentialForTesting(
      long nativePasswordStoreBridge, Object credential);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSyncControllerDelegateBridgeImpl.onCredentialManagerError
   * @param nativePasswordSyncControllerDelegateBridgeImpl (long)
   * @param errorType (int)
   * @param apiErrorCode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSyncControllerDelegateBridgeImpl_onCredentialManagerError(
      long nativePasswordSyncControllerDelegateBridgeImpl, int errorType, int apiErrorCode);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordSyncControllerDelegateBridgeImpl.onCredentialManagerNotified
   * @param nativePasswordSyncControllerDelegateBridgeImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordSyncControllerDelegateBridgeImpl_onCredentialManagerNotified(
      long nativePasswordSyncControllerDelegateBridgeImpl);
}
