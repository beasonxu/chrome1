package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.permissions.PermissionsAndroidFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_permissions_PermissionsAndroidFeatureList_isEnabled(
      String featureName);

  /**
   * org.chromium.components.permissions.PermissionsAndroidFeatureList.isInitialized
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_permissions_PermissionsAndroidFeatureList_isInitialized(
      );
}
