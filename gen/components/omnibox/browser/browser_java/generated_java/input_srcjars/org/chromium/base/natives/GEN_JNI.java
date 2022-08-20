package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.omnibox.AutocompleteMatch.updateWithClipboardContent
   * @param nativeAutocompleteMatch (long)
   * @param callback (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_components_omnibox_AutocompleteMatch_updateWithClipboardContent(
      long nativeAutocompleteMatch, Object callback);

  /**
   * org.chromium.components.omnibox.AutocompleteResult.groupSuggestionsBySearchVsURL
   * @param nativeAutocompleteResult (long)
   * @param firstIndex (int)
   * @param lastIndex (int)
   * @return (void)
   */
  public static final native void org_chromium_components_omnibox_AutocompleteResult_groupSuggestionsBySearchVsURL(
      long nativeAutocompleteResult, int firstIndex, int lastIndex);

  /**
   * org.chromium.components.omnibox.AutocompleteResult.verifyCoherency
   * @param nativeAutocompleteResult (long)
   * @param matches (long[])
   * @param suggestionIndex (long)
   * @param origin (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_omnibox_AutocompleteResult_verifyCoherency(
      long nativeAutocompleteResult, long[] matches, long suggestionIndex, int origin);

  /**
   * org.chromium.components.omnibox.OmniboxUrlEmphasizer.parseForEmphasizeComponents
   * @param text (java.lang.String)
   * @param autocompleteSchemeClassifier (org.chromium.components.omnibox.AutocompleteSchemeClassifier)
   * @return (int[])
   */
  public static final native int[] org_chromium_components_omnibox_OmniboxUrlEmphasizer_parseForEmphasizeComponents(
      String text, Object autocompleteSchemeClassifier);
}
