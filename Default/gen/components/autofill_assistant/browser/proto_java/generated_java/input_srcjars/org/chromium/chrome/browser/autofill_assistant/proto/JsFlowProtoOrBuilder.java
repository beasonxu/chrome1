// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface JsFlowProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.JsFlowProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The JS flow to execute in a sandbox. If present
   * ActionsResponseProto::js_flow_library needs to be evaluated first.
   * </pre>
   *
   * <code>optional string js_flow = 1;</code>
   * @return Whether the jsFlow field is set.
   */
  boolean hasJsFlow();
  /**
   * <pre>
   * The JS flow to execute in a sandbox. If present
   * ActionsResponseProto::js_flow_library needs to be evaluated first.
   * </pre>
   *
   * <code>optional string js_flow = 1;</code>
   * @return The jsFlow.
   */
  java.lang.String getJsFlow();
  /**
   * <pre>
   * The JS flow to execute in a sandbox. If present
   * ActionsResponseProto::js_flow_library needs to be evaluated first.
   * </pre>
   *
   * <code>optional string js_flow = 1;</code>
   * @return The bytes for jsFlow.
   */
  com.google.protobuf.ByteString
      getJsFlowBytes();
}
