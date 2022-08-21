package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;
import java.lang.Throwable;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.base.ApplicationStatus.onApplicationStateChange
   * @param newState (int)
   * @return (void)
   */
  public static final native void org_chromium_base_ApplicationStatus_onApplicationStateChange(
      int newState);

  /**
   * org.chromium.base.BaseFeatureList.isEnabled
   * @param featureName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_BaseFeatureList_isEnabled(
      String featureName);

  /**
   * org.chromium.base.CommandLine.appendSwitch
   * @param switchString (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_CommandLine_appendSwitch(String switchString);

  /**
   * org.chromium.base.CommandLine.appendSwitchWithValue
   * @param switchString (java.lang.String)
   * @param value (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_CommandLine_appendSwitchWithValue(
      String switchString, String value);

  /**
   * org.chromium.base.CommandLine.appendSwitchesAndArguments
   * @param array (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_base_CommandLine_appendSwitchesAndArguments(
      String[] array);

  /**
   * org.chromium.base.CommandLine.getSwitchValue
   * @param switchString (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_base_CommandLine_getSwitchValue(
      String switchString);

  /**
   * org.chromium.base.CommandLine.getSwitchesFlattened
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_base_CommandLine_getSwitchesFlattened();

  /**
   * org.chromium.base.CommandLine.hasSwitch
   * @param switchString (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_CommandLine_hasSwitch(String switchString);

  /**
   * org.chromium.base.CommandLine.init
   * @param args (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_base_CommandLine_init(String[] args);

  /**
   * org.chromium.base.CommandLine.removeSwitch
   * @param switchString (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_CommandLine_removeSwitch(String switchString);

  /**
   * org.chromium.base.CpuFeatures.getCoreCount
   * @return (int)
   */
  public static final native int org_chromium_base_CpuFeatures_getCoreCount();

  /**
   * org.chromium.base.CpuFeatures.getCpuFeatures
   * @return (long)
   */
  public static final native long org_chromium_base_CpuFeatures_getCpuFeatures();

  /**
   * org.chromium.base.EarlyTraceEvent.recordEarlyAsyncBeginEvent
   * @param name (java.lang.String)
   * @param id (long)
   * @param timeNanos (long)
   * @return (void)
   */
  public static final native void org_chromium_base_EarlyTraceEvent_recordEarlyAsyncBeginEvent(
      String name, long id, long timeNanos);

  /**
   * org.chromium.base.EarlyTraceEvent.recordEarlyAsyncEndEvent
   * @param name (java.lang.String)
   * @param id (long)
   * @param timeNanos (long)
   * @return (void)
   */
  public static final native void org_chromium_base_EarlyTraceEvent_recordEarlyAsyncEndEvent(
      String name, long id, long timeNanos);

  /**
   * org.chromium.base.EarlyTraceEvent.recordEarlyBeginEvent
   * @param name (java.lang.String)
   * @param timeNanos (long)
   * @param threadId (int)
   * @param threadMillis (long)
   * @return (void)
   */
  public static final native void org_chromium_base_EarlyTraceEvent_recordEarlyBeginEvent(
      String name, long timeNanos, int threadId, long threadMillis);

  /**
   * org.chromium.base.EarlyTraceEvent.recordEarlyEndEvent
   * @param name (java.lang.String)
   * @param timeNanos (long)
   * @param threadId (int)
   * @param threadMillis (long)
   * @return (void)
   */
  public static final native void org_chromium_base_EarlyTraceEvent_recordEarlyEndEvent(String name,
      long timeNanos, int threadId, long threadMillis);

  /**
   * org.chromium.base.EarlyTraceEvent.recordEarlyToplevelBeginEvent
   * @param name (java.lang.String)
   * @param timeNanos (long)
   * @param threadId (int)
   * @param threadMillis (long)
   * @return (void)
   */
  public static final native void org_chromium_base_EarlyTraceEvent_recordEarlyToplevelBeginEvent(
      String name, long timeNanos, int threadId, long threadMillis);

  /**
   * org.chromium.base.EarlyTraceEvent.recordEarlyToplevelEndEvent
   * @param name (java.lang.String)
   * @param timeNanos (long)
   * @param threadId (int)
   * @param threadMillis (long)
   * @return (void)
   */
  public static final native void org_chromium_base_EarlyTraceEvent_recordEarlyToplevelEndEvent(
      String name, long timeNanos, int threadId, long threadMillis);

  /**
   * org.chromium.base.FeatureList.isInitialized
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_FeatureList_isInitialized();

  /**
   * org.chromium.base.Features.getFieldTrialParamByFeatureAsBoolean
   * @param featurePointer (long)
   * @param paramName (java.lang.String)
   * @param defaultValue (boolean)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_Features_getFieldTrialParamByFeatureAsBoolean(
      long featurePointer, String paramName, boolean defaultValue);

  /**
   * org.chromium.base.Features.isEnabled
   * @param featurePointer (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_Features_isEnabled(long featurePointer);

  /**
   * org.chromium.base.FieldTrialList.createFieldTrial
   * @param trialName (java.lang.String)
   * @param groupName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_FieldTrialList_createFieldTrial(
      String trialName, String groupName);

  /**
   * org.chromium.base.FieldTrialList.findFullName
   * @param trialName (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_base_FieldTrialList_findFullName(String trialName);

  /**
   * org.chromium.base.FieldTrialList.getVariationParameter
   * @param trialName (java.lang.String)
   * @param parameterKey (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_base_FieldTrialList_getVariationParameter(
      String trialName, String parameterKey);

  /**
   * org.chromium.base.FieldTrialList.logActiveTrials
   * @return (void)
   */
  public static final native void org_chromium_base_FieldTrialList_logActiveTrials();

  /**
   * org.chromium.base.FieldTrialList.trialExists
   * @param trialName (java.lang.String)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_FieldTrialList_trialExists(String trialName);

  /**
   * org.chromium.base.FileUtils.getAbsoluteFilePath
   * @param filePath (java.lang.String)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_base_FileUtils_getAbsoluteFilePath(
      String filePath);

  /**
   * org.chromium.base.ImportantFileWriterAndroid.writeFileAtomically
   * @param fileName (java.lang.String)
   * @param data (byte[])
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_ImportantFileWriterAndroid_writeFileAtomically(
      String fileName, byte[] data);

  /**
   * org.chromium.base.JavaExceptionReporter.reportJavaException
   * @param crashAfterReport (boolean)
   * @param e (java.lang.Throwable)
   * @return (void)
   */
  public static final native void org_chromium_base_JavaExceptionReporter_reportJavaException(
      boolean crashAfterReport, Throwable e);

  /**
   * org.chromium.base.JavaExceptionReporter.reportJavaStackTrace
   * @param stackTrace (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_JavaExceptionReporter_reportJavaStackTrace(
      String stackTrace);

  /**
   * org.chromium.base.JavaHandlerThread.initializeThread
   * @param nativeJavaHandlerThread (long)
   * @param nativeEvent (long)
   * @return (void)
   */
  public static final native void org_chromium_base_JavaHandlerThread_initializeThread(
      long nativeJavaHandlerThread, long nativeEvent);

  /**
   * org.chromium.base.JavaHandlerThread.onLooperStopped
   * @param nativeJavaHandlerThread (long)
   * @return (void)
   */
  public static final native void org_chromium_base_JavaHandlerThread_onLooperStopped(
      long nativeJavaHandlerThread);

  /**
   * org.chromium.base.MemoryPressureListener.onMemoryPressure
   * @param pressure (int)
   * @return (void)
   */
  public static final native void org_chromium_base_MemoryPressureListener_onMemoryPressure(
      int pressure);

  /**
   * org.chromium.base.PathService.override
   * @param what (int)
   * @param path (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_PathService_override(int what, String path);

  /**
   * org.chromium.base.PowerMonitor.onBatteryChargingChanged
   * @return (void)
   */
  public static final native void org_chromium_base_PowerMonitor_onBatteryChargingChanged();

  /**
   * org.chromium.base.PowerMonitor.onThermalStatusChanged
   * @param thermalStatus (int)
   * @return (void)
   */
  public static final native void org_chromium_base_PowerMonitor_onThermalStatusChanged(
      int thermalStatus);

  /**
   * org.chromium.base.SysUtils.logPageFaultCountToTracing
   * @return (void)
   */
  public static final native void org_chromium_base_SysUtils_logPageFaultCountToTracing();

  /**
   * org.chromium.base.TraceEvent.addViewDump
   * @param id (int)
   * @param parentId (int)
   * @param isShown (boolean)
   * @param isDirty (boolean)
   * @param className (java.lang.String)
   * @param resourceName (java.lang.String)
   * @param activityProtoPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_addViewDump(int id, int parentId,
      boolean isShown, boolean isDirty, String className, String resourceName,
      long activityProtoPtr);

  /**
   * org.chromium.base.TraceEvent.begin
   * @param name (java.lang.String)
   * @param arg (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_begin(String name, String arg);

  /**
   * org.chromium.base.TraceEvent.beginToplevel
   * @param target (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_beginToplevel(String target);

  /**
   * org.chromium.base.TraceEvent.end
   * @param name (java.lang.String)
   * @param arg (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_end(String name, String arg);

  /**
   * org.chromium.base.TraceEvent.endToplevel
   * @param target (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_endToplevel(String target);

  /**
   * org.chromium.base.TraceEvent.finishAsync
   * @param name (java.lang.String)
   * @param id (long)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_finishAsync(String name, long id);

  /**
   * org.chromium.base.TraceEvent.initViewHierarchyDump
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_initViewHierarchyDump();

  /**
   * org.chromium.base.TraceEvent.instant
   * @param name (java.lang.String)
   * @param arg (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_instant(String name, String arg);

  /**
   * org.chromium.base.TraceEvent.instantAndroidIPC
   * @param name (java.lang.String)
   * @param durMs (long)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_instantAndroidIPC(String name,
      long durMs);

  /**
   * org.chromium.base.TraceEvent.registerEnabledObserver
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_registerEnabledObserver();

  /**
   * org.chromium.base.TraceEvent.setupATraceStartupTrace
   * @param categoryFilter (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_setupATraceStartupTrace(
      String categoryFilter);

  /**
   * org.chromium.base.TraceEvent.startATrace
   * @param categoryFilter (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_startATrace(String categoryFilter);

  /**
   * org.chromium.base.TraceEvent.startActivityDump
   * @param name (java.lang.String)
   * @param dumpProtoPtr (long)
   * @return (long)
   */
  public static final native long org_chromium_base_TraceEvent_startActivityDump(String name,
      long dumpProtoPtr);

  /**
   * org.chromium.base.TraceEvent.startAsync
   * @param name (java.lang.String)
   * @param id (long)
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_startAsync(String name, long id);

  /**
   * org.chromium.base.TraceEvent.stopATrace
   * @return (void)
   */
  public static final native void org_chromium_base_TraceEvent_stopATrace();

  /**
   * org.chromium.base.TraceEvent.viewHierarchyDumpEnabled
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_TraceEvent_viewHierarchyDumpEnabled();

  /**
   * org.chromium.base.jank_tracker.JankMetricUMARecorder.recordJankMetrics
   * @param scenarioName (java.lang.String)
   * @param timestampsNs (long[])
   * @param durationsNs (long[])
   * @param jankBurstsNs (long[])
   * @param missedFrames (int)
   * @return (void)
   */
  public static final native void org_chromium_base_jank_1tracker_JankMetricUMARecorder_recordJankMetrics(
      String scenarioName, long[] timestampsNs, long[] durationsNs, long[] jankBurstsNs,
      int missedFrames);

  /**
   * org.chromium.base.library_loader.LibraryLoader.libraryLoaded
   * @param processType (int)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_library_1loader_LibraryLoader_libraryLoaded(
      int processType);

  /**
   * org.chromium.base.library_loader.LibraryLoader.registerNonMainDexJni
   * @return (void)
   */
  public static final native void org_chromium_base_library_1loader_LibraryLoader_registerNonMainDexJni(
      );

  /**
   * org.chromium.base.library_loader.LibraryPrefetcher.forkAndPrefetchNativeLibrary
   * @return (void)
   */
  public static final native void org_chromium_base_library_1loader_LibraryPrefetcher_forkAndPrefetchNativeLibrary(
      );

  /**
   * org.chromium.base.library_loader.LibraryPrefetcher.percentageOfResidentNativeLibraryCode
   * @return (int)
   */
  public static final native int org_chromium_base_library_1loader_LibraryPrefetcher_percentageOfResidentNativeLibraryCode(
      );

  /**
   * org.chromium.base.library_loader.LibraryPrefetcher.periodicallyCollectResidency
   * @return (void)
   */
  public static final native void org_chromium_base_library_1loader_LibraryPrefetcher_periodicallyCollectResidency(
      );

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.addActionCallbackForTesting
   * @param callback (org.chromium.base.Callback<java.lang.String>)
   * @return (long)
   */
  public static final native long org_chromium_base_metrics_NativeUmaRecorder_addActionCallbackForTesting(
      Object callback);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.createHistogramSnapshotForTesting
   * @return (long)
   */
  public static final native long org_chromium_base_metrics_NativeUmaRecorder_createHistogramSnapshotForTesting(
      );

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.destroyHistogramSnapshotForTesting
   * @param snapshotPtr (long)
   * @return (void)
   */
  public static final native void org_chromium_base_metrics_NativeUmaRecorder_destroyHistogramSnapshotForTesting(
      long snapshotPtr);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.getHistogramTotalCountForTesting
   * @param name (java.lang.String)
   * @param snapshotPtr (long)
   * @return (int)
   */
  public static final native int org_chromium_base_metrics_NativeUmaRecorder_getHistogramTotalCountForTesting(
      String name, long snapshotPtr);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.getHistogramValueCountForTesting
   * @param name (java.lang.String)
   * @param sample (int)
   * @param snapshotPtr (long)
   * @return (int)
   */
  public static final native int org_chromium_base_metrics_NativeUmaRecorder_getHistogramValueCountForTesting(
      String name, int sample, long snapshotPtr);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.recordBooleanHistogram
   * @param name (java.lang.String)
   * @param nativeHint (long)
   * @param sample (boolean)
   * @return (long)
   */
  public static final native long org_chromium_base_metrics_NativeUmaRecorder_recordBooleanHistogram(
      String name, long nativeHint, boolean sample);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.recordExponentialHistogram
   * @param name (java.lang.String)
   * @param nativeHint (long)
   * @param sample (int)
   * @param min (int)
   * @param max (int)
   * @param numBuckets (int)
   * @return (long)
   */
  public static final native long org_chromium_base_metrics_NativeUmaRecorder_recordExponentialHistogram(
      String name, long nativeHint, int sample, int min, int max, int numBuckets);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.recordLinearHistogram
   * @param name (java.lang.String)
   * @param nativeHint (long)
   * @param sample (int)
   * @param min (int)
   * @param max (int)
   * @param numBuckets (int)
   * @return (long)
   */
  public static final native long org_chromium_base_metrics_NativeUmaRecorder_recordLinearHistogram(
      String name, long nativeHint, int sample, int min, int max, int numBuckets);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.recordSparseHistogram
   * @param name (java.lang.String)
   * @param nativeHint (long)
   * @param sample (int)
   * @return (long)
   */
  public static final native long org_chromium_base_metrics_NativeUmaRecorder_recordSparseHistogram(
      String name, long nativeHint, int sample);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.recordUserAction
   * @param name (java.lang.String)
   * @param millisSinceEvent (long)
   * @return (void)
   */
  public static final native void org_chromium_base_metrics_NativeUmaRecorder_recordUserAction(
      String name, long millisSinceEvent);

  /**
   * org.chromium.base.metrics.NativeUmaRecorder.removeActionCallbackForTesting
   * @param callbackId (long)
   * @return (void)
   */
  public static final native void org_chromium_base_metrics_NativeUmaRecorder_removeActionCallbackForTesting(
      long callbackId);

  /**
   * org.chromium.base.metrics.StatisticsRecorderAndroid.toJson
   * @param verbosityLevel (int)
   * @return (java.lang.String)
   */
  public static final native String org_chromium_base_metrics_StatisticsRecorderAndroid_toJson(
      int verbosityLevel);

  /**
   * org.chromium.base.process_launcher.ChildProcessService.dumpProcessStack
   * @return (void)
   */
  public static final native void org_chromium_base_process_1launcher_ChildProcessService_dumpProcessStack(
      );

  /**
   * org.chromium.base.process_launcher.ChildProcessService.exitChildProcess
   * @return (void)
   */
  public static final native void org_chromium_base_process_1launcher_ChildProcessService_exitChildProcess(
      );

  /**
   * org.chromium.base.process_launcher.ChildProcessService.registerFileDescriptors
   * @param keys (java.lang.String[])
   * @param id (int[])
   * @param fd (int[])
   * @param offset (long[])
   * @param size (long[])
   * @return (void)
   */
  public static final native void org_chromium_base_process_1launcher_ChildProcessService_registerFileDescriptors(
      String[] keys, int[] id, int[] fd, long[] offset, long[] size);

  /**
   * org.chromium.base.task.PostTask.postDelayedTask
   * @param priority (int)
   * @param mayBlock (boolean)
   * @param useThreadPool (boolean)
   * @param extensionId (byte)
   * @param extensionData (byte[])
   * @param task (java.lang.Runnable)
   * @param delay (long)
   * @param runnableClassName (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_task_PostTask_postDelayedTask(int priority,
      boolean mayBlock, boolean useThreadPool, byte extensionId, byte[] extensionData, Object task,
      long delay, String runnableClassName);

  /**
   * org.chromium.base.task.TaskRunnerImpl.belongsToCurrentThread
   * @param nativeTaskRunnerAndroid (long)
   * @return (boolean)
   */
  public static final native boolean org_chromium_base_task_TaskRunnerImpl_belongsToCurrentThread(
      long nativeTaskRunnerAndroid);

  /**
   * org.chromium.base.task.TaskRunnerImpl.destroy
   * @param nativeTaskRunnerAndroid (long)
   * @return (void)
   */
  public static final native void org_chromium_base_task_TaskRunnerImpl_destroy(
      long nativeTaskRunnerAndroid);

  /**
   * org.chromium.base.task.TaskRunnerImpl.init
   * @param taskRunnerType (int)
   * @param priority (int)
   * @param mayBlock (boolean)
   * @param useThreadPool (boolean)
   * @param extensionId (byte)
   * @param extensionData (byte[])
   * @return (long)
   */
  public static final native long org_chromium_base_task_TaskRunnerImpl_init(int taskRunnerType,
      int priority, boolean mayBlock, boolean useThreadPool, byte extensionId,
      byte[] extensionData);

  /**
   * org.chromium.base.task.TaskRunnerImpl.postDelayedTask
   * @param nativeTaskRunnerAndroid (long)
   * @param task (java.lang.Runnable)
   * @param delay (long)
   * @param runnableClassName (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_base_task_TaskRunnerImpl_postDelayedTask(
      long nativeTaskRunnerAndroid, Object task, long delay, String runnableClassName);
}
