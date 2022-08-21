package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge.deletionConfirmed
   * @param nativeAutofillKeyboardAccessoryView (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_AutofillKeyboardAccessoryViewBridge_deletionConfirmed(
      long nativeAutofillKeyboardAccessoryView, Object caller);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge.deletionRequested
   * @param nativeAutofillKeyboardAccessoryView (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge)
   * @param listIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_AutofillKeyboardAccessoryViewBridge_deletionRequested(
      long nativeAutofillKeyboardAccessoryView, Object caller, int listIndex);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge.suggestionSelected
   * @param nativeAutofillKeyboardAccessoryView (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge)
   * @param listIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_AutofillKeyboardAccessoryViewBridge_suggestionSelected(
      long nativeAutofillKeyboardAccessoryView, Object caller, int listIndex);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge.viewDismissed
   * @param nativeAutofillKeyboardAccessoryView (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.AutofillKeyboardAccessoryViewBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_AutofillKeyboardAccessoryViewBridge_viewDismissed(
      long nativeAutofillKeyboardAccessoryView, Object caller);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.cachePasswordSheetDataForTesting
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param userNames (java.lang.String[])
   * @param passwords (java.lang.String[])
   * @param originDenylisted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_cachePasswordSheetDataForTesting(
      Object webContents, String[] userNames, String[] passwords, boolean originDenylisted);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.disableServerPredictionsForTesting
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_disableServerPredictionsForTesting(
      );

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.notifyFocusedFieldTypeForTesting
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param focusedFieldId (long)
   * @param focusedFieldType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_notifyFocusedFieldTypeForTesting(
      Object webContents, long focusedFieldId, int focusedFieldType);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.onFillingTriggered
   * @param nativeManualFillingViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge)
   * @param tabType (int)
   * @param userInfoField (org.chromium.chrome.browser.keyboard_accessory.data.UserInfoField)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_onFillingTriggered(
      long nativeManualFillingViewAndroid, Object caller, int tabType, Object userInfoField);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.onOptionSelected
   * @param nativeManualFillingViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge)
   * @param accessoryAction (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_onOptionSelected(
      long nativeManualFillingViewAndroid, Object caller, int accessoryAction);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.onToggleChanged
   * @param nativeManualFillingViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge)
   * @param accessoryAction (int)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_onToggleChanged(
      long nativeManualFillingViewAndroid, Object caller, int accessoryAction, boolean enabled);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.onViewDestroyed
   * @param nativeManualFillingViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_onViewDestroyed(
      long nativeManualFillingViewAndroid, Object caller);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.requestAccessorySheet
   * @param nativeManualFillingViewAndroid (long)
   * @param caller (org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge)
   * @param sheetType (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_requestAccessorySheet(
      long nativeManualFillingViewAndroid, Object caller, int sheetType);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.ManualFillingComponentBridge.signalAutoGenerationStatusForTesting
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param available (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_ManualFillingComponentBridge_signalAutoGenerationStatusForTesting(
      Object webContents, boolean available);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.all_passwords_bottom_sheet.AllPasswordsBottomSheetBridge.onCredentialSelected
   * @param nativeAllPasswordsBottomSheetViewImpl (long)
   * @param username (java.lang.String)
   * @param password (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_all_1passwords_1bottom_1sheet_AllPasswordsBottomSheetBridge_onCredentialSelected(
      long nativeAllPasswordsBottomSheetViewImpl, String username, String password);

  /**
   * org.chromium.chrome.browser.keyboard_accessory.all_passwords_bottom_sheet.AllPasswordsBottomSheetBridge.onDismiss
   * @param nativeAllPasswordsBottomSheetViewImpl (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_keyboard_1accessory_all_1passwords_1bottom_1sheet_AllPasswordsBottomSheetBridge_onDismiss(
      long nativeAllPasswordsBottomSheetViewImpl);
}
