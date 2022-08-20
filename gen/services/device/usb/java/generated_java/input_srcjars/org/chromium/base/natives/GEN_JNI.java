package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.usb.ChromeUsbService.deviceAttached
   * @param nativeUsbServiceAndroid (long)
   * @param caller (org.chromium.device.usb.ChromeUsbService)
   * @param device (android.hardware.usb.UsbDevice)
   * @return (void)
   */
  public static final native void org_chromium_device_usb_ChromeUsbService_deviceAttached(
      long nativeUsbServiceAndroid, Object caller, Object device);

  /**
   * org.chromium.device.usb.ChromeUsbService.deviceDetached
   * @param nativeUsbServiceAndroid (long)
   * @param caller (org.chromium.device.usb.ChromeUsbService)
   * @param deviceId (int)
   * @return (void)
   */
  public static final native void org_chromium_device_usb_ChromeUsbService_deviceDetached(
      long nativeUsbServiceAndroid, Object caller, int deviceId);

  /**
   * org.chromium.device.usb.ChromeUsbService.devicePermissionRequestComplete
   * @param nativeUsbServiceAndroid (long)
   * @param caller (org.chromium.device.usb.ChromeUsbService)
   * @param deviceId (int)
   * @param granted (boolean)
   * @return (void)
   */
  public static final native void org_chromium_device_usb_ChromeUsbService_devicePermissionRequestComplete(
      long nativeUsbServiceAndroid, Object caller, int deviceId, boolean granted);
}
