package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.external_intents.ExternalIntentsFeatures.getFeature
   * @param ordinal (int)
   * @return (long)
   */
  public static final native long org_chromium_components_external_1intents_ExternalIntentsFeatures_getFeature(
      int ordinal);

  /**
   * org.chromium.components.external_intents.InterceptNavigationDelegateImpl.associateWithWebContents
   * @param nativeInterceptNavigationDelegateImpl (org.chromium.components.external_intents.InterceptNavigationDelegateImpl)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_components_external_1intents_InterceptNavigationDelegateImpl_associateWithWebContents(
      Object nativeInterceptNavigationDelegateImpl, Object webContents);
}
