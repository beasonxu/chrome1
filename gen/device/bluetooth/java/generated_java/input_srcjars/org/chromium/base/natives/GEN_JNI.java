package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothAdapter.createOrUpdateDeviceOnScan
   * @param nativeBluetoothAdapterAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothAdapter)
   * @param address (java.lang.String)
   * @param deviceWrapper (org.chromium.device.bluetooth.Wrappers.BluetoothDeviceWrapper)
   * @param localName (java.lang.String)
   * @param rssi (int)
   * @param advertisedUuids (java.lang.String[])
   * @param txPower (int)
   * @param serviceDataKeys (java.lang.String[])
   * @param serviceDataValues (java.lang.Object[])
   * @param manufacturerDataKeys (int[])
   * @param manufacturerDataValues (java.lang.Object[])
   * @param advertiseFlags (int)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothAdapter_createOrUpdateDeviceOnScan(
      long nativeBluetoothAdapterAndroid, Object caller, String address, Object deviceWrapper,
      String localName, int rssi, String[] advertisedUuids, int txPower, String[] serviceDataKeys,
      Object[] serviceDataValues, int[] manufacturerDataKeys, Object[] manufacturerDataValues,
      int advertiseFlags);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothAdapter.onAdapterStateChanged
   * @param nativeBluetoothAdapterAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothAdapter)
   * @param powered (boolean)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothAdapter_onAdapterStateChanged(
      long nativeBluetoothAdapterAndroid, Object caller, boolean powered);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothAdapter.onScanFailed
   * @param nativeBluetoothAdapterAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothAdapter)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothAdapter_onScanFailed(
      long nativeBluetoothAdapterAndroid, Object caller);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothDevice.createGattRemoteService
   * @param nativeBluetoothDeviceAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothDevice)
   * @param instanceId (java.lang.String)
   * @param serviceWrapper (org.chromium.device.bluetooth.Wrappers.BluetoothGattServiceWrapper)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothDevice_createGattRemoteService(
      long nativeBluetoothDeviceAndroid, Object caller, String instanceId, Object serviceWrapper);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothDevice.onConnectionStateChange
   * @param nativeBluetoothDeviceAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothDevice)
   * @param status (int)
   * @param connected (boolean)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothDevice_onConnectionStateChange(
      long nativeBluetoothDeviceAndroid, Object caller, int status, boolean connected);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothDevice.onGattServicesDiscovered
   * @param nativeBluetoothDeviceAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothDevice)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothDevice_onGattServicesDiscovered(
      long nativeBluetoothDeviceAndroid, Object caller);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic.createGattRemoteDescriptor
   * @param nativeBluetoothRemoteGattCharacteristicAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic)
   * @param instanceId (java.lang.String)
   * @param descriptorWrapper (org.chromium.device.bluetooth.Wrappers.BluetoothGattDescriptorWrapper)
   * @param chromeBluetoothDevice (org.chromium.device.bluetooth.ChromeBluetoothDevice)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_createGattRemoteDescriptor(
      long nativeBluetoothRemoteGattCharacteristicAndroid, Object caller, String instanceId,
      Object descriptorWrapper, Object chromeBluetoothDevice);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic.onChanged
   * @param nativeBluetoothRemoteGattCharacteristicAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic)
   * @param value (byte[])
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_onChanged(
      long nativeBluetoothRemoteGattCharacteristicAndroid, Object caller, byte[] value);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic.onRead
   * @param nativeBluetoothRemoteGattCharacteristicAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic)
   * @param status (int)
   * @param value (byte[])
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_onRead(
      long nativeBluetoothRemoteGattCharacteristicAndroid, Object caller, int status, byte[] value);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic.onWrite
   * @param nativeBluetoothRemoteGattCharacteristicAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattCharacteristic)
   * @param status (int)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattCharacteristic_onWrite(
      long nativeBluetoothRemoteGattCharacteristicAndroid, Object caller, int status);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattDescriptor.onRead
   * @param nativeBluetoothRemoteGattDescriptorAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattDescriptor)
   * @param status (int)
   * @param value (byte[])
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattDescriptor_onRead(
      long nativeBluetoothRemoteGattDescriptorAndroid, Object caller, int status, byte[] value);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattDescriptor.onWrite
   * @param nativeBluetoothRemoteGattDescriptorAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattDescriptor)
   * @param status (int)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattDescriptor_onWrite(
      long nativeBluetoothRemoteGattDescriptorAndroid, Object caller, int status);

  /**
   * org.chromium.device.bluetooth.ChromeBluetoothRemoteGattService.createGattRemoteCharacteristic
   * @param nativeBluetoothRemoteGattServiceAndroid (long)
   * @param caller (org.chromium.device.bluetooth.ChromeBluetoothRemoteGattService)
   * @param instanceId (java.lang.String)
   * @param characteristicWrapper (org.chromium.device.bluetooth.Wrappers.BluetoothGattCharacteristicWrapper)
   * @param chromeBluetoothDevice (org.chromium.device.bluetooth.ChromeBluetoothDevice)
   * @return (void)
   */
  public static final native void org_chromium_device_bluetooth_ChromeBluetoothRemoteGattService_createGattRemoteCharacteristic(
      long nativeBluetoothRemoteGattServiceAndroid, Object caller, String instanceId,
      Object characteristicWrapper, Object chromeBluetoothDevice);
}
