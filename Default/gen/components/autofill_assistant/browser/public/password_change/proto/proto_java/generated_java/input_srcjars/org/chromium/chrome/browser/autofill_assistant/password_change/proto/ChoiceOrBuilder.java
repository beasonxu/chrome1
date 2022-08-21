// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/public/password_change/proto/actions.proto

package org.chromium.chrome.browser.autofill_assistant.password_change.proto;

public interface ChoiceOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.password_change.Choice)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The text shown on the chip/button.
   * </pre>
   *
   * <code>optional string text = 1;</code>
   * @return Whether the text field is set.
   */
  boolean hasText();
  /**
   * <pre>
   * The text shown on the chip/button.
   * </pre>
   *
   * <code>optional string text = 1;</code>
   * @return The text.
   */
  java.lang.String getText();
  /**
   * <pre>
   * The text shown on the chip/button.
   * </pre>
   *
   * <code>optional string text = 1;</code>
   * @return The bytes for text.
   */
  com.google.protobuf.ByteString
      getTextBytes();

  /**
   * <pre>
   * Tag that identifies a choice - will be returned as a result if this
   * choice is selected.
   * </pre>
   *
   * <code>optional string tag = 2;</code>
   * @return Whether the tag field is set.
   */
  boolean hasTag();
  /**
   * <pre>
   * Tag that identifies a choice - will be returned as a result if this
   * choice is selected.
   * </pre>
   *
   * <code>optional string tag = 2;</code>
   * @return The tag.
   */
  java.lang.String getTag();
  /**
   * <pre>
   * Tag that identifies a choice - will be returned as a result if this
   * choice is selected.
   * </pre>
   *
   * <code>optional string tag = 2;</code>
   * @return The bytes for tag.
   */
  com.google.protobuf.ByteString
      getTagBytes();

  /**
   * <pre>
   * Whether the button is highlighted.
   * </pre>
   *
   * <code>optional bool highlighted = 3;</code>
   * @return Whether the highlighted field is set.
   */
  boolean hasHighlighted();
  /**
   * <pre>
   * Whether the button is highlighted.
   * </pre>
   *
   * <code>optional bool highlighted = 3;</code>
   * @return The highlighted.
   */
  boolean getHighlighted();
}
