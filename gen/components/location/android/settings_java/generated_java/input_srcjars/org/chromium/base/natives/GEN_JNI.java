package org.chromium.base.natives;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.location.LocationSettings.onLocationSettingsDialogOutcome
   * @param callback (long)
   * @param result (int)
   * @return (void)
   */
  public static final native void org_chromium_components_location_LocationSettings_onLocationSettingsDialogOutcome(
      long callback, int result);
}
