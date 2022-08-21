// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/dom_action.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface SetNativeCheckedProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.SetNativeCheckedProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The target element. Must be an instance of a |WebInputElement|, and must
   * have a settable |checked| property, otherwise the action will fail.
   * </pre>
   *
   * <code>optional .autofill_assistant.ClientIdProto client_id = 1;</code>
   * @return Whether the clientId field is set.
   */
  boolean hasClientId();
  /**
   * <pre>
   * The target element. Must be an instance of a |WebInputElement|, and must
   * have a settable |checked| property, otherwise the action will fail.
   * </pre>
   *
   * <code>optional .autofill_assistant.ClientIdProto client_id = 1;</code>
   * @return The clientId.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ClientIdProto getClientId();

  /**
   * <pre>
   * The value to set.
   * </pre>
   *
   * <code>optional bool checked = 2;</code>
   * @return Whether the checked field is set.
   */
  boolean hasChecked();
  /**
   * <pre>
   * The value to set.
   * </pre>
   *
   * <code>optional bool checked = 2;</code>
   * @return The checked.
   */
  boolean getChecked();
}
