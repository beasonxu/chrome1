package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.gcm_driver.instance_id.InstanceIDBridge.didDeleteID
   * @param nativeInstanceIDAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.instance_id.InstanceIDBridge)
   * @param requestId (int)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_instance_1id_InstanceIDBridge_didDeleteID(
      long nativeInstanceIDAndroid, Object caller, int requestId, boolean success);

  /**
   * org.chromium.components.gcm_driver.instance_id.InstanceIDBridge.didDeleteToken
   * @param nativeInstanceIDAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.instance_id.InstanceIDBridge)
   * @param requestId (int)
   * @param success (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_instance_1id_InstanceIDBridge_didDeleteToken(
      long nativeInstanceIDAndroid, Object caller, int requestId, boolean success);

  /**
   * org.chromium.components.gcm_driver.instance_id.InstanceIDBridge.didGetCreationTime
   * @param nativeInstanceIDAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.instance_id.InstanceIDBridge)
   * @param requestId (int)
   * @param creationTime (long)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_instance_1id_InstanceIDBridge_didGetCreationTime(
      long nativeInstanceIDAndroid, Object caller, int requestId, long creationTime);

  /**
   * org.chromium.components.gcm_driver.instance_id.InstanceIDBridge.didGetID
   * @param nativeInstanceIDAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.instance_id.InstanceIDBridge)
   * @param requestId (int)
   * @param id (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_instance_1id_InstanceIDBridge_didGetID(
      long nativeInstanceIDAndroid, Object caller, int requestId, String id);

  /**
   * org.chromium.components.gcm_driver.instance_id.InstanceIDBridge.didGetToken
   * @param nativeInstanceIDAndroid (long)
   * @param caller (org.chromium.components.gcm_driver.instance_id.InstanceIDBridge)
   * @param requestId (int)
   * @param token (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_gcm_1driver_instance_1id_InstanceIDBridge_didGetToken(
      long nativeInstanceIDAndroid, Object caller, int requestId, String token);
}
