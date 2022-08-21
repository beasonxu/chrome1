package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge.create
   * @param caller (org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_search_1resumption_SearchResumptionModuleBridge_create(
      Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge.destroy
   * @param nativeSearchResumptionModuleBridge (long)
   * @param caller (org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_search_1resumption_SearchResumptionModuleBridge_destroy(
      long nativeSearchResumptionModuleBridge, Object caller);

  /**
   * org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge.fetchSuggestions
   * @param nativeSearchResumptionModuleBridge (long)
   * @param caller (org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge)
   * @param url (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_search_1resumption_SearchResumptionModuleBridge_fetchSuggestions(
      long nativeSearchResumptionModuleBridge, Object caller, String url);
}
