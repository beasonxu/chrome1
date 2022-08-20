package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.security_interstitials.CaptivePortalHelper.setCaptivePortalCertificateForTesting
   * @param spkiHash (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_security_1interstitials_CaptivePortalHelper_setCaptivePortalCertificateForTesting(
      String spkiHash);

  /**
   * org.chromium.components.security_interstitials.CaptivePortalHelper.setOSReportsCaptivePortalForTesting
   * @param osReportsCaptivePortal (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_security_1interstitials_CaptivePortalHelper_setOSReportsCaptivePortalForTesting(
      boolean osReportsCaptivePortal);
}
