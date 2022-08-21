package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.ui.autofill.AuthenticatorSelectionDialogBridge.onDismissed
   * @param nativeAuthenticatorSelectionDialogViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_AuthenticatorSelectionDialogBridge_onDismissed(
      long nativeAuthenticatorSelectionDialogViewAndroid);

  /**
   * org.chromium.chrome.browser.ui.autofill.AuthenticatorSelectionDialogBridge.onOptionSelected
   * @param nativeAuthenticatorSelectionDialogViewAndroid (long)
   * @param authenticatorOptionIdentifier (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_AuthenticatorSelectionDialogBridge_onOptionSelected(
      long nativeAuthenticatorSelectionDialogViewAndroid, String authenticatorOptionIdentifier);

  /**
   * org.chromium.chrome.browser.ui.autofill.AutofillErrorDialogBridge.onDismissed
   * @param nativeAutofillErrorDialogViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_AutofillErrorDialogBridge_onDismissed(
      long nativeAutofillErrorDialogViewAndroid);

  /**
   * org.chromium.chrome.browser.ui.autofill.AutofillProgressDialogBridge.onDismissed
   * @param nativeAutofillProgressDialogViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_AutofillProgressDialogBridge_onDismissed(
      long nativeAutofillProgressDialogViewAndroid);

  /**
   * org.chromium.chrome.browser.ui.autofill.OtpVerificationDialogBridge.onConfirm
   * @param nativeOtpVerificationDialogViewAndroid (long)
   * @param otp (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_OtpVerificationDialogBridge_onConfirm(
      long nativeOtpVerificationDialogViewAndroid, String otp);

  /**
   * org.chromium.chrome.browser.ui.autofill.OtpVerificationDialogBridge.onDialogDismissed
   * @param nativeOtpVerificationDialogViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_OtpVerificationDialogBridge_onDialogDismissed(
      long nativeOtpVerificationDialogViewAndroid);

  /**
   * org.chromium.chrome.browser.ui.autofill.OtpVerificationDialogBridge.onNewOtpRequested
   * @param nativeOtpVerificationDialogViewAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_ui_autofill_OtpVerificationDialogBridge_onNewOtpRequested(
      long nativeOtpVerificationDialogViewAndroid);
}
