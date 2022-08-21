package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.midi.MidiInputPortAndroid.onData
   * @param nativeMidiInputPortAndroid (long)
   * @param bs (byte[])
   * @param offset (int)
   * @param count (int)
   * @param timestamp (long)
   * @return (void)
   */
  public static final native void org_chromium_midi_MidiInputPortAndroid_onData(
      long nativeMidiInputPortAndroid, byte[] bs, int offset, int count, long timestamp);

  /**
   * org.chromium.midi.MidiManagerAndroid.onAttached
   * @param nativeMidiManagerAndroid (long)
   * @param device (org.chromium.midi.MidiDeviceAndroid)
   * @return (void)
   */
  public static final native void org_chromium_midi_MidiManagerAndroid_onAttached(
      long nativeMidiManagerAndroid, Object device);

  /**
   * org.chromium.midi.MidiManagerAndroid.onDetached
   * @param nativeMidiManagerAndroid (long)
   * @param device (org.chromium.midi.MidiDeviceAndroid)
   * @return (void)
   */
  public static final native void org_chromium_midi_MidiManagerAndroid_onDetached(
      long nativeMidiManagerAndroid, Object device);

  /**
   * org.chromium.midi.MidiManagerAndroid.onInitializationFailed
   * @param nativeMidiManagerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_midi_MidiManagerAndroid_onInitializationFailed(
      long nativeMidiManagerAndroid);

  /**
   * org.chromium.midi.MidiManagerAndroid.onInitialized
   * @param nativeMidiManagerAndroid (long)
   * @param devices (org.chromium.midi.MidiDeviceAndroid[])
   * @return (void)
   */
  public static final native void org_chromium_midi_MidiManagerAndroid_onInitialized(
      long nativeMidiManagerAndroid, Object[] devices);

  /**
   * org.chromium.midi.UsbMidiDeviceAndroid.onData
   * @param nativeUsbMidiDeviceAndroid (long)
   * @param endpointNumber (int)
   * @param data (byte[])
   * @return (void)
   */
  public static final native void org_chromium_midi_UsbMidiDeviceAndroid_onData(
      long nativeUsbMidiDeviceAndroid, int endpointNumber, byte[] data);

  /**
   * org.chromium.midi.UsbMidiDeviceFactoryAndroid.onUsbMidiDeviceAttached
   * @param nativeUsbMidiDeviceFactoryAndroid (long)
   * @param device (java.lang.Object)
   * @return (void)
   */
  public static final native void org_chromium_midi_UsbMidiDeviceFactoryAndroid_onUsbMidiDeviceAttached(
      long nativeUsbMidiDeviceFactoryAndroid, Object device);

  /**
   * org.chromium.midi.UsbMidiDeviceFactoryAndroid.onUsbMidiDeviceDetached
   * @param nativeUsbMidiDeviceFactoryAndroid (long)
   * @param index (int)
   * @return (void)
   */
  public static final native void org_chromium_midi_UsbMidiDeviceFactoryAndroid_onUsbMidiDeviceDetached(
      long nativeUsbMidiDeviceFactoryAndroid, int index);

  /**
   * org.chromium.midi.UsbMidiDeviceFactoryAndroid.onUsbMidiDeviceRequestDone
   * @param nativeUsbMidiDeviceFactoryAndroid (long)
   * @param devices (java.lang.Object[])
   * @return (void)
   */
  public static final native void org_chromium_midi_UsbMidiDeviceFactoryAndroid_onUsbMidiDeviceRequestDone(
      long nativeUsbMidiDeviceFactoryAndroid, Object[] devices);
}
