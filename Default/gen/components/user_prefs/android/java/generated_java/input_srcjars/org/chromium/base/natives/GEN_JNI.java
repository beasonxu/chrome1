package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.user_prefs.UserPrefs.get
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (org.chromium.components.prefs.PrefService)
   */
  public static final native Object org_chromium_components_user_1prefs_UserPrefs_get(
      Object browserContextHandle);
}
