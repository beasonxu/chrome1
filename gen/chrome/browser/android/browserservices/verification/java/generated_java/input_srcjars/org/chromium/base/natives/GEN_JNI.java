package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.browserservices.verification.OriginVerifier.destroy
   * @param nativeOriginVerifier (long)
   * @param caller (org.chromium.chrome.browser.browserservices.verification.OriginVerifier)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_browserservices_verification_OriginVerifier_destroy(
      long nativeOriginVerifier, Object caller);

  /**
   * org.chromium.chrome.browser.browserservices.verification.OriginVerifier.init
   * @param caller (org.chromium.chrome.browser.browserservices.verification.OriginVerifier)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_browserservices_verification_OriginVerifier_init(
      Object caller, Object webContents, Object profile);

  /**
   * org.chromium.chrome.browser.browserservices.verification.OriginVerifier.verifyOrigin
   * @param nativeOriginVerifier (long)
   * @param caller (org.chromium.chrome.browser.browserservices.verification.OriginVerifier)
   * @param packageName (java.lang.String)
   * @param signatureFingerprint (java.lang.String)
   * @param origin (java.lang.String)
   * @param relationship (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_browserservices_verification_OriginVerifier_verifyOrigin(
      long nativeOriginVerifier, Object caller, String packageName, String signatureFingerprint,
      String origin, String relationship);
}
