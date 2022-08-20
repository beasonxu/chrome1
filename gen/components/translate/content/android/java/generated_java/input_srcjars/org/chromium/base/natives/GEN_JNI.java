package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.translate.TranslateFeatureList.getFieldTrialParamByFeatureAsBoolean
   * @param featureName (java.lang.String)
   * @param paramName (java.lang.String)
   * @param defaultValue (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_translate_TranslateFeatureList_getFieldTrialParamByFeatureAsBoolean(
      String featureName, String paramName, boolean defaultValue);

  /**
   * org.chromium.components.translate.TranslateFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_translate_TranslateFeatureList_isEnabled(
      String featureName);

  /**
   * org.chromium.components.translate.TranslateMessage.buildOverflowMenu
   * @param nativeTranslateMessage (long)
   * @return (org.chromium.components.translate.TranslateMessage.MenuItem[])
   */
  public static final native Object[] org_chromium_components_translate_TranslateMessage_buildOverflowMenu(
      long nativeTranslateMessage);

  /**
   * org.chromium.components.translate.TranslateMessage.handleDismiss
   * @param nativeTranslateMessage (long)
   * @param dismissReason (int)
   * @return (void)
   */
  public static final native void org_chromium_components_translate_TranslateMessage_handleDismiss(
      long nativeTranslateMessage, int dismissReason);

  /**
   * org.chromium.components.translate.TranslateMessage.handlePrimaryAction
   * @param nativeTranslateMessage (long)
   * @return (void)
   */
  public static final native void org_chromium_components_translate_TranslateMessage_handlePrimaryAction(
      long nativeTranslateMessage);

  /**
   * org.chromium.components.translate.TranslateMessage.handleSecondaryMenuItemClicked
   * @param nativeTranslateMessage (long)
   * @param overflowMenuItemId (int)
   * @param languageCode (java.lang.String)
   * @param hadCheckmark (boolean)
   * @return (org.chromium.components.translate.TranslateMessage.MenuItem[])
   */
  public static final native Object[] org_chromium_components_translate_TranslateMessage_handleSecondaryMenuItemClicked(
      long nativeTranslateMessage, int overflowMenuItemId, String languageCode,
      boolean hadCheckmark);
}
