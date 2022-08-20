package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.DeviceFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_device_DeviceFeatureList_isEnabled(
      String featureName);
}
