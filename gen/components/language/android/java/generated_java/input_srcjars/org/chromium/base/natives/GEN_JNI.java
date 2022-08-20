package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.language.AndroidLanguageMetricsBridge.reportExplicitLanguageAskStateChanged
   * @param language (java.lang.String)
   * @param added (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_language_AndroidLanguageMetricsBridge_reportExplicitLanguageAskStateChanged(
      String language, boolean added);

  /**
   * org.chromium.components.language.AndroidLanguageMetricsBridge.reportHashMetricName
   * @param histogramName (java.lang.String)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_language_AndroidLanguageMetricsBridge_reportHashMetricName(
      String histogramName, String value);

  /**
   * org.chromium.components.language.GeoLanguageProviderBridge.getCurrentGeoLanguages
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_components_language_GeoLanguageProviderBridge_getCurrentGeoLanguages(
      );
}
