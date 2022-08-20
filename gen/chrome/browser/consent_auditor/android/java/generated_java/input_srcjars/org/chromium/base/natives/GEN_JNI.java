package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.consent_auditor.ConsentAuditorBridge.recordConsent
   * @param caller (org.chromium.chrome.browser.consent_auditor.ConsentAuditorBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param accountId (org.chromium.components.signin.base.CoreAccountId)
   * @param feature (int)
   * @param consentDescription (int[])
   * @param consentConfirmation (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_consent_1auditor_ConsentAuditorBridge_recordConsent(
      Object caller, Object profile, Object accountId, int feature, int[] consentDescription,
      int consentConfirmation);
}
