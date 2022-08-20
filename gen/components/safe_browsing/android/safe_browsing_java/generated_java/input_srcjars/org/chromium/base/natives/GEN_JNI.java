package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.safe_browsing.SafeBrowsingApiBridge.onUrlCheckDone
   * @param callbackId (long)
   * @param resultStatus (int)
   * @param metadata (java.lang.String)
   * @param checkDelta (long)
   * @return (void)
   */
  public static final native void org_chromium_components_safe_1browsing_SafeBrowsingApiBridge_onUrlCheckDone(
      long callbackId, int resultStatus, String metadata, long checkDelta);
}
