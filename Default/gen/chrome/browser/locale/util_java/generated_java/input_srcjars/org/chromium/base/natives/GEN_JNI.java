package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.locale.LocaleTemplateUrlLoader.destroy
   * @param nativeLocaleTemplateUrlLoader (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_locale_LocaleTemplateUrlLoader_destroy(
      long nativeLocaleTemplateUrlLoader);

  /**
   * org.chromium.chrome.browser.locale.LocaleTemplateUrlLoader.init
   * @param localeId (java.lang.String)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_locale_LocaleTemplateUrlLoader_init(
      String localeId);

  /**
   * org.chromium.chrome.browser.locale.LocaleTemplateUrlLoader.loadTemplateUrls
   * @param nativeLocaleTemplateUrlLoader (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_locale_LocaleTemplateUrlLoader_loadTemplateUrls(
      long nativeLocaleTemplateUrlLoader);

  /**
   * org.chromium.chrome.browser.locale.LocaleTemplateUrlLoader.overrideDefaultSearchProvider
   * @param nativeLocaleTemplateUrlLoader (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_locale_LocaleTemplateUrlLoader_overrideDefaultSearchProvider(
      long nativeLocaleTemplateUrlLoader);

  /**
   * org.chromium.chrome.browser.locale.LocaleTemplateUrlLoader.removeTemplateUrls
   * @param nativeLocaleTemplateUrlLoader (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_locale_LocaleTemplateUrlLoader_removeTemplateUrls(
      long nativeLocaleTemplateUrlLoader);

  /**
   * org.chromium.chrome.browser.locale.LocaleTemplateUrlLoader.setGoogleAsDefaultSearch
   * @param nativeLocaleTemplateUrlLoader (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_locale_LocaleTemplateUrlLoader_setGoogleAsDefaultSearch(
      long nativeLocaleTemplateUrlLoader);
}
