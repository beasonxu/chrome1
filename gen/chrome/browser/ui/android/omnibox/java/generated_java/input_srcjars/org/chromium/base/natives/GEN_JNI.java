package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.omnibox.ChromeAutocompleteSchemeClassifier.createAutocompleteClassifier
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_omnibox_ChromeAutocompleteSchemeClassifier_createAutocompleteClassifier(
      Object profile);

  /**
   * org.chromium.chrome.browser.omnibox.ChromeAutocompleteSchemeClassifier.deleteAutocompleteClassifier
   * @param chromeAutocompleteSchemeClassifier (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_ChromeAutocompleteSchemeClassifier_deleteAutocompleteClassifier(
      long chromeAutocompleteSchemeClassifier);

  /**
   * org.chromium.chrome.browser.omnibox.OmniboxPrerender.clear
   * @param nativeOmniboxPrerender (long)
   * @param caller (org.chromium.chrome.browser.omnibox.OmniboxPrerender)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_OmniboxPrerender_clear(
      long nativeOmniboxPrerender, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.omnibox.OmniboxPrerender.init
   * @param caller (org.chromium.chrome.browser.omnibox.OmniboxPrerender)
   * @return (long)
   */
  public static final native long org_chromium_chrome_browser_omnibox_OmniboxPrerender_init(
      Object caller);

  /**
   * org.chromium.chrome.browser.omnibox.OmniboxPrerender.initializeForProfile
   * @param nativeOmniboxPrerender (long)
   * @param caller (org.chromium.chrome.browser.omnibox.OmniboxPrerender)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_OmniboxPrerender_initializeForProfile(
      long nativeOmniboxPrerender, Object caller, Object profile);

  /**
   * org.chromium.chrome.browser.omnibox.OmniboxPrerender.prerenderMaybe
   * @param nativeOmniboxPrerender (long)
   * @param caller (org.chromium.chrome.browser.omnibox.OmniboxPrerender)
   * @param url (java.lang.String)
   * @param currentUrl (java.lang.String)
   * @param nativeAutocompleteResult (long)
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @param tab (org.chromium.chrome.browser.tab.Tab)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_OmniboxPrerender_prerenderMaybe(
      long nativeOmniboxPrerender, Object caller, String url, String currentUrl,
      long nativeAutocompleteResult, Object profile, Object tab);

  /**
   * org.chromium.chrome.browser.omnibox.OmniboxViewUtil.sanitizeTextForPaste
   * @param clipboardString (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_omnibox_OmniboxViewUtil_sanitizeTextForPaste(
      String clipboardString);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.classify
   * @param nativeAutocompleteControllerAndroid (long)
   * @param text (java.lang.String)
   * @param focusedFromFakebox (boolean)
   * @return (org.chromium.components.omnibox.AutocompleteMatch)
   */
  public static final native Object org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_classify(
      long nativeAutocompleteControllerAndroid, String text, boolean focusedFromFakebox);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.deleteMatch
   * @param nativeAutocompleteControllerAndroid (long)
   * @param matchIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_deleteMatch(
      long nativeAutocompleteControllerAndroid, int matchIndex);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.deleteMatchElement
   * @param nativeAutocompleteControllerAndroid (long)
   * @param matchIndex (int)
   * @param elementIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_deleteMatchElement(
      long nativeAutocompleteControllerAndroid, int matchIndex, int elementIndex);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.getForProfile
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController)
   */
  public static final native Object org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_getForProfile(
      Object profile);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.getMatchingTabForSuggestion
   * @param nativeAutocompleteControllerAndroid (long)
   * @param matchIndex (int)
   * @return (org.chromium.chrome.browser.tab.Tab)
   */
  public static final native Object org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_getMatchingTabForSuggestion(
      long nativeAutocompleteControllerAndroid, int matchIndex);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.onOmniboxFocused
   * @param nativeAutocompleteControllerAndroid (long)
   * @param omniboxText (java.lang.String)
   * @param currentUrl (java.lang.String)
   * @param pageClassification (int)
   * @param currentTitle (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_onOmniboxFocused(
      long nativeAutocompleteControllerAndroid, String omniboxText, String currentUrl,
      int pageClassification, String currentTitle);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.onSuggestionSelected
   * @param nativeAutocompleteControllerAndroid (long)
   * @param matchIndex (int)
   * @param disposition (int)
   * @param currentPageUrl (java.lang.String)
   * @param pageClassification (int)
   * @param elapsedTimeSinceModified (long)
   * @param completedLength (int)
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_onSuggestionSelected(
      long nativeAutocompleteControllerAndroid, int matchIndex, int disposition,
      String currentPageUrl, int pageClassification, long elapsedTimeSinceModified,
      int completedLength, Object webContents);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.resetSession
   * @param nativeAutocompleteControllerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_resetSession(
      long nativeAutocompleteControllerAndroid);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.setVoiceMatches
   * @param nativeAutocompleteControllerAndroid (long)
   * @param matches (java.lang.String[])
   * @param confidenceScores (float[])
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_setVoiceMatches(
      long nativeAutocompleteControllerAndroid, String[] matches, float[] confidenceScores);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.start
   * @param nativeAutocompleteControllerAndroid (long)
   * @param text (java.lang.String)
   * @param cursorPosition (int)
   * @param desiredTld (java.lang.String)
   * @param currentUrl (java.lang.String)
   * @param pageClassification (int)
   * @param preventInlineAutocomplete (boolean)
   * @param preferKeyword (boolean)
   * @param allowExactKeywordMatch (boolean)
   * @param wantAsynchronousMatches (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_start(
      long nativeAutocompleteControllerAndroid, String text, int cursorPosition, String desiredTld,
      String currentUrl, int pageClassification, boolean preventInlineAutocomplete,
      boolean preferKeyword, boolean allowExactKeywordMatch, boolean wantAsynchronousMatches);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.startPrefetch
   * @param nativeAutocompleteControllerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_startPrefetch(
      long nativeAutocompleteControllerAndroid);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.stop
   * @param nativeAutocompleteControllerAndroid (long)
   * @param clearResults (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_stop(
      long nativeAutocompleteControllerAndroid, boolean clearResults);

  /**
   * org.chromium.chrome.browser.omnibox.suggestions.AutocompleteController.updateMatchDestinationURLWithAdditionalAssistedQueryStats
   * @param nativeAutocompleteControllerAndroid (long)
   * @param matchIndex (int)
   * @param elapsedTimeSinceInputChange (long)
   * @param newQueryText (java.lang.String)
   * @param newQueryParams (java.lang.String[])
   * @return (org.chromium.url.GURL)
   */
  public static final native Object org_chromium_chrome_browser_omnibox_suggestions_AutocompleteController_updateMatchDestinationURLWithAdditionalAssistedQueryStats(
      long nativeAutocompleteControllerAndroid, int matchIndex, long elapsedTimeSinceInputChange,
      String newQueryText, String[] newQueryParams);
}
