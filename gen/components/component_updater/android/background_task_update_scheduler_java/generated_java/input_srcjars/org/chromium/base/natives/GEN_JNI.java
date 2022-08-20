package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.component_updater.UpdateScheduler.onStartTask
   * @param nativeBackgroundTaskUpdateScheduler (long)
   * @param caller (org.chromium.components.component_updater.UpdateScheduler)
   * @return (void)
   */
  public static final native void org_chromium_components_component_1updater_UpdateScheduler_onStartTask(
      long nativeBackgroundTaskUpdateScheduler, Object caller);

  /**
   * org.chromium.components.component_updater.UpdateScheduler.onStopTask
   * @param nativeBackgroundTaskUpdateScheduler (long)
   * @param caller (org.chromium.components.component_updater.UpdateScheduler)
   * @return (void)
   */
  public static final native void org_chromium_components_component_1updater_UpdateScheduler_onStopTask(
      long nativeBackgroundTaskUpdateScheduler, Object caller);
}
