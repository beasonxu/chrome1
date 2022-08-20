package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.chrome.browser.policy.PolicyServiceFactory.getGlobalPolicyService
   * @return (org.chromium.components.policy.PolicyService)
   */
  public static final native Object org_chromium_chrome_browser_policy_PolicyServiceFactory_getGlobalPolicyService(
      );

  /**
   * org.chromium.chrome.browser.policy.PolicyServiceFactory.getProfilePolicyService
   * @param profile (org.chromium.chrome.browser.profiles.Profile)
   * @return (org.chromium.components.policy.PolicyService)
   */
  public static final native Object org_chromium_chrome_browser_policy_PolicyServiceFactory_getProfilePolicyService(
      Object profile);
}
