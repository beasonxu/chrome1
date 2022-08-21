// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface InitialScriptActionsRequestProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.InitialScriptActionsRequestProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <code>optional .autofill_assistant.InitialScriptActionsRequestProto.QueryProto query = 3;</code>
   * @return Whether the query field is set.
   */
  boolean hasQuery();
  /**
   * <code>optional .autofill_assistant.InitialScriptActionsRequestProto.QueryProto query = 3;</code>
   * @return The query.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.InitialScriptActionsRequestProto.QueryProto getQuery();

  /**
   * <code>repeated .autofill_assistant.ScriptParameterProto script_parameters = 2;</code>
   */
  java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> 
      getScriptParametersList();
  /**
   * <code>repeated .autofill_assistant.ScriptParameterProto script_parameters = 2;</code>
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto getScriptParameters(int index);
  /**
   * <code>repeated .autofill_assistant.ScriptParameterProto script_parameters = 2;</code>
   */
  int getScriptParametersCount();

  /**
   * <pre>
   * Specify a bundle and version to run.
   * </pre>
   *
   * <code>optional .autofill_assistant.ScriptStoreConfig script_store_config = 6;</code>
   * @return Whether the scriptStoreConfig field is set.
   */
  boolean hasScriptStoreConfig();
  /**
   * <pre>
   * Specify a bundle and version to run.
   * </pre>
   *
   * <code>optional .autofill_assistant.ScriptStoreConfig script_store_config = 6;</code>
   * @return The scriptStoreConfig.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ScriptStoreConfig getScriptStoreConfig();
}
