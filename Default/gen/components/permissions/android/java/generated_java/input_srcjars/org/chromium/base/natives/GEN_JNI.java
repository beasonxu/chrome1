package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.permissions.BluetoothChooserDialog.onDialogFinished
   * @param nativeBluetoothChooserAndroid (long)
   * @param eventType (int)
   * @param deviceId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_BluetoothChooserDialog_onDialogFinished(
      long nativeBluetoothChooserAndroid, int eventType, String deviceId);

  /**
   * org.chromium.components.permissions.BluetoothChooserDialog.restartSearch
   * @param nativeBluetoothChooserAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_BluetoothChooserDialog_restartSearch(
      long nativeBluetoothChooserAndroid);

  /**
   * org.chromium.components.permissions.BluetoothChooserDialog.showBluetoothAdapterOffLink
   * @param nativeBluetoothChooserAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_BluetoothChooserDialog_showBluetoothAdapterOffLink(
      long nativeBluetoothChooserAndroid);

  /**
   * org.chromium.components.permissions.BluetoothChooserDialog.showBluetoothOverviewLink
   * @param nativeBluetoothChooserAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_BluetoothChooserDialog_showBluetoothOverviewLink(
      long nativeBluetoothChooserAndroid);

  /**
   * org.chromium.components.permissions.BluetoothChooserDialog.showNeedLocationPermissionLink
   * @param nativeBluetoothChooserAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_BluetoothChooserDialog_showNeedLocationPermissionLink(
      long nativeBluetoothChooserAndroid);

  /**
   * org.chromium.components.permissions.BluetoothScanningPermissionDialog.onDialogFinished
   * @param nativeBluetoothScanningPromptAndroid (long)
   * @param eventType (int)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_BluetoothScanningPermissionDialog_onDialogFinished(
      long nativeBluetoothScanningPromptAndroid, int eventType);

  /**
   * org.chromium.components.permissions.PermissionDialogDelegate.accept
   * @param nativePermissionDialogDelegate (long)
   * @param caller (org.chromium.components.permissions.PermissionDialogDelegate)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_PermissionDialogDelegate_accept(
      long nativePermissionDialogDelegate, Object caller);

  /**
   * org.chromium.components.permissions.PermissionDialogDelegate.cancel
   * @param nativePermissionDialogDelegate (long)
   * @param caller (org.chromium.components.permissions.PermissionDialogDelegate)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_PermissionDialogDelegate_cancel(
      long nativePermissionDialogDelegate, Object caller);

  /**
   * org.chromium.components.permissions.PermissionDialogDelegate.destroy
   * @param nativePermissionDialogDelegate (long)
   * @param caller (org.chromium.components.permissions.PermissionDialogDelegate)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_PermissionDialogDelegate_destroy(
      long nativePermissionDialogDelegate, Object caller);

  /**
   * org.chromium.components.permissions.PermissionDialogDelegate.dismissed
   * @param nativePermissionDialogDelegate (long)
   * @param caller (org.chromium.components.permissions.PermissionDialogDelegate)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_PermissionDialogDelegate_dismissed(
      long nativePermissionDialogDelegate, Object caller);

  /**
   * org.chromium.components.permissions.PermissionDialogDelegate.getRequestTypeEnumSize
   * @return (int)
   */
  public static final native int org_chromium_components_permissions_PermissionDialogDelegate_getRequestTypeEnumSize(
      );

  /**
   * org.chromium.components.permissions.nfc.NfcSystemLevelSetting.onNfcSystemLevelPromptCompleted
   * @param callback (long)
   * @return (void)
   */
  public static final native void org_chromium_components_permissions_nfc_NfcSystemLevelSetting_onNfcSystemLevelPromptCompleted(
      long callback);
}
