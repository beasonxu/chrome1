package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.download.NetworkStatusListenerAndroid.notifyNetworkChange
   * @param nativeNetworkStatusListenerAndroid (long)
   * @param caller (org.chromium.components.download.NetworkStatusListenerAndroid)
   * @param connectionType (int)
   * @return (void)
   */
  public static final native void org_chromium_components_download_NetworkStatusListenerAndroid_notifyNetworkChange(
      long nativeNetworkStatusListenerAndroid, Object caller, int connectionType);

  /**
   * org.chromium.components.download.NetworkStatusListenerAndroid.onNetworkStatusReady
   * @param nativeNetworkStatusListenerAndroid (long)
   * @param caller (org.chromium.components.download.NetworkStatusListenerAndroid)
   * @param connectionType (int)
   * @return (void)
   */
  public static final native void org_chromium_components_download_NetworkStatusListenerAndroid_onNetworkStatusReady(
      long nativeNetworkStatusListenerAndroid, Object caller, int connectionType);
}
