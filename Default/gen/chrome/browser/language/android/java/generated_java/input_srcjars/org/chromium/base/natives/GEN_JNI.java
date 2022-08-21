package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.language.LanguageBridge.getULPModelLanguages
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_language_LanguageBridge_getULPModelLanguages(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.canManuallyTranslate
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param menuLogging (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_translate_TranslateBridge_canManuallyTranslate(
      Object webContents, boolean menuLogging);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getAlwaysTranslateLanguages
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_translate_TranslateBridge_getAlwaysTranslateLanguages(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getAppLanguagePromptShown
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_translate_TranslateBridge_getAppLanguagePromptShown(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getChromeAcceptLanguages
   * @param list (java.util.List<org.chromium.chrome.browser.language.settings.LanguageItem>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_getChromeAcceptLanguages(
      Object list);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getCurrentLanguage
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_translate_TranslateBridge_getCurrentLanguage(
      Object webContents);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getExplicitLanguageAskPromptShown
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_translate_TranslateBridge_getExplicitLanguageAskPromptShown(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getNeverTranslateLanguages
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_translate_TranslateBridge_getNeverTranslateLanguages(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getSourceLanguage
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_translate_TranslateBridge_getSourceLanguage(
      Object webContents);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getTargetLanguage
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_translate_TranslateBridge_getTargetLanguage(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.getUserAcceptLanguages
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_translate_TranslateBridge_getUserAcceptLanguages(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.isBlockedLanguage
   * @param language (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_translate_TranslateBridge_isBlockedLanguage(
      String language);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.manualTranslateWhenReady
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_manualTranslateWhenReady(
      Object webContents);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.moveAcceptLanguage
   * @param language (java.lang.String)
   * @param offset (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_moveAcceptLanguage(
      String language, int offset);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.resetAcceptLanguages
   * @param defaultLocale (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_resetAcceptLanguages(
      String defaultLocale);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setAppLanguagePromptShown
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setAppLanguagePromptShown(
      );

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setDefaultTargetLanguage
   * @param targetLanguage (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setDefaultTargetLanguage(
      String targetLanguage);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setExplicitLanguageAskPromptShown
   * @param shown (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setExplicitLanguageAskPromptShown(
      boolean shown);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setIgnoreMissingKeyForTesting
   * @param ignore (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setIgnoreMissingKeyForTesting(
      boolean ignore);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setLanguageAlwaysTranslateState
   * @param language (java.lang.String)
   * @param alwaysTranslate (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setLanguageAlwaysTranslateState(
      String language, boolean alwaysTranslate);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setLanguageBlockedState
   * @param language (java.lang.String)
   * @param blocked (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setLanguageBlockedState(
      String language, boolean blocked);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setLanguageOrder
   * @param codes (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setLanguageOrder(
      String[] codes);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.setPredefinedTargetLanguage
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param targetLanguage (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_setPredefinedTargetLanguage(
      Object webContents, String targetLanguage);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.shouldShowManualTranslateIPH
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_translate_TranslateBridge_shouldShowManualTranslateIPH(
      Object webContents);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.translateToLanguage
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param targetLanguageCode (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_translateToLanguage(
      Object webContents, String targetLanguageCode);

  /**
   * org.chromium.chrome.browser.translate.TranslateBridge.updateUserAcceptLanguages
   * @param language (java.lang.String)
   * @param add (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_translate_TranslateBridge_updateUserAcceptLanguages(
      String language, boolean add);
}
