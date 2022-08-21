package org.chromium.chrome.browser;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.content_public.browser.WebContents;

@CheckDiscard("crbug.com/993421")
class WebContentsFactoryJni implements WebContentsFactory.Natives {
  private static WebContentsFactory.Natives testInstance;

  public static final JniStaticTestMocker<WebContentsFactory.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.WebContentsFactory.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.WebContentsFactory.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public WebContents createWebContents(Profile profile, boolean initiallyHidden,
      boolean initializeRenderer) {
    return (WebContents)GEN_JNI.org_chromium_chrome_browser_WebContentsFactory_createWebContents(profile, initiallyHidden, initializeRenderer);
  }

  public static WebContentsFactory.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.WebContentsFactory.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new WebContentsFactoryJni();
  }
}
