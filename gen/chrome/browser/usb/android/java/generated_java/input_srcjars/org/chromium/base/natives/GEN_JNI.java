package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.usb.UsbBridge.isWebContentsConnectedToUsbDevice
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_usb_UsbBridge_isWebContentsConnectedToUsbDevice(
      Object webContents);
}
