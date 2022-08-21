package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.geolocation.LocationProviderAdapter.newErrorAvailable
   * @param message (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_device_geolocation_LocationProviderAdapter_newErrorAvailable(
      String message);

  /**
   * org.chromium.device.geolocation.LocationProviderAdapter.newLocationAvailable
   * @param latitude (double)
   * @param longitude (double)
   * @param timeStamp (double)
   * @param hasAltitude (boolean)
   * @param altitude (double)
   * @param hasAccuracy (boolean)
   * @param accuracy (double)
   * @param hasHeading (boolean)
   * @param heading (double)
   * @param hasSpeed (boolean)
   * @param speed (double)
   * @return (void)
   */
  public static final native void org_chromium_device_geolocation_LocationProviderAdapter_newLocationAvailable(
      double latitude, double longitude, double timeStamp, boolean hasAltitude, double altitude,
      boolean hasAccuracy, double accuracy, boolean hasHeading, double heading, boolean hasSpeed,
      double speed);
}
