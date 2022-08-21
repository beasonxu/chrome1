package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.autofill_assistant.AssistantFeatures.getFeature
   * @param ordinal (int)
   * @return (long)
   */
  public static final native long org_chromium_components_autofill_1assistant_AssistantFeatures_getFeature(
      int ordinal);

  /**
   * org.chromium.components.autofill_assistant.Starter.attach
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_attach(
      long nativeStarterDelegateAndroid, Object caller);

  /**
   * org.chromium.components.autofill_assistant.Starter.detach
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_detach(
      long nativeStarterDelegateAndroid, Object caller);

  /**
   * org.chromium.components.autofill_assistant.Starter.fromWebContents
   * @param webContents (org.chromium.content_public.browser.WebContents)
   * @param staticDependencies (org.chromium.components.autofill_assistant.AssistantStaticDependencies)
   * @return (long)
   */
  public static final native long org_chromium_components_autofill_1assistant_Starter_fromWebContents(
      Object webContents, Object staticDependencies);

  /**
   * org.chromium.components.autofill_assistant.Starter.onActivityAttachmentChanged
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_onActivityAttachmentChanged(
      long nativeStarterDelegateAndroid, Object caller);

  /**
   * org.chromium.components.autofill_assistant.Starter.onFeatureModuleInstalled
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @param result (int)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_onFeatureModuleInstalled(
      long nativeStarterDelegateAndroid, Object caller, int result);

  /**
   * org.chromium.components.autofill_assistant.Starter.onInteractabilityChanged
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @param isInteractable (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_onInteractabilityChanged(
      long nativeStarterDelegateAndroid, Object caller, boolean isInteractable);

  /**
   * org.chromium.components.autofill_assistant.Starter.onOnboardingFinished
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @param shown (boolean)
   * @param result (int)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_onOnboardingFinished(
      long nativeStarterDelegateAndroid, Object caller, boolean shown, int result);

  /**
   * org.chromium.components.autofill_assistant.Starter.start
   * @param nativeStarterDelegateAndroid (long)
   * @param caller (org.chromium.components.autofill_assistant.Starter)
   * @param experimentIds (java.lang.String)
   * @param parameterNames (java.lang.String[])
   * @param parameterValues (java.lang.String[])
   * @param deviceOnlyParameterNames (java.lang.String[])
   * @param deviceOnlyParameterValues (java.lang.String[])
   * @param initialUrl (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_autofill_1assistant_Starter_start(
      long nativeStarterDelegateAndroid, Object caller, String experimentIds,
      String[] parameterNames, String[] parameterValues, String[] deviceOnlyParameterNames,
      String[] deviceOnlyParameterValues, String initialUrl);
}
