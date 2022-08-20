package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.activateFindInPageResultForAccessibility
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @return (void)
   */
  public static final native void org_chromium_components_find_1in_1page_FindInPageBridge_activateFindInPageResultForAccessibility(
      long nativeFindInPageBridge, Object caller);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.activateNearestFindResult
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @param x (float)
   * @param y (float)
   * @return (void)
   */
  public static final native void org_chromium_components_find_1in_1page_FindInPageBridge_activateNearestFindResult(
      long nativeFindInPageBridge, Object caller, float x, float y);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.destroy
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @return (void)
   */
  public static final native void org_chromium_components_find_1in_1page_FindInPageBridge_destroy(
      long nativeFindInPageBridge, Object caller);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.getPreviousFindText
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_find_1in_1page_FindInPageBridge_getPreviousFindText(
      long nativeFindInPageBridge, Object caller);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.init
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (long)
   */
  public static final native long org_chromium_components_find_1in_1page_FindInPageBridge_init(
      Object caller, Object webContents);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.requestFindMatchRects
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @param currentVersion (int)
   * @return (void)
   */
  public static final native void org_chromium_components_find_1in_1page_FindInPageBridge_requestFindMatchRects(
      long nativeFindInPageBridge, Object caller, int currentVersion);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.startFinding
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @param searchString (java.lang.String)
   * @param forwardDirection (boolean)
   * @param caseSensitive (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_find_1in_1page_FindInPageBridge_startFinding(
      long nativeFindInPageBridge, Object caller, String searchString, boolean forwardDirection,
      boolean caseSensitive);

  /**
   * org.chromium.components.find_in_page.FindInPageBridge.stopFinding
   * @param nativeFindInPageBridge (long)
   * @param caller (org.chromium.components.find_in_page.FindInPageBridge)
   * @param clearSelection (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_find_1in_1page_FindInPageBridge_stopFinding(
      long nativeFindInPageBridge, Object caller, boolean clearSelection);
}
