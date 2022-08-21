package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.browser_ui.client_certificate.SSLClientCertificateRequest.notifyClientCertificatesChangedOnIOThread
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_client_1certificate_SSLClientCertificateRequest_notifyClientCertificatesChangedOnIOThread(
      );

  /**
   * org.chromium.components.browser_ui.client_certificate.SSLClientCertificateRequest.onSystemRequestCompletion
   * @param requestPtr (long)
   * @param certChain (byte[][])
   * @param privateKey (java.security.PrivateKey)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_client_1certificate_SSLClientCertificateRequest_onSystemRequestCompletion(
      long requestPtr, byte[][] certChain, Object privateKey);
}
