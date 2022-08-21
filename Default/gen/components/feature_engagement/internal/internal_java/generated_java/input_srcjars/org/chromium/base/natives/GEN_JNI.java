package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.acquireDisplayLock
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @return (org.chromium.components.feature_engagement.internal.TrackerImpl.DisplayLockHandleAndroid)
   */
  public static final native Object org_chromium_components_feature_1engagement_internal_TrackerImpl_acquireDisplayLock(
      long nativeTrackerImplAndroid, Object caller);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.addOnInitializedCallback
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param callback (org.chromium.base.Callback<java.lang.Boolean>)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_addOnInitializedCallback(
      long nativeTrackerImplAndroid, Object caller, Object callback);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.dismissed
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_dismissed(
      long nativeTrackerImplAndroid, Object caller, String feature);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.dismissedWithSnooze
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @param snoozeAction (int)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_dismissedWithSnooze(
      long nativeTrackerImplAndroid, Object caller, String feature, int snoozeAction);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.getPendingPriorityNotification
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_components_feature_1engagement_internal_TrackerImpl_getPendingPriorityNotification(
      long nativeTrackerImplAndroid, Object caller);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.getTriggerState
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (int)
   */
  public static final native int org_chromium_components_feature_1engagement_internal_TrackerImpl_getTriggerState(
      long nativeTrackerImplAndroid, Object caller, String feature);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.hasEverTriggered
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @param fromWindow (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_feature_1engagement_internal_TrackerImpl_hasEverTriggered(
      long nativeTrackerImplAndroid, Object caller, String feature, boolean fromWindow);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.isInitialized
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_feature_1engagement_internal_TrackerImpl_isInitialized(
      long nativeTrackerImplAndroid, Object caller);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.notifyEvent
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param event (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_notifyEvent(
      long nativeTrackerImplAndroid, Object caller, String event);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.registerPriorityNotificationHandler
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @param priorityNotificationHandler (java.lang.Runnable)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_registerPriorityNotificationHandler(
      long nativeTrackerImplAndroid, Object caller, String feature,
      Object priorityNotificationHandler);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.release
   * @param nativeDisplayLockHandleAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_release(
      long nativeDisplayLockHandleAndroid);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.setPriorityNotification
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_setPriorityNotification(
      long nativeTrackerImplAndroid, Object caller, String feature);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.shouldTriggerHelpUI
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_feature_1engagement_internal_TrackerImpl_shouldTriggerHelpUI(
      long nativeTrackerImplAndroid, Object caller, String feature);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.shouldTriggerHelpUIWithSnooze
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (org.chromium.components.feature_engagement.TriggerDetails)
   */
  public static final native Object org_chromium_components_feature_1engagement_internal_TrackerImpl_shouldTriggerHelpUIWithSnooze(
      long nativeTrackerImplAndroid, Object caller, String feature);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.unregisterPriorityNotificationHandler
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_feature_1engagement_internal_TrackerImpl_unregisterPriorityNotificationHandler(
      long nativeTrackerImplAndroid, Object caller, String feature);

  /**
   * org.chromium.components.feature_engagement.internal.TrackerImpl.wouldTriggerHelpUI
   * @param nativeTrackerImplAndroid (long)
   * @param caller (org.chromium.components.feature_engagement.internal.TrackerImpl)
   * @param feature (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_feature_1engagement_internal_TrackerImpl_wouldTriggerHelpUI(
      long nativeTrackerImplAndroid, Object caller, String feature);
}
