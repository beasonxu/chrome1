package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getBlockedFledgeJoiningTopFramesForDisplay
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getBlockedFledgeJoiningTopFramesForDisplay(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getBlockedTopics
   * @return (org.chromium.chrome.browser.privacy_sandbox.Topic[])
   */
  public static final native Object[] org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getBlockedTopics(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getCurrentTopTopics
   * @return (org.chromium.chrome.browser.privacy_sandbox.Topic[])
   */
  public static final native Object[] org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getCurrentTopTopics(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getFledgeJoiningEtldPlusOneForDisplay
   * @param callback (org.chromium.base.Callback<java.lang.String[]>)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getFledgeJoiningEtldPlusOneForDisplay(
      Object callback);

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getFlocDescriptionString
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getFlocDescriptionString(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getFlocGroupString
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getFlocGroupString(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getFlocResetExplanationString
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getFlocResetExplanationString(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getFlocStatusString
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getFlocStatusString(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getFlocUpdateString
   * @return (java.lang.String)
   */
  public static final native String org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getFlocUpdateString(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.getRequiredPromptType
   * @return (int)
   */
  public static final native int org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_getRequiredPromptType(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.isPrivacySandboxEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_isPrivacySandboxEnabled(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.isPrivacySandboxManaged
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_isPrivacySandboxManaged(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.isPrivacySandboxRestricted
   * @return (boolean)
   */
  public static final native boolean org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_isPrivacySandboxRestricted(
      );

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.promptActionOccurred
   * @param action (int)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_promptActionOccurred(
      int action);

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.setFledgeJoiningAllowed
   * @param topFrameEtldPlus1 (java.lang.String)
   * @param allowed (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_setFledgeJoiningAllowed(
      String topFrameEtldPlus1, boolean allowed);

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.setPrivacySandboxEnabled
   * @param enabled (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_setPrivacySandboxEnabled(
      boolean enabled);

  /**
   * org.chromium.chrome.browser.privacy_sandbox.PrivacySandboxBridge.setTopicAllowed
   * @param topicId (int)
   * @param taxonomyVersion (int)
   * @param allowed (boolean)
   * @return (void)
   */
  public static final native void org_chromium_chrome_browser_privacy_1sandbox_PrivacySandboxBridge_setTopicAllowed(
      int topicId, int taxonomyVersion, boolean allowed);
}
