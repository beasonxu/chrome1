package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.security_state.SecurityStateModel.getSecurityLevelForWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (int)
   */
  public static final native int org_chromium_components_security_1state_SecurityStateModel_getSecurityLevelForWebContents(
      Object webContents);
}
