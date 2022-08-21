package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.gcm_driver.GCMDriver.onMessageReceived
   * @param nativeGCMDriverAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.GCMDriver)
   * @param appId (java.lang.String)
   * @param senderId (java.lang.String)
   * @param messageId (java.lang.String)
   * @param collapseKey (java.lang.String)
   * @param rawData (byte[])
   * @param dataKeysAndValues (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_GCMDriver_onMessageReceived(
      long nativeGCMDriverAndroid, Object caller, String appId, String senderId, String messageId,
      String collapseKey, byte[] rawData, String[] dataKeysAndValues);

  /**
   * org.chromium.components.gcm_driver.GCMDriver.onRegisterFinished
   * @param nativeGCMDriverAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.GCMDriver)
   * @param appId (java.lang.String)
   * @param registrationId (java.lang.String)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_GCMDriver_onRegisterFinished(
      long nativeGCMDriverAndroid, Object caller, String appId, String registrationId,
      boolean success);

  /**
   * org.chromium.components.gcm_driver.GCMDriver.onUnregisterFinished
   * @param nativeGCMDriverAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.GCMDriver)
   * @param appId (java.lang.String)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_GCMDriver_onUnregisterFinished(
      long nativeGCMDriverAndroid, Object caller, String appId, boolean success);
}
