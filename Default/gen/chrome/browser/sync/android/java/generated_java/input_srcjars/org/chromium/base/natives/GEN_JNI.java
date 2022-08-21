package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.canSyncFeatureStart
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_canSyncFeatureStart(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getAccountInfo
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (org.chromium.components.signin.base.CoreAccountInfo)
   */
  public static final native Object org_chromium_chrome_browser_sync_SyncServiceImpl_getAccountInfo(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getActiveDataTypes
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (int[])
   */
  public static final native int[] org_chromium_chrome_browser_sync_SyncServiceImpl_getActiveDataTypes(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getAllNodes
   * @param nativeSyncServiceAndroidBridge (long)
   * @param callback (org.chromium.base.Callback<org.json.JSONArray>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_getAllNodes(
      long nativeSyncServiceAndroidBridge, Object callback);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getAuthError
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_sync_SyncServiceImpl_getAuthError(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getChosenDataTypes
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (int[])
   */
  public static final native int[] org_chromium_chrome_browser_sync_SyncServiceImpl_getChosenDataTypes(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getExplicitPassphraseTime
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_sync_SyncServiceImpl_getExplicitPassphraseTime(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getLastSyncedTimeForDebugging
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_sync_SyncServiceImpl_getLastSyncedTimeForDebugging(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.getPassphraseType
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_sync_SyncServiceImpl_getPassphraseType(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.hasKeepEverythingSynced
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_hasKeepEverythingSynced(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.hasSyncConsent
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_hasSyncConsent(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.hasUnrecoverableError
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_hasUnrecoverableError(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.init
   * @param caller (org.chromium.chrome.browser.sync.SyncServiceImpl)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_sync_SyncServiceImpl_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isCustomPassphraseAllowed
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isCustomPassphraseAllowed(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isEncryptEverythingEnabled
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isEncryptEverythingEnabled(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isEngineInitialized
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isEngineInitialized(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isFirstSetupComplete
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isFirstSetupComplete(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isPassphrasePromptMutedForCurrentProductVersion
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isPassphrasePromptMutedForCurrentProductVersion(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isPassphraseRequiredForPreferredDataTypes
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isPassphraseRequiredForPreferredDataTypes(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isSyncDisabledByEnterprisePolicy
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isSyncDisabledByEnterprisePolicy(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isSyncFeatureActive
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isSyncFeatureActive(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isSyncFeatureEnabled
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isSyncFeatureEnabled(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isSyncRequested
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isSyncRequested(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isTransportStateActive
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isTransportStateActive(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isTrustedVaultKeyRequired
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isTrustedVaultKeyRequired(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isTrustedVaultKeyRequiredForPreferredDataTypes
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isTrustedVaultKeyRequiredForPreferredDataTypes(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isTrustedVaultRecoverabilityDegraded
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isTrustedVaultRecoverabilityDegraded(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.isUsingExplicitPassphrase
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_isUsingExplicitPassphrase(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.markPassphrasePromptMutedForCurrentProductVersion
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_markPassphrasePromptMutedForCurrentProductVersion(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.requiresClientUpgrade
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_requiresClientUpgrade(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.setChosenDataTypes
   * @param nativeSyncServiceAndroidBridge (long)
   * @param syncEverything (boolean)
   * @param modelTypeArray (int[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_setChosenDataTypes(
      long nativeSyncServiceAndroidBridge, boolean syncEverything, int[] modelTypeArray);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.setDecryptionPassphrase
   * @param nativeSyncServiceAndroidBridge (long)
   * @param passphrase (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_setDecryptionPassphrase(
      long nativeSyncServiceAndroidBridge, String passphrase);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.setEncryptionPassphrase
   * @param nativeSyncServiceAndroidBridge (long)
   * @param passphrase (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_setEncryptionPassphrase(
      long nativeSyncServiceAndroidBridge, String passphrase);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.setFirstSetupComplete
   * @param nativeSyncServiceAndroidBridge (long)
   * @param syncFirstSetupCompleteSource (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_setFirstSetupComplete(
      long nativeSyncServiceAndroidBridge, int syncFirstSetupCompleteSource);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.setSetupInProgress
   * @param nativeSyncServiceAndroidBridge (long)
   * @param inProgress (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_setSetupInProgress(
      long nativeSyncServiceAndroidBridge, boolean inProgress);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.setSyncRequested
   * @param nativeSyncServiceAndroidBridge (long)
   * @param requested (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_setSyncRequested(
      long nativeSyncServiceAndroidBridge, boolean requested);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.shouldOfferTrustedVaultOptIn
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_sync_SyncServiceImpl_shouldOfferTrustedVaultOptIn(
      long nativeSyncServiceAndroidBridge);

  /**
   * org.chromium.chrome.browser.sync.SyncServiceImpl.triggerRefresh
   * @param nativeSyncServiceAndroidBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_SyncServiceImpl_triggerRefresh(
      long nativeSyncServiceAndroidBridge);
}
