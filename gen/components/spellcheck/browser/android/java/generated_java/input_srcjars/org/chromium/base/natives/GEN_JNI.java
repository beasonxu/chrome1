package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.spellcheck.SpellCheckerSessionBridge.processSpellCheckResults
   * @param nativeSpellCheckerSessionBridge (long)
   * @param caller (org.chromium.components.spellcheck.SpellCheckerSessionBridge)
   * @param offsets (int[])
   * @param lengths (int[])
   * @param suggestions (java.lang.String[][])
   * @return (void)
   */
  public static final native void org_chromium_components_spellcheck_SpellCheckerSessionBridge_processSpellCheckResults(
      long nativeSpellCheckerSessionBridge, Object caller, int[] offsets, int[] lengths,
      String[][] suggestions);
}
