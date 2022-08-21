// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/generic_ui.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface SetModelValueProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.SetModelValueProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The model identifier to write to.
   * </pre>
   *
   * <code>optional string model_identifier = 1;</code>
   * @return Whether the modelIdentifier field is set.
   */
  boolean hasModelIdentifier();
  /**
   * <pre>
   * The model identifier to write to.
   * </pre>
   *
   * <code>optional string model_identifier = 1;</code>
   * @return The modelIdentifier.
   */
  java.lang.String getModelIdentifier();
  /**
   * <pre>
   * The model identifier to write to.
   * </pre>
   *
   * <code>optional string model_identifier = 1;</code>
   * @return The bytes for modelIdentifier.
   */
  com.google.protobuf.ByteString
      getModelIdentifierBytes();

  /**
   * <pre>
   * The value to write.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto value = 3;</code>
   * @return Whether the value field is set.
   */
  boolean hasValue();
  /**
   * <pre>
   * The value to write.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto value = 3;</code>
   * @return The value.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto getValue();
}
