package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.variations.VariationsAssociatedData.getFeedbackVariations
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_variations_VariationsAssociatedData_getFeedbackVariations(
      );

  /**
   * org.chromium.components.variations.VariationsAssociatedData.getGoogleAppVariations
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_variations_VariationsAssociatedData_getGoogleAppVariations(
      );

  /**
   * org.chromium.components.variations.VariationsAssociatedData.getVariationParamValue
   * @param trialName (java.lang.String)
   * @param paramName (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_variations_VariationsAssociatedData_getVariationParamValue(
      String trialName, String paramName);
}
