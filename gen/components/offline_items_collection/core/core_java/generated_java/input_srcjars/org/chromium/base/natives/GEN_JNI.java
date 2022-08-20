package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.cancelDownload
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_cancelDownload(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.getAllItems
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param callback (org.chromium.base.Callback<java.util.ArrayList<org.chromium.components.offline_items_collection.OfflineItem>>)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_getAllItems(
      long nativeOfflineContentAggregatorBridge, Object caller, Object callback);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.getItemById
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.components.offline_items_collection.OfflineItem>)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_getItemById(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id,
      Object callback);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.getShareInfoForItem
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @param callback (org.chromium.components.offline_items_collection.ShareCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_getShareInfoForItem(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id,
      Object callback);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.getVisualsForItem
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @param callback (org.chromium.components.offline_items_collection.VisualsCallback)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_getVisualsForItem(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id,
      Object callback);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.openItem
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param location (int)
   * @param openInIncognito (boolean)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_openItem(
      long nativeOfflineContentAggregatorBridge, Object caller, int location,
      boolean openInIncognito, String nameSpace, String id);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.pauseDownload
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_pauseDownload(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.removeItem
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_removeItem(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.renameItem
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @param name (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.Integer>)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_renameItem(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id,
      String name, Object callback);

  /**
   * org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge.resumeDownload
   * @param nativeOfflineContentAggregatorBridge (long)
   * @param caller (org.chromium.components.offline_items_collection.OfflineContentAggregatorBridge)
   * @param nameSpace (java.lang.String)
   * @param id (java.lang.String)
   * @param hasUserGesture (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_offline_1items_1collection_OfflineContentAggregatorBridge_resumeDownload(
      long nativeOfflineContentAggregatorBridge, Object caller, String nameSpace, String id,
      boolean hasUserGesture);
}
