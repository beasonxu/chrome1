// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/public/password_change/proto/actions.proto

package org.chromium.chrome.browser.autofill_assistant.password_change.proto;

public interface UpdateSidePanelSpecificationOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.password_change.UpdateSidePanelSpecification)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Icon rendered on top of the side panel.
   * </pre>
   *
   * <code>optional .autofill_assistant.password_change.TopIcon top_icon = 1;</code>
   * @return Whether the topIcon field is set.
   */
  boolean hasTopIcon();
  /**
   * <pre>
   * Icon rendered on top of the side panel.
   * </pre>
   *
   * <code>optional .autofill_assistant.password_change.TopIcon top_icon = 1;</code>
   * @return The topIcon.
   */
  org.chromium.chrome.browser.autofill_assistant.password_change.proto.TopIcon getTopIcon();

  /**
   * <pre>
   * The title message shown to the user.
   * </pre>
   *
   * <code>optional string title = 2;</code>
   * @return Whether the title field is set.
   */
  boolean hasTitle();
  /**
   * <pre>
   * The title message shown to the user.
   * </pre>
   *
   * <code>optional string title = 2;</code>
   * @return The title.
   */
  java.lang.String getTitle();
  /**
   * <pre>
   * The title message shown to the user.
   * </pre>
   *
   * <code>optional string title = 2;</code>
   * @return The bytes for title.
   */
  com.google.protobuf.ByteString
      getTitleBytes();

  /**
   * <pre>
   * The description message shown to the user.
   * </pre>
   *
   * <code>optional string description = 3;</code>
   * @return Whether the description field is set.
   */
  boolean hasDescription();
  /**
   * <pre>
   * The description message shown to the user.
   * </pre>
   *
   * <code>optional string description = 3;</code>
   * @return The description.
   */
  java.lang.String getDescription();
  /**
   * <pre>
   * The description message shown to the user.
   * </pre>
   *
   * <code>optional string description = 3;</code>
   * @return The bytes for description.
   */
  com.google.protobuf.ByteString
      getDescriptionBytes();

  /**
   * <pre>
   * The current password change flow step.
   * </pre>
   *
   * <code>optional .autofill_assistant.password_change.ProgressStep progress_step = 4;</code>
   * @return Whether the progressStep field is set.
   */
  boolean hasProgressStep();
  /**
   * <pre>
   * The current password change flow step.
   * </pre>
   *
   * <code>optional .autofill_assistant.password_change.ProgressStep progress_step = 4;</code>
   * @return The progressStep.
   */
  org.chromium.chrome.browser.autofill_assistant.password_change.proto.ProgressStep getProgressStep();
}
