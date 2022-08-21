package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.crash.CrashKeys.set
   * @param caller (org.chromium.components.crash.CrashKeys)
   * @param key (int)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_crash_CrashKeys_set(Object caller,
      int key, String value);
}
