package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.bluetooth.BluetoothBridge.isWebContentsConnectedToBluetoothDevice
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bluetooth_BluetoothBridge_isWebContentsConnectedToBluetoothDevice(
      Object webContents);

  /**
   * org.chromium.chrome.browser.bluetooth.BluetoothBridge.isWebContentsScanningForBluetoothDevices
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_bluetooth_BluetoothBridge_isWebContentsScanningForBluetoothDevices(
      Object webContents);
}
