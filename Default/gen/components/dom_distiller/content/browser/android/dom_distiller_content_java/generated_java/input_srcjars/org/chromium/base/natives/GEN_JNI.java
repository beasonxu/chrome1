package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.dom_distiller.content.DistillablePageUtils.setDelegate
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param delegate (org.chromium.components.dom_distiller.content.DistillablePageUtils.PageDistillableDelegate)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_content_DistillablePageUtils_setDelegate(
      Object webContents, Object delegate);
}
