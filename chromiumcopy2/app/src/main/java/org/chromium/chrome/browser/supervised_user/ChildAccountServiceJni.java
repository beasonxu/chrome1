package org.chromium.chrome.browser.supervised_user;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class ChildAccountServiceJni implements ChildAccountService.Natives {
  private static ChildAccountService.Natives testInstance;

  public static final JniStaticTestMocker<ChildAccountService.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.supervised_user.ChildAccountService.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.supervised_user.ChildAccountService.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void onReauthenticationFailed(long onFailureCallbackPtr) {
    GEN_JNI.org_chromium_chrome_browser_supervised_1user_ChildAccountService_onReauthenticationFailed(onFailureCallbackPtr);
  }

  public static ChildAccountService.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.supervised_user.ChildAccountService.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new ChildAccountServiceJni();
  }
}
