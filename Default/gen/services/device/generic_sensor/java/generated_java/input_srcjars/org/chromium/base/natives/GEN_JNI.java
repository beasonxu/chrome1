package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.sensors.PlatformSensor.notifyPlatformSensorError
   * @param nativePlatformSensorAndroid (long)
   * @param caller (org.chromium.device.sensors.PlatformSensor)
   * @return (void)
   */
  public static final native void org_chromium_device_sensors_PlatformSensor_notifyPlatformSensorError(
      long nativePlatformSensorAndroid, Object caller);

  /**
   * org.chromium.device.sensors.PlatformSensor.updatePlatformSensorReading
   * @param nativePlatformSensorAndroid (long)
   * @param caller (org.chromium.device.sensors.PlatformSensor)
   * @param timestamp (double)
   * @param value1 (double)
   * @param value2 (double)
   * @param value3 (double)
   * @param value4 (double)
   * @return (void)
   */
  public static final native void org_chromium_device_sensors_PlatformSensor_updatePlatformSensorReading(
      long nativePlatformSensorAndroid, Object caller, double timestamp, double value1,
      double value2, double value3, double value4);
}
