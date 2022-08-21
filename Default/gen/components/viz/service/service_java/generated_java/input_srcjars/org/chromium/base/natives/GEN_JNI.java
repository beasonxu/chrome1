package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.viz.service.frame_sinks.ExternalBeginFrameSourceAndroid.onVSync
   * @param nativeExternalBeginFrameSourceAndroid (long)
   * @param caller (org.chromium.components.viz.service.frame_sinks.ExternalBeginFrameSourceAndroid)
   * @param vsyncTimeMicros (long)
   * @param vsyncPeriodMicros (long)
   * @return (void)
   */
  public static final native void org_chromium_components_viz_service_frame_1sinks_ExternalBeginFrameSourceAndroid_onVSync(
      long nativeExternalBeginFrameSourceAndroid, Object caller, long vsyncTimeMicros,
      long vsyncPeriodMicros);
}
