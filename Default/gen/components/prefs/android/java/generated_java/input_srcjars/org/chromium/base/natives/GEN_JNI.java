package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.prefs.PrefService.clearPref
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_prefs_PrefService_clearPref(
      long nativePrefServiceAndroid, String preference);

  /**
   * org.chromium.components.prefs.PrefService.getBoolean
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_prefs_PrefService_getBoolean(
      long nativePrefServiceAndroid, String preference);

  /**
   * org.chromium.components.prefs.PrefService.getInteger
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_components_prefs_PrefService_getInteger(
      long nativePrefServiceAndroid, String preference);

  /**
   * org.chromium.components.prefs.PrefService.getString
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_prefs_PrefService_getString(
      long nativePrefServiceAndroid, String preference);

  /**
   * org.chromium.components.prefs.PrefService.hasPrefPath
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_prefs_PrefService_hasPrefPath(
      long nativePrefServiceAndroid, String preference);

  /**
   * org.chromium.components.prefs.PrefService.isManagedPreference
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_prefs_PrefService_isManagedPreference(
      long nativePrefServiceAndroid, String preference);

  /**
   * org.chromium.components.prefs.PrefService.setBoolean
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_prefs_PrefService_setBoolean(
      long nativePrefServiceAndroid, String preference, boolean value);

  /**
   * org.chromium.components.prefs.PrefService.setInteger
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @param value (int)
   * @return (void)
   */
  public static final native void org_chromium_components_prefs_PrefService_setInteger(
      long nativePrefServiceAndroid, String preference, int value);

  /**
   * org.chromium.components.prefs.PrefService.setString
   * @param nativePrefServiceAndroid (long)
   * @param preference (java.lang.String)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_prefs_PrefService_setString(
      long nativePrefServiceAndroid, String preference, String value);
}
