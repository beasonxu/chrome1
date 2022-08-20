package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.query_tiles.bridges.TileProviderBridge.getQueryTiles
   * @param nativeTileProviderBridge (long)
   * @param caller (org.chromium.components.query_tiles.bridges.TileProviderBridge)
   * @param tileId (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.components.query_tiles.QueryTile>>)
   * @return (void)
   */
  public static final native void org_chromium_components_query_1tiles_bridges_TileProviderBridge_getQueryTiles(
      long nativeTileProviderBridge, Object caller, String tileId, Object callback);

  /**
   * org.chromium.components.query_tiles.bridges.TileProviderBridge.onTileClicked
   * @param nativeTileProviderBridge (long)
   * @param tileId (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_query_1tiles_bridges_TileProviderBridge_onTileClicked(
      long nativeTileProviderBridge, String tileId);
}
