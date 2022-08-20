package org.chromium.chrome.browser.segmentation_platform;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.components.segmentation_platform.SegmentationPlatformService;

@CheckDiscard("crbug.com/993421")
class SegmentationPlatformServiceFactoryJni implements SegmentationPlatformServiceFactory.Natives {
  private static SegmentationPlatformServiceFactory.Natives testInstance;

  public static final JniStaticTestMocker<SegmentationPlatformServiceFactory.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.chrome.browser.segmentation_platform.SegmentationPlatformServiceFactory.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.chrome.browser.segmentation_platform.SegmentationPlatformServiceFactory.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public SegmentationPlatformService getForProfile(Profile profile) {
    return (SegmentationPlatformService)GEN_JNI.org_chromium_chrome_browser_segmentation_1platform_SegmentationPlatformServiceFactory_getForProfile(profile);
  }

  public static SegmentationPlatformServiceFactory.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.chrome.browser.segmentation_platform.SegmentationPlatformServiceFactory.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new SegmentationPlatformServiceFactoryJni();
  }
}
