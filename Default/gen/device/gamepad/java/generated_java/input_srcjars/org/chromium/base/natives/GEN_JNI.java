package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.gamepad.GamepadList.setGamepadData
   * @param caller (org.chromium.device.gamepad.GamepadList)
   * @param webGamepadsPtr (long)
   * @param index (int)
   * @param mapping (boolean)
   * @param connected (boolean)
   * @param devicename (java.lang.String)
   * @param vendorId (int)
   * @param productId (int)
   * @param timestamp (long)
   * @param axes (float[])
   * @param buttons (float[])
   * @param buttonsLength (int)
   * @param supportsDualRumble (boolean)
   * @return (void)
   */
  public static final native void org_chromium_device_gamepad_GamepadList_setGamepadData(
      Object caller, long webGamepadsPtr, int index, boolean mapping, boolean connected,
      String devicename, int vendorId, int productId, long timestamp, float[] axes, float[] buttons,
      int buttonsLength, boolean supportsDualRumble);
}
