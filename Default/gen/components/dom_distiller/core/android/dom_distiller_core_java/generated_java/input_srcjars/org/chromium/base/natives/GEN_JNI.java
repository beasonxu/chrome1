package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.addObserver
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @param nativeObserverPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_core_DistilledPagePrefs_addObserver(
      long nativeDistilledPagePrefsAndroid, Object caller, long nativeObserverPtr);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.destroyObserverAndroid
   * @param nativeDistilledPagePrefsObserverAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_core_DistilledPagePrefs_destroyObserverAndroid(
      long nativeDistilledPagePrefsObserverAndroid);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.getFontFamily
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @return (int)
   */
  public static final native int org_chromium_components_dom_1distiller_core_DistilledPagePrefs_getFontFamily(
      long nativeDistilledPagePrefsAndroid, Object caller);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.getFontScaling
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @return (float)
   */
  public static final native float org_chromium_components_dom_1distiller_core_DistilledPagePrefs_getFontScaling(
      long nativeDistilledPagePrefsAndroid, Object caller);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.getTheme
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @return (int)
   */
  public static final native int org_chromium_components_dom_1distiller_core_DistilledPagePrefs_getTheme(
      long nativeDistilledPagePrefsAndroid, Object caller);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.init
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @param distilledPagePrefPtr (long)
   * @return (long)
   */
  public static final native long org_chromium_components_dom_1distiller_core_DistilledPagePrefs_init(
      Object caller, long distilledPagePrefPtr);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.initObserverAndroid
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs.DistilledPagePrefsObserverWrapper)
   * @return (long)
   */
  public static final native long org_chromium_components_dom_1distiller_core_DistilledPagePrefs_initObserverAndroid(
      Object caller);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.removeObserver
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @param nativeObserverPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_core_DistilledPagePrefs_removeObserver(
      long nativeDistilledPagePrefsAndroid, Object caller, long nativeObserverPtr);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.setFontFamily
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @param fontFamily (int)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_core_DistilledPagePrefs_setFontFamily(
      long nativeDistilledPagePrefsAndroid, Object caller, int fontFamily);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.setFontScaling
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @param scaling (float)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_core_DistilledPagePrefs_setFontScaling(
      long nativeDistilledPagePrefsAndroid, Object caller, float scaling);

  /**
   * org.chromium.components.dom_distiller.core.DistilledPagePrefs.setTheme
   * @param nativeDistilledPagePrefsAndroid (long)
   * @param caller (org.chromium.components.dom_distiller.core.DistilledPagePrefs)
   * @param theme (int)
   * @return (void)
   */
  public static final native void org_chromium_components_dom_1distiller_core_DistilledPagePrefs_setTheme(
      long nativeDistilledPagePrefsAndroid, Object caller, int theme);

  /**
   * org.chromium.components.dom_distiller.core.DomDistillerService.getDistilledPagePrefsPtr
   * @param nativeDomDistillerServiceAndroid (long)
   * @return (long)
   */
  public static final native long org_chromium_components_dom_1distiller_core_DomDistillerService_getDistilledPagePrefsPtr(
      long nativeDomDistillerServiceAndroid);

  /**
   * org.chromium.components.dom_distiller.core.DomDistillerUrlUtils.getDistillerViewUrlFromUrl
   * @param scheme (java.lang.String)
   * @param url (java.lang.String)
   * @param title (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_dom_1distiller_core_DomDistillerUrlUtils_getDistillerViewUrlFromUrl(
      String scheme, String url, String title);

  /**
   * org.chromium.components.dom_distiller.core.DomDistillerUrlUtils.getOriginalUrlFromDistillerUrl
   * @param viewerUrl (java.lang.String)
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_components_dom_1distiller_core_DomDistillerUrlUtils_getOriginalUrlFromDistillerUrl(
      String viewerUrl);

  /**
   * org.chromium.components.dom_distiller.core.DomDistillerUrlUtils.getValueForKeyInUrl
   * @param url (java.lang.String)
   * @param key (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_dom_1distiller_core_DomDistillerUrlUtils_getValueForKeyInUrl(
      String url, String key);

  /**
   * org.chromium.components.dom_distiller.core.DomDistillerUrlUtils.isDistilledPage
   * @param url (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_dom_1distiller_core_DomDistillerUrlUtils_isDistilledPage(
      String url);
}
