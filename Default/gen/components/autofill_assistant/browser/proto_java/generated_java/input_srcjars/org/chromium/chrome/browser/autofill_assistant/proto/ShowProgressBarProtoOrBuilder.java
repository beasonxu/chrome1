// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ShowProgressBarProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ShowProgressBarProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Value between 0 and |N| (where N is the size of the initial
   * |step_icons|) indicating the current step the flow is in, marking
   * all previous steps as complete. The active step will not be marked as
   * complete but instead be marked as active with a pulsating animation.
   * Setting the value to |N| or -1 will mark all steps as complete with no
   * step being active anymore.
   * </pre>
   *
   * <code>int32 active_step = 8;</code>
   * @return Whether the activeStep field is set.
   */
  boolean hasActiveStep();
  /**
   * <pre>
   * Value between 0 and |N| (where N is the size of the initial
   * |step_icons|) indicating the current step the flow is in, marking
   * all previous steps as complete. The active step will not be marked as
   * complete but instead be marked as active with a pulsating animation.
   * Setting the value to |N| or -1 will mark all steps as complete with no
   * step being active anymore.
   * </pre>
   *
   * <code>int32 active_step = 8;</code>
   * @return The activeStep.
   */
  int getActiveStep();

  /**
   * <pre>
   * The string reference of an icon defined in the
   * |StepProgressBarConfiguration|. This sets the |active_step| to that icon
   * with the same logic as |active_step| itself.
   * </pre>
   *
   * <code>string active_step_identifier = 11;</code>
   * @return Whether the activeStepIdentifier field is set.
   */
  boolean hasActiveStepIdentifier();
  /**
   * <pre>
   * The string reference of an icon defined in the
   * |StepProgressBarConfiguration|. This sets the |active_step| to that icon
   * with the same logic as |active_step| itself.
   * </pre>
   *
   * <code>string active_step_identifier = 11;</code>
   * @return The activeStepIdentifier.
   */
  java.lang.String getActiveStepIdentifier();
  /**
   * <pre>
   * The string reference of an icon defined in the
   * |StepProgressBarConfiguration|. This sets the |active_step| to that icon
   * with the same logic as |active_step| itself.
   * </pre>
   *
   * <code>string active_step_identifier = 11;</code>
   * @return The bytes for activeStepIdentifier.
   */
  com.google.protobuf.ByteString
      getActiveStepIdentifierBytes();

  /**
   * <pre>
   * Completes the progress in whichever progress bar is active.
   * </pre>
   *
   * <code>bool complete_progress = 12;</code>
   * @return Whether the completeProgress field is set.
   */
  boolean hasCompleteProgress();
  /**
   * <pre>
   * Completes the progress in whichever progress bar is active.
   * </pre>
   *
   * <code>bool complete_progress = 12;</code>
   * @return The completeProgress.
   */
  boolean getCompleteProgress();

  /**
   * <pre>
   * Whether the step progress bar should go into an error state.
   * If the active step is smaller than |N|, this will simply mark the last icon
   * as failed. If the active step is |N|, meaning that all steps have been
   * completed, this will mark the entire progress bar as failed.
   * </pre>
   *
   * <code>optional bool error_state = 10;</code>
   * @return Whether the errorState field is set.
   */
  boolean hasErrorState();
  /**
   * <pre>
   * Whether the step progress bar should go into an error state.
   * If the active step is smaller than |N|, this will simply mark the last icon
   * as failed. If the active step is |N|, meaning that all steps have been
   * completed, this will mark the entire progress bar as failed.
   * </pre>
   *
   * <code>optional bool error_state = 10;</code>
   * @return The errorState.
   */
  boolean getErrorState();

  /**
   * <pre>
   * Hide the progress bar in the UI.
   * </pre>
   *
   * <code>optional bool hide = 7;</code>
   * @return Whether the hide field is set.
   */
  boolean hasHide();
  /**
   * <pre>
   * Hide the progress bar in the UI.
   * </pre>
   *
   * <code>optional bool hide = 7;</code>
   * @return The hide.
   */
  boolean getHide();

  /**
   * <code>optional .autofill_assistant.ShowProgressBarProto.StepProgressBarConfiguration step_progress_bar_configuration = 9;</code>
   * @return Whether the stepProgressBarConfiguration field is set.
   */
  boolean hasStepProgressBarConfiguration();
  /**
   * <code>optional .autofill_assistant.ShowProgressBarProto.StepProgressBarConfiguration step_progress_bar_configuration = 9;</code>
   * @return The stepProgressBarConfiguration.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ShowProgressBarProto.StepProgressBarConfiguration getStepProgressBarConfiguration();

  public org.chromium.chrome.browser.autofill_assistant.proto.ShowProgressBarProto.ProgressIndicatorCase getProgressIndicatorCase();
}
