package org.chromium.chrome.browser.feed;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
public class FeedReliabilityLoggingBridgeJni implements FeedReliabilityLoggingBridge.Natives {
  private static FeedReliabilityLoggingBridge.Natives testInstance;

  public static final JniStaticTestMocker<FeedReliabilityLoggingBridge.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.feed.FeedReliabilityLoggingBridge.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.feed.FeedReliabilityLoggingBridge.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public long init(FeedReliabilityLoggingBridge thisRef) {
    return (long)GEN_JNI.org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_init(thisRef);
  }

  @Override
  public void destroy(long nativeFeedReliabilityLoggingBridge) {
    GEN_JNI.org_chromium_chrome_browser_feed_FeedReliabilityLoggingBridge_destroy(nativeFeedReliabilityLoggingBridge);
  }

  public static FeedReliabilityLoggingBridge.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.feed.FeedReliabilityLoggingBridge.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new FeedReliabilityLoggingBridgeJni();
  }
}
