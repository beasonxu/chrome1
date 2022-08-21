package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.signin.AccountCapabilitiesFetcher.onCapabilitiesFetchComplete
   * @param accountCapabilities (org.chromium.components.signin.base.AccountCapabilities)
   * @param nativeCallback (long)
   * @return (void)
   */
  public static final native void org_chromium_components_signin_AccountCapabilitiesFetcher_onCapabilitiesFetchComplete(
      Object accountCapabilities, long nativeCallback);

  /**
   * org.chromium.components.signin.ChildAccountInfoFetcher.setIsChildAccount
   * @param accountFetcherServicePtr (long)
   * @param accountId (org.chromium.components.signin.base.CoreAccountId)
   * @param isChildAccount (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_signin_ChildAccountInfoFetcher_setIsChildAccount(
      long accountFetcherServicePtr, Object accountId, boolean isChildAccount);

  /**
   * org.chromium.components.signin.identitymanager.AccountTrackerService.seedAccountsInfo
   * @param nativeAccountTrackerService (long)
   * @param gaiaIds (java.lang.String[])
   * @param emails (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_components_signin_identitymanager_AccountTrackerService_seedAccountsInfo(
      long nativeAccountTrackerService, String[] gaiaIds, String[] emails);

  /**
   * org.chromium.components.signin.identitymanager.IdentityManager.findExtendedAccountInfoByEmailAddress
   * @param nativeIdentityManager (long)
   * @param email (java.lang.String)
   * @return (org.chromium.components.signin.base.AccountInfo)
   */
  public static final native Object org_chromium_components_signin_identitymanager_IdentityManager_findExtendedAccountInfoByEmailAddress(
      long nativeIdentityManager, String email);

  /**
   * org.chromium.components.signin.identitymanager.IdentityManager.getAccountsWithRefreshTokens
   * @param nativeIdentityManager (long)
   * @return (org.chromium.components.signin.base.CoreAccountInfo[])
   */
  public static final native Object[] org_chromium_components_signin_identitymanager_IdentityManager_getAccountsWithRefreshTokens(
      long nativeIdentityManager);

  /**
   * org.chromium.components.signin.identitymanager.IdentityManager.getPrimaryAccountInfo
   * @param nativeIdentityManager (long)
   * @param consentLevel (int)
   * @return (org.chromium.components.signin.base.CoreAccountInfo)
   */
  public static final native Object org_chromium_components_signin_identitymanager_IdentityManager_getPrimaryAccountInfo(
      long nativeIdentityManager, int consentLevel);

  /**
   * org.chromium.components.signin.identitymanager.IdentityManager.refreshAccountInfoIfStale
   * @param nativeIdentityManager (long)
   * @param coreAccountId (org.chromium.components.signin.base.CoreAccountId)
   * @return (void)
   */
  public static final native void org_chromium_components_signin_identitymanager_IdentityManager_refreshAccountInfoIfStale(
      long nativeIdentityManager, Object coreAccountId);

  /**
   * org.chromium.components.signin.identitymanager.IdentityMutator.clearPrimaryAccount
   * @param nativeJniIdentityMutator (long)
   * @param sourceMetric (int)
   * @param deleteMetric (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_signin_identitymanager_IdentityMutator_clearPrimaryAccount(
      long nativeJniIdentityMutator, int sourceMetric, int deleteMetric);

  /**
   * org.chromium.components.signin.identitymanager.IdentityMutator.reloadAllAccountsFromSystemWithPrimaryAccount
   * @param nativeJniIdentityMutator (long)
   * @param accountId (org.chromium.components.signin.base.CoreAccountId)
   * @return (void)
   */
  public static final native void org_chromium_components_signin_identitymanager_IdentityMutator_reloadAllAccountsFromSystemWithPrimaryAccount(
      long nativeJniIdentityMutator, Object accountId);

  /**
   * org.chromium.components.signin.identitymanager.IdentityMutator.revokeSyncConsent
   * @param nativeJniIdentityMutator (long)
   * @param sourceMetric (int)
   * @param deleteMetric (int)
   * @return (void)
   */
  public static final native void org_chromium_components_signin_identitymanager_IdentityMutator_revokeSyncConsent(
      long nativeJniIdentityMutator, int sourceMetric, int deleteMetric);

  /**
   * org.chromium.components.signin.identitymanager.IdentityMutator.setPrimaryAccount
   * @param nativeJniIdentityMutator (long)
   * @param accountId (org.chromium.components.signin.base.CoreAccountId)
   * @param consentLevel (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_signin_identitymanager_IdentityMutator_setPrimaryAccount(
      long nativeJniIdentityMutator, Object accountId, int consentLevel);

  /**
   * org.chromium.components.signin.identitymanager.ProfileOAuth2TokenServiceDelegate.onOAuth2TokenFetched
   * @param authToken (java.lang.String)
   * @param expirationTimeSecs (long)
   * @param isTransientError (boolean)
   * @param nativeCallback (long)
   * @return (void)
   */
  public static final native void org_chromium_components_signin_identitymanager_ProfileOAuth2TokenServiceDelegate_onOAuth2TokenFetched(
      String authToken, long expirationTimeSecs, boolean isTransientError, long nativeCallback);

  /**
   * org.chromium.components.signin.identitymanager.ProfileOAuth2TokenServiceDelegate.reloadAllAccountsWithPrimaryAccountAfterSeeding
   * @param nativeProfileOAuth2TokenServiceDelegateAndroid (long)
   * @param accountId (java.lang.String)
   * @param deviceAccountNames (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_components_signin_identitymanager_ProfileOAuth2TokenServiceDelegate_reloadAllAccountsWithPrimaryAccountAfterSeeding(
      long nativeProfileOAuth2TokenServiceDelegateAndroid, String accountId,
      String[] deviceAccountNames);
}
