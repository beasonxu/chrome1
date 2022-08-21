package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.ChromeBackupAgentImpl.getBoolBackupNames
   * @param caller (org.chromium.chrome.browser.ChromeBackupAgentImpl)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_ChromeBackupAgentImpl_getBoolBackupNames(
      Object caller);

  /**
   * org.chromium.chrome.browser.ChromeBackupAgentImpl.getBoolBackupValues
   * @param caller (org.chromium.chrome.browser.ChromeBackupAgentImpl)
   * @return (boolean[])
   */
  public static final native boolean[] org_chromium_chrome_browser_ChromeBackupAgentImpl_getBoolBackupValues(
      Object caller);

  /**
   * org.chromium.chrome.browser.ChromeBackupAgentImpl.setBoolBackupPrefs
   * @param caller (org.chromium.chrome.browser.ChromeBackupAgentImpl)
   * @param name (java.lang.String[])
   * @param value (boolean[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ChromeBackupAgentImpl_setBoolBackupPrefs(
      Object caller, String[] name, boolean[] value);

  /**
   * org.chromium.chrome.browser.ChromePowerModeVoter.onChromeActivityStateChange
   * @param active (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ChromePowerModeVoter_onChromeActivityStateChange(
      boolean active);

  /**
   * org.chromium.chrome.browser.ChromePowerModeVoter.onCoordinatorTouchEvent
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ChromePowerModeVoter_onCoordinatorTouchEvent(
      );

  /**
   * org.chromium.chrome.browser.ChromePowerModeVoter.onViewTreeDraw
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ChromePowerModeVoter_onViewTreeDraw();

  /**
   * org.chromium.chrome.browser.DevToolsServer.destroyRemoteDebugging
   * @param caller (org.chromium.chrome.browser.DevToolsServer)
   * @param devToolsServer (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_DevToolsServer_destroyRemoteDebugging(
      Object caller, long devToolsServer);

  /**
   * org.chromium.chrome.browser.DevToolsServer.initRemoteDebugging
   * @param caller (org.chromium.chrome.browser.DevToolsServer)
   * @param socketNamePrefix (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_DevToolsServer_initRemoteDebugging(
      Object caller, String socketNamePrefix);

  /**
   * org.chromium.chrome.browser.DevToolsServer.isRemoteDebuggingEnabled
   * @param caller (org.chromium.chrome.browser.DevToolsServer)
   * @param devToolsServer (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_DevToolsServer_isRemoteDebuggingEnabled(
      Object caller, long devToolsServer);

  /**
   * org.chromium.chrome.browser.DevToolsServer.setRemoteDebuggingEnabled
   * @param caller (org.chromium.chrome.browser.DevToolsServer)
   * @param devToolsServer (long)
   * @param enabled (boolean)
   * @param allowDebugPermission (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_DevToolsServer_setRemoteDebuggingEnabled(
      Object caller, long devToolsServer, boolean enabled, boolean allowDebugPermission);

  /**
   * org.chromium.chrome.browser.IntentHandler.isCorsSafelistedHeader
   * @param name (java.lang.String)
   * @param value (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_IntentHandler_isCorsSafelistedHeader(
      String name, String value);

  /**
   * org.chromium.chrome.browser.NearOomMonitor.onLowMemory
   * @param nativeNearOomMonitor (long)
   * @param caller (org.chromium.chrome.browser.NearOomMonitor)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_NearOomMonitor_onLowMemory(
      long nativeNearOomMonitor, Object caller);

  /**
   * org.chromium.chrome.browser.ServiceTabLauncher.onWebContentsForRequestAvailable
   * @param requestId (int)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ServiceTabLauncher_onWebContentsForRequestAvailable(
      int requestId, Object webContents);

  /**
   * org.chromium.chrome.browser.WarmupManager.preconnectUrlAndSubresources
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_WarmupManager_preconnectUrlAndSubresources(
      Object profile, String url);

  /**
   * org.chromium.chrome.browser.WarmupManager.startPreconnectPredictorInitialization
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_WarmupManager_startPreconnectPredictorInitialization(
      Object profile);

  /**
   * org.chromium.chrome.browser.WebContentsFactory.createWebContents
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param initiallyHidden (boolean)
   * @param initializeRenderer (boolean)
   * @return (org.chromium.content_public.browser.WebContents)
   */
  public static final native Object org_chromium_chrome_browser_WebContentsFactory_createWebContents(
      Object profile, boolean initiallyHidden, boolean initializeRenderer);

  /**
   * org.chromium.chrome.browser.about_settings.AboutSettingsBridge.getApplicationVersion
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_about_1settings_AboutSettingsBridge_getApplicationVersion(
      );

  /**
   * org.chromium.chrome.browser.about_settings.AboutSettingsBridge.getOSVersion
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_about_1settings_AboutSettingsBridge_getOSVersion(
      );

  /**
   * org.chromium.chrome.browser.app.tab_activity_glue.ReparentingTask.attachTab
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_app_tab_1activity_1glue_ReparentingTask_attachTab(
      Object webContents);

  /**
   * org.chromium.chrome.browser.autofill.AutofillExpirationDateFixFlowBridge.onUserAccept
   * @param nativeCardExpirationDateFixFlowViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillExpirationDateFixFlowBridge)
   * @param month (java.lang.String)
   * @param year (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillExpirationDateFixFlowBridge_onUserAccept(
      long nativeCardExpirationDateFixFlowViewAndroid, Object caller, String month, String year);

  /**
   * org.chromium.chrome.browser.autofill.AutofillExpirationDateFixFlowBridge.onUserDismiss
   * @param nativeCardExpirationDateFixFlowViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillExpirationDateFixFlowBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillExpirationDateFixFlowBridge_onUserDismiss(
      long nativeCardExpirationDateFixFlowViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.AutofillExpirationDateFixFlowBridge.promptDismissed
   * @param nativeCardExpirationDateFixFlowViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillExpirationDateFixFlowBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillExpirationDateFixFlowBridge_promptDismissed(
      long nativeCardExpirationDateFixFlowViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.AutofillMessageConfirmFlowBridge.dialogDismissed
   * @param nativeSaveCardMessageConfirmDelegate (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_dialogDismissed(
      long nativeSaveCardMessageConfirmDelegate);

  /**
   * org.chromium.chrome.browser.autofill.AutofillMessageConfirmFlowBridge.onDateConfirmed
   * @param nativeSaveCardMessageConfirmDelegate (long)
   * @param month (java.lang.String)
   * @param year (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_onDateConfirmed(
      long nativeSaveCardMessageConfirmDelegate, String month, String year);

  /**
   * org.chromium.chrome.browser.autofill.AutofillMessageConfirmFlowBridge.onLinkClicked
   * @param nativeSaveCardMessageConfirmDelegate (long)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_onLinkClicked(
      long nativeSaveCardMessageConfirmDelegate, String url);

  /**
   * org.chromium.chrome.browser.autofill.AutofillMessageConfirmFlowBridge.onNameConfirmed
   * @param nativeSaveCardMessageConfirmDelegate (long)
   * @param name (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_onNameConfirmed(
      long nativeSaveCardMessageConfirmDelegate, String name);

  /**
   * org.chromium.chrome.browser.autofill.AutofillMessageConfirmFlowBridge.onSaveCardConfirmed
   * @param nativeSaveCardMessageConfirmDelegate (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_onSaveCardConfirmed(
      long nativeSaveCardMessageConfirmDelegate);

  /**
   * org.chromium.chrome.browser.autofill.AutofillMessageConfirmFlowBridge.onUserDismiss
   * @param nativeSaveCardMessageConfirmDelegate (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillMessageConfirmFlowBridge_onUserDismiss(
      long nativeSaveCardMessageConfirmDelegate);

  /**
   * org.chromium.chrome.browser.autofill.AutofillNameFixFlowBridge.onUserAccept
   * @param nativeCardNameFixFlowViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillNameFixFlowBridge)
   * @param name (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillNameFixFlowBridge_onUserAccept(
      long nativeCardNameFixFlowViewAndroid, Object caller, String name);

  /**
   * org.chromium.chrome.browser.autofill.AutofillNameFixFlowBridge.onUserDismiss
   * @param nativeCardNameFixFlowViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillNameFixFlowBridge_onUserDismiss(
      long nativeCardNameFixFlowViewAndroid);

  /**
   * org.chromium.chrome.browser.autofill.AutofillNameFixFlowBridge.promptDismissed
   * @param nativeCardNameFixFlowViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillNameFixFlowBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillNameFixFlowBridge_promptDismissed(
      long nativeCardNameFixFlowViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.AutofillPopupBridge.deletionConfirmed
   * @param nativeAutofillPopupViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillPopupBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillPopupBridge_deletionConfirmed(
      long nativeAutofillPopupViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.AutofillPopupBridge.deletionRequested
   * @param nativeAutofillPopupViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillPopupBridge)
   * @param listIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillPopupBridge_deletionRequested(
      long nativeAutofillPopupViewAndroid, Object caller, int listIndex);

  /**
   * org.chromium.chrome.browser.autofill.AutofillPopupBridge.popupDismissed
   * @param nativeAutofillPopupViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillPopupBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillPopupBridge_popupDismissed(
      long nativeAutofillPopupViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.AutofillPopupBridge.suggestionSelected
   * @param nativeAutofillPopupViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.AutofillPopupBridge)
   * @param listIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillPopupBridge_suggestionSelected(
      long nativeAutofillPopupViewAndroid, Object caller, int listIndex);

  /**
   * org.chromium.chrome.browser.autofill.AutofillSnackbarController.onActionClicked
   * @param nativeAutofillSnackbarViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillSnackbarController_onActionClicked(
      long nativeAutofillSnackbarViewAndroid);

  /**
   * org.chromium.chrome.browser.autofill.AutofillSnackbarController.onDismissed
   * @param nativeAutofillSnackbarViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_AutofillSnackbarController_onDismissed(
      long nativeAutofillSnackbarViewAndroid);

  /**
   * org.chromium.chrome.browser.autofill.CardUnmaskBridge.checkUserInputValidity
   * @param nativeCardUnmaskPromptViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CardUnmaskBridge)
   * @param userResponse (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_CardUnmaskBridge_checkUserInputValidity(
      long nativeCardUnmaskPromptViewAndroid, Object caller, String userResponse);

  /**
   * org.chromium.chrome.browser.autofill.CardUnmaskBridge.getExpectedCvcLength
   * @param nativeCardUnmaskPromptViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CardUnmaskBridge)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_autofill_CardUnmaskBridge_getExpectedCvcLength(
      long nativeCardUnmaskPromptViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.CardUnmaskBridge.onNewCardLinkClicked
   * @param nativeCardUnmaskPromptViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CardUnmaskBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_CardUnmaskBridge_onNewCardLinkClicked(
      long nativeCardUnmaskPromptViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.CardUnmaskBridge.onUserInput
   * @param nativeCardUnmaskPromptViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CardUnmaskBridge)
   * @param cvc (java.lang.String)
   * @param month (java.lang.String)
   * @param year (java.lang.String)
   * @param enableFidoAuth (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_CardUnmaskBridge_onUserInput(
      long nativeCardUnmaskPromptViewAndroid, Object caller, String cvc, String month, String year,
      boolean enableFidoAuth);

  /**
   * org.chromium.chrome.browser.autofill.CardUnmaskBridge.promptDismissed
   * @param nativeCardUnmaskPromptViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CardUnmaskBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_CardUnmaskBridge_promptDismissed(
      long nativeCardUnmaskPromptViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.CreditCardScannerBridge.scanCancelled
   * @param nativeCreditCardScannerViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CreditCardScannerBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_CreditCardScannerBridge_scanCancelled(
      long nativeCreditCardScannerViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.CreditCardScannerBridge.scanCompleted
   * @param nativeCreditCardScannerViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.CreditCardScannerBridge)
   * @param cardHolderName (java.lang.String)
   * @param cardNumber (java.lang.String)
   * @param expirationMonth (int)
   * @param expirationYear (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_CreditCardScannerBridge_scanCompleted(
      long nativeCreditCardScannerViewAndroid, Object caller, String cardHolderName,
      String cardNumber, int expirationMonth, int expirationYear);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.addServerCreditCardForTest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param card (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_addServerCreditCardForTest(
      long nativePersonalDataManagerAndroid, Object caller, Object card);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.addServerCreditCardForTestWithAdditionalFields
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param card (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   * @param nickname (java.lang.String)
   * @param cardIssuer (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_addServerCreditCardForTestWithAdditionalFields(
      long nativePersonalDataManagerAndroid, Object caller, Object card, String nickname,
      int cardIssuer);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.cancelPendingGetSubKeys
   * @param nativePersonalDataManagerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_cancelPendingGetSubKeys(
      long nativePersonalDataManagerAndroid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.clearServerDataForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_clearServerDataForTesting(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.clearUnmaskedCache
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_clearUnmaskedCache(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getBasicCardIssuerNetwork
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param cardNumber (java.lang.String)
   * @param emptyIfInvalid (boolean)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_getBasicCardIssuerNetwork(
      long nativePersonalDataManagerAndroid, Object caller, String cardNumber,
      boolean emptyIfInvalid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getBillingAddressLabelForPaymentRequest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_getBillingAddressLabelForPaymentRequest(
      long nativePersonalDataManagerAndroid, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCreditCardByGUID
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   */
  public static final native Object org_chromium_chrome_browser_autofill_PersonalDataManager_getCreditCardByGUID(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCreditCardForNumber
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param cardNumber (java.lang.String)
   * @return (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   */
  public static final native Object org_chromium_chrome_browser_autofill_PersonalDataManager_getCreditCardForNumber(
      long nativePersonalDataManagerAndroid, Object caller, String cardNumber);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCreditCardGUIDsForSettings
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_autofill_PersonalDataManager_getCreditCardGUIDsForSettings(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCreditCardGUIDsToSuggest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param includeServerCards (boolean)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_autofill_PersonalDataManager_getCreditCardGUIDsToSuggest(
      long nativePersonalDataManagerAndroid, Object caller, boolean includeServerCards);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCreditCardUseCountForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_autofill_PersonalDataManager_getCreditCardUseCountForTesting(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCreditCardUseDateForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_autofill_PersonalDataManager_getCreditCardUseDateForTesting(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getCurrentDateForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_autofill_PersonalDataManager_getCurrentDateForTesting(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getFullCardForPaymentRequest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param card (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   * @param delegate (org.chromium.chrome.browser.autofill.PersonalDataManager.FullCardRequestDelegate)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_getFullCardForPaymentRequest(
      long nativePersonalDataManagerAndroid, Object caller, Object webContents, Object card,
      Object delegate);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileByGUID
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   */
  public static final native Object org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileByGUID(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileGUIDsForSettings
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileGUIDsForSettings(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileGUIDsToSuggest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileGUIDsToSuggest(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileLabelsForSettings
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileLabelsForSettings(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileLabelsToSuggest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param includeNameInLabel (boolean)
   * @param includeOrganizationInLabel (boolean)
   * @param includeCountryInLabel (boolean)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileLabelsToSuggest(
      long nativePersonalDataManagerAndroid, Object caller, boolean includeNameInLabel,
      boolean includeOrganizationInLabel, boolean includeCountryInLabel);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileUseCountForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileUseCountForTesting(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getProfileUseDateForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_autofill_PersonalDataManager_getProfileUseDateForTesting(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getShippingAddressLabelWithCountryForPaymentRequest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_getShippingAddressLabelWithCountryForPaymentRequest(
      long nativePersonalDataManagerAndroid, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.getShippingAddressLabelWithoutCountryForPaymentRequest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_getShippingAddressLabelWithoutCountryForPaymentRequest(
      long nativePersonalDataManagerAndroid, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.hasCreditCards
   * @param nativePersonalDataManagerAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_hasCreditCards(
      long nativePersonalDataManagerAndroid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.hasProfiles
   * @param nativePersonalDataManagerAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_hasProfiles(
      long nativePersonalDataManagerAndroid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.init
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_autofill_PersonalDataManager_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.isAutofillCreditCardManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_isAutofillCreditCardManaged(
      );

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.isAutofillManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_isAutofillManaged(
      );

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.isAutofillProfileManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_isAutofillProfileManaged(
      );

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.isDataLoaded
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_isDataLoaded(
      long nativePersonalDataManagerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.isFidoAuthenticationAvailable
   * @param nativePersonalDataManagerAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_isFidoAuthenticationAvailable(
      long nativePersonalDataManagerAndroid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.isPaymentsIntegrationEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PersonalDataManager_isPaymentsIntegrationEnabled(
      );

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.loadRulesForAddressNormalization
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param regionCode (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_loadRulesForAddressNormalization(
      long nativePersonalDataManagerAndroid, Object caller, String regionCode);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.loadRulesForSubKeys
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param regionCode (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_loadRulesForSubKeys(
      long nativePersonalDataManagerAndroid, Object caller, String regionCode);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.recordAndLogCreditCardUse
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_recordAndLogCreditCardUse(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.recordAndLogProfileUse
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_recordAndLogProfileUse(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.removeByGUID
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_removeByGUID(
      long nativePersonalDataManagerAndroid, Object caller, String guid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setCreditCard
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param card (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_setCreditCard(
      long nativePersonalDataManagerAndroid, Object caller, Object card);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setCreditCardUseStatsForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @param count (int)
   * @param date (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_setCreditCardUseStatsForTesting(
      long nativePersonalDataManagerAndroid, Object caller, String guid, int count, long date);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setPaymentsIntegrationEnabled
   * @param enable (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_setPaymentsIntegrationEnabled(
      boolean enable);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setProfile
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_setProfile(
      long nativePersonalDataManagerAndroid, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setProfileToLocal
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_setProfileToLocal(
      long nativePersonalDataManagerAndroid, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setProfileUseStatsForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param guid (java.lang.String)
   * @param count (int)
   * @param date (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_setProfileUseStatsForTesting(
      long nativePersonalDataManagerAndroid, Object caller, String guid, int count, long date);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.setSyncServiceForTesting
   * @param nativePersonalDataManagerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_setSyncServiceForTesting(
      long nativePersonalDataManagerAndroid);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.startAddressNormalization
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @param timeoutSeconds (int)
   * @param delegate (org.chromium.chrome.browser.autofill.PersonalDataManager.NormalizedAddressRequestDelegate)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_startAddressNormalization(
      long nativePersonalDataManagerAndroid, Object caller, Object profile, int timeoutSeconds,
      Object delegate);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.startRegionSubKeysRequest
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param regionCode (java.lang.String)
   * @param timeoutSeconds (int)
   * @param delegate (org.chromium.chrome.browser.autofill.PersonalDataManager.GetSubKeysRequestDelegate)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_startRegionSubKeysRequest(
      long nativePersonalDataManagerAndroid, Object caller, String regionCode, int timeoutSeconds,
      Object delegate);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.toCountryCode
   * @param countryName (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PersonalDataManager_toCountryCode(
      String countryName);

  /**
   * org.chromium.chrome.browser.autofill.PersonalDataManager.updateServerCardBillingAddress
   * @param nativePersonalDataManagerAndroid (long)
   * @param caller (org.chromium.chrome.browser.autofill.PersonalDataManager)
   * @param card (org.chromium.chrome.browser.autofill.PersonalDataManager.CreditCard)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_PersonalDataManager_updateServerCardBillingAddress(
      long nativePersonalDataManagerAndroid, Object caller, Object card);

  /**
   * org.chromium.chrome.browser.autofill.PhoneNumberUtil.formatForDisplay
   * @param phoneNumber (java.lang.String)
   * @param countryCode (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PhoneNumberUtil_formatForDisplay(
      String phoneNumber, String countryCode);

  /**
   * org.chromium.chrome.browser.autofill.PhoneNumberUtil.formatForResponse
   * @param phoneNumber (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_PhoneNumberUtil_formatForResponse(
      String phoneNumber);

  /**
   * org.chromium.chrome.browser.autofill.PhoneNumberUtil.isPossibleNumber
   * @param phoneNumber (java.lang.String)
   * @param countryCode (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_autofill_PhoneNumberUtil_isPossibleNumber(
      String phoneNumber, String countryCode);

  /**
   * org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController.onPromptDismissed
   * @param nativeSaveUpdateAddressProfilePromptController (long)
   * @param caller (org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_onPromptDismissed(
      long nativeSaveUpdateAddressProfilePromptController, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController.onUserAccepted
   * @param nativeSaveUpdateAddressProfilePromptController (long)
   * @param caller (org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_onUserAccepted(
      long nativeSaveUpdateAddressProfilePromptController, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController.onUserDeclined
   * @param nativeSaveUpdateAddressProfilePromptController (long)
   * @param caller (org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_onUserDeclined(
      long nativeSaveUpdateAddressProfilePromptController, Object caller);

  /**
   * org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController.onUserEdited
   * @param nativeSaveUpdateAddressProfilePromptController (long)
   * @param caller (org.chromium.chrome.browser.autofill.SaveUpdateAddressProfilePromptController)
   * @param profile (org.chromium.chrome.browser.autofill.PersonalDataManager.AutofillProfile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_SaveUpdateAddressProfilePromptController_onUserEdited(
      long nativeSaveUpdateAddressProfilePromptController, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.autofill.VirtualCardEnrollmentDelegate.onAccepted
   * @param nativeVirtualCardEnrollBubbleControllerImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_onAccepted(
      long nativeVirtualCardEnrollBubbleControllerImpl);

  /**
   * org.chromium.chrome.browser.autofill.VirtualCardEnrollmentDelegate.onDeclined
   * @param nativeVirtualCardEnrollBubbleControllerImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_onDeclined(
      long nativeVirtualCardEnrollBubbleControllerImpl);

  /**
   * org.chromium.chrome.browser.autofill.VirtualCardEnrollmentDelegate.onDismissed
   * @param nativeVirtualCardEnrollBubbleControllerImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_onDismissed(
      long nativeVirtualCardEnrollBubbleControllerImpl);

  /**
   * org.chromium.chrome.browser.autofill.VirtualCardEnrollmentDelegate.onLinkClicked
   * @param nativeVirtualCardEnrollBubbleControllerImpl (long)
   * @param url (java.lang.String)
   * @param virtualCardEnrollmentLinkType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_VirtualCardEnrollmentDelegate_onLinkClicked(
      long nativeVirtualCardEnrollBubbleControllerImpl, String url,
      int virtualCardEnrollmentLinkType);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillPaymentMethodsDelegate.cleanup
   * @param nativeAutofillPaymentMethodsDelegate (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_settings_AutofillPaymentMethodsDelegate_cleanup(
      long nativeAutofillPaymentMethodsDelegate);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillPaymentMethodsDelegate.enrollOfferedVirtualCard
   * @param nativeAutofillPaymentMethodsDelegate (long)
   * @param virtualCardEnrollmentUpdateResponseCallback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_settings_AutofillPaymentMethodsDelegate_enrollOfferedVirtualCard(
      long nativeAutofillPaymentMethodsDelegate,
      Object virtualCardEnrollmentUpdateResponseCallback);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillPaymentMethodsDelegate.init
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_autofill_settings_AutofillPaymentMethodsDelegate_init(
      Object profile);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillPaymentMethodsDelegate.initVirtualCardEnrollment
   * @param nativeAutofillPaymentMethodsDelegate (long)
   * @param instrumentId (long)
   * @param virtualCardEnrollmentFieldsCallback (org.chromium.base.Callback<org.chromium.chrome.browser.autofill.settings.VirtualCardEnrollmentFields>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_settings_AutofillPaymentMethodsDelegate_initVirtualCardEnrollment(
      long nativeAutofillPaymentMethodsDelegate, long instrumentId,
      Object virtualCardEnrollmentFieldsCallback);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillPaymentMethodsDelegate.unenrollVirtualCard
   * @param nativeAutofillPaymentMethodsDelegate (long)
   * @param instrumentId (long)
   * @param virtualCardEnrollmentUpdateResponseCallback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_settings_AutofillPaymentMethodsDelegate_unenrollVirtualCard(
      long nativeAutofillPaymentMethodsDelegate, long instrumentId,
      Object virtualCardEnrollmentUpdateResponseCallback);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillProfileBridge.getAddressUiComponents
   * @param countryCode (java.lang.String)
   * @param languageCode (java.lang.String)
   * @param componentIds (java.util.List<java.lang.Integer>)
   * @param componentNames (java.util.List<java.lang.String>)
   * @param componentRequired (java.util.List<java.lang.Integer>)
   * @param componentLengths (java.util.List<java.lang.Integer>)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_settings_AutofillProfileBridge_getAddressUiComponents(
      String countryCode, String languageCode, Object componentIds, Object componentNames,
      Object componentRequired, Object componentLengths);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillProfileBridge.getDefaultCountryCode
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_autofill_settings_AutofillProfileBridge_getDefaultCountryCode(
      );

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillProfileBridge.getRequiredFields
   * @param countryCode (java.lang.String)
   * @param requiredFields (java.util.List<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_settings_AutofillProfileBridge_getRequiredFields(
      String countryCode, Object requiredFields);

  /**
   * org.chromium.chrome.browser.autofill.settings.AutofillProfileBridge.getSupportedCountries
   * @param countryCodes (java.util.List<java.lang.String>)
   * @param countryNames (java.util.List<java.lang.String>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_autofill_settings_AutofillProfileBridge_getSupportedCountries(
      Object countryCodes, Object countryNames);

  /**
   * org.chromium.chrome.browser.background_sync.BackgroundSyncBackgroundTask.fireOneShotBackgroundSyncEvents
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1sync_BackgroundSyncBackgroundTask_fireOneShotBackgroundSyncEvents(
      Object callback);

  /**
   * org.chromium.chrome.browser.background_sync.BackgroundSyncBackgroundTaskScheduler.setPlayServicesVersionCheckDisabledForTests
   * @param disabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1sync_BackgroundSyncBackgroundTaskScheduler_setPlayServicesVersionCheckDisabledForTests(
      boolean disabled);

  /**
   * org.chromium.chrome.browser.background_sync.PeriodicBackgroundSyncChromeWakeUpTask.firePeriodicBackgroundSyncEvents
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1sync_PeriodicBackgroundSyncChromeWakeUpTask_firePeriodicBackgroundSyncEvents(
      Object callback);

  /**
   * org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask.destroy
   * @param nativeProxyNativeTask (long)
   * @param caller (org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1task_1scheduler_ProxyNativeTask_destroy(
      long nativeProxyNativeTask, Object caller);

  /**
   * org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask.init
   * @param caller (org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask)
   * @param taskType (int)
   * @param extras (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_background_1task_1scheduler_ProxyNativeTask_init(
      Object caller, int taskType, String extras, Object callback);

  /**
   * org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask.onFullBrowserLoaded
   * @param nativeProxyNativeTask (long)
   * @param caller (org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1task_1scheduler_ProxyNativeTask_onFullBrowserLoaded(
      long nativeProxyNativeTask, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask.startBackgroundTaskInReducedMode
   * @param nativeProxyNativeTask (long)
   * @param caller (org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask)
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1task_1scheduler_ProxyNativeTask_startBackgroundTaskInReducedMode(
      long nativeProxyNativeTask, Object caller, Object key);

  /**
   * org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask.startBackgroundTaskWithFullBrowser
   * @param nativeProxyNativeTask (long)
   * @param caller (org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_background_1task_1scheduler_ProxyNativeTask_startBackgroundTaskWithFullBrowser(
      long nativeProxyNativeTask, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask.stopBackgroundTask
   * @param nativeProxyNativeTask (long)
   * @param caller (org.chromium.chrome.browser.background_task_scheduler.ProxyNativeTask)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_background_1task_1scheduler_ProxyNativeTask_stopBackgroundTask(
      long nativeProxyNativeTask, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.addBookmark
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param parent (org.chromium.components.bookmarks.BookmarkId)
   * @param index (int)
   * @param title (java.lang.String)
   * @param url (org.chromium.url.GURL)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_addBookmark(
      long nativeBookmarkBridge, Object caller, Object parent, int index, String title, Object url);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.addFolder
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param parent (org.chromium.components.bookmarks.BookmarkId)
   * @param index (int)
   * @param title (java.lang.String)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_addFolder(
      long nativeBookmarkBridge, Object caller, Object parent, int index, String title);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.addToReadingList
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param title (java.lang.String)
   * @param url (org.chromium.url.GURL)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_addToReadingList(
      long nativeBookmarkBridge, Object caller, String title, Object url);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.deleteBookmark
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param bookmarkId (org.chromium.components.bookmarks.BookmarkId)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_deleteBookmark(
      long nativeBookmarkBridge, Object caller, Object bookmarkId);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.deletePowerBookmarkMeta
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_deletePowerBookmarkMeta(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.destroy
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_destroy(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.doesBookmarkExist
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bookmarks_BookmarkBridge_doesBookmarkExist(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.endGroupingUndos
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_endGroupingUndos(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getAllFoldersWithDepths
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param folderList (java.util.List<org.chromium.components.bookmarks.BookmarkId>)
   * @param depthList (java.util.List<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getAllFoldersWithDepths(
      long nativeBookmarkBridge, Object caller, Object folderList, Object depthList);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getBookmarkByID
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (org.chromium.chrome.browser.bookmarks.BookmarkBridge.BookmarkItem)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getBookmarkByID(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getBookmarkGuidByIdForTesting
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_bookmarks_BookmarkBridge_getBookmarkGuidByIdForTesting(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getBookmarkIdForWebContents
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param onlyEditable (boolean)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getBookmarkIdForWebContents(
      long nativeBookmarkBridge, Object caller, Object webContents, boolean onlyEditable);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getBookmarksForFolder
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param folderId (org.chromium.components.bookmarks.BookmarkId)
   * @param callback (org.chromium.chrome.browser.bookmarks.BookmarkBridge.BookmarksCallback)
   * @param bookmarksList (java.util.List<org.chromium.chrome.browser.bookmarks.BookmarkBridge.BookmarkItem>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getBookmarksForFolder(
      long nativeBookmarkBridge, Object caller, Object folderId, Object callback,
      Object bookmarksList);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getBookmarksOfType
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param bookmarkMatches (java.util.List<org.chromium.components.bookmarks.BookmarkId>)
   * @param powerBookmarkType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getBookmarksOfType(
      long nativeBookmarkBridge, Object caller, Object bookmarkMatches, int powerBookmarkType);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getChildAt
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @param index (int)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getChildAt(
      long nativeBookmarkBridge, Object caller, long id, int type, int index);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getChildCount
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_bookmarks_BookmarkBridge_getChildCount(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getChildIDs
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @param bookmarksList (java.util.List<org.chromium.components.bookmarks.BookmarkId>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getChildIDs(
      long nativeBookmarkBridge, Object caller, long id, int type, Object bookmarksList);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getCurrentFolderHierarchy
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param folderId (org.chromium.components.bookmarks.BookmarkId)
   * @param callback (org.chromium.chrome.browser.bookmarks.BookmarkBridge.BookmarksCallback)
   * @param bookmarksList (java.util.List<org.chromium.chrome.browser.bookmarks.BookmarkBridge.BookmarkItem>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getCurrentFolderHierarchy(
      long nativeBookmarkBridge, Object caller, Object folderId, Object callback,
      Object bookmarksList);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getDesktopFolderId
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getDesktopFolderId(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getMobileFolderId
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getMobileFolderId(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getOtherFolderId
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getOtherFolderId(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getPartnerFolderId
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getPartnerFolderId(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getPowerBookmarkMeta
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (byte[])
   */
  public static final native byte[] org_chromium_chrome_browser_bookmarks_BookmarkBridge_getPowerBookmarkMeta(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getReadingListFolder
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getReadingListFolder(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getReadingListItem
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param url (org.chromium.url.GURL)
   * @return (org.chromium.chrome.browser.bookmarks.BookmarkBridge.BookmarkItem)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getReadingListItem(
      long nativeBookmarkBridge, Object caller, Object url);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getRootFolderId
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (org.chromium.components.bookmarks.BookmarkId)
   */
  public static final native Object org_chromium_chrome_browser_bookmarks_BookmarkBridge_getRootFolderId(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getTopLevelFolderIDs
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param getSpecial (boolean)
   * @param getNormal (boolean)
   * @param bookmarksList (java.util.List<org.chromium.components.bookmarks.BookmarkId>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getTopLevelFolderIDs(
      long nativeBookmarkBridge, Object caller, boolean getSpecial, boolean getNormal,
      Object bookmarksList);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getTopLevelFolderParentIDs
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param bookmarksList (java.util.List<org.chromium.components.bookmarks.BookmarkId>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getTopLevelFolderParentIDs(
      long nativeBookmarkBridge, Object caller, Object bookmarksList);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getTotalBookmarkCount
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_bookmarks_BookmarkBridge_getTotalBookmarkCount(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.getUpdatedProductPrices
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param gurls (org.chromium.url.GURL[])
   * @param callback (org.chromium.chrome.browser.bookmarks.BookmarkBridge.PriceUpdateCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_getUpdatedProductPrices(
      long nativeBookmarkBridge, Object caller, Object[] gurls, Object callback);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.init
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_bookmarks_BookmarkBridge_init(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.isBookmarked
   * @param nativeBookmarkBridge (long)
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bookmarks_BookmarkBridge_isBookmarked(
      long nativeBookmarkBridge, Object url);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.isDoingExtensiveChanges
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bookmarks_BookmarkBridge_isDoingExtensiveChanges(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.isEditBookmarksEnabled
   * @param nativeBookmarkBridge (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bookmarks_BookmarkBridge_isEditBookmarksEnabled(
      long nativeBookmarkBridge);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.isFolderVisible
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bookmarks_BookmarkBridge_isFolderVisible(
      long nativeBookmarkBridge, Object caller, long id, int type);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.loadEmptyPartnerBookmarkShimForTesting
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_loadEmptyPartnerBookmarkShimForTesting(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.loadFakePartnerBookmarkShimForTesting
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_loadFakePartnerBookmarkShimForTesting(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.moveBookmark
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param bookmarkId (org.chromium.components.bookmarks.BookmarkId)
   * @param newParentId (org.chromium.components.bookmarks.BookmarkId)
   * @param index (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_moveBookmark(
      long nativeBookmarkBridge, Object caller, Object bookmarkId, Object newParentId, int index);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.removeAllUserBookmarks
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_removeAllUserBookmarks(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.reorderChildren
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param parent (org.chromium.components.bookmarks.BookmarkId)
   * @param orderedNodes (long[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_reorderChildren(
      long nativeBookmarkBridge, Object caller, Object parent, long[] orderedNodes);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.searchBookmarks
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param bookmarkMatches (java.util.List<org.chromium.components.bookmarks.BookmarkId>)
   * @param query (java.lang.String)
   * @param tags (java.lang.String[])
   * @param powerBookmarkType (int)
   * @param maxNumber (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_searchBookmarks(
      long nativeBookmarkBridge, Object caller, Object bookmarkMatches, String query, String[] tags,
      int powerBookmarkType, int maxNumber);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.setBookmarkTitle
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @param title (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_setBookmarkTitle(
      long nativeBookmarkBridge, Object caller, long id, int type, String title);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.setBookmarkUrl
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @param url (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_setBookmarkUrl(
      long nativeBookmarkBridge, Object caller, long id, int type, Object url);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.setPowerBookmarkMeta
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param id (long)
   * @param type (int)
   * @param meta (byte[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_setPowerBookmarkMeta(
      long nativeBookmarkBridge, Object caller, long id, int type, byte[] meta);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.setReadStatus
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @param url (org.chromium.url.GURL)
   * @param read (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_setReadStatus(
      long nativeBookmarkBridge, Object caller, Object url, boolean read);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.startGroupingUndos
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_startGroupingUndos(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.bookmarks.BookmarkBridge.undo
   * @param nativeBookmarkBridge (long)
   * @param caller (org.chromium.chrome.browser.bookmarks.BookmarkBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_bookmarks_BookmarkBridge_undo(
      long nativeBookmarkBridge, Object caller);

  /**
   * org.chromium.chrome.browser.browserservices.QualityEnforcer.reportDevtoolsIssue
   * @param renderFrameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @param type (int)
   * @param url (java.lang.String)
   * @param httpStatusCode (int)
   * @param packageName (java.lang.String)
   * @param signature (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_QualityEnforcer_reportDevtoolsIssue(
      Object renderFrameHost, int type, String url, int httpStatusCode, String packageName,
      String signature);

  /**
   * org.chromium.chrome.browser.browserservices.digitalgoods.SiteIsolator.startIsolatingSite
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_digitalgoods_SiteIsolator_startIsolatingSite(
      Object profile, Object url);

  /**
   * org.chromium.chrome.browser.browserservices.permissiondelegation.InstalledWebappBridge.notifyPermissionsChange
   * @param provider (long)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_permissiondelegation_InstalledWebappBridge_notifyPermissionsChange(
      long provider, int type);

  /**
   * org.chromium.chrome.browser.browserservices.permissiondelegation.InstalledWebappBridge.runPermissionCallback
   * @param callback (long)
   * @param settingValue (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_permissiondelegation_InstalledWebappBridge_runPermissionCallback(
      long callback, int settingValue);

  /**
   * org.chromium.chrome.browser.browserservices.permissiondelegation.InstalledWebappGeolocationBridge.onNewErrorAvailable
   * @param nativeInstalledWebappGeolocationBridge (long)
   * @param message (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_permissiondelegation_InstalledWebappGeolocationBridge_onNewErrorAvailable(
      long nativeInstalledWebappGeolocationBridge, String message);

  /**
   * org.chromium.chrome.browser.browserservices.permissiondelegation.InstalledWebappGeolocationBridge.onNewLocationAvailable
   * @param nativeInstalledWebappGeolocationBridge (long)
   * @param latitude (double)
   * @param longitude (double)
   * @param timeStamp (double)
   * @param hasAltitude (boolean)
   * @param altitude (double)
   * @param hasAccuracy (boolean)
   * @param accuracy (double)
   * @param hasHeading (boolean)
   * @param heading (double)
   * @param hasSpeed (boolean)
   * @param speed (double)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_permissiondelegation_InstalledWebappGeolocationBridge_onNewLocationAvailable(
      long nativeInstalledWebappGeolocationBridge, double latitude, double longitude,
      double timeStamp, boolean hasAltitude, double altitude, boolean hasAccuracy, double accuracy,
      boolean hasHeading, double heading, boolean hasSpeed, double speed);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.clearBrowsingData
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param dataTypes (int[])
   * @param timePeriod (int)
   * @param excludedDomains (java.lang.String[])
   * @param excludedDomainReasons (int[])
   * @param ignoredDomains (java.lang.String[])
   * @param ignoredDomainReasons (int[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_clearBrowsingData(
      Object caller, Object profile, int[] dataTypes, int timePeriod, String[] excludedDomains,
      int[] excludedDomainReasons, String[] ignoredDomains, int[] ignoredDomainReasons);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.clearSameSiteNoneData
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_clearSameSiteNoneData(
      Object caller, Object profile, Object callback);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.fetchImportantSites
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param callback (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.ImportantSitesCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_fetchImportantSites(
      Object profile, Object callback);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.getBrowsingDataDeletionPreference
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param dataType (int)
   * @param clearBrowsingDataTab (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_getBrowsingDataDeletionPreference(
      Object caller, int dataType, int clearBrowsingDataTab);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.getBrowsingDataDeletionTimePeriod
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param clearBrowsingDataTab (int)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_getBrowsingDataDeletionTimePeriod(
      Object caller, int clearBrowsingDataTab);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.getLastClearBrowsingDataTab
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_getLastClearBrowsingDataTab(
      Object caller);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.getMaxImportantSites
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_getMaxImportantSites(
      );

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.markOriginAsImportantForTesting
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param origin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_markOriginAsImportantForTesting(
      Object profile, String origin);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.requestInfoAboutOtherFormsOfBrowsingHistory
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param listener (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.OtherFormsOfBrowsingHistoryListener)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_requestInfoAboutOtherFormsOfBrowsingHistory(
      Object caller, Object profile, Object listener);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.setBrowsingDataDeletionPreference
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param dataType (int)
   * @param clearBrowsingDataTab (int)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_setBrowsingDataDeletionPreference(
      Object caller, int dataType, int clearBrowsingDataTab, boolean value);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.setBrowsingDataDeletionTimePeriod
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param clearBrowsingDataTab (int)
   * @param timePeriod (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_setBrowsingDataDeletionTimePeriod(
      Object caller, int clearBrowsingDataTab, int timePeriod);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataBridge.setLastClearBrowsingDataTab
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataBridge)
   * @param lastTab (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataBridge_setLastClearBrowsingDataTab(
      Object caller, int lastTab);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataCounterBridge.destroy
   * @param nativeBrowsingDataCounterBridge (long)
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataCounterBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_BrowsingDataCounterBridge_destroy(
      long nativeBrowsingDataCounterBridge, Object caller);

  /**
   * org.chromium.chrome.browser.browsing_data.BrowsingDataCounterBridge.init
   * @param caller (org.chromium.chrome.browser.browsing_data.BrowsingDataCounterBridge)
   * @param dataType (int)
   * @param prefType (int)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_browsing_1data_BrowsingDataCounterBridge_init(
      Object caller, int dataType, int prefType);

  /**
   * org.chromium.chrome.browser.browsing_data.UrlFilterBridge.destroy
   * @param nativeUrlFilterBridge (long)
   * @param caller (org.chromium.chrome.browser.browsing_data.UrlFilterBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browsing_1data_UrlFilterBridge_destroy(
      long nativeUrlFilterBridge, Object caller);

  /**
   * org.chromium.chrome.browser.browsing_data.UrlFilterBridge.matchesUrl
   * @param nativeUrlFilterBridge (long)
   * @param caller (org.chromium.chrome.browser.browsing_data.UrlFilterBridge)
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_browsing_1data_UrlFilterBridge_matchesUrl(
      long nativeUrlFilterBridge, Object caller, String url);

  /**
   * org.chromium.chrome.browser.complex_tasks.TaskTabHelper.getRootTaskId
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_complex_1tasks_TaskTabHelper_getRootTaskId(
      Object webContents);

  /**
   * org.chromium.chrome.browser.complex_tasks.TaskTabHelper.getTaskId
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_complex_1tasks_TaskTabHelper_getTaskId(
      Object webContents);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.cacheBackBufferForCurrentSurface
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_cacheBackBufferForCurrentSurface(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.destroy
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_destroy(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.evictCachedBackBuffer
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_evictCachedBackBuffer(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.finalizeLayers
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_finalizeLayers(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.getResourceManager
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (org.chromium.ui.resources.ResourceManager)
   */
  public static final native Object org_chromium_chrome_browser_compositor_CompositorView_getResourceManager(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.init
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param lowMemDevice (boolean)
   * @param windowAndroid (org.chromium.ui.base.WindowAndroid)
   * @param tabContentManager (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_CompositorView_init(
      Object caller, boolean lowMemDevice, Object windowAndroid, Object tabContentManager);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.notifyVirtualKeyboardOverlayRect
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param x (int)
   * @param y (int)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_notifyVirtualKeyboardOverlayRect(
      long nativeCompositorView, Object caller, Object webContents, int x, int y, int width,
      int height);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.onControlsResizeViewChanged
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param controlsResizeView (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_onControlsResizeViewChanged(
      long nativeCompositorView, Object caller, Object webContents, boolean controlsResizeView);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.onPhysicalBackingSizeChanged
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_onPhysicalBackingSizeChanged(
      long nativeCompositorView, Object caller, Object webContents, int width, int height);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.onTabChanged
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_onTabChanged(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.preserveChildSurfaceControls
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_preserveChildSurfaceControls(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setCompositorWindow
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param window (org.chromium.ui.base.WindowAndroid)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setCompositorWindow(
      long nativeCompositorView, Object caller, Object window);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setDidSwapBuffersCallbackEnabled
   * @param nativeCompositorView (long)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setDidSwapBuffersCallbackEnabled(
      long nativeCompositorView, boolean enabled);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setLayoutBounds
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setLayoutBounds(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setNeedsComposite
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setNeedsComposite(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setOverlayImmersiveArMode
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setOverlayImmersiveArMode(
      long nativeCompositorView, Object caller, boolean enabled);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setOverlayVideoMode
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setOverlayVideoMode(
      long nativeCompositorView, Object caller, boolean enabled);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.setSceneLayer
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param sceneLayer (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_setSceneLayer(
      long nativeCompositorView, Object caller, Object sceneLayer);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.surfaceChanged
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @param format (int)
   * @param width (int)
   * @param height (int)
   * @param backedBySurfaceTexture (boolean)
   * @param surface (android.view.Surface)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_surfaceChanged(
      long nativeCompositorView, Object caller, int format, int width, int height,
      boolean backedBySurfaceTexture, Object surface);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.surfaceCreated
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_surfaceCreated(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.CompositorView.surfaceDestroyed
   * @param nativeCompositorView (long)
   * @param caller (org.chromium.chrome.browser.compositor.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_CompositorView_surfaceDestroyed(
      long nativeCompositorView, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.LayerTitleCache.clearExcept
   * @param nativeLayerTitleCache (long)
   * @param caller (org.chromium.chrome.browser.compositor.LayerTitleCache)
   * @param exceptId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_LayerTitleCache_clearExcept(
      long nativeLayerTitleCache, Object caller, int exceptId);

  /**
   * org.chromium.chrome.browser.compositor.LayerTitleCache.destroy
   * @param nativeLayerTitleCache (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_LayerTitleCache_destroy(
      long nativeLayerTitleCache);

  /**
   * org.chromium.chrome.browser.compositor.LayerTitleCache.init
   * @param caller (org.chromium.chrome.browser.compositor.LayerTitleCache)
   * @param fadeWidth (int)
   * @param faviconStartlPadding (int)
   * @param faviconEndPadding (int)
   * @param spinnerResId (int)
   * @param spinnerIncognitoResId (int)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_LayerTitleCache_init(
      Object caller, int fadeWidth, int faviconStartlPadding, int faviconEndPadding,
      int spinnerResId, int spinnerIncognitoResId, Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.LayerTitleCache.updateFavicon
   * @param nativeLayerTitleCache (long)
   * @param caller (org.chromium.chrome.browser.compositor.LayerTitleCache)
   * @param tabId (int)
   * @param faviconResId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_LayerTitleCache_updateFavicon(
      long nativeLayerTitleCache, Object caller, int tabId, int faviconResId);

  /**
   * org.chromium.chrome.browser.compositor.LayerTitleCache.updateLayer
   * @param nativeLayerTitleCache (long)
   * @param caller (org.chromium.chrome.browser.compositor.LayerTitleCache)
   * @param tabId (int)
   * @param titleResId (int)
   * @param faviconResId (int)
   * @param isIncognito (boolean)
   * @param isRtl (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_LayerTitleCache_updateLayer(
      long nativeLayerTitleCache, Object caller, int tabId, int titleResId, int faviconResId,
      boolean isIncognito, boolean isRtl);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.destroy
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_destroy(
      long nativeOverlayPanelContent, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.destroyWebContents
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_destroyWebContents(
      long nativeOverlayPanelContent, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.init
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.onPhysicalBackingSizeChanged
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_onPhysicalBackingSizeChanged(
      long nativeOverlayPanelContent, Object caller, Object webContents, int width, int height);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.removeLastHistoryEntry
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @param historyUrl (java.lang.String)
   * @param urlTimeMs (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_removeLastHistoryEntry(
      long nativeOverlayPanelContent, Object caller, String historyUrl, long urlTimeMs);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.setInterceptNavigationDelegate
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @param delegate (org.chromium.components.navigation_interception.InterceptNavigationDelegate)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_setInterceptNavigationDelegate(
      long nativeOverlayPanelContent, Object caller, Object delegate, Object webContents);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.setWebContents
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param delegate (org.chromium.components.embedder_support.delegate.WebContentsDelegateAndroid)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_setWebContents(
      long nativeOverlayPanelContent, Object caller, Object webContents, Object delegate);

  /**
   * org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent.updateBrowserControlsState
   * @param nativeOverlayPanelContent (long)
   * @param caller (org.chromium.chrome.browser.compositor.bottombar.OverlayPanelContent)
   * @param areControlsHidden (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_bottombar_OverlayPanelContent_updateBrowserControlsState(
      long nativeOverlayPanelContent, Object caller, boolean areControlsHidden);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.attachTab
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param tabId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_attachTab(
      long nativeTabContentManager, Object caller, Object tab, int tabId);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.cacheTabWithBitmap
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tab (java.lang.Object)
   * @param bitmap (java.lang.Object)
   * @param thumbnailScale (float)
   * @param aspectRatio (double)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_cacheTabWithBitmap(
      long nativeTabContentManager, Object caller, Object tab, Object bitmap, float thumbnailScale,
      double aspectRatio);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.captureThumbnail
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tab (java.lang.Object)
   * @param thumbnailScale (float)
   * @param writeToCache (boolean)
   * @param aspectRatio (double)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_captureThumbnail(
      long nativeTabContentManager, Object caller, Object tab, float thumbnailScale,
      boolean writeToCache, double aspectRatio, Object callback);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.destroy
   * @param nativeTabContentManager (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_destroy(
      long nativeTabContentManager);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.detachTab
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param tabId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_detachTab(
      long nativeTabContentManager, Object caller, Object tab, int tabId);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.getEtc1TabThumbnail
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tabId (int)
   * @param aspectRatio (double)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_getEtc1TabThumbnail(
      long nativeTabContentManager, Object caller, int tabId, double aspectRatio, Object callback);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.getPendingReadbacksForTesting
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_getPendingReadbacksForTesting(
      long nativeTabContentManager, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.hasFullCachedThumbnail
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tabId (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_hasFullCachedThumbnail(
      long nativeTabContentManager, Object caller, int tabId);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.init
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param defaultCacheSize (int)
   * @param approximationCacheSize (int)
   * @param compressionQueueMaxSize (int)
   * @param writeQueueMaxSize (int)
   * @param useApproximationThumbnail (boolean)
   * @param saveJpegThumbnails (boolean)
   * @param jpegAspectRatio (double)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_init(
      Object caller, int defaultCacheSize, int approximationCacheSize, int compressionQueueMaxSize,
      int writeQueueMaxSize, boolean useApproximationThumbnail, boolean saveJpegThumbnails,
      double jpegAspectRatio);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.invalidateIfChanged
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tabId (int)
   * @param url (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_invalidateIfChanged(
      long nativeTabContentManager, Object caller, int tabId, Object url);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.removeTabThumbnail
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param tabId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_removeTabThumbnail(
      long nativeTabContentManager, Object caller, int tabId);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.setCaptureMinRequestTimeForTesting
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param timeMs (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_setCaptureMinRequestTimeForTesting(
      long nativeTabContentManager, Object caller, int timeMs);

  /**
   * org.chromium.chrome.browser.compositor.layouts.content.TabContentManager.updateVisibleIds
   * @param nativeTabContentManager (long)
   * @param caller (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param priority (int[])
   * @param primaryTabId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_layouts_content_TabContentManager_updateVisibleIds(
      long nativeTabContentManager, Object caller, int[] priority, int primaryTabId);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer.createContextualSearchLayer
   * @param nativeContextualSearchSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_createContextualSearchLayer(
      long nativeContextualSearchSceneLayer, Object caller, Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer.hideTree
   * @param nativeContextualSearchSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_hideTree(
      long nativeContextualSearchSceneLayer, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer.init
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer.setContentTree
   * @param nativeContextualSearchSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer)
   * @param contentTree (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_setContentTree(
      long nativeContextualSearchSceneLayer, Object caller, Object contentTree);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer.updateContextualSearchLayer
   * @param nativeContextualSearchSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ContextualSearchSceneLayer)
   * @param searchBarBackgroundResourceId (int)
   * @param searchBarBackgroundColor (int)
   * @param searchContextResourceId (int)
   * @param searchTermResourceId (int)
   * @param searchCaptionResourceId (int)
   * @param searchBarShadowResourceId (int)
   * @param searchProviderIconResourceId (int)
   * @param quickActionIconResourceId (int)
   * @param dragHandlebarResourceId (int)
   * @param openTabIconResourceId (int)
   * @param closeIconResourceId (int)
   * @param progressBarBackgroundResourceId (int)
   * @param progressBarBackgroundColor (int)
   * @param progressBarResourceId (int)
   * @param progressBarColor (int)
   * @param searchPromoResourceId (int)
   * @param dpToPx (float)
   * @param layoutWidth (float)
   * @param layoutHeight (float)
   * @param basePageBrightness (float)
   * @param basePageYOffset (float)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param searchPromoVisible (boolean)
   * @param searchPromoHeight (float)
   * @param searchPromoOpacity (float)
   * @param searchPromoBackgroundColor (int)
   * @param relatedSearchesInContentResourceId (int)
   * @param relatedSearchesInContentVisible (boolean)
   * @param relatedSearchesInContentHeight (float)
   * @param relatedSearchesInBarResourceId (int)
   * @param relatedSearchesInBarVisible (boolean)
   * @param relatedSearchesInBarHeight (float)
   * @param relatedSearchesInBarRedundantPadding (float)
   * @param searchPanelX (float)
   * @param searchPanelY (float)
   * @param searchPanelWidth (float)
   * @param searchPanelHeight (float)
   * @param searchBarMarginSide (float)
   * @param searchBarMarginTop (float)
   * @param searchBarHeight (float)
   * @param searchContextOpacity (float)
   * @param searchTextLayerMinHeight (float)
   * @param searchTermOpacity (float)
   * @param searchTermCaptionSpacing (float)
   * @param searchCaptionAnimationPercentage (float)
   * @param searchCaptionVisible (boolean)
   * @param searchBarBorderVisible (boolean)
   * @param searchBarBorderHeight (float)
   * @param quickActionIconVisible (boolean)
   * @param thumbnailVisible (boolean)
   * @param thumbnailUrl (java.lang.String)
   * @param customImageVisibilityPercentage (float)
   * @param barImageSize (int)
   * @param iconColor (int)
   * @param dragHandlebarColor (int)
   * @param closeIconOpacity (float)
   * @param isProgressBarVisible (boolean)
   * @param progressBarHeight (float)
   * @param progressBarOpacity (float)
   * @param progressBarCompletion (float)
   * @param touchHighlightVisible (boolean)
   * @param touchHighlightXOffset (float)
   * @param toucHighlightWidth (float)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param barBackgroundResourceId (int)
   * @param separatorLineColor (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_ContextualSearchSceneLayer_updateContextualSearchLayer(
      long nativeContextualSearchSceneLayer, Object caller, int searchBarBackgroundResourceId,
      int searchBarBackgroundColor, int searchContextResourceId, int searchTermResourceId,
      int searchCaptionResourceId, int searchBarShadowResourceId, int searchProviderIconResourceId,
      int quickActionIconResourceId, int dragHandlebarResourceId, int openTabIconResourceId,
      int closeIconResourceId, int progressBarBackgroundResourceId, int progressBarBackgroundColor,
      int progressBarResourceId, int progressBarColor, int searchPromoResourceId, float dpToPx,
      float layoutWidth, float layoutHeight, float basePageBrightness, float basePageYOffset,
      Object webContents, boolean searchPromoVisible, float searchPromoHeight,
      float searchPromoOpacity, int searchPromoBackgroundColor,
      int relatedSearchesInContentResourceId, boolean relatedSearchesInContentVisible,
      float relatedSearchesInContentHeight, int relatedSearchesInBarResourceId,
      boolean relatedSearchesInBarVisible, float relatedSearchesInBarHeight,
      float relatedSearchesInBarRedundantPadding, float searchPanelX, float searchPanelY,
      float searchPanelWidth, float searchPanelHeight, float searchBarMarginSide,
      float searchBarMarginTop, float searchBarHeight, float searchContextOpacity,
      float searchTextLayerMinHeight, float searchTermOpacity, float searchTermCaptionSpacing,
      float searchCaptionAnimationPercentage, boolean searchCaptionVisible,
      boolean searchBarBorderVisible, float searchBarBorderHeight, boolean quickActionIconVisible,
      boolean thumbnailVisible, String thumbnailUrl, float customImageVisibilityPercentage,
      int barImageSize, int iconColor, int dragHandlebarColor, float closeIconOpacity,
      boolean isProgressBarVisible, float progressBarHeight, float progressBarOpacity,
      float progressBarCompletion, boolean touchHighlightVisible, float touchHighlightXOffset,
      float toucHighlightWidth, Object profile, int barBackgroundResourceId,
      int separatorLineColor);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.StaticTabSceneLayer.init
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.StaticTabSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_scene_1layer_StaticTabSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.StaticTabSceneLayer.setTabContentManager
   * @param nativeStaticTabSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.StaticTabSceneLayer)
   * @param tabContentManager (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_StaticTabSceneLayer_setTabContentManager(
      long nativeStaticTabSceneLayer, Object caller, Object tabContentManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.StaticTabSceneLayer.updateTabLayer
   * @param nativeStaticTabSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.StaticTabSceneLayer)
   * @param id (int)
   * @param canUseLiveLayer (boolean)
   * @param backgroundColor (int)
   * @param x (float)
   * @param y (float)
   * @param staticToViewBlend (float)
   * @param saturation (float)
   * @param brightness (float)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_StaticTabSceneLayer_updateTabLayer(
      long nativeStaticTabSceneLayer, Object caller, int id, boolean canUseLiveLayer,
      int backgroundColor, float x, float y, float staticToViewBlend, float saturation,
      float brightness);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.beginBuildingFrame
   * @param nativeTabListSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_beginBuildingFrame(
      long nativeTabListSceneLayer, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.finishBuildingFrame
   * @param nativeTabListSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_finishBuildingFrame(
      long nativeTabListSceneLayer, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.init
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.putBackgroundLayer
   * @param nativeTabListSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @param resourceId (int)
   * @param alpha (float)
   * @param topOffset (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_putBackgroundLayer(
      long nativeTabListSceneLayer, Object caller, int resourceId, float alpha, int topOffset);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.putTabLayer
   * @param nativeTabListSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @param selectedId (int)
   * @param ids (int[])
   * @param useAdditionalIds (boolean)
   * @param toolbarResourceId (int)
   * @param shadowResourceId (int)
   * @param contourResourceId (int)
   * @param borderResourceId (int)
   * @param borderInnerShadowResourceId (int)
   * @param canUseLiveLayer (boolean)
   * @param tabBackgroundColor (int)
   * @param incognito (boolean)
   * @param x (float)
   * @param y (float)
   * @param width (float)
   * @param height (float)
   * @param contentWidth (float)
   * @param contentHeight (float)
   * @param shadowX (float)
   * @param shadowY (float)
   * @param shadowWidth (float)
   * @param shadowHeight (float)
   * @param alpha (float)
   * @param borderAlpha (float)
   * @param borderInnerShadowAlpha (float)
   * @param contourAlpha (float)
   * @param shadowAlpha (float)
   * @param staticToViewBlend (float)
   * @param borderScale (float)
   * @param saturation (float)
   * @param brightness (float)
   * @param showToolbar (boolean)
   * @param defaultThemeColor (int)
   * @param toolbarBackgroundColor (int)
   * @param anonymizeToolbar (boolean)
   * @param toolbarTextBoxResource (int)
   * @param toolbarTextBoxBackgroundColor (int)
   * @param toolbarTextBoxAlpha (float)
   * @param toolbarYOffset (float)
   * @param contentOffset (float)
   * @param sideBorderScale (float)
   * @param insetVerticalBorder (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_putTabLayer(
      long nativeTabListSceneLayer, Object caller, int selectedId, int[] ids,
      boolean useAdditionalIds, int toolbarResourceId, int shadowResourceId, int contourResourceId,
      int borderResourceId, int borderInnerShadowResourceId, boolean canUseLiveLayer,
      int tabBackgroundColor, boolean incognito, float x, float y, float width, float height,
      float contentWidth, float contentHeight, float shadowX, float shadowY, float shadowWidth,
      float shadowHeight, float alpha, float borderAlpha, float borderInnerShadowAlpha,
      float contourAlpha, float shadowAlpha, float staticToViewBlend, float borderScale,
      float saturation, float brightness, boolean showToolbar, int defaultThemeColor,
      int toolbarBackgroundColor, boolean anonymizeToolbar, int toolbarTextBoxResource,
      int toolbarTextBoxBackgroundColor, float toolbarTextBoxAlpha, float toolbarYOffset,
      float contentOffset, float sideBorderScale, boolean insetVerticalBorder);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.setDependencies
   * @param nativeTabListSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @param tabContentManager (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_setDependencies(
      long nativeTabListSceneLayer, Object caller, Object tabContentManager,
      Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer.updateLayer
   * @param nativeTabListSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabListSceneLayer)
   * @param backgroundColor (int)
   * @param viewportX (float)
   * @param viewportY (float)
   * @param viewportWidth (float)
   * @param viewportHeight (float)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabListSceneLayer_updateLayer(
      long nativeTabListSceneLayer, Object caller, int backgroundColor, float viewportX,
      float viewportY, float viewportWidth, float viewportHeight);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.beginBuildingFrame
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param visible (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_beginBuildingFrame(
      long nativeTabStripSceneLayer, Object caller, boolean visible);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.finishBuildingFrame
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_finishBuildingFrame(
      long nativeTabStripSceneLayer, Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.init
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.putStripTabLayer
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param id (int)
   * @param closeResourceId (int)
   * @param handleResourceId (int)
   * @param handleOutlineResourceId (int)
   * @param closeTint (int)
   * @param handleTint (int)
   * @param handleOutlineTint (int)
   * @param foreground (boolean)
   * @param closePressed (boolean)
   * @param toolbarWidth (float)
   * @param x (float)
   * @param y (float)
   * @param width (float)
   * @param height (float)
   * @param contentOffsetX (float)
   * @param closeButtonAlpha (float)
   * @param isLoading (boolean)
   * @param spinnerRotation (float)
   * @param brightness (float)
   * @param layerTitleCache (org.chromium.chrome.browser.compositor.LayerTitleCache)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_putStripTabLayer(
      long nativeTabStripSceneLayer, Object caller, int id, int closeResourceId,
      int handleResourceId, int handleOutlineResourceId, int closeTint, int handleTint,
      int handleOutlineTint, boolean foreground, boolean closePressed, float toolbarWidth, float x,
      float y, float width, float height, float contentOffsetX, float closeButtonAlpha,
      boolean isLoading, float spinnerRotation, float brightness, Object layerTitleCache,
      Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.setContentTree
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param contentTree (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_setContentTree(
      long nativeTabStripSceneLayer, Object caller, Object contentTree);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.updateModelSelectorButton
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param resourceId (int)
   * @param x (float)
   * @param y (float)
   * @param width (float)
   * @param height (float)
   * @param incognito (boolean)
   * @param visible (boolean)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_updateModelSelectorButton(
      long nativeTabStripSceneLayer, Object caller, int resourceId, float x, float y, float width,
      float height, boolean incognito, boolean visible, Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.updateNewTabButton
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param resourceId (int)
   * @param x (float)
   * @param y (float)
   * @param width (float)
   * @param height (float)
   * @param touchTargetOffset (float)
   * @param visible (boolean)
   * @param tint (int)
   * @param buttonAlpha (float)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_updateNewTabButton(
      long nativeTabStripSceneLayer, Object caller, int resourceId, float x, float y, float width,
      float height, float touchTargetOffset, boolean visible, int tint, float buttonAlpha,
      Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.updateStripScrim
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param x (float)
   * @param y (float)
   * @param width (float)
   * @param height (float)
   * @param color (int)
   * @param alpha (float)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_updateStripScrim(
      long nativeTabStripSceneLayer, Object caller, float x, float y, float width, float height,
      int color, float alpha);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.updateTabStripLayer
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param width (float)
   * @param height (float)
   * @param yOffset (float)
   * @param shouldReadBackground (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_updateTabStripLayer(
      long nativeTabStripSceneLayer, Object caller, float width, float height, float yOffset,
      boolean shouldReadBackground);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.updateTabStripLeftFade
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param resourceId (int)
   * @param opacity (float)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_updateTabStripLeftFade(
      long nativeTabStripSceneLayer, Object caller, int resourceId, float opacity,
      Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer.updateTabStripRightFade
   * @param nativeTabStripSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.TabStripSceneLayer)
   * @param resourceId (int)
   * @param opacity (float)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_TabStripSceneLayer_updateTabStripRightFade(
      long nativeTabStripSceneLayer, Object caller, int resourceId, float opacity,
      Object resourceManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ToolbarSwipeSceneLayer.init
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ToolbarSwipeSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_compositor_scene_1layer_ToolbarSwipeSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ToolbarSwipeSceneLayer.setTabContentManager
   * @param nativeToolbarSwipeSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ToolbarSwipeSceneLayer)
   * @param tabContentManager (org.chromium.chrome.browser.compositor.layouts.content.TabContentManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_ToolbarSwipeSceneLayer_setTabContentManager(
      long nativeToolbarSwipeSceneLayer, Object caller, Object tabContentManager);

  /**
   * org.chromium.chrome.browser.compositor.scene_layer.ToolbarSwipeSceneLayer.updateLayer
   * @param nativeToolbarSwipeSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.compositor.scene_layer.ToolbarSwipeSceneLayer)
   * @param id (int)
   * @param leftTab (boolean)
   * @param canUseLiveLayer (boolean)
   * @param defaultBackgroundColor (int)
   * @param x (float)
   * @param y (float)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_compositor_scene_1layer_ToolbarSwipeSceneLayer_updateLayer(
      long nativeToolbarSwipeSceneLayer, Object caller, int id, boolean leftTab,
      boolean canUseLiveLayer, int defaultBackgroundColor, float x, float y);

  /**
   * org.chromium.chrome.browser.content.ContentUtils.getBrowserUserAgent
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_content_ContentUtils_getBrowserUserAgent(
      );

  /**
   * org.chromium.chrome.browser.content.ContentUtils.setUserAgentOverride
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param overrideInNewTabs (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_content_ContentUtils_setUserAgentOverride(
      Object webContents, boolean overrideInNewTabs);

  /**
   * org.chromium.chrome.browser.contextmenu.ContextMenuHelper.onContextMenuClosed
   * @param nativeContextMenuHelper (long)
   * @param caller (org.chromium.chrome.browser.contextmenu.ContextMenuHelper)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextmenu_ContextMenuHelper_onContextMenuClosed(
      long nativeContextMenuHelper, Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.adjustSelection
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param startAdjust (int)
   * @param endAdjust (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_adjustSelection(
      long nativeContextualSearchContext, Object caller, int startAdjust, int endAdjust);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.destroy
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_destroy(
      long nativeContextualSearchContext, Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.detectLanguage
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_detectLanguage(
      long nativeContextualSearchContext, Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.init
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.prepareToResolve
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param isExactSearch (boolean)
   * @param relatedSearchesStamp (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_prepareToResolve(
      long nativeContextualSearchContext, Object caller, boolean isExactSearch,
      String relatedSearchesStamp);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.setResolveProperties
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param homeCountry (java.lang.String)
   * @param doSendBasePageUrl (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_setResolveProperties(
      long nativeContextualSearchContext, Object caller, String homeCountry,
      boolean doSendBasePageUrl);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.setSurroundingsAndSelection
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param surroundings (java.lang.String)
   * @param startOffset (int)
   * @param endOffset (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_setSurroundingsAndSelection(
      long nativeContextualSearchContext, Object caller, String surroundings, int startOffset,
      int endOffset);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchContext.setTranslationLanguages
   * @param nativeContextualSearchContext (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param detectedLanguage (java.lang.String)
   * @param targetLanguage (java.lang.String)
   * @param fluentLanguages (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchContext_setTranslationLanguages(
      long nativeContextualSearchContext, Object caller, String detectedLanguage,
      String targetLanguage, String fluentLanguages);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchManager.destroy
   * @param nativeContextualSearchManager (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchManager)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchManager_destroy(
      long nativeContextualSearchManager, Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchManager.gatherSurroundingText
   * @param nativeContextualSearchManager (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchManager)
   * @param contextualSearchContext (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param baseWebContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchManager_gatherSurroundingText(
      long nativeContextualSearchManager, Object caller, Object contextualSearchContext,
      Object baseWebContents);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchManager.init
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchManager)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_contextualsearch_ContextualSearchManager_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchManager.startSearchTermResolutionRequest
   * @param nativeContextualSearchManager (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchManager)
   * @param contextualSearchContext (org.chromium.chrome.browser.contextualsearch.ContextualSearchContext)
   * @param baseWebContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchManager_startSearchTermResolutionRequest(
      long nativeContextualSearchManager, Object caller, Object contextualSearchContext,
      Object baseWebContents);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchTabHelper.destroy
   * @param nativeContextualSearchTabHelper (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchTabHelper)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_destroy(
      long nativeContextualSearchTabHelper, Object caller);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchTabHelper.init
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchTabHelper)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_init(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.contextualsearch.ContextualSearchTabHelper.installUnhandledTapNotifierIfNeeded
   * @param nativeContextualSearchTabHelper (long)
   * @param caller (org.chromium.chrome.browser.contextualsearch.ContextualSearchTabHelper)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param pxToDpScaleFactor (float)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_contextualsearch_ContextualSearchTabHelper_installUnhandledTapNotifierIfNeeded(
      long nativeContextualSearchTabHelper, Object caller, Object webContents,
      float pxToDpScaleFactor);

  /**
   * org.chromium.chrome.browser.customtabs.CustomTabsConnection.createAndStartDetachedResourceRequest
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param session (androidx.browser.customtabs.CustomTabsSessionToken)
   * @param packageName (java.lang.String)
   * @param url (java.lang.String)
   * @param origin (java.lang.String)
   * @param referrerPolicy (int)
   * @param motivation (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_customtabs_CustomTabsConnection_createAndStartDetachedResourceRequest(
      Object profile, Object session, String packageName, String url, String origin,
      int referrerPolicy, int motivation);

  /**
   * org.chromium.chrome.browser.customtabs.CustomTabsConnection.setClientDataHeader
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param header (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_customtabs_CustomTabsConnection_setClientDataHeader(
      Object webContents, String header);

  /**
   * org.chromium.chrome.browser.customtabs.CustomTabsOpenTimeRecorder.recordCustomTabSession
   * @param time (long)
   * @param packageName (java.lang.String)
   * @param sessionDuration (long)
   * @param wasAutomaticallyClosed (boolean)
   * @param isPartialCct (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_customtabs_CustomTabsOpenTimeRecorder_recordCustomTabSession(
      long time, String packageName, long sessionDuration, boolean wasAutomaticallyClosed,
      boolean isPartialCct);

  /**
   * org.chromium.chrome.browser.customtabs.features.TabInteractionRecorder.createForTab
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (org.chromium.chrome.browser.customtabs.features.TabInteractionRecorder)
   */
  public static final native Object org_chromium_chrome_browser_customtabs_features_TabInteractionRecorder_createForTab(
      Object tab);

  /**
   * org.chromium.chrome.browser.customtabs.features.TabInteractionRecorder.getFromTab
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (org.chromium.chrome.browser.customtabs.features.TabInteractionRecorder)
   */
  public static final native Object org_chromium_chrome_browser_customtabs_features_TabInteractionRecorder_getFromTab(
      Object tab);

  /**
   * org.chromium.chrome.browser.customtabs.features.TabInteractionRecorder.hadInteraction
   * @param nativeTabInteractionRecorderAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_customtabs_features_TabInteractionRecorder_hadInteraction(
      long nativeTabInteractionRecorderAndroid);

  /**
   * org.chromium.chrome.browser.device_dialog.UsbChooserDialog.loadUsbHelpPage
   * @param nativeUsbChooserDialogAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_device_1dialog_UsbChooserDialog_loadUsbHelpPage(
      long nativeUsbChooserDialogAndroid);

  /**
   * org.chromium.chrome.browser.device_dialog.UsbChooserDialog.onDialogCancelled
   * @param nativeUsbChooserDialogAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_device_1dialog_UsbChooserDialog_onDialogCancelled(
      long nativeUsbChooserDialogAndroid);

  /**
   * org.chromium.chrome.browser.device_dialog.UsbChooserDialog.onItemSelected
   * @param nativeUsbChooserDialogAndroid (long)
   * @param deviceId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_device_1dialog_UsbChooserDialog_onItemSelected(
      long nativeUsbChooserDialogAndroid, String deviceId);

  /**
   * org.chromium.chrome.browser.document.DocumentWebContentsDelegate.attachContents
   * @param nativeDocumentWebContentsDelegate (long)
   * @param caller (org.chromium.chrome.browser.document.DocumentWebContentsDelegate)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_document_DocumentWebContentsDelegate_attachContents(
      long nativeDocumentWebContentsDelegate, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.document.DocumentWebContentsDelegate.initialize
   * @param caller (org.chromium.chrome.browser.document.DocumentWebContentsDelegate)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_document_DocumentWebContentsDelegate_initialize(
      Object caller);

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerServiceFactory.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.dom_distiller.core.DomDistillerService)
   */
  public static final native Object org_chromium_chrome_browser_dom_1distiller_DomDistillerServiceFactory_getForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerTabUtils.distillAndView
   * @param sourceWebContents (org.chromium.content_public.browser.WebContents)
   * @param destinationWebContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_dom_1distiller_DomDistillerTabUtils_distillAndView(
      Object sourceWebContents, Object destinationWebContents);

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerTabUtils.distillCurrentPage
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_dom_1distiller_DomDistillerTabUtils_distillCurrentPage(
      Object webContents);

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerTabUtils.distillCurrentPageAndView
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_dom_1distiller_DomDistillerTabUtils_distillCurrentPageAndView(
      Object webContents);

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerTabUtils.getDistillerHeuristics
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_dom_1distiller_DomDistillerTabUtils_getDistillerHeuristics(
      );

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerTabUtils.getFormattedUrlFromOriginalDistillerUrl
   * @param url (org.chromium.url.GURL)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_dom_1distiller_DomDistillerTabUtils_getFormattedUrlFromOriginalDistillerUrl(
      Object url);

  /**
   * org.chromium.chrome.browser.dom_distiller.DomDistillerTabUtils.setInterceptNavigationDelegate
   * @param delegate (org.chromium.components.navigation_interception.InterceptNavigationDelegate)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_dom_1distiller_DomDistillerTabUtils_setInterceptNavigationDelegate(
      Object delegate, Object webContents);

  /**
   * org.chromium.chrome.browser.download.DownloadController.onAcquirePermissionResult
   * @param callbackId (long)
   * @param granted (boolean)
   * @param permissionToUpdate (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadController_onAcquirePermissionResult(
      long callbackId, boolean granted, String permissionToUpdate);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.cancelDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_cancelDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.checkForExternallyRemovedDownloads
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_checkForExternallyRemovedDownloads(
      long nativeDownloadManagerService, Object caller, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.createInterruptedDownloadForTest
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param url (java.lang.String)
   * @param guid (java.lang.String)
   * @param targetPath (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_createInterruptedDownloadForTest(
      long nativeDownloadManagerService, Object caller, String url, String guid, String targetPath);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.getAllDownloads
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_getAllDownloads(
      long nativeDownloadManagerService, Object caller, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.getAutoResumptionLimit
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_download_DownloadManagerService_getAutoResumptionLimit(
      );

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.init
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param isProfileAdded (boolean)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_download_DownloadManagerService_init(
      Object caller, boolean isProfileAdded);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.isSupportedMimeType
   * @param mimeType (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_download_DownloadManagerService_isSupportedMimeType(
      String mimeType);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.onProfileAdded
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_onProfileAdded(
      long nativeDownloadManagerService, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.openDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @param source (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_openDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey,
      int source);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.pauseDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_pauseDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.removeDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_removeDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.renameDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param targetName (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_renameDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, String targetName,
      Object callback, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.resumeDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @param hasUserGesture (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_resumeDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey,
      boolean hasUserGesture);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.retryDownload
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @param hasUserGesture (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_retryDownload(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey,
      boolean hasUserGesture);

  /**
   * org.chromium.chrome.browser.download.DownloadManagerService.updateLastAccessTime
   * @param nativeDownloadManagerService (long)
   * @param caller (org.chromium.chrome.browser.download.DownloadManagerService)
   * @param downloadGuid (java.lang.String)
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadManagerService_updateLastAccessTime(
      long nativeDownloadManagerService, Object caller, String downloadGuid, Object profileKey);

  /**
   * org.chromium.chrome.browser.download.DownloadMessageBridge.onConfirmed
   * @param nativeDownloadMessageBridge (long)
   * @param callbackId (long)
   * @param accepted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DownloadMessageBridge_onConfirmed(
      long nativeDownloadMessageBridge, long callbackId, boolean accepted);

  /**
   * org.chromium.chrome.browser.download.DownloadUtils.getResumeMode
   * @param url (java.lang.String)
   * @param failState (int)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_download_DownloadUtils_getResumeMode(
      String url, int failState);

  /**
   * org.chromium.chrome.browser.download.DuplicateDownloadDialogBridge.onConfirmed
   * @param nativeDuplicateDownloadDialogBridge (long)
   * @param callbackId (long)
   * @param accepted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_DuplicateDownloadDialogBridge_onConfirmed(
      long nativeDuplicateDownloadDialogBridge, long callbackId, boolean accepted);

  /**
   * org.chromium.chrome.browser.download.service.DownloadBackgroundTask.startBackgroundTask
   * @param caller (org.chromium.chrome.browser.download.service.DownloadBackgroundTask)
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @param taskType (int)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_download_service_DownloadBackgroundTask_startBackgroundTask(
      Object caller, Object key, int taskType, Object callback);

  /**
   * org.chromium.chrome.browser.download.service.DownloadBackgroundTask.stopBackgroundTask
   * @param caller (org.chromium.chrome.browser.download.service.DownloadBackgroundTask)
   * @param key (org.chromium.chrome.browser.profiles.ProfileKey)
   * @param taskType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_download_service_DownloadBackgroundTask_stopBackgroundTask(
      Object caller, Object key, int taskType);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.blockSite
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_blockSite(
      Object profile, String url);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.getCatalog
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param source (int)
   * @param result (java.util.List<org.chromium.chrome.browser.explore_sites.ExploreSitesCategory>)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.explore_sites.ExploreSitesCategory>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_getCatalog(
      Object profile, int source, Object result, Object callback);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.getDenseVariation
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_getDenseVariation(
      );

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.getIcon
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param siteID (int)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_getIcon(
      Object profile, int siteID, Object callback);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.getSummaryImage
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param pixelSize (int)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_getSummaryImage(
      Object profile, int pixelSize, Object callback);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.getVariation
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_getVariation(
      );

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.initializeCatalog
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param source (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_initializeCatalog(
      Object profile, int source);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.recordClick
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_recordClick(
      Object profile, String url, int type);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridge.updateCatalogFromNetwork
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param isImmediateFetch (boolean)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridge_updateCatalogFromNetwork(
      Object profile, boolean isImmediateFetch, Object callback);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridgeExperimental.getCatalogUrl
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_explore_1sites_ExploreSitesBridgeExperimental_getCatalogUrl(
      );

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridgeExperimental.getIcon
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param iconUrl (java.lang.String)
   * @param callback (org.chromium.base.Callback<android.graphics.Bitmap>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridgeExperimental_getIcon(
      Object profile, String iconUrl, Object callback);

  /**
   * org.chromium.chrome.browser.explore_sites.ExploreSitesBridgeExperimental.getNtpCategories
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param result (java.util.List<org.chromium.chrome.browser.explore_sites.ExploreSitesCategoryTile>)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.explore_sites.ExploreSitesCategoryTile>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_explore_1sites_ExploreSitesBridgeExperimental_getNtpCategories(
      Object profile, Object result, Object callback);

  /**
   * org.chromium.chrome.browser.feature_guide.notifications.FeatureNotificationGuideServiceFactory.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.feature_guide.notifications.FeatureNotificationGuideService)
   */
  public static final native Object org_chromium_chrome_browser_feature_1guide_notifications_FeatureNotificationGuideServiceFactory_getForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.feedback.ConnectivityChecker.checkConnectivity
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @param timeoutMs (long)
   * @param callback (org.chromium.chrome.browser.feedback.ConnectivityChecker.ConnectivityCheckerCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feedback_ConnectivityChecker_checkConnectivity(
      Object profile, String url, long timeoutMs, Object callback);

  /**
   * org.chromium.chrome.browser.feedback.ConnectivityChecker.isUrlValid
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_feedback_ConnectivityChecker_isUrlValid(
      String url);

  /**
   * org.chromium.chrome.browser.feedback.ScreenshotTask.grabWindowSnapshotAsync
   * @param callback (org.chromium.chrome.browser.feedback.ScreenshotTask)
   * @param window (org.chromium.ui.base.WindowAndroid)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_feedback_ScreenshotTask_grabWindowSnapshotAsync(
      Object callback, Object window, int width, int height);

  /**
   * org.chromium.chrome.browser.firstrun.FirstRunUtils.getCctTosDialogEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_firstrun_FirstRunUtils_getCctTosDialogEnabled(
      );

  /**
   * org.chromium.chrome.browser.firstrun.FirstRunUtils.getFirstRunEulaAccepted
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_firstrun_FirstRunUtils_getFirstRunEulaAccepted(
      );

  /**
   * org.chromium.chrome.browser.firstrun.FirstRunUtils.setEulaAccepted
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_firstrun_FirstRunUtils_setEulaAccepted(
      );

  /**
   * org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer.init
   * @param caller (org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer)
   * @param window (org.chromium.ui.base.WindowAndroid)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_gesturenav_OverscrollSceneLayer_init(
      Object caller, Object window);

  /**
   * org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer.onReset
   * @param nativeOverscrollSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_gesturenav_OverscrollSceneLayer_onReset(
      long nativeOverscrollSceneLayer, Object caller);

  /**
   * org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer.prepare
   * @param nativeOverscrollSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer)
   * @param startX (float)
   * @param startY (float)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_gesturenav_OverscrollSceneLayer_prepare(
      long nativeOverscrollSceneLayer, Object caller, float startX, float startY, int width,
      int height);

  /**
   * org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer.setContentTree
   * @param nativeOverscrollSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer)
   * @param contentTree (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_gesturenav_OverscrollSceneLayer_setContentTree(
      long nativeOverscrollSceneLayer, Object caller, Object contentTree);

  /**
   * org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer.update
   * @param nativeOverscrollSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.gesturenav.OverscrollSceneLayer)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @param accumulatedScroll (float)
   * @param delta (float)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_gesturenav_OverscrollSceneLayer_update(
      long nativeOverscrollSceneLayer, Object caller, Object resourceManager,
      float accumulatedScroll, float delta);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.destroy
   * @param nativeBrowsingHistoryBridge (long)
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_BrowsingHistoryBridge_destroy(
      long nativeBrowsingHistoryBridge, Object caller);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.getLastVisitToHostBeforeRecentNavigations
   * @param nativeBrowsingHistoryBridge (long)
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @param hostName (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Long>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_BrowsingHistoryBridge_getLastVisitToHostBeforeRecentNavigations(
      long nativeBrowsingHistoryBridge, Object caller, String hostName, Object callback);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.init
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_history_BrowsingHistoryBridge_init(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.markItemForRemoval
   * @param nativeBrowsingHistoryBridge (long)
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @param url (org.chromium.url.GURL)
   * @param nativeTimestamps (long[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_BrowsingHistoryBridge_markItemForRemoval(
      long nativeBrowsingHistoryBridge, Object caller, Object url, long[] nativeTimestamps);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.queryHistory
   * @param nativeBrowsingHistoryBridge (long)
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @param historyItems (java.util.List<org.chromium.chrome.browser.history.HistoryItem>)
   * @param query (java.lang.String)
   * @param hostOnly (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_BrowsingHistoryBridge_queryHistory(
      long nativeBrowsingHistoryBridge, Object caller, Object historyItems, String query,
      boolean hostOnly);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.queryHistoryContinuation
   * @param nativeBrowsingHistoryBridge (long)
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @param historyItems (java.util.List<org.chromium.chrome.browser.history.HistoryItem>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_BrowsingHistoryBridge_queryHistoryContinuation(
      long nativeBrowsingHistoryBridge, Object caller, Object historyItems);

  /**
   * org.chromium.chrome.browser.history.BrowsingHistoryBridge.removeItems
   * @param nativeBrowsingHistoryBridge (long)
   * @param caller (org.chromium.chrome.browser.history.BrowsingHistoryBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_history_BrowsingHistoryBridge_removeItems(
      long nativeBrowsingHistoryBridge, Object caller);

  /**
   * org.chromium.chrome.browser.history.HistoryDeletionBridge.init
   * @param self (org.chromium.chrome.browser.history.HistoryDeletionBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_history_HistoryDeletionBridge_init(
      Object self);

  /**
   * org.chromium.chrome.browser.history.HistoryDeletionInfo.getDeletedURLs
   * @param historyDeletionInfoPtr (long)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_history_HistoryDeletionInfo_getDeletedURLs(
      long historyDeletionInfoPtr);

  /**
   * org.chromium.chrome.browser.history.HistoryDeletionInfo.isTimeRangeForAllTime
   * @param historyDeletionInfoPtr (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_history_HistoryDeletionInfo_isTimeRangeForAllTime(
      long historyDeletionInfoPtr);

  /**
   * org.chromium.chrome.browser.history.HistoryDeletionInfo.isTimeRangeValid
   * @param historyDeletionInfoPtr (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_history_HistoryDeletionInfo_isTimeRangeValid(
      long historyDeletionInfoPtr);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.addHistoricVisitsToUsageReportsBuffer
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_addHistoricVisitsToUsageReportsBuffer(
      long nativeHistoryReportJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.clearUsageReports
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_clearUsageReports(
      long nativeHistoryReportJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.dump
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_dump(
      long nativeHistoryReportJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.getUsageReportsBatch
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @param batchSize (int)
   * @return (org.chromium.chrome.browser.historyreport.UsageReport[])
   */
  public static final native Object[] org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_getUsageReportsBatch(
      long nativeHistoryReportJniBridge, Object caller, int batchSize);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.init
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.query
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @param lastSeqNo (long)
   * @param limit (int)
   * @return (org.chromium.chrome.browser.historyreport.DeltaFileEntry[])
   */
  public static final native Object[] org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_query(
      long nativeHistoryReportJniBridge, Object caller, long lastSeqNo, int limit);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.removeUsageReports
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @param reportIds (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_removeUsageReports(
      long nativeHistoryReportJniBridge, Object caller, String[] reportIds);

  /**
   * org.chromium.chrome.browser.historyreport.HistoryReportJniBridge.trimDeltaFile
   * @param nativeHistoryReportJniBridge (long)
   * @param caller (org.chromium.chrome.browser.historyreport.HistoryReportJniBridge)
   * @param seqNoLowerBound (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_historyreport_HistoryReportJniBridge_trimDeltaFile(
      long nativeHistoryReportJniBridge, Object caller, long seqNoLowerBound);

  /**
   * org.chromium.chrome.browser.infobar.AutofillOfferNotificationInfoBar.onOfferDeepLinkClicked
   * @param nativeAutofillOfferNotificationInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.AutofillOfferNotificationInfoBar)
   * @param url (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_AutofillOfferNotificationInfoBar_onOfferDeepLinkClicked(
      long nativeAutofillOfferNotificationInfoBar, Object caller, Object url);

  /**
   * org.chromium.chrome.browser.infobar.AutofillSaveCardInfoBar.onLegalMessageLinkClicked
   * @param nativeAutofillSaveCardInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.AutofillSaveCardInfoBar)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_AutofillSaveCardInfoBar_onLegalMessageLinkClicked(
      long nativeAutofillSaveCardInfoBar, Object caller, String url);

  /**
   * org.chromium.chrome.browser.infobar.AutofillVirtualCardEnrollmentInfoBar.onInfobarLinkClicked
   * @param nativeAutofillVirtualCardEnrollmentInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.AutofillVirtualCardEnrollmentInfoBar)
   * @param url (java.lang.String)
   * @param virtualCardEnrollmentLinkType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_AutofillVirtualCardEnrollmentInfoBar_onInfobarLinkClicked(
      long nativeAutofillVirtualCardEnrollmentInfoBar, Object caller, String url,
      int virtualCardEnrollmentLinkType);

  /**
   * org.chromium.chrome.browser.infobar.InfoBarContainer.destroy
   * @param nativeInfoBarContainerAndroid (long)
   * @param caller (org.chromium.chrome.browser.infobar.InfoBarContainer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_InfoBarContainer_destroy(
      long nativeInfoBarContainerAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.infobar.InfoBarContainer.init
   * @param caller (org.chromium.chrome.browser.infobar.InfoBarContainer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_infobar_InfoBarContainer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.infobar.InfoBarContainer.setWebContents
   * @param nativeInfoBarContainerAndroid (long)
   * @param caller (org.chromium.chrome.browser.infobar.InfoBarContainer)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_InfoBarContainer_setWebContents(
      long nativeInfoBarContainerAndroid, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.infobar.InstantAppsInfoBarDelegate.launch
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param data (org.chromium.chrome.browser.instantapps.InstantAppsBannerData)
   * @param url (java.lang.String)
   * @param instantAppIsDefault (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_InstantAppsInfoBarDelegate_launch(
      Object webContents, Object data, String url, boolean instantAppIsDefault);

  /**
   * org.chromium.chrome.browser.infobar.ReaderModeInfoBar.create
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_ReaderModeInfoBar_create(
      Object tab);

  /**
   * org.chromium.chrome.browser.infobar.ReaderModeInfoBar.getTab
   * @param nativeReaderModeInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.ReaderModeInfoBar)
   * @return (org.chromium.chrome.browser.tab.Tab)
   */
  public static final native Object org_chromium_chrome_browser_infobar_ReaderModeInfoBar_getTab(
      long nativeReaderModeInfoBar, Object caller);

  /**
   * org.chromium.chrome.browser.infobar.SurveyInfoBar.create
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param displayLogoResId (int)
   * @param surveyInfoBarDelegate (org.chromium.chrome.browser.infobar.SurveyInfoBarDelegate)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_SurveyInfoBar_create(
      Object webContents, int displayLogoResId, Object surveyInfoBarDelegate);

  /**
   * org.chromium.chrome.browser.infobar.SurveyInfoBar.getTab
   * @param nativeSurveyInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.SurveyInfoBar)
   * @return (org.chromium.chrome.browser.tab.Tab)
   */
  public static final native Object org_chromium_chrome_browser_infobar_SurveyInfoBar_getTab(
      long nativeSurveyInfoBar, Object caller);

  /**
   * org.chromium.chrome.browser.infobar.SyncErrorInfoBar.launch
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_SyncErrorInfoBar_launch(
      Object webContents);

  /**
   * org.chromium.chrome.browser.infobar.TranslateCompactInfoBar.applyBoolTranslateOption
   * @param nativeTranslateCompactInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.TranslateCompactInfoBar)
   * @param option (int)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_TranslateCompactInfoBar_applyBoolTranslateOption(
      long nativeTranslateCompactInfoBar, Object caller, int option, boolean value);

  /**
   * org.chromium.chrome.browser.infobar.TranslateCompactInfoBar.applyStringTranslateOption
   * @param nativeTranslateCompactInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.TranslateCompactInfoBar)
   * @param option (int)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_infobar_TranslateCompactInfoBar_applyStringTranslateOption(
      long nativeTranslateCompactInfoBar, Object caller, int option, String value);

  /**
   * org.chromium.chrome.browser.infobar.TranslateCompactInfoBar.getContentLanguagesCodes
   * @param nativeTranslateCompactInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.TranslateCompactInfoBar)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_infobar_TranslateCompactInfoBar_getContentLanguagesCodes(
      long nativeTranslateCompactInfoBar, Object caller);

  /**
   * org.chromium.chrome.browser.infobar.TranslateCompactInfoBar.isIncognito
   * @param nativeTranslateCompactInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.TranslateCompactInfoBar)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_infobar_TranslateCompactInfoBar_isIncognito(
      long nativeTranslateCompactInfoBar, Object caller);

  /**
   * org.chromium.chrome.browser.infobar.TranslateCompactInfoBar.shouldAutoNeverTranslate
   * @param nativeTranslateCompactInfoBar (long)
   * @param caller (org.chromium.chrome.browser.infobar.TranslateCompactInfoBar)
   * @param menuExpanded (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_infobar_TranslateCompactInfoBar_shouldAutoNeverTranslate(
      long nativeTranslateCompactInfoBar, Object caller, boolean menuExpanded);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsMessageDelegate.initializeNativeDelegate
   * @param delegate (org.chromium.chrome.browser.instantapps.InstantAppsMessageDelegate)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_instantapps_InstantAppsMessageDelegate_initializeNativeDelegate(
      Object delegate, Object webContents, String url);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsMessageDelegate.onMessageDismissed
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (java.lang.String)
   * @param instantAppIsDefault (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_instantapps_InstantAppsMessageDelegate_onMessageDismissed(
      Object webContents, String url, boolean instantAppIsDefault);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsMessageDelegate.onMessageShown
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (java.lang.String)
   * @param instantAppIsDefault (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_instantapps_InstantAppsMessageDelegate_onMessageShown(
      Object webContents, String url, boolean instantAppIsDefault);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsMessageDelegate.onPrimaryAction
   * @param instantAppIsDefault (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_instantapps_InstantAppsMessageDelegate_onPrimaryAction(
      boolean instantAppIsDefault);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsSettings.getInstantAppDefault
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_instantapps_InstantAppsSettings_getInstantAppDefault(
      Object webContents, Object url);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsSettings.setInstantAppDefault
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_instantapps_InstantAppsSettings_setInstantAppDefault(
      Object webContents, String url);

  /**
   * org.chromium.chrome.browser.instantapps.InstantAppsSettings.shouldShowBanner
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_instantapps_InstantAppsSettings_shouldShowBanner(
      Object webContents, String url);

  /**
   * org.chromium.chrome.browser.javascript.WebContextFetcher.fetchContextWithJavascript
   * @param script (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.String>)
   * @param renderFrameHost (org.chromium.content_public.browser.RenderFrameHost)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_javascript_WebContextFetcher_fetchContextWithJavascript(
      String script, Object callback, Object renderFrameHost);

  /**
   * org.chromium.chrome.browser.lens.LensPolicyUtils.getLensCameraAssistedSearchEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_lens_LensPolicyUtils_getLensCameraAssistedSearchEnabled(
      );

  /**
   * org.chromium.chrome.browser.login.ChromeHttpAuthHandler.cancelAuth
   * @param nativeChromeHttpAuthHandler (long)
   * @param caller (org.chromium.chrome.browser.login.ChromeHttpAuthHandler)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_login_ChromeHttpAuthHandler_cancelAuth(
      long nativeChromeHttpAuthHandler, Object caller);

  /**
   * org.chromium.chrome.browser.login.ChromeHttpAuthHandler.getMessageBody
   * @param nativeChromeHttpAuthHandler (long)
   * @param caller (org.chromium.chrome.browser.login.ChromeHttpAuthHandler)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_login_ChromeHttpAuthHandler_getMessageBody(
      long nativeChromeHttpAuthHandler, Object caller);

  /**
   * org.chromium.chrome.browser.login.ChromeHttpAuthHandler.setAuth
   * @param nativeChromeHttpAuthHandler (long)
   * @param caller (org.chromium.chrome.browser.login.ChromeHttpAuthHandler)
   * @param username (java.lang.String)
   * @param password (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_login_ChromeHttpAuthHandler_setAuth(
      long nativeChromeHttpAuthHandler, Object caller, String username, String password);

  /**
   * org.chromium.chrome.browser.media.MediaCaptureDevicesDispatcherAndroid.isCapturingAudio
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_media_MediaCaptureDevicesDispatcherAndroid_isCapturingAudio(
      Object webContents);

  /**
   * org.chromium.chrome.browser.media.MediaCaptureDevicesDispatcherAndroid.isCapturingScreen
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_media_MediaCaptureDevicesDispatcherAndroid_isCapturingScreen(
      Object webContents);

  /**
   * org.chromium.chrome.browser.media.MediaCaptureDevicesDispatcherAndroid.isCapturingVideo
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_media_MediaCaptureDevicesDispatcherAndroid_isCapturingVideo(
      Object webContents);

  /**
   * org.chromium.chrome.browser.media.MediaCaptureDevicesDispatcherAndroid.notifyStopped
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_MediaCaptureDevicesDispatcherAndroid_notifyStopped(
      Object webContents);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.compositorViewCreated
   * @param nativeOverlayWindowAndroid (long)
   * @param compositorView (org.chromium.components.thinwebview.CompositorView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_compositorViewCreated(
      long nativeOverlayWindowAndroid, Object compositorView);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.destroy
   * @param nativeOverlayWindowAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_destroy(
      long nativeOverlayWindowAndroid);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.hangUp
   * @param nativeOverlayWindowAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_hangUp(
      long nativeOverlayWindowAndroid);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.nextTrack
   * @param nativeOverlayWindowAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_nextTrack(
      long nativeOverlayWindowAndroid);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.onActivityStart
   * @param nativeOverlayWindowAndroid (long)
   * @param self (org.chromium.chrome.browser.media.PictureInPictureActivity)
   * @param window (org.chromium.ui.base.WindowAndroid)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_onActivityStart(
      long nativeOverlayWindowAndroid, Object self, Object window);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.onBackToTab
   * @param nativeOverlayWindowAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_onBackToTab(
      long nativeOverlayWindowAndroid);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.onViewSizeChanged
   * @param nativeOverlayWindowAndroid (long)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_onViewSizeChanged(
      long nativeOverlayWindowAndroid, int width, int height);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.previousTrack
   * @param nativeOverlayWindowAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_previousTrack(
      long nativeOverlayWindowAndroid);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.toggleCamera
   * @param nativeOverlayWindowAndroid (long)
   * @param toggleOn (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_toggleCamera(
      long nativeOverlayWindowAndroid, boolean toggleOn);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.toggleMicrophone
   * @param nativeOverlayWindowAndroid (long)
   * @param toggleOn (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_toggleMicrophone(
      long nativeOverlayWindowAndroid, boolean toggleOn);

  /**
   * org.chromium.chrome.browser.media.PictureInPictureActivity.togglePlayPause
   * @param nativeOverlayWindowAndroid (long)
   * @param toggleOn (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_media_PictureInPictureActivity_togglePlayPause(
      long nativeOverlayWindowAndroid, boolean toggleOn);

  /**
   * org.chromium.chrome.browser.metrics.AndroidSessionDurationsServiceState.getAndroidSessionDurationsServiceState
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.metrics.AndroidSessionDurationsServiceState)
   */
  public static final native Object org_chromium_chrome_browser_metrics_AndroidSessionDurationsServiceState_getAndroidSessionDurationsServiceState(
      Object profile);

  /**
   * org.chromium.chrome.browser.metrics.AndroidSessionDurationsServiceState.restoreAndroidSessionDurationsServiceState
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param durationService (org.chromium.chrome.browser.metrics.AndroidSessionDurationsServiceState)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_AndroidSessionDurationsServiceState_restoreAndroidSessionDurationsServiceState(
      Object profile, Object durationService);

  /**
   * org.chromium.chrome.browser.metrics.LaunchMetrics.recordHomePageLaunchMetrics
   * @param showHomeButton (boolean)
   * @param homepageIsNtp (boolean)
   * @param homepageUrl (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_LaunchMetrics_recordHomePageLaunchMetrics(
      boolean showHomeButton, boolean homepageIsNtp, String homepageUrl);

  /**
   * org.chromium.chrome.browser.metrics.LaunchMetrics.recordLaunch
   * @param isShortcut (boolean)
   * @param url (java.lang.String)
   * @param source (int)
   * @param displayMode (int)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_LaunchMetrics_recordLaunch(
      boolean isShortcut, String url, int source, int displayMode, Object webContents);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.changeMetricsReportingConsent
   * @param consent (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_changeMetricsReportingConsent(
      boolean consent);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.init
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_metrics_UmaSessionStats_init();

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.initMetricsAndCrashReportingForTesting
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_initMetricsAndCrashReportingForTesting(
      );

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.recordPageLoaded
   * @param isDesktopUserAgent (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_recordPageLoaded(
      boolean isDesktopUserAgent);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.recordPageLoadedWithKeyboard
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_recordPageLoadedWithKeyboard(
      );

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.recordTabCountPerLoad
   * @param numTabsOpen (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_recordTabCountPerLoad(
      int numTabsOpen);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.registerExternalExperiment
   * @param studyName (java.lang.String)
   * @param experimentIds (int[])
   * @param overrideExistingIds (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_registerExternalExperiment(
      String studyName, int[] experimentIds, boolean overrideExistingIds);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.registerSyntheticFieldTrial
   * @param trialName (java.lang.String)
   * @param groupName (java.lang.String)
   * @param annotationMode (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_registerSyntheticFieldTrial(
      String trialName, String groupName, int annotationMode);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.umaEndSession
   * @param nativeUmaSessionStats (long)
   * @param caller (org.chromium.chrome.browser.metrics.UmaSessionStats)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_umaEndSession(
      long nativeUmaSessionStats, Object caller);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.umaResumeSession
   * @param nativeUmaSessionStats (long)
   * @param caller (org.chromium.chrome.browser.metrics.UmaSessionStats)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_umaResumeSession(
      long nativeUmaSessionStats, Object caller);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.unsetMetricsAndCrashReportingForTesting
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_unsetMetricsAndCrashReportingForTesting(
      );

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.updateMetricsAndCrashReportingForTesting
   * @param consent (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_updateMetricsAndCrashReportingForTesting(
      boolean consent);

  /**
   * org.chromium.chrome.browser.metrics.UmaSessionStats.updateMetricsServiceState
   * @param mayUpload (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_UmaSessionStats_updateMetricsServiceState(
      boolean mayUpload);

  /**
   * org.chromium.chrome.browser.metrics.VariationsSession.getLatestCountry
   * @param caller (org.chromium.chrome.browser.metrics.VariationsSession)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_metrics_VariationsSession_getLatestCountry(
      Object caller);

  /**
   * org.chromium.chrome.browser.metrics.VariationsSession.startVariationsSession
   * @param caller (org.chromium.chrome.browser.metrics.VariationsSession)
   * @param restrictMode (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_metrics_VariationsSession_startVariationsSession(
      Object caller, String restrictMode);

  /**
   * org.chromium.chrome.browser.navigation_predictor.NavigationPredictorBridge.onActivityWarmResumed
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_navigation_1predictor_NavigationPredictorBridge_onActivityWarmResumed(
      );

  /**
   * org.chromium.chrome.browser.navigation_predictor.NavigationPredictorBridge.onColdStart
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_navigation_1predictor_NavigationPredictorBridge_onColdStart(
      );

  /**
   * org.chromium.chrome.browser.navigation_predictor.NavigationPredictorBridge.onPause
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_navigation_1predictor_NavigationPredictorBridge_onPause(
      );

  /**
   * org.chromium.chrome.browser.net.nqe.NetworkQualityProvider.init
   * @param caller (org.chromium.chrome.browser.net.nqe.NetworkQualityProvider)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_net_nqe_NetworkQualityProvider_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.notifications.NotificationPlatformBridge.initializeNotificationPlatformBridge
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_NotificationPlatformBridge_initializeNotificationPlatformBridge(
      );

  /**
   * org.chromium.chrome.browser.notifications.NotificationPlatformBridge.onNotificationClicked
   * @param nativeNotificationPlatformBridgeAndroid (long)
   * @param caller (org.chromium.chrome.browser.notifications.NotificationPlatformBridge)
   * @param notificationId (java.lang.String)
   * @param notificationType (int)
   * @param origin (java.lang.String)
   * @param scopeUrl (java.lang.String)
   * @param profileId (java.lang.String)
   * @param incognito (boolean)
   * @param webApkPackage (java.lang.String)
   * @param actionIndex (int)
   * @param reply (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_NotificationPlatformBridge_onNotificationClicked(
      long nativeNotificationPlatformBridgeAndroid, Object caller, String notificationId,
      int notificationType, String origin, String scopeUrl, String profileId, boolean incognito,
      String webApkPackage, int actionIndex, String reply);

  /**
   * org.chromium.chrome.browser.notifications.NotificationPlatformBridge.onNotificationClosed
   * @param nativeNotificationPlatformBridgeAndroid (long)
   * @param caller (org.chromium.chrome.browser.notifications.NotificationPlatformBridge)
   * @param notificationId (java.lang.String)
   * @param notificationType (int)
   * @param origin (java.lang.String)
   * @param profileId (java.lang.String)
   * @param incognito (boolean)
   * @param byUser (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_NotificationPlatformBridge_onNotificationClosed(
      long nativeNotificationPlatformBridgeAndroid, Object caller, String notificationId,
      int notificationType, String origin, String profileId, boolean incognito, boolean byUser);

  /**
   * org.chromium.chrome.browser.notifications.NotificationPlatformBridge.storeCachedWebApkPackageForNotificationId
   * @param nativeNotificationPlatformBridgeAndroid (long)
   * @param caller (org.chromium.chrome.browser.notifications.NotificationPlatformBridge)
   * @param notificationId (java.lang.String)
   * @param webApkPackage (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_NotificationPlatformBridge_storeCachedWebApkPackageForNotificationId(
      long nativeNotificationPlatformBridgeAndroid, Object caller, String notificationId,
      String webApkPackage);

  /**
   * org.chromium.chrome.browser.notifications.NotificationTriggerScheduler.triggerNotifications
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_NotificationTriggerScheduler_triggerNotifications(
      );

  /**
   * org.chromium.chrome.browser.notifications.scheduler.DisplayAgent.onUserAction
   * @param clientType (int)
   * @param actionType (int)
   * @param guid (java.lang.String)
   * @param type (int)
   * @param buttonId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_scheduler_DisplayAgent_onUserAction(
      int clientType, int actionType, String guid, int type, String buttonId);

  /**
   * org.chromium.chrome.browser.notifications.scheduler.NotificationSchedulerTask.onStartTask
   * @param caller (org.chromium.chrome.browser.notifications.scheduler.NotificationSchedulerTask)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_notifications_scheduler_NotificationSchedulerTask_onStartTask(
      Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.notifications.scheduler.NotificationSchedulerTask.onStopTask
   * @param caller (org.chromium.chrome.browser.notifications.scheduler.NotificationSchedulerTask)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_notifications_scheduler_NotificationSchedulerTask_onStopTask(
      Object caller);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.deleteForeignSession
   * @param nativeForeignSessionHelper (long)
   * @param sessionTag (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_ForeignSessionHelper_deleteForeignSession(
      long nativeForeignSessionHelper, String sessionTag);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.destroy
   * @param nativeForeignSessionHelper (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_ForeignSessionHelper_destroy(
      long nativeForeignSessionHelper);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.getForeignSessions
   * @param nativeForeignSessionHelper (long)
   * @param resultSessions (java.util.List<org.chromium.chrome.browser.ntp.ForeignSessionHelper.ForeignSession>)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_ForeignSessionHelper_getForeignSessions(
      long nativeForeignSessionHelper, Object resultSessions);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.init
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_ntp_ForeignSessionHelper_init(
      Object profile);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.isTabSyncEnabled
   * @param nativeForeignSessionHelper (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_ForeignSessionHelper_isTabSyncEnabled(
      long nativeForeignSessionHelper);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.openForeignSessionTab
   * @param nativeForeignSessionHelper (long)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param sessionTag (java.lang.String)
   * @param tabId (int)
   * @param disposition (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_ForeignSessionHelper_openForeignSessionTab(
      long nativeForeignSessionHelper, Object tab, String sessionTag, int tabId, int disposition);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.setInvalidationsForSessionsEnabled
   * @param nativeForeignSessionHelper (long)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_ForeignSessionHelper_setInvalidationsForSessionsEnabled(
      long nativeForeignSessionHelper, boolean enabled);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.setOnForeignSessionCallback
   * @param nativeForeignSessionHelper (long)
   * @param callback (org.chromium.chrome.browser.ntp.ForeignSessionHelper.ForeignSessionCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_ForeignSessionHelper_setOnForeignSessionCallback(
      long nativeForeignSessionHelper, Object callback);

  /**
   * org.chromium.chrome.browser.ntp.ForeignSessionHelper.triggerSessionSync
   * @param nativeForeignSessionHelper (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_ForeignSessionHelper_triggerSessionSync(
      long nativeForeignSessionHelper);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.destroy
   * @param nativeRecentTabsPagePrefs (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_destroy(
      long nativeRecentTabsPagePrefs);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.getForeignSessionCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @param sessionTag (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_getForeignSessionCollapsed(
      long nativeRecentTabsPagePrefs, String sessionTag);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.getRecentlyClosedTabsCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_getRecentlyClosedTabsCollapsed(
      long nativeRecentTabsPagePrefs);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.getSnapshotDocumentCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_getSnapshotDocumentCollapsed(
      long nativeRecentTabsPagePrefs);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.getSyncPromoCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_getSyncPromoCollapsed(
      long nativeRecentTabsPagePrefs);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.init
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_init(
      Object profile);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.setForeignSessionCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @param sessionTag (java.lang.String)
   * @param isCollapsed (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_setForeignSessionCollapsed(
      long nativeRecentTabsPagePrefs, String sessionTag, boolean isCollapsed);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.setRecentlyClosedTabsCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @param isCollapsed (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_setRecentlyClosedTabsCollapsed(
      long nativeRecentTabsPagePrefs, boolean isCollapsed);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.setSnapshotDocumentCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @param isCollapsed (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_setSnapshotDocumentCollapsed(
      long nativeRecentTabsPagePrefs, boolean isCollapsed);

  /**
   * org.chromium.chrome.browser.ntp.RecentTabsPagePrefs.setSyncPromoCollapsed
   * @param nativeRecentTabsPagePrefs (long)
   * @param isCollapsed (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentTabsPagePrefs_setSyncPromoCollapsed(
      long nativeRecentTabsPagePrefs, boolean isCollapsed);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.clearRecentlyClosedEntries
   * @param nativeRecentlyClosedTabsBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentlyClosedBridge_clearRecentlyClosedEntries(
      long nativeRecentlyClosedTabsBridge);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.destroy
   * @param nativeRecentlyClosedTabsBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ntp_RecentlyClosedBridge_destroy(
      long nativeRecentlyClosedTabsBridge);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.getRecentlyClosedEntries
   * @param nativeRecentlyClosedTabsBridge (long)
   * @param entries (java.util.List<org.chromium.chrome.browser.ntp.RecentlyClosedEntry>)
   * @param maxEntryCount (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentlyClosedBridge_getRecentlyClosedEntries(
      long nativeRecentlyClosedTabsBridge, Object entries, int maxEntryCount);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.getRecentlyClosedTabs
   * @param nativeRecentlyClosedTabsBridge (long)
   * @param tabs (java.util.List<org.chromium.chrome.browser.ntp.RecentlyClosedTab>)
   * @param maxTabCount (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentlyClosedBridge_getRecentlyClosedTabs(
      long nativeRecentlyClosedTabsBridge, Object tabs, int maxTabCount);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.init
   * @param caller (org.chromium.chrome.browser.ntp.RecentlyClosedBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_ntp_RecentlyClosedBridge_init(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.openMostRecentlyClosedEntry
   * @param nativeRecentlyClosedTabsBridge (long)
   * @param tabModel (org.chromium.chrome.browser.tabmodel.TabModel)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentlyClosedBridge_openMostRecentlyClosedEntry(
      long nativeRecentlyClosedTabsBridge, Object tabModel);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.openRecentlyClosedEntry
   * @param nativeRecentlyClosedTabsBridge (long)
   * @param tabModel (org.chromium.chrome.browser.tabmodel.TabModel)
   * @param sessionId (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentlyClosedBridge_openRecentlyClosedEntry(
      long nativeRecentlyClosedTabsBridge, Object tabModel, int sessionId);

  /**
   * org.chromium.chrome.browser.ntp.RecentlyClosedBridge.openRecentlyClosedTab
   * @param nativeRecentlyClosedTabsBridge (long)
   * @param tabModel (org.chromium.chrome.browser.tabmodel.TabModel)
   * @param tabSessionId (int)
   * @param windowOpenDisposition (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_ntp_RecentlyClosedBridge_openRecentlyClosedTab(
      long nativeRecentlyClosedTabsBridge, Object tabModel, int tabSessionId,
      int windowOpenDisposition);

  /**
   * org.chromium.chrome.browser.offlinepages.AutoFetchNotifier.cancelInProgress
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_AutoFetchNotifier_cancelInProgress(
      Object profile);

  /**
   * org.chromium.chrome.browser.offlinepages.BackgroundSchedulerBridge.startScheduledProcessing
   * @param powerConnected (boolean)
   * @param batteryPercentage (int)
   * @param netConnectionType (int)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_BackgroundSchedulerBridge_startScheduledProcessing(
      boolean powerConnected, int batteryPercentage, int netConnectionType, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.BackgroundSchedulerBridge.stopScheduledProcessing
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_BackgroundSchedulerBridge_stopScheduledProcessing(
      );

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.acquireFileAccessPermission
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_acquireFileAccessPermission(
      long nativeOfflinePageBridge, Object caller, Object webContents, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.canSavePage
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_canSavePage(
      Object url);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.deletePagesByClientId
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param namespaces (java.lang.String[])
   * @param ids (java.lang.String[])
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_deletePagesByClientId(
      long nativeOfflinePageBridge, Object caller, String[] namespaces, String[] ids,
      Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.deletePagesByClientIdAndOrigin
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param namespaces (java.lang.String[])
   * @param ids (java.lang.String[])
   * @param origin (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_deletePagesByClientIdAndOrigin(
      long nativeOfflinePageBridge, Object caller, String[] namespaces, String[] ids, String origin,
      Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.deletePagesByOfflineId
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param offlineIds (long[])
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_deletePagesByOfflineId(
      long nativeOfflinePageBridge, Object caller, long[] offlineIds, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getAllPages
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param offlinePages (java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getAllPages(
      long nativeOfflinePageBridge, Object caller, Object offlinePages, final Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getLoadUrlParamsByOfflineId
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param offlineId (long)
   * @param location (int)
   * @param callback (org.chromium.base.Callback<org.chromium.content_public.browser.LoadUrlParams>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getLoadUrlParamsByOfflineId(
      long nativeOfflinePageBridge, Object caller, long offlineId, int location, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getLoadUrlParamsForOpeningMhtmlFileOrContent
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param url (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.content_public.browser.LoadUrlParams>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getLoadUrlParamsForOpeningMhtmlFileOrContent(
      long nativeOfflinePageBridge, Object caller, String url, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getOfflinePage
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (org.chromium.chrome.browser.offlinepages.OfflinePageItem)
   */
  public static final native Object org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getOfflinePage(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getOfflinePageBridgeForProfileKey
   * @param profileKey (org.chromium.chrome.browser.profiles.ProfileKey)
   * @return (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   */
  public static final native Object org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getOfflinePageBridgeForProfileKey(
      Object profileKey);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getOfflinePageHeaderForReload
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getOfflinePageHeaderForReload(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getPageByOfflineId
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param offlineId (long)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.offlinepages.OfflinePageItem>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getPageByOfflineId(
      long nativeOfflinePageBridge, Object caller, long offlineId, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getPagesByClientId
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param result (java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>)
   * @param namespaces (java.lang.String[])
   * @param ids (java.lang.String[])
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getPagesByClientId(
      long nativeOfflinePageBridge, Object caller, Object result, String[] namespaces, String[] ids,
      Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getPagesByNamespace
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param result (java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>)
   * @param nameSpace (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getPagesByNamespace(
      long nativeOfflinePageBridge, Object caller, Object result, String nameSpace,
      Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.getPagesByRequestOrigin
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param result (java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>)
   * @param requestOrigin (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.offlinepages.OfflinePageItem>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_getPagesByRequestOrigin(
      long nativeOfflinePageBridge, Object caller, Object result, String requestOrigin,
      Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.isInPrivateDirectory
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param filePath (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_isInPrivateDirectory(
      long nativeOfflinePageBridge, Object caller, String filePath);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.isOfflinePage
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_isOfflinePage(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.isShowingDownloadButtonInErrorPage
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_isShowingDownloadButtonInErrorPage(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.isShowingOfflinePreview
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_isShowingOfflinePreview(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.isShowingTrustedOfflinePage
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_isShowingTrustedOfflinePage(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.isTemporaryNamespace
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param nameSpace (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_OfflinePageBridge_isTemporaryNamespace(
      long nativeOfflinePageBridge, Object caller, String nameSpace);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.publishInternalPageByGuid
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param guid (java.lang.String)
   * @param publishedCallback (org.chromium.base.Callback<java.lang.String>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_publishInternalPageByGuid(
      long nativeOfflinePageBridge, Object caller, String guid, Object publishedCallback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.publishInternalPageByOfflineId
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param offlineId (long)
   * @param publishedCallback (org.chromium.base.Callback<java.lang.String>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_publishInternalPageByOfflineId(
      long nativeOfflinePageBridge, Object caller, long offlineId, Object publishedCallback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.savePage
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param callback (org.chromium.chrome.browser.offlinepages.OfflinePageBridge.SavePageCallback)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param clientNamespace (java.lang.String)
   * @param clientId (java.lang.String)
   * @param origin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_savePage(
      long nativeOfflinePageBridge, Object caller, Object callback, Object webContents,
      String clientNamespace, String clientId, String origin);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.scheduleDownload
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param nameSpace (java.lang.String)
   * @param url (java.lang.String)
   * @param uiAction (int)
   * @param origin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_scheduleDownload(
      long nativeOfflinePageBridge, Object caller, Object webContents, String nameSpace, String url,
      int uiAction, String origin);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.selectPageForOnlineUrl
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param onlineUrl (org.chromium.url.GURL)
   * @param tabId (int)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.offlinepages.OfflinePageItem>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_selectPageForOnlineUrl(
      long nativeOfflinePageBridge, Object caller, Object onlineUrl, int tabId, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.OfflinePageBridge.willCloseTab
   * @param nativeOfflinePageBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.OfflinePageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_OfflinePageBridge_willCloseTab(
      long nativeOfflinePageBridge, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.offlinepages.RequestCoordinatorBridge.getRequestsInQueue
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param callback (org.chromium.base.Callback<org.chromium.chrome.browser.offlinepages.SavePageRequest[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_RequestCoordinatorBridge_getRequestsInQueue(
      Object profile, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.RequestCoordinatorBridge.removeRequestsFromQueue
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param requestIds (long[])
   * @param callback (org.chromium.chrome.browser.offlinepages.RequestCoordinatorBridge.RequestsRemovedCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_RequestCoordinatorBridge_removeRequestsFromQueue(
      Object profile, long[] requestIds, Object callback);

  /**
   * org.chromium.chrome.browser.offlinepages.RequestCoordinatorBridge.savePageLater
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @param url (java.lang.String)
   * @param clientNamespace (java.lang.String)
   * @param clientId (java.lang.String)
   * @param origin (java.lang.String)
   * @param userRequested (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_RequestCoordinatorBridge_savePageLater(
      Object profile, Object callback, String url, String clientNamespace, String clientId,
      String origin, boolean userRequested);

  /**
   * org.chromium.chrome.browser.offlinepages.downloads.OfflinePageDownloadBridge.destroy
   * @param nativeOfflinePageDownloadBridge (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.downloads.OfflinePageDownloadBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_downloads_OfflinePageDownloadBridge_destroy(
      long nativeOfflinePageDownloadBridge, Object caller);

  /**
   * org.chromium.chrome.browser.offlinepages.downloads.OfflinePageDownloadBridge.init
   * @param caller (org.chromium.chrome.browser.offlinepages.downloads.OfflinePageDownloadBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_offlinepages_downloads_OfflinePageDownloadBridge_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.offlinepages.downloads.OfflinePageDownloadBridge.startDownload
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param origin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_downloads_OfflinePageDownloadBridge_startDownload(
      Object tab, String origin);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask.onStopTask
   * @param nativePrefetchBackgroundTaskAndroid (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchBackgroundTask_onStopTask(
      long nativePrefetchBackgroundTaskAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask.setTaskReschedulingForTesting
   * @param nativePrefetchBackgroundTaskAndroid (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask)
   * @param rescheduleType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_prefetch_PrefetchBackgroundTask_setTaskReschedulingForTesting(
      long nativePrefetchBackgroundTaskAndroid, Object caller, int rescheduleType);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask.signalTaskFinishedForTesting
   * @param nativePrefetchBackgroundTaskAndroid (long)
   * @param caller (org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_offlinepages_prefetch_PrefetchBackgroundTask_signalTaskFinishedForTesting(
      long nativePrefetchBackgroundTaskAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask.startPrefetchTask
   * @param caller (org.chromium.chrome.browser.offlinepages.prefetch.PrefetchBackgroundTask)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_offlinepages_prefetch_PrefetchBackgroundTask_startPrefetchTask(
      Object caller);

  /**
   * org.chromium.chrome.browser.page_info.PageInfoAboutThisSiteController.getSiteInfo
   * @param browserContext (org.chromium.content_public.browser.BrowserContextHandle)
   * @param url (org.chromium.url.GURL)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (byte[])
   */
  public static final native byte[] org_chromium_chrome_browser_page_1info_PageInfoAboutThisSiteController_getSiteInfo(
      Object browserContext, Object url, Object webContents);

  /**
   * org.chromium.chrome.browser.page_info.PageInfoAboutThisSiteController.isFeatureEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_page_1info_PageInfoAboutThisSiteController_isFeatureEnabled(
      );

  /**
   * org.chromium.chrome.browser.page_info.PageInfoAboutThisSiteController.onAboutThisSiteRowClicked
   * @param withDescription (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_page_1info_PageInfoAboutThisSiteController_onAboutThisSiteRowClicked(
      boolean withDescription);

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.addPartnerBookmark
   * @param nativePartnerBookmarksReader (long)
   * @param caller (org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader)
   * @param url (java.lang.String)
   * @param title (java.lang.String)
   * @param isFolder (boolean)
   * @param parentId (long)
   * @param favicon (byte[])
   * @param touchicon (byte[])
   * @param fetchUncachedFaviconsFromServer (boolean)
   * @param desiredFaviconSizePx (int)
   * @param callback (org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.FetchFaviconCallback)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_addPartnerBookmark(
      long nativePartnerBookmarksReader, Object caller, String url, String title, boolean isFolder,
      long parentId, byte[] favicon, byte[] touchicon, boolean fetchUncachedFaviconsFromServer,
      int desiredFaviconSizePx, Object callback);

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.destroy
   * @param nativePartnerBookmarksReader (long)
   * @param caller (org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_destroy(
      long nativePartnerBookmarksReader, Object caller);

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.disablePartnerBookmarksEditing
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_disablePartnerBookmarksEditing(
      );

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.getNativeUrlString
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_getNativeUrlString(
      String url);

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.init
   * @param caller (org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.partnerBookmarksCreationComplete
   * @param nativePartnerBookmarksReader (long)
   * @param caller (org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_partnerBookmarksCreationComplete(
      long nativePartnerBookmarksReader, Object caller);

  /**
   * org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader.reset
   * @param nativePartnerBookmarksReader (long)
   * @param caller (org.chromium.chrome.browser.partnerbookmarks.PartnerBookmarksReader)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_partnerbookmarks_PartnerBookmarksReader_reset(
      long nativePartnerBookmarksReader, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.AccountChooserDialog.cancelDialog
   * @param nativeAccountChooserDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AccountChooserDialog)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AccountChooserDialog_cancelDialog(
      long nativeAccountChooserDialogAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.AccountChooserDialog.onCredentialClicked
   * @param nativeAccountChooserDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AccountChooserDialog)
   * @param credentialId (int)
   * @param signinButtonClicked (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AccountChooserDialog_onCredentialClicked(
      long nativeAccountChooserDialogAndroid, Object caller, int credentialId,
      boolean signinButtonClicked);

  /**
   * org.chromium.chrome.browser.password_manager.AccountChooserDialog.onLinkClicked
   * @param nativeAccountChooserDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AccountChooserDialog)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AccountChooserDialog_onLinkClicked(
      long nativeAccountChooserDialogAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog.destroy
   * @param nativeAutoSigninFirstRunDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AutoSigninFirstRunDialog_destroy(
      long nativeAutoSigninFirstRunDialogAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog.onLinkClicked
   * @param nativeAutoSigninFirstRunDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AutoSigninFirstRunDialog_onLinkClicked(
      long nativeAutoSigninFirstRunDialogAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog.onOkClicked
   * @param nativeAutoSigninFirstRunDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AutoSigninFirstRunDialog_onOkClicked(
      long nativeAutoSigninFirstRunDialogAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog.onTurnOffClicked
   * @param nativeAutoSigninFirstRunDialogAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.AutoSigninFirstRunDialog)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_AutoSigninFirstRunDialog_onTurnOffClicked(
      long nativeAutoSigninFirstRunDialogAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.CredentialLeakDialogBridge.accepted
   * @param nativeCredentialLeakDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.CredentialLeakDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_CredentialLeakDialogBridge_accepted(
      long nativeCredentialLeakDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.CredentialLeakDialogBridge.cancelled
   * @param nativeCredentialLeakDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.CredentialLeakDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_CredentialLeakDialogBridge_cancelled(
      long nativeCredentialLeakDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.CredentialLeakDialogBridge.closed
   * @param nativeCredentialLeakDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.CredentialLeakDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_CredentialLeakDialogBridge_closed(
      long nativeCredentialLeakDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordGenerationDialogBridge.passwordAccepted
   * @param nativePasswordGenerationDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.PasswordGenerationDialogBridge)
   * @param generatedPassword (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordGenerationDialogBridge_passwordAccepted(
      long nativePasswordGenerationDialogViewAndroid, Object caller, String generatedPassword);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordGenerationDialogBridge.passwordRejected
   * @param nativePasswordGenerationDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.PasswordGenerationDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordGenerationDialogBridge_passwordRejected(
      long nativePasswordGenerationDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.PasswordGenerationPopupBridge.dismissed
   * @param nativePasswordGenerationEditingPopupViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.PasswordGenerationPopupBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_PasswordGenerationPopupBridge_dismissed(
      long nativePasswordGenerationEditingPopupViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.destroy
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_destroy(
      long nativePasswordUIViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.getAccountDashboardURL
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_getAccountDashboardURL(
      );

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.getSavedPasswordEntry
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @param index (int)
   * @return (org.chromium.chrome.browser.password_manager.settings.SavedPasswordEntry)
   */
  public static final native Object org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_getSavedPasswordEntry(
      long nativePasswordUIViewAndroid, Object caller, int index);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.getSavedPasswordException
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @param index (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_getSavedPasswordException(
      long nativePasswordUIViewAndroid, Object caller, int index);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.getTrustedVaultLearnMoreURL
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_getTrustedVaultLearnMoreURL(
      );

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.handleRemoveSavedPasswordEntry
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @param index (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_handleRemoveSavedPasswordEntry(
      long nativePasswordUIViewAndroid, Object caller, int index);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.handleRemoveSavedPasswordException
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @param index (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_handleRemoveSavedPasswordException(
      long nativePasswordUIViewAndroid, Object caller, int index);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.handleSerializePasswords
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @param targetPath (java.lang.String)
   * @param successCallback (org.chromium.base.IntStringCallback)
   * @param errorCallback (org.chromium.base.Callback<java.lang.String>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_handleSerializePasswords(
      long nativePasswordUIViewAndroid, Object caller, String targetPath, Object successCallback,
      Object errorCallback);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.handleShowBlockedCredentialView
   * @param nativePasswordUIViewAndroid (long)
   * @param context (android.content.Context)
   * @param launcher (org.chromium.components.browser_ui.settings.SettingsLauncher)
   * @param index (int)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_handleShowBlockedCredentialView(
      long nativePasswordUIViewAndroid, Object context, Object launcher, int index, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.handleShowPasswordEntryEditingView
   * @param nativePasswordUIViewAndroid (long)
   * @param context (android.content.Context)
   * @param launcher (org.chromium.components.browser_ui.settings.SettingsLauncher)
   * @param index (int)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_handleShowPasswordEntryEditingView(
      long nativePasswordUIViewAndroid, Object context, Object launcher, int index, Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.hasAccountForLeakCheckRequest
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_hasAccountForLeakCheckRequest(
      );

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.init
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.insertPasswordEntryForTesting
   * @param nativePasswordUIViewAndroid (long)
   * @param origin (java.lang.String)
   * @param username (java.lang.String)
   * @param password (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_insertPasswordEntryForTesting(
      long nativePasswordUIViewAndroid, String origin, String username, String password);

  /**
   * org.chromium.chrome.browser.password_manager.settings.PasswordUIView.updatePasswordLists
   * @param nativePasswordUIViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.password_manager.settings.PasswordUIView)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_password_1manager_settings_PasswordUIView_updatePasswordLists(
      long nativePasswordUIViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.getServiceWorkerPaymentAppsInfo
   * @param callback (org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.GetServiceWorkerPaymentAppsInfoCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_payments_ServiceWorkerPaymentAppBridge_getServiceWorkerPaymentAppsInfo(
      Object callback);

  /**
   * org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.getSourceIdForPaymentAppFromScope
   * @param swScope (org.chromium.url.GURL)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_payments_ServiceWorkerPaymentAppBridge_getSourceIdForPaymentAppFromScope(
      Object swScope);

  /**
   * org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.hasServiceWorkerPaymentApps
   * @param callback (org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.HasServiceWorkerPaymentAppsCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_payments_ServiceWorkerPaymentAppBridge_hasServiceWorkerPaymentApps(
      Object callback);

  /**
   * org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.onClosingPaymentAppWindow
   * @param paymentRequestWebContents (org.chromium.content_public.browser.WebContents)
   * @param reason (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_payments_ServiceWorkerPaymentAppBridge_onClosingPaymentAppWindow(
      Object paymentRequestWebContents, int reason);

  /**
   * org.chromium.chrome.browser.payments.ServiceWorkerPaymentAppBridge.onOpeningPaymentAppWindow
   * @param paymentRequestWebContents (org.chromium.content_public.browser.WebContents)
   * @param paymentHandlerWebContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_payments_ServiceWorkerPaymentAppBridge_onOpeningPaymentAppWindow(
      Object paymentRequestWebContents, Object paymentHandlerWebContents);

  /**
   * org.chromium.chrome.browser.permissions.NotificationBlockedDialog.onDialogDismissed
   * @param nativeNotificationBlockedDialogController (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_permissions_NotificationBlockedDialog_onDialogDismissed(
      long nativeNotificationBlockedDialogController);

  /**
   * org.chromium.chrome.browser.permissions.NotificationBlockedDialog.onLearnMoreClicked
   * @param nativeNotificationBlockedDialogController (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_permissions_NotificationBlockedDialog_onLearnMoreClicked(
      long nativeNotificationBlockedDialogController);

  /**
   * org.chromium.chrome.browser.permissions.NotificationBlockedDialog.onNegativeButtonClicked
   * @param nativeNotificationBlockedDialogController (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_permissions_NotificationBlockedDialog_onNegativeButtonClicked(
      long nativeNotificationBlockedDialogController);

  /**
   * org.chromium.chrome.browser.permissions.NotificationBlockedDialog.onPrimaryButtonClicked
   * @param nativeNotificationBlockedDialogController (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_permissions_NotificationBlockedDialog_onPrimaryButtonClicked(
      long nativeNotificationBlockedDialogController);

  /**
   * org.chromium.chrome.browser.permissions.PermissionSettingsBridge.didShowNotificationsPromo
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_permissions_PermissionSettingsBridge_didShowNotificationsPromo(
      Object profile);

  /**
   * org.chromium.chrome.browser.permissions.PermissionSettingsBridge.shouldShowNotificationsPromo
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_permissions_PermissionSettingsBridge_shouldShowNotificationsPromo(
      Object profile, Object webContents);

  /**
   * org.chromium.chrome.browser.permissions.PermissionUpdateRequester.onPermissionResult
   * @param nativePermissionUpdateRequester (long)
   * @param allPermissionsGranted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_permissions_PermissionUpdateRequester_onPermissionResult(
      long nativePermissionUpdateRequester, boolean allPermissionsGranted);

  /**
   * org.chromium.chrome.browser.policy.PolicyAuditor.getCertificateFailure
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_policy_PolicyAuditor_getCertificateFailure(
      Object webContents);

  /**
   * org.chromium.chrome.browser.printing.TabPrinter.print
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param renderProcessId (int)
   * @param renderFrameId (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_printing_TabPrinter_print(
      Object webContents, int renderProcessId, int renderFrameId);

  /**
   * org.chromium.chrome.browser.privacy.settings.PrivacyPreferencesManagerImpl.isMetricsReportingDisabledByPolicy
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_settings_PrivacyPreferencesManagerImpl_isMetricsReportingDisabledByPolicy(
      );

  /**
   * org.chromium.chrome.browser.privacy.settings.PrivacyPreferencesManagerImpl.isMetricsReportingEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_settings_PrivacyPreferencesManagerImpl_isMetricsReportingEnabled(
      );

  /**
   * org.chromium.chrome.browser.privacy.settings.PrivacyPreferencesManagerImpl.setMetricsReportingEnabled
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_settings_PrivacyPreferencesManagerImpl_setMetricsReportingEnabled(
      boolean enabled);

  /**
   * org.chromium.chrome.browser.query_tiles.QueryTileUtils.isQueryTilesEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_query_1tiles_QueryTileUtils_isQueryTilesEnabled(
      );

  /**
   * org.chromium.chrome.browser.query_tiles.TileProviderFactory.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.query_tiles.TileProvider)
   */
  public static final native Object org_chromium_chrome_browser_query_1tiles_TileProviderFactory_getForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.read_later.ReadingListBridge.onStartChromeForeground
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_read_1later_ReadingListBridge_onStartChromeForeground(
      );

  /**
   * org.chromium.chrome.browser.renderer_host.ChromeNavigationUIData.createUnownedNativeCopy
   * @param caller (org.chromium.chrome.browser.renderer_host.ChromeNavigationUIData)
   * @param bookmarkId (long)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_renderer_1host_ChromeNavigationUIData_createUnownedNativeCopy(
      Object caller, long bookmarkId);

  /**
   * org.chromium.chrome.browser.rlz.RevenueStats.setRlzParameterValue
   * @param rlz (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_rlz_RevenueStats_setRlzParameterValue(
      String rlz);

  /**
   * org.chromium.chrome.browser.rlz.RevenueStats.setSearchClient
   * @param client (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_rlz_RevenueStats_setSearchClient(
      String client);

  /**
   * org.chromium.chrome.browser.rlz.RlzPingHandler.startPing
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param brand (java.lang.String)
   * @param language (java.lang.String)
   * @param events (java.lang.String)
   * @param id (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_rlz_RlzPingHandler_startPing(
      Object profile, String brand, String language, String events, String id, Object callback);

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingPasswordReuseDialogBridge.checkPasswords
   * @param nativePasswordReuseDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.safe_browsing.SafeBrowsingPasswordReuseDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_safe_1browsing_SafeBrowsingPasswordReuseDialogBridge_checkPasswords(
      long nativePasswordReuseDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingPasswordReuseDialogBridge.close
   * @param nativePasswordReuseDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.safe_browsing.SafeBrowsingPasswordReuseDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_safe_1browsing_SafeBrowsingPasswordReuseDialogBridge_close(
      long nativePasswordReuseDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.safe_browsing.SafeBrowsingPasswordReuseDialogBridge.ignore
   * @param nativePasswordReuseDialogViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.safe_browsing.SafeBrowsingPasswordReuseDialogBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_safe_1browsing_SafeBrowsingPasswordReuseDialogBridge_ignore(
      long nativePasswordReuseDialogViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.segmentation_platform.ContextualPageActionController.computeContextualPageAction
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (org.chromium.url.GURL)
   * @param callback (org.chromium.base.Callback<org.chromium.components.segmentation_platform.SegmentSelectionResult>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_segmentation_1platform_ContextualPageActionController_computeContextualPageAction(
      Object profile, Object url, Object callback);

  /**
   * org.chromium.chrome.browser.sharing.SharingServiceProxy.addDeviceCandidatesInitializedObserver
   * @param nativeSharingServiceProxyAndroid (long)
   * @param runnable (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sharing_SharingServiceProxy_addDeviceCandidatesInitializedObserver(
      long nativeSharingServiceProxyAndroid, Object runnable);

  /**
   * org.chromium.chrome.browser.sharing.SharingServiceProxy.getDeviceCandidates
   * @param nativeSharingServiceProxyAndroid (long)
   * @param deviceInfo (java.util.ArrayList<org.chromium.chrome.browser.sharing.SharingServiceProxy.DeviceInfo>)
   * @param requiredFeature (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sharing_SharingServiceProxy_getDeviceCandidates(
      long nativeSharingServiceProxyAndroid, Object deviceInfo, int requiredFeature);

  /**
   * org.chromium.chrome.browser.sharing.SharingServiceProxy.initSharingService
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sharing_SharingServiceProxy_initSharingService(
      Object profile);

  /**
   * org.chromium.chrome.browser.sharing.SharingServiceProxy.sendSharedClipboardMessage
   * @param nativeSharingServiceProxyAndroid (long)
   * @param guid (java.lang.String)
   * @param text (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sharing_SharingServiceProxy_sendSharedClipboardMessage(
      long nativeSharingServiceProxyAndroid, String guid, String text, Object callback);

  /**
   * org.chromium.chrome.browser.sharing.sms_fetcher.SmsFetcherMessageHandler.onConfirm
   * @param nativeSmsFetchRequestHandler (long)
   * @param topOrigin (java.lang.String)
   * @param embeddedOrigin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sharing_sms_1fetcher_SmsFetcherMessageHandler_onConfirm(
      long nativeSmsFetchRequestHandler, String topOrigin, String embeddedOrigin);

  /**
   * org.chromium.chrome.browser.sharing.sms_fetcher.SmsFetcherMessageHandler.onDismiss
   * @param nativeSmsFetchRequestHandler (long)
   * @param topOrigin (java.lang.String)
   * @param embeddedOrigin (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sharing_sms_1fetcher_SmsFetcherMessageHandler_onDismiss(
      long nativeSmsFetchRequestHandler, String topOrigin, String embeddedOrigin);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.extractDomainName
   * @param email (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_signin_SigninManagerImpl_extractDomainName(
      String email);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.fetchAndApplyCloudPolicy
   * @param nativeSigninManagerAndroid (long)
   * @param account (org.chromium.components.signin.base.CoreAccountInfo)
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_SigninManagerImpl_fetchAndApplyCloudPolicy(
      long nativeSigninManagerAndroid, Object account, Object callback);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.getManagementDomain
   * @param nativeSigninManagerAndroid (long)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_signin_SigninManagerImpl_getManagementDomain(
      long nativeSigninManagerAndroid);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.isAccountManaged
   * @param nativeSigninManagerAndroid (long)
   * @param account (org.chromium.components.signin.base.CoreAccountInfo)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_SigninManagerImpl_isAccountManaged(
      long nativeSigninManagerAndroid, Object account, Object callback);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.isForceSigninEnabled
   * @param nativeSigninManagerAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_signin_SigninManagerImpl_isForceSigninEnabled(
      long nativeSigninManagerAndroid);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.isSigninAllowedByPolicy
   * @param nativeSigninManagerAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_signin_SigninManagerImpl_isSigninAllowedByPolicy(
      long nativeSigninManagerAndroid);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.stopApplyingCloudPolicy
   * @param nativeSigninManagerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_SigninManagerImpl_stopApplyingCloudPolicy(
      long nativeSigninManagerAndroid);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.wipeGoogleServiceWorkerCaches
   * @param nativeSigninManagerAndroid (long)
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_SigninManagerImpl_wipeGoogleServiceWorkerCaches(
      long nativeSigninManagerAndroid, Object callback);

  /**
   * org.chromium.chrome.browser.signin.SigninManagerImpl.wipeProfileData
   * @param nativeSigninManagerAndroid (long)
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_signin_SigninManagerImpl_wipeProfileData(
      long nativeSigninManagerAndroid, Object callback);

  /**
   * org.chromium.chrome.browser.site_settings.CookieControlsServiceBridge.destroy
   * @param nativeCookieControlsServiceBridge (long)
   * @param caller (org.chromium.chrome.browser.site_settings.CookieControlsServiceBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_site_1settings_CookieControlsServiceBridge_destroy(
      long nativeCookieControlsServiceBridge, Object caller);

  /**
   * org.chromium.chrome.browser.site_settings.CookieControlsServiceBridge.handleCookieControlsToggleChanged
   * @param nativeCookieControlsServiceBridge (long)
   * @param enable (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_site_1settings_CookieControlsServiceBridge_handleCookieControlsToggleChanged(
      long nativeCookieControlsServiceBridge, boolean enable);

  /**
   * org.chromium.chrome.browser.site_settings.CookieControlsServiceBridge.init
   * @param caller (org.chromium.chrome.browser.site_settings.CookieControlsServiceBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_site_1settings_CookieControlsServiceBridge_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.site_settings.CookieControlsServiceBridge.updateServiceIfNecessary
   * @param nativeCookieControlsServiceBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_site_1settings_CookieControlsServiceBridge_updateServiceIfNecessary(
      long nativeCookieControlsServiceBridge);

  /**
   * org.chromium.chrome.browser.status_indicator.StatusIndicatorSceneLayer.init
   * @param caller (org.chromium.chrome.browser.status_indicator.StatusIndicatorSceneLayer)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_status_1indicator_StatusIndicatorSceneLayer_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.status_indicator.StatusIndicatorSceneLayer.setContentTree
   * @param nativeStatusIndicatorSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.status_indicator.StatusIndicatorSceneLayer)
   * @param contentTree (org.chromium.chrome.browser.layouts.scene_layer.SceneLayer)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_status_1indicator_StatusIndicatorSceneLayer_setContentTree(
      long nativeStatusIndicatorSceneLayer, Object caller, Object contentTree);

  /**
   * org.chromium.chrome.browser.status_indicator.StatusIndicatorSceneLayer.updateStatusIndicatorLayer
   * @param nativeStatusIndicatorSceneLayer (long)
   * @param caller (org.chromium.chrome.browser.status_indicator.StatusIndicatorSceneLayer)
   * @param resourceManager (org.chromium.ui.resources.ResourceManager)
   * @param viewResourceId (int)
   * @param offset (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_status_1indicator_StatusIndicatorSceneLayer_updateStatusIndicatorLayer(
      long nativeStatusIndicatorSceneLayer, Object caller, Object resourceManager,
      int viewResourceId, int offset);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.addOrRemoveBlockedUrl
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param url (org.chromium.url.GURL)
   * @param addUrl (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_addOrRemoveBlockedUrl(
      long nativeMostVisitedSitesBridge, Object caller, Object url, boolean addUrl);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.destroy
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_destroy(
      long nativeMostVisitedSitesBridge, Object caller);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.init
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_init(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.onHomepageStateChanged
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_onHomepageStateChanged(
      long nativeMostVisitedSitesBridge, Object caller);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.recordOpenedMostVisitedItem
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param index (int)
   * @param tileType (int)
   * @param titleSource (int)
   * @param source (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_recordOpenedMostVisitedItem(
      long nativeMostVisitedSitesBridge, Object caller, int index, int tileType, int titleSource,
      int source);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.recordPageImpression
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param tilesCount (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_recordPageImpression(
      long nativeMostVisitedSitesBridge, Object caller, int tilesCount);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.recordTileImpression
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param index (int)
   * @param type (int)
   * @param iconType (int)
   * @param titleSource (int)
   * @param source (int)
   * @param url (org.chromium.url.GURL)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_recordTileImpression(
      long nativeMostVisitedSitesBridge, Object caller, int index, int type, int iconType,
      int titleSource, int source, Object url);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.setHomepageClient
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param homePageClient (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSites.HomepageClient)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_setHomepageClient(
      long nativeMostVisitedSitesBridge, Object caller, Object homePageClient);

  /**
   * org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge.setObserver
   * @param nativeMostVisitedSitesBridge (long)
   * @param caller (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param observer (org.chromium.chrome.browser.suggestions.mostvisited.MostVisitedSitesBridge)
   * @param numSites (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_suggestions_mostvisited_MostVisitedSitesBridge_setObserver(
      long nativeMostVisitedSitesBridge, Object caller, Object observer, int numSites);

  /**
   * org.chromium.chrome.browser.supervised_user.ChildAccountService.onReauthenticationFailed
   * @param onFailureCallbackPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_supervised_1user_ChildAccountService_onReauthenticationFailed(
      long onFailureCallbackPtr);

  /**
   * org.chromium.chrome.browser.survey.SurveyHttpClientBridge.destroy
   * @param nativeSurveyHttpClientBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_survey_SurveyHttpClientBridge_destroy(
      long nativeSurveyHttpClientBridge);

  /**
   * org.chromium.chrome.browser.survey.SurveyHttpClientBridge.init
   * @param clientType (int)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_survey_SurveyHttpClientBridge_init(
      int clientType, Object profile);

  /**
   * org.chromium.chrome.browser.survey.SurveyHttpClientBridge.sendNetworkRequest
   * @param nativeSurveyHttpClientBridge (long)
   * @param gurl (org.chromium.url.GURL)
   * @param requestType (java.lang.String)
   * @param body (byte[])
   * @param headerKeys (java.lang.String[])
   * @param headerValues (java.lang.String[])
   * @param resultCallback (org.chromium.base.Callback<org.chromium.chrome.browser.survey.SurveyHttpClientBridge.HttpResponse>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_survey_SurveyHttpClientBridge_sendNetworkRequest(
      long nativeSurveyHttpClientBridge, Object gurl, String requestType, byte[] body,
      String[] headerKeys, String[] headerValues, Object resultCallback);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.addTrustedRecoveryMethodCompleted
   * @param nativeTrustedVaultClientAndroid (long)
   * @param requestId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_addTrustedRecoveryMethodCompleted(
      long nativeTrustedVaultClientAndroid, int requestId);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.fetchKeysCompleted
   * @param nativeTrustedVaultClientAndroid (long)
   * @param requestId (int)
   * @param gaiaId (java.lang.String)
   * @param keys (byte[][])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_fetchKeysCompleted(
      long nativeTrustedVaultClientAndroid, int requestId, String gaiaId, byte[][] keys);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.getIsRecoverabilityDegradedCompleted
   * @param nativeTrustedVaultClientAndroid (long)
   * @param requestId (int)
   * @param isDegraded (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_getIsRecoverabilityDegradedCompleted(
      long nativeTrustedVaultClientAndroid, int requestId, boolean isDegraded);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.markLocalKeysAsStaleCompleted
   * @param nativeTrustedVaultClientAndroid (long)
   * @param requestId (int)
   * @param succeeded (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_markLocalKeysAsStaleCompleted(
      long nativeTrustedVaultClientAndroid, int requestId, boolean succeeded);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.notifyKeysChanged
   * @param nativeTrustedVaultClientAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_notifyKeysChanged(
      long nativeTrustedVaultClientAndroid);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.notifyRecoverabilityChanged
   * @param nativeTrustedVaultClientAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_notifyRecoverabilityChanged(
      long nativeTrustedVaultClientAndroid);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.recordKeyRetrievalTrigger
   * @param trigger (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_recordKeyRetrievalTrigger(
      int trigger);

  /**
   * org.chromium.chrome.browser.sync.TrustedVaultClient.recordRecoverabilityDegradedFixTrigger
   * @param trigger (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_sync_TrustedVaultClient_recordRecoverabilityDegradedFixTrigger(
      int trigger);

  /**
   * org.chromium.chrome.browser.tab.TabBrowserControlsConstraintsHelper.init
   * @param caller (org.chromium.chrome.browser.tab.TabBrowserControlsConstraintsHelper)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_tab_TabBrowserControlsConstraintsHelper_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabBrowserControlsConstraintsHelper.onDestroyed
   * @param nativeTabBrowserControlsConstraintsHelper (long)
   * @param caller (org.chromium.chrome.browser.tab.TabBrowserControlsConstraintsHelper)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabBrowserControlsConstraintsHelper_onDestroyed(
      long nativeTabBrowserControlsConstraintsHelper, Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabBrowserControlsConstraintsHelper.updateState
   * @param nativeTabBrowserControlsConstraintsHelper (long)
   * @param caller (org.chromium.chrome.browser.tab.TabBrowserControlsConstraintsHelper)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param contraints (int)
   * @param current (int)
   * @param animate (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabBrowserControlsConstraintsHelper_updateState(
      long nativeTabBrowserControlsConstraintsHelper, Object caller, Object webContents,
      int contraints, int current, boolean animate);

  /**
   * org.chromium.chrome.browser.tab.TabFavicon.getFavicon
   * @param nativeTabFavicon (long)
   * @param caller (org.chromium.chrome.browser.tab.TabFavicon)
   * @return (android.graphics.Bitmap)
   */
  public static final native Object org_chromium_chrome_browser_tab_TabFavicon_getFavicon(
      long nativeTabFavicon, Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabFavicon.init
   * @param caller (org.chromium.chrome.browser.tab.TabFavicon)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_tab_TabFavicon_init(Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabFavicon.onDestroyed
   * @param nativeTabFavicon (long)
   * @param caller (org.chromium.chrome.browser.tab.TabFavicon)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabFavicon_onDestroyed(
      long nativeTabFavicon, Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabFavicon.resetWebContents
   * @param nativeTabFavicon (long)
   * @param caller (org.chromium.chrome.browser.tab.TabFavicon)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabFavicon_resetWebContents(
      long nativeTabFavicon, Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabFavicon.setWebContents
   * @param nativeTabFavicon (long)
   * @param caller (org.chromium.chrome.browser.tab.TabFavicon)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabFavicon_setWebContents(
      long nativeTabFavicon, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.destroy
   * @param nativeTabAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_destroy(
      long nativeTabAndroid);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.destroyWebContents
   * @param nativeTabAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_destroyWebContents(
      long nativeTabAndroid);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.fromWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (org.chromium.chrome.browser.tab.TabImpl)
   */
  public static final native Object org_chromium_chrome_browser_tab_TabImpl_fromWebContents(
      Object webContents);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.handleNonNavigationAboutURL
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_tab_TabImpl_handleNonNavigationAboutURL(
      Object url);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.init
   * @param caller (org.chromium.chrome.browser.tab.TabImpl)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_init(Object caller);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.initWebContents
   * @param nativeTabAndroid (long)
   * @param incognito (boolean)
   * @param isBackgroundTab (boolean)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param delegate (org.chromium.chrome.browser.tab.TabWebContentsDelegateAndroidImpl)
   * @param contextMenuPopulatorFactory (org.chromium.chrome.browser.contextmenu.ContextMenuPopulatorFactory)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_initWebContents(
      long nativeTabAndroid, boolean incognito, boolean isBackgroundTab, Object webContents,
      Object delegate, Object contextMenuPopulatorFactory);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.loadOriginalImage
   * @param nativeTabAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_loadOriginalImage(
      long nativeTabAndroid);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.onPhysicalBackingSizeChanged
   * @param nativeTabAndroid (long)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_onPhysicalBackingSizeChanged(
      long nativeTabAndroid, Object webContents, int width, int height);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.releaseWebContents
   * @param nativeTabAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_releaseWebContents(
      long nativeTabAndroid);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.setActiveNavigationEntryTitleForUrl
   * @param nativeTabAndroid (long)
   * @param url (java.lang.String)
   * @param title (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_setActiveNavigationEntryTitleForUrl(
      long nativeTabAndroid, String url, String title);

  /**
   * org.chromium.chrome.browser.tab.TabImpl.updateDelegates
   * @param nativeTabAndroid (long)
   * @param delegate (org.chromium.chrome.browser.tab.TabWebContentsDelegateAndroidImpl)
   * @param contextMenuPopulatorFactory (org.chromium.chrome.browser.contextmenu.ContextMenuPopulatorFactory)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabImpl_updateDelegates(
      long nativeTabAndroid, Object delegate, Object contextMenuPopulatorFactory);

  /**
   * org.chromium.chrome.browser.tab.TabWebContentsDelegateAndroidImpl.onRendererResponsive
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabWebContentsDelegateAndroidImpl_onRendererResponsive(
      Object webContents);

  /**
   * org.chromium.chrome.browser.tab.TabWebContentsDelegateAndroidImpl.onRendererUnresponsive
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabWebContentsDelegateAndroidImpl_onRendererUnresponsive(
      Object webContents);

  /**
   * org.chromium.chrome.browser.tab.TabWebContentsDelegateAndroidImpl.showFramebustBlockInfoBar
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_TabWebContentsDelegateAndroidImpl_showFramebustBlockInfoBar(
      Object webContents, String url);

  /**
   * org.chromium.chrome.browser.tab.tab_restore.HistoricalTabSaverImpl.createHistoricalBulkClosure
   * @param model (org.chromium.chrome.browser.tabmodel.TabModel)
   * @param groupIds (int[])
   * @param titles (java.lang.String[])
   * @param perTabGroupId (int[])
   * @param tabs (org.chromium.chrome.browser.tab.Tab[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_createHistoricalBulkClosure(
      Object model, int[] groupIds, String[] titles, int[] perTabGroupId, Object[] tabs);

  /**
   * org.chromium.chrome.browser.tab.tab_restore.HistoricalTabSaverImpl.createHistoricalGroup
   * @param model (org.chromium.chrome.browser.tabmodel.TabModel)
   * @param title (java.lang.String)
   * @param tabs (org.chromium.chrome.browser.tab.Tab[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_createHistoricalGroup(
      Object model, String title, Object[] tabs);

  /**
   * org.chromium.chrome.browser.tab.tab_restore.HistoricalTabSaverImpl.createHistoricalTab
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tab_tab_1restore_HistoricalTabSaverImpl_createHistoricalTab(
      Object tab);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelJniBridge.broadcastSessionRestoreComplete
   * @param nativeTabModelJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelJniBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelJniBridge_broadcastSessionRestoreComplete(
      long nativeTabModelJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelJniBridge.destroy
   * @param nativeTabModelJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelJniBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelJniBridge_destroy(
      long nativeTabModelJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelJniBridge.getProfileAndroid
   * @param nativeTabModelJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelJniBridge)
   * @return (org.chromium.chrome.browser.profiles.Profile)
   */
  public static final native Object org_chromium_chrome_browser_tabmodel_TabModelJniBridge_getProfileAndroid(
      long nativeTabModelJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelJniBridge.init
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelJniBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param activityType (int)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_tabmodel_TabModelJniBridge_init(
      Object caller, Object profile, int activityType);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelJniBridge.tabAddedToModel
   * @param nativeTabModelJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelJniBridge_tabAddedToModel(
      long nativeTabModelJniBridge, Object caller, Object tab);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.allTabsClosureCommitted
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_allTabsClosureCommitted(
      long nativeTabModelObserverJniBridge, Object caller);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.allTabsPendingClosure
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tabs (org.chromium.chrome.browser.tab.Tab[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_allTabsPendingClosure(
      long nativeTabModelObserverJniBridge, Object caller, Object[] tabs);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.didAddTab
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_didAddTab(
      long nativeTabModelObserverJniBridge, Object caller, Object tab, int type);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.didMoveTab
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param newIndex (int)
   * @param curIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_didMoveTab(
      long nativeTabModelObserverJniBridge, Object caller, Object tab, int newIndex, int curIndex);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.didSelectTab
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param type (int)
   * @param lastId (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_didSelectTab(
      long nativeTabModelObserverJniBridge, Object caller, Object tab, int type, int lastId);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.onFinishingMultipleTabClosure
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tabs (org.chromium.chrome.browser.tab.Tab[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_onFinishingMultipleTabClosure(
      long nativeTabModelObserverJniBridge, Object caller, Object[] tabs);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.onFinishingTabClosure
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tabId (int)
   * @param incognito (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_onFinishingTabClosure(
      long nativeTabModelObserverJniBridge, Object caller, int tabId, boolean incognito);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.tabClosureCommitted
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_tabClosureCommitted(
      long nativeTabModelObserverJniBridge, Object caller, Object tab);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.tabClosureUndone
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_tabClosureUndone(
      long nativeTabModelObserverJniBridge, Object caller, Object tab);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.tabPendingClosure
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_tabPendingClosure(
      long nativeTabModelObserverJniBridge, Object caller, Object tab);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.tabRemoved
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_tabRemoved(
      long nativeTabModelObserverJniBridge, Object caller, Object tab);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.willAddTab
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param type (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_willAddTab(
      long nativeTabModelObserverJniBridge, Object caller, Object tab, int type);

  /**
   * org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge.willCloseTab
   * @param nativeTabModelObserverJniBridge (long)
   * @param caller (org.chromium.chrome.browser.tabmodel.TabModelObserverJniBridge)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @param animate (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_tabmodel_TabModelObserverJniBridge_willCloseTab(
      long nativeTabModelObserverJniBridge, Object caller, Object tab, boolean animate);

  /**
   * org.chromium.chrome.browser.usage_stats.NotificationSuspender.reDisplayNotifications
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param origins (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_NotificationSuspender_reDisplayNotifications(
      Object profile, String[] origins);

  /**
   * org.chromium.chrome.browser.usage_stats.NotificationSuspender.storeNotificationResources
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param notificationIds (java.lang.String[])
   * @param origins (java.lang.String[])
   * @param resources (android.graphics.Bitmap[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_NotificationSuspender_storeNotificationResources(
      Object profile, String[] notificationIds, String[] origins, Object[] resources);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.addEvents
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param events (byte[][])
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_addEvents(
      long nativeUsageStatsBridge, Object caller, byte[][] events, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.deleteAllEvents
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_deleteAllEvents(
      long nativeUsageStatsBridge, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.deleteEventsInRange
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param start (long)
   * @param end (long)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_deleteEventsInRange(
      long nativeUsageStatsBridge, Object caller, long start, long end, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.deleteEventsWithMatchingDomains
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param domains (java.lang.String[])
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_deleteEventsWithMatchingDomains(
      long nativeUsageStatsBridge, Object caller, String[] domains, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.destroy
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_destroy(
      long nativeUsageStatsBridge, Object caller);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.getAllEvents
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.usage_stats.WebsiteEventProtos.WebsiteEvent>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_getAllEvents(
      long nativeUsageStatsBridge, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.getAllSuspensions
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param callback (org.chromium.base.Callback<java.lang.String[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_getAllSuspensions(
      long nativeUsageStatsBridge, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.getAllTokenMappings
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param callback (org.chromium.base.Callback<java.util.Map<java.lang.String, java.lang.String>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_getAllTokenMappings(
      long nativeUsageStatsBridge, Object caller, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.init
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_init(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.queryEventsInRange
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param start (long)
   * @param end (long)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.chrome.browser.usage_stats.WebsiteEventProtos.WebsiteEvent>>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_queryEventsInRange(
      long nativeUsageStatsBridge, Object caller, long start, long end, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.setSuspensions
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param domains (java.lang.String[])
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_setSuspensions(
      long nativeUsageStatsBridge, Object caller, String[] domains, Object callback);

  /**
   * org.chromium.chrome.browser.usage_stats.UsageStatsBridge.setTokenMappings
   * @param nativeUsageStatsBridge (long)
   * @param caller (org.chromium.chrome.browser.usage_stats.UsageStatsBridge)
   * @param tokens (java.lang.String[])
   * @param fqdns (java.lang.String[])
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_usage_1stats_UsageStatsBridge_setTokenMappings(
      long nativeUsageStatsBridge, Object caller, String[] tokens, String[] fqdns, Object callback);

  /**
   * org.chromium.chrome.browser.webapps.WebApkHandlerDelegate.onWebApkInfoRetrieved
   * @param nativeWebApkHandlerDelegate (long)
   * @param name (java.lang.String)
   * @param shortName (java.lang.String)
   * @param packageName (java.lang.String)
   * @param id (java.lang.String)
   * @param shellApkVersion (int)
   * @param versionCode (int)
   * @param uri (java.lang.String)
   * @param scope (java.lang.String)
   * @param manifestUrl (java.lang.String)
   * @param manifestStartUrl (java.lang.String)
   * @param manifestId (java.lang.String)
   * @param displayMode (int)
   * @param orientation (int)
   * @param themeColor (long)
   * @param backgroundColor (long)
   * @param lastUpdateCheckTimeMs (long)
   * @param lastUpdateCompletionTimeMs (long)
   * @param relaxUpdates (boolean)
   * @param backingBrowserPackageName (java.lang.String)
   * @param isBackingBrowser (boolean)
   * @param updateStatus (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkHandlerDelegate_onWebApkInfoRetrieved(
      long nativeWebApkHandlerDelegate, String name, String shortName, String packageName,
      String id, int shellApkVersion, int versionCode, String uri, String scope, String manifestUrl,
      String manifestStartUrl, String manifestId, int displayMode, int orientation, long themeColor,
      long backgroundColor, long lastUpdateCheckTimeMs, long lastUpdateCompletionTimeMs,
      boolean relaxUpdates, String backingBrowserPackageName, boolean isBackingBrowser,
      String updateStatus);

  /**
   * org.chromium.chrome.browser.webapps.WebApkInstallCoordinatorBridge.destroy
   * @param nativeWebApkInstallCoordinatorBridge (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkInstallCoordinatorBridge_destroy(
      long nativeWebApkInstallCoordinatorBridge);

  /**
   * org.chromium.chrome.browser.webapps.WebApkInstallCoordinatorBridge.init
   * @param caller (org.chromium.chrome.browser.webapps.WebApkInstallCoordinatorBridge)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_webapps_WebApkInstallCoordinatorBridge_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.webapps.WebApkInstallCoordinatorBridge.install
   * @param nativeWebApkInstallCoordinatorBridge (long)
   * @param caller (org.chromium.chrome.browser.webapps.WebApkInstallCoordinatorBridge)
   * @param apkProto (byte[])
   * @param primaryIcon (android.graphics.Bitmap)
   * @param isPrimaryIconMaskable (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkInstallCoordinatorBridge_install(
      long nativeWebApkInstallCoordinatorBridge, Object caller, byte[] apkProto, Object primaryIcon,
      boolean isPrimaryIconMaskable);

  /**
   * org.chromium.chrome.browser.webapps.WebApkInstaller.onGotSpaceStatus
   * @param nativeWebApkInstaller (long)
   * @param caller (org.chromium.chrome.browser.webapps.WebApkInstaller)
   * @param status (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkInstaller_onGotSpaceStatus(
      long nativeWebApkInstaller, Object caller, int status);

  /**
   * org.chromium.chrome.browser.webapps.WebApkInstaller.onInstallFinished
   * @param nativeWebApkInstaller (long)
   * @param caller (org.chromium.chrome.browser.webapps.WebApkInstaller)
   * @param result (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkInstaller_onInstallFinished(
      long nativeWebApkInstaller, Object caller, int result);

  /**
   * org.chromium.chrome.browser.webapps.WebApkPostShareTargetNavigator.nativeLoadViewForShareTargetPost
   * @param isMultipartEncoding (boolean)
   * @param names (java.lang.String[])
   * @param values (java.lang.String[])
   * @param isValueFileUris (boolean[])
   * @param filenames (java.lang.String[])
   * @param types (java.lang.String[])
   * @param startUrl (java.lang.String)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkPostShareTargetNavigator_nativeLoadViewForShareTargetPost(
      boolean isMultipartEncoding, String[] names, String[] values, boolean[] isValueFileUris,
      String[] filenames, String[] types, String startUrl, Object webContents);

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher.destroy
   * @param nativeWebApkUpdateDataFetcher (long)
   * @param caller (org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkUpdateDataFetcher_destroy(
      long nativeWebApkUpdateDataFetcher, Object caller);

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher.initialize
   * @param caller (org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher)
   * @param startUrl (java.lang.String)
   * @param scope (java.lang.String)
   * @param webManifestUrl (java.lang.String)
   * @param webManifestId (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_webapps_WebApkUpdateDataFetcher_initialize(
      Object caller, String startUrl, String scope, String webManifestUrl, String webManifestId);

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher.replaceWebContents
   * @param nativeWebApkUpdateDataFetcher (long)
   * @param caller (org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkUpdateDataFetcher_replaceWebContents(
      long nativeWebApkUpdateDataFetcher, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher.start
   * @param nativeWebApkUpdateDataFetcher (long)
   * @param caller (org.chromium.chrome.browser.webapps.WebApkUpdateDataFetcher)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkUpdateDataFetcher_start(
      long nativeWebApkUpdateDataFetcher, Object caller, Object webContents);

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateManager.getWebApkTargetShellVersion
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_webapps_WebApkUpdateManager_getWebApkTargetShellVersion(
      );

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateManager.storeWebApkUpdateRequestToFile
   * @param updateRequestPath (java.lang.String)
   * @param startUrl (java.lang.String)
   * @param scope (java.lang.String)
   * @param name (java.lang.String)
   * @param shortName (java.lang.String)
   * @param manifestId (java.lang.String)
   * @param appKey (java.lang.String)
   * @param primaryIconUrl (java.lang.String)
   * @param primaryIconData (java.lang.String)
   * @param isPrimaryIconMaskable (boolean)
   * @param splashIconUrl (java.lang.String)
   * @param splashIconData (java.lang.String)
   * @param isSplashIconMaskable (boolean)
   * @param iconUrls (java.lang.String[])
   * @param iconHashes (java.lang.String[])
   * @param displayMode (int)
   * @param orientation (int)
   * @param themeColor (long)
   * @param backgroundColor (long)
   * @param shareTargetAction (java.lang.String)
   * @param shareTargetParamTitle (java.lang.String)
   * @param shareTargetParamText (java.lang.String)
   * @param shareTargetParamIsMethodPost (boolean)
   * @param shareTargetParamIsEncTypeMultipart (boolean)
   * @param shareTargetParamFileNames (java.lang.String[])
   * @param shareTargetParamAccepts (java.lang.Object[])
   * @param shortcuts (java.lang.String[][])
   * @param shortcutIconData (byte[][])
   * @param manifestUrl (java.lang.String)
   * @param webApkPackage (java.lang.String)
   * @param webApkVersion (int)
   * @param isManifestStale (boolean)
   * @param isAppIdentityUpdateSupported (boolean)
   * @param updateReasons (int[])
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkUpdateManager_storeWebApkUpdateRequestToFile(
      String updateRequestPath, String startUrl, String scope, String name, String shortName,
      String manifestId, String appKey, String primaryIconUrl, String primaryIconData,
      boolean isPrimaryIconMaskable, String splashIconUrl, String splashIconData,
      boolean isSplashIconMaskable, String[] iconUrls, String[] iconHashes, int displayMode,
      int orientation, long themeColor, long backgroundColor, String shareTargetAction,
      String shareTargetParamTitle, String shareTargetParamText,
      boolean shareTargetParamIsMethodPost, boolean shareTargetParamIsEncTypeMultipart,
      String[] shareTargetParamFileNames, Object[] shareTargetParamAccepts, String[][] shortcuts,
      byte[][] shortcutIconData, String manifestUrl, String webApkPackage, int webApkVersion,
      boolean isManifestStale, boolean isAppIdentityUpdateSupported, int[] updateReasons,
      Object callback);

  /**
   * org.chromium.chrome.browser.webapps.WebApkUpdateManager.updateWebApkFromFile
   * @param updateRequestPath (java.lang.String)
   * @param callback (org.chromium.chrome.browser.webapps.WebApkUpdateManager.WebApkUpdateCallback)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_webapps_WebApkUpdateManager_updateWebApkFromFile(
      String updateRequestPath, Object callback);

  /**
   * org.chromium.chrome.browser.autofill_assistant.AssistantStaticDependenciesChrome.init
   * @param staticDependencies (org.chromium.components.autofill_assistant.AssistantStaticDependencies)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_autofill_1assistant_AssistantStaticDependenciesChrome_init(
      Object staticDependencies);

  /**
   * org.chromium.chrome.browser.vr.VrModuleProvider.onInstalledModule
   * @param nativeVrModuleProvider (long)
   * @param caller (org.chromium.chrome.browser.vr.VrModuleProvider)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_vr_VrModuleProvider_onInstalledModule(
      long nativeVrModuleProvider, Object caller, boolean success);

  /**
   * org.chromium.chrome.browser.vr.VrModuleProvider.registerJni
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_vr_VrModuleProvider_registerJni();

  /**
   * org.chromium.chrome.browser.share.BitmapDownloadRequest.downloadBitmap
   * @param fileName (java.lang.String)
   * @param bitmap (android.graphics.Bitmap)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_BitmapDownloadRequest_downloadBitmap(
      String fileName, Object bitmap);

  /**
   * org.chromium.chrome.browser.share.crow.CrowBridge.getPublicationIDForHost
   * @param host (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_share_crow_CrowBridge_getPublicationIDForHost(
      String host);

  /**
   * org.chromium.chrome.browser.share.crow.CrowBridge.getRecentVisitCountsToHost
   * @param url (org.chromium.url.GURL)
   * @param numDays (int)
   * @param callback (org.chromium.base.Callback<int[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_crow_CrowBridge_getRecentVisitCountsToHost(
      Object url, int numDays, Object callback);

  /**
   * org.chromium.chrome.browser.share.link_to_text.LinkToTextBridge.logFailureMetrics
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param error (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_link_1to_1text_LinkToTextBridge_logFailureMetrics(
      Object webContents, int error);

  /**
   * org.chromium.chrome.browser.share.link_to_text.LinkToTextBridge.logLinkRequestedBeforeStatus
   * @param status (int)
   * @param readyStatus (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_link_1to_1text_LinkToTextBridge_logLinkRequestedBeforeStatus(
      int status, int readyStatus);

  /**
   * org.chromium.chrome.browser.share.link_to_text.LinkToTextBridge.logLinkToTextReshareStatus
   * @param status (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_link_1to_1text_LinkToTextBridge_logLinkToTextReshareStatus(
      int status);

  /**
   * org.chromium.chrome.browser.share.link_to_text.LinkToTextBridge.logSuccessMetrics
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_link_1to_1text_LinkToTextBridge_logSuccessMetrics(
      Object webContents);

  /**
   * org.chromium.chrome.browser.share.link_to_text.LinkToTextBridge.shouldOfferLinkToText
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_share_link_1to_1text_LinkToTextBridge_shouldOfferLinkToText(
      Object url);

  /**
   * org.chromium.chrome.browser.share.link_to_text.LinkToTextBridge.supportsLinkGenerationInIframe
   * @param url (org.chromium.url.GURL)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_share_link_1to_1text_LinkToTextBridge_supportsLinkGenerationInIframe(
      Object url);

  /**
   * org.chromium.chrome.browser.share.long_screenshots.bitmap_generation.LongScreenshotsTabService.captureTabAndroid
   * @param nativeLongScreenshotsTabService (long)
   * @param tabId (int)
   * @param url (org.chromium.url.GURL)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param clipX (int)
   * @param clipY (int)
   * @param clipWidth (int)
   * @param clipHeight (int)
   * @param inMemory (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_long_1screenshots_bitmap_1generation_LongScreenshotsTabService_captureTabAndroid(
      long nativeLongScreenshotsTabService, int tabId, Object url, Object webContents, int clipX,
      int clipY, int clipWidth, int clipHeight, boolean inMemory);

  /**
   * org.chromium.chrome.browser.share.long_screenshots.bitmap_generation.LongScreenshotsTabService.longScreenshotsClosedAndroid
   * @param nativeLongScreenshotsTabService (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_long_1screenshots_bitmap_1generation_LongScreenshotsTabService_longScreenshotsClosedAndroid(
      long nativeLongScreenshotsTabService);

  /**
   * org.chromium.chrome.browser.share.long_screenshots.bitmap_generation.LongScreenshotsTabService.releaseCaptureResultPtr
   * @param captureResultPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_long_1screenshots_bitmap_1generation_LongScreenshotsTabService_releaseCaptureResultPtr(
      long captureResultPtr);

  /**
   * org.chromium.chrome.browser.share.long_screenshots.bitmap_generation.LongScreenshotsTabServiceFactory.getServiceInstanceForCurrentProfile
   * @return (org.chromium.chrome.browser.share.long_screenshots.bitmap_generation.LongScreenshotsTabService)
   */
  public static final native Object org_chromium_chrome_browser_share_long_1screenshots_bitmap_1generation_LongScreenshotsTabServiceFactory_getServiceInstanceForCurrentProfile(
      );

  /**
   * org.chromium.chrome.browser.share.qrcode.QRCodeGenerationRequest.destroy
   * @param nativeQRCodeGenerationRequest (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_qrcode_QRCodeGenerationRequest_destroy(
      long nativeQRCodeGenerationRequest);

  /**
   * org.chromium.chrome.browser.share.qrcode.QRCodeGenerationRequest.init
   * @param caller (org.chromium.chrome.browser.share.qrcode.QRCodeGenerationRequest)
   * @param data (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_share_qrcode_QRCodeGenerationRequest_init(
      Object caller, String data);

  /**
   * org.chromium.chrome.browser.share.screenshot.EditorScreenshotTask.grabWindowSnapshotAsync
   * @param callback (org.chromium.chrome.browser.share.screenshot.EditorScreenshotTask)
   * @param window (org.chromium.ui.base.WindowAndroid)
   * @param width (int)
   * @param height (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_screenshot_EditorScreenshotTask_grabWindowSnapshotAsync(
      Object callback, Object window, int width, int height);

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.MetricsRecorder.recordDeviceClickedInShareSheet
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_MetricsRecorder_recordDeviceClickedInShareSheet(
      );

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.MetricsRecorder.recordNotificationDismissed
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_MetricsRecorder_recordNotificationDismissed(
      );

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.MetricsRecorder.recordNotificationOpened
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_MetricsRecorder_recordNotificationOpened(
      );

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.MetricsRecorder.recordNotificationShown
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_MetricsRecorder_recordNotificationShown(
      );

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.MetricsRecorder.recordNotificationTimedOut
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_MetricsRecorder_recordNotificationTimedOut(
      );

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.SendTabToSelfAndroidBridge.addEntry
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @param title (java.lang.String)
   * @param targetDeviceSyncCacheGuid (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_share_send_1tab_1to_1self_SendTabToSelfAndroidBridge_addEntry(
      Object profile, String url, String title, String targetDeviceSyncCacheGuid);

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.SendTabToSelfAndroidBridge.deleteEntry
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_SendTabToSelfAndroidBridge_deleteEntry(
      Object profile, String guid);

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.SendTabToSelfAndroidBridge.dismissEntry
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param guid (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_SendTabToSelfAndroidBridge_dismissEntry(
      Object profile, String guid);

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.SendTabToSelfAndroidBridge.getAllTargetDeviceInfos
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.share.send_tab_to_self.TargetDeviceInfo[])
   */
  public static final native Object[] org_chromium_chrome_browser_share_send_1tab_1to_1self_SendTabToSelfAndroidBridge_getAllTargetDeviceInfos(
      Object profile);

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.SendTabToSelfAndroidBridge.getEntryPointDisplayReason
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param url (java.lang.String)
   * @return (java.lang.Integer)
   */
  public static final native Object org_chromium_chrome_browser_share_send_1tab_1to_1self_SendTabToSelfAndroidBridge_getEntryPointDisplayReason(
      Object profile, String url);

  /**
   * org.chromium.chrome.browser.share.send_tab_to_self.SendTabToSelfAndroidBridge.updateActiveWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_share_send_1tab_1to_1self_SendTabToSelfAndroidBridge_updateActiveWebContents(
      Object webContents);
}
