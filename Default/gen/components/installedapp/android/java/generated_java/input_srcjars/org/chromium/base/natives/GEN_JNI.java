package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.installedapp.InstalledAppProviderImpl.checkDigitalAssetLinksRelationshipForWebApk
   * @param handle (org.chromium.content_public.browser.BrowserContextHandle)
   * @param webDomain (java.lang.String)
   * @param manifestUrl (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_components_installedapp_InstalledAppProviderImpl_checkDigitalAssetLinksRelationshipForWebApk(
      Object handle, String webDomain, String manifestUrl, Object callback);
}
