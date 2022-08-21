package org.chromium.chrome.browser.search_resumption;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;

@CheckDiscard("crbug.com/993421")
class SearchResumptionModuleBridgeJni implements SearchResumptionModuleBridge.Natives {
  private static SearchResumptionModuleBridge.Natives testInstance;

  public static final JniStaticTestMocker<SearchResumptionModuleBridge.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public long create(SearchResumptionModuleBridge caller, Profile profile) {
    return (long)GEN_JNI.org_chromium_chrome_browser_search_1resumption_SearchResumptionModuleBridge_create(caller, profile);
  }

  @Override
  public void fetchSuggestions(long nativeSearchResumptionModuleBridge,
      SearchResumptionModuleBridge caller, String url) {
    GEN_JNI.org_chromium_chrome_browser_search_1resumption_SearchResumptionModuleBridge_fetchSuggestions(nativeSearchResumptionModuleBridge, caller, url);
  }

  @Override
  public void destroy(long nativeSearchResumptionModuleBridge,
      SearchResumptionModuleBridge caller) {
    GEN_JNI.org_chromium_chrome_browser_search_1resumption_SearchResumptionModuleBridge_destroy(nativeSearchResumptionModuleBridge, caller);
  }

  public static SearchResumptionModuleBridge.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.search_resumption.SearchResumptionModuleBridge.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new SearchResumptionModuleBridgeJni();
  }
}
