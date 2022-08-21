package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.net.GURLUtils.getOrigin
   * @param url (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_net_GURLUtils_getOrigin(String url);

  /**
   * org.chromium.net.HttpNegotiateAuthenticator.setResult
   * @param nativeJavaNegotiateResultWrapper (long)
   * @param caller (org.chromium.net.HttpNegotiateAuthenticator)
   * @param status (int)
   * @param authToken (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_net_HttpNegotiateAuthenticator_setResult(
      long nativeJavaNegotiateResultWrapper, Object caller, int status, String authToken);

  /**
   * org.chromium.net.HttpUtil.isAllowedHeader
   * @param headerName (java.lang.String)
   * @param headerValue (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_net_HttpUtil_isAllowedHeader(String headerName,
      String headerValue);

  /**
   * org.chromium.net.NetworkActiveNotifier.notifyOfDefaultNetworkActive
   * @param nativePtr (long)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkActiveNotifier_notifyOfDefaultNetworkActive(
      long nativePtr);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyConnectionCostChanged
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param newConnectionCost (int)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyConnectionCostChanged(
      long nativePtr, Object caller, int newConnectionCost);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyConnectionTypeChanged
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param newConnectionType (int)
   * @param defaultNetId (long)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyConnectionTypeChanged(
      long nativePtr, Object caller, int newConnectionType, long defaultNetId);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyMaxBandwidthChanged
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param subType (int)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyMaxBandwidthChanged(
      long nativePtr, Object caller, int subType);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyOfNetworkConnect
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param netId (long)
   * @param connectionType (int)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyOfNetworkConnect(
      long nativePtr, Object caller, long netId, int connectionType);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyOfNetworkDisconnect
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param netId (long)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyOfNetworkDisconnect(
      long nativePtr, Object caller, long netId);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyOfNetworkSoonToDisconnect
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param netId (long)
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyOfNetworkSoonToDisconnect(
      long nativePtr, Object caller, long netId);

  /**
   * org.chromium.net.NetworkChangeNotifier.notifyPurgeActiveNetworkList
   * @param nativePtr (long)
   * @param caller (org.chromium.net.NetworkChangeNotifier)
   * @param activeNetIds (long[])
   * @return (void)
   */
  public static final native void org_chromium_net_NetworkChangeNotifier_notifyPurgeActiveNetworkList(
      long nativePtr, Object caller, long[] activeNetIds);

  /**
   * org.chromium.net.ProxyChangeListener.proxySettingsChanged
   * @param nativePtr (long)
   * @param caller (org.chromium.net.ProxyChangeListener)
   * @return (void)
   */
  public static final native void org_chromium_net_ProxyChangeListener_proxySettingsChanged(
      long nativePtr, Object caller);

  /**
   * org.chromium.net.ProxyChangeListener.proxySettingsChangedTo
   * @param nativePtr (long)
   * @param caller (org.chromium.net.ProxyChangeListener)
   * @param host (java.lang.String)
   * @param port (int)
   * @param pacUrl (java.lang.String)
   * @param exclusionList (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_net_ProxyChangeListener_proxySettingsChangedTo(
      long nativePtr, Object caller, String host, int port, String pacUrl, String[] exclusionList);

  /**
   * org.chromium.net.X509Util.notifyKeyChainChanged
   * @return (void)
   */
  public static final native void org_chromium_net_X509Util_notifyKeyChainChanged();
}
