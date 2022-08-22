package org.chromium.chrome.browser.signin.services;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.components.signin.base.CoreAccountInfo;

@CheckDiscard("crbug.com/993421")
class WebSigninBridgeJni implements WebSigninBridge.Natives {
  private static WebSigninBridge.Natives testInstance;

  public static final JniStaticTestMocker<WebSigninBridge.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.signin.services.WebSigninBridge.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.signin.services.WebSigninBridge.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public long create(Profile profile, CoreAccountInfo account, WebSigninBridge.Listener listener) {
    return (long)GEN_JNI.org_chromium_chrome_browser_signin_services_WebSigninBridge_create(profile, account, listener);
  }

  @Override
  public void destroy(long webSigninBridgePtr) {
    GEN_JNI.org_chromium_chrome_browser_signin_services_WebSigninBridge_destroy(webSigninBridgePtr);
  }

  public static WebSigninBridge.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.signin.services.WebSigninBridge.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new WebSigninBridgeJni();
  }
}
