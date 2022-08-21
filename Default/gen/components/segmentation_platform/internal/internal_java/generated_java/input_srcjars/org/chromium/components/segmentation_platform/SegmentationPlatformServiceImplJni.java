package org.chromium.components.segmentation_platform;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.Callback;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class SegmentationPlatformServiceImplJni implements SegmentationPlatformServiceImpl.Natives {
  private static SegmentationPlatformServiceImpl.Natives testInstance;

  public static final JniStaticTestMocker<SegmentationPlatformServiceImpl.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void getSelectedSegment(long nativeSegmentationPlatformServiceAndroid,
      SegmentationPlatformServiceImpl caller, String segmentationKey,
      Callback<SegmentSelectionResult> callback) {
    GEN_JNI.org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_getSelectedSegment(nativeSegmentationPlatformServiceAndroid, caller, segmentationKey, callback);
  }

  @Override
  public SegmentSelectionResult getCachedSegmentResult(
      long nativeSegmentationPlatformServiceAndroid, SegmentationPlatformServiceImpl caller,
      String segmentationKey) {
    return (SegmentSelectionResult)GEN_JNI.org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_getCachedSegmentResult(nativeSegmentationPlatformServiceAndroid, caller, segmentationKey);
  }

  @Override
  public int registerOnDemandSegmentSelectionCallback(long nativeSegmentationPlatformServiceAndroid,
      SegmentationPlatformServiceImpl caller, String segmentationKey,
      Callback<OnDemandSegmentSelectionResult> callback) {
    return (int)GEN_JNI.org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_registerOnDemandSegmentSelectionCallback(nativeSegmentationPlatformServiceAndroid, caller, segmentationKey, callback);
  }

  @Override
  public void unregisterOnDemandSegmentSelectionCallback(
      long nativeSegmentationPlatformServiceAndroid, SegmentationPlatformServiceImpl caller,
      String segmentationKey, int callbackId) {
    GEN_JNI.org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_unregisterOnDemandSegmentSelectionCallback(nativeSegmentationPlatformServiceAndroid, caller, segmentationKey, callbackId);
  }

  public static SegmentationPlatformServiceImpl.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new SegmentationPlatformServiceImplJni();
  }
}
