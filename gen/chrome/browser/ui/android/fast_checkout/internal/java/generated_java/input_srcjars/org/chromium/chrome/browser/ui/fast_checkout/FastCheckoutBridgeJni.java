package org.chromium.chrome.browser.ui.fast_checkout;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.ui.fast_checkout.data.FastCheckoutAutofillProfile;
import org.chromium.chrome.browser.ui.fast_checkout.data.FastCheckoutCreditCard;

@CheckDiscard("crbug.com/993421")
class FastCheckoutBridgeJni implements FastCheckoutBridge.Natives {
  private static FastCheckoutBridge.Natives testInstance;

  public static final JniStaticTestMocker<FastCheckoutBridge.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.ui.fast_checkout.FastCheckoutBridge.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.ui.fast_checkout.FastCheckoutBridge.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void onOptionsSelected(long nativeFastCheckoutViewImpl,
      FastCheckoutAutofillProfile profile, FastCheckoutCreditCard creditCard) {
    GEN_JNI.org_chromium_chrome_browser_ui_fast_1checkout_FastCheckoutBridge_onOptionsSelected(nativeFastCheckoutViewImpl, profile, creditCard);
  }

  @Override
  public void onDismiss(long nativeFastCheckoutViewImpl) {
    GEN_JNI.org_chromium_chrome_browser_ui_fast_1checkout_FastCheckoutBridge_onDismiss(nativeFastCheckoutViewImpl);
  }

  public static FastCheckoutBridge.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.ui.fast_checkout.FastCheckoutBridge.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new FastCheckoutBridgeJni();
  }
}
