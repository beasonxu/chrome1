package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.policy.CombinedPolicyProvider.flushPolicies
   * @param nativeAndroidCombinedPolicyProvider (long)
   * @param caller (org.chromium.components.policy.CombinedPolicyProvider)
   * @return (void)
   */
  public static final native void org_chromium_components_policy_CombinedPolicyProvider_flushPolicies(
      long nativeAndroidCombinedPolicyProvider, Object caller);

  /**
   * org.chromium.components.policy.PolicyConverter.setPolicyBoolean
   * @param nativePolicyConverter (long)
   * @param caller (org.chromium.components.policy.PolicyConverter)
   * @param policyKey (java.lang.String)
   * @param value (boolean)
   * @return (void)
   */
  public static final native void org_chromium_components_policy_PolicyConverter_setPolicyBoolean(
      long nativePolicyConverter, Object caller, String policyKey, boolean value);

  /**
   * org.chromium.components.policy.PolicyConverter.setPolicyInteger
   * @param nativePolicyConverter (long)
   * @param caller (org.chromium.components.policy.PolicyConverter)
   * @param policyKey (java.lang.String)
   * @param value (int)
   * @return (void)
   */
  public static final native void org_chromium_components_policy_PolicyConverter_setPolicyInteger(
      long nativePolicyConverter, Object caller, String policyKey, int value);

  /**
   * org.chromium.components.policy.PolicyConverter.setPolicyString
   * @param nativePolicyConverter (long)
   * @param caller (org.chromium.components.policy.PolicyConverter)
   * @param policyKey (java.lang.String)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_policy_PolicyConverter_setPolicyString(
      long nativePolicyConverter, Object caller, String policyKey, String value);

  /**
   * org.chromium.components.policy.PolicyConverter.setPolicyStringArray
   * @param nativePolicyConverter (long)
   * @param caller (org.chromium.components.policy.PolicyConverter)
   * @param policyKey (java.lang.String)
   * @param value (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_components_policy_PolicyConverter_setPolicyStringArray(
      long nativePolicyConverter, Object caller, String policyKey, String[] value);

  /**
   * org.chromium.components.policy.PolicyMap.equals
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param nativeOtherPolicyMap (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_policy_PolicyMap_equals(
      long nativePolicyMap, Object caller, long nativeOtherPolicyMap);

  /**
   * org.chromium.components.policy.PolicyMap.getBooleanValue
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param policy (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_policy_PolicyMap_getBooleanValue(
      long nativePolicyMap, Object caller, String policy);

  /**
   * org.chromium.components.policy.PolicyMap.getDictValue
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param policy (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_policy_PolicyMap_getDictValue(
      long nativePolicyMap, Object caller, String policy);

  /**
   * org.chromium.components.policy.PolicyMap.getIntValue
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param policy (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_components_policy_PolicyMap_getIntValue(
      long nativePolicyMap, Object caller, String policy);

  /**
   * org.chromium.components.policy.PolicyMap.getListValue
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param policy (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_policy_PolicyMap_getListValue(
      long nativePolicyMap, Object caller, String policy);

  /**
   * org.chromium.components.policy.PolicyMap.getStringValue
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param policy (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_policy_PolicyMap_getStringValue(
      long nativePolicyMap, Object caller, String policy);

  /**
   * org.chromium.components.policy.PolicyMap.hasValue
   * @param nativePolicyMap (long)
   * @param caller (org.chromium.components.policy.PolicyMap)
   * @param policy (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_policy_PolicyMap_hasValue(
      long nativePolicyMap, Object caller, String policy);

  /**
   * org.chromium.components.policy.PolicyService.addObserver
   * @param nativePolicyService (long)
   * @param caller (org.chromium.components.policy.PolicyService)
   * @return (void)
   */
  public static final native void org_chromium_components_policy_PolicyService_addObserver(
      long nativePolicyService, Object caller);

  /**
   * org.chromium.components.policy.PolicyService.getPolicies
   * @param nativePolicyService (long)
   * @param caller (org.chromium.components.policy.PolicyService)
   * @return (org.chromium.components.policy.PolicyMap)
   */
  public static final native Object org_chromium_components_policy_PolicyService_getPolicies(
      long nativePolicyService, Object caller);

  /**
   * org.chromium.components.policy.PolicyService.isInitializationComplete
   * @param nativePolicyService (long)
   * @param caller (org.chromium.components.policy.PolicyService)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_policy_PolicyService_isInitializationComplete(
      long nativePolicyService, Object caller);

  /**
   * org.chromium.components.policy.PolicyService.removeObserver
   * @param nativePolicyService (long)
   * @param caller (org.chromium.components.policy.PolicyService)
   * @return (void)
   */
  public static final native void org_chromium_components_policy_PolicyService_removeObserver(
      long nativePolicyService, Object caller);
}
