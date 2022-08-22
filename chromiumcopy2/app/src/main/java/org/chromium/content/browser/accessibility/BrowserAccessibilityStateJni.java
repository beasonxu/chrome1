package org.chromium.content.browser.accessibility;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class BrowserAccessibilityStateJni implements BrowserAccessibilityState.Natives {
  private static BrowserAccessibilityState.Natives testInstance;

  public static final JniStaticTestMocker<BrowserAccessibilityState.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.content.browser.accessibility.BrowserAccessibilityState.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.content.browser.accessibility.BrowserAccessibilityState.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void onAnimatorDurationScaleChanged() {
    GEN_JNI.org_chromium_content_browser_accessibility_BrowserAccessibilityState_onAnimatorDurationScaleChanged();
  }

  public static BrowserAccessibilityState.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.content.browser.accessibility.BrowserAccessibilityState.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new BrowserAccessibilityStateJni();
  }
}
