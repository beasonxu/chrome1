package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.browser_ui.accessibility.FontSizePrefs.destroy
   * @param nativeFontSizePrefsAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_accessibility_FontSizePrefs_destroy(
      long nativeFontSizePrefsAndroid);

  /**
   * org.chromium.components.browser_ui.accessibility.FontSizePrefs.getFontScaleFactor
   * @param nativeFontSizePrefsAndroid (long)
   * @param caller (org.chromium.components.browser_ui.accessibility.FontSizePrefs)
   * @return (float)
   */
  public static final native float org_chromium_components_browser_1ui_accessibility_FontSizePrefs_getFontScaleFactor(
      long nativeFontSizePrefsAndroid, Object caller);

  /**
   * org.chromium.components.browser_ui.accessibility.FontSizePrefs.getForceEnableZoom
   * @param nativeFontSizePrefsAndroid (long)
   * @param caller (org.chromium.components.browser_ui.accessibility.FontSizePrefs)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_browser_1ui_accessibility_FontSizePrefs_getForceEnableZoom(
      long nativeFontSizePrefsAndroid, Object caller);

  /**
   * org.chromium.components.browser_ui.accessibility.FontSizePrefs.init
   * @param caller (org.chromium.components.browser_ui.accessibility.FontSizePrefs)
   * @param browserContextHandle (org.chromium.content_public.browser.BrowserContextHandle)
   * @return (long)
   */
  public static final native long org_chromium_components_browser_1ui_accessibility_FontSizePrefs_init(
      Object caller, Object browserContextHandle);

  /**
   * org.chromium.components.browser_ui.accessibility.FontSizePrefs.setFontScaleFactor
   * @param nativeFontSizePrefsAndroid (long)
   * @param caller (org.chromium.components.browser_ui.accessibility.FontSizePrefs)
   * @param fontScaleFactor (float)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_accessibility_FontSizePrefs_setFontScaleFactor(
      long nativeFontSizePrefsAndroid, Object caller, float fontScaleFactor);

  /**
   * org.chromium.components.browser_ui.accessibility.FontSizePrefs.setForceEnableZoom
   * @param nativeFontSizePrefsAndroid (long)
   * @param caller (org.chromium.components.browser_ui.accessibility.FontSizePrefs)
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_browser_1ui_accessibility_FontSizePrefs_setForceEnableZoom(
      long nativeFontSizePrefsAndroid, Object caller, boolean enabled);
}
