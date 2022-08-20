package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.time_zone_monitor.TimeZoneMonitor.timeZoneChangedFromJava
   * @param nativeTimeZoneMonitorAndroid (long)
   * @param caller (org.chromium.device.time_zone_monitor.TimeZoneMonitor)
   * @return (void)
   */
  public static final native void org_chromium_device_time_1zone_1monitor_TimeZoneMonitor_timeZoneChangedFromJava(
      long nativeTimeZoneMonitorAndroid, Object caller);
}
