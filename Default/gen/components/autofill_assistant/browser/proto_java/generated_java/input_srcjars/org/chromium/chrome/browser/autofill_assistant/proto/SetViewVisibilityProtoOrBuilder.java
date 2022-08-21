// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/generic_ui.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface SetViewVisibilityProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.SetViewVisibilityProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The view to modify.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @return Whether the viewIdentifier field is set.
   */
  boolean hasViewIdentifier();
  /**
   * <pre>
   * The view to modify.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @return The viewIdentifier.
   */
  java.lang.String getViewIdentifier();
  /**
   * <pre>
   * The view to modify.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @return The bytes for viewIdentifier.
   */
  com.google.protobuf.ByteString
      getViewIdentifierBytes();

  /**
   * <pre>
   * The visibility flag. Must be a single boolean.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto visible = 3;</code>
   * @return Whether the visible field is set.
   */
  boolean hasVisible();
  /**
   * <pre>
   * The visibility flag. Must be a single boolean.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto visible = 3;</code>
   * @return The visible.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto getVisible();
}
