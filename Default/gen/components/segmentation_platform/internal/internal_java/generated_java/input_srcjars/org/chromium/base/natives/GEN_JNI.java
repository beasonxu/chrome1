package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.getCachedSegmentResult
   * @param nativeSegmentationPlatformServiceAndroid (long)
   * @param caller (org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl)
   * @param segmentationKey (java.lang.String)
   * @return (org.chromium.components.segmentation_platform.SegmentSelectionResult)
   */
  public static final native Object org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_getCachedSegmentResult(
      long nativeSegmentationPlatformServiceAndroid, Object caller, String segmentationKey);

  /**
   * org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.getSelectedSegment
   * @param nativeSegmentationPlatformServiceAndroid (long)
   * @param caller (org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl)
   * @param segmentationKey (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.components.segmentation_platform.SegmentSelectionResult>)
   * @return (void)
   */
  public static final native void org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_getSelectedSegment(
      long nativeSegmentationPlatformServiceAndroid, Object caller, String segmentationKey,
      Object callback);

  /**
   * org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.registerOnDemandSegmentSelectionCallback
   * @param nativeSegmentationPlatformServiceAndroid (long)
   * @param caller (org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl)
   * @param segmentationKey (java.lang.String)
   * @param callback (org.chromium.base.Callback<org.chromium.components.segmentation_platform.OnDemandSegmentSelectionResult>)
   * @return (int)
   */
  public static final native int org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_registerOnDemandSegmentSelectionCallback(
      long nativeSegmentationPlatformServiceAndroid, Object caller, String segmentationKey,
      Object callback);

  /**
   * org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl.unregisterOnDemandSegmentSelectionCallback
   * @param nativeSegmentationPlatformServiceAndroid (long)
   * @param caller (org.chromium.components.segmentation_platform.SegmentationPlatformServiceImpl)
   * @param segmentationKey (java.lang.String)
   * @param callbackId (int)
   * @return (void)
   */
  public static final native void org_chromium_components_segmentation_1platform_SegmentationPlatformServiceImpl_unregisterOnDemandSegmentSelectionCallback(
      long nativeSegmentationPlatformServiceAndroid, Object caller, String segmentationKey,
      int callbackId);
}
