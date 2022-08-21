// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface TriggerScriptConditionProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.TriggerScriptConditionProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The condition matches if all of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionsProto all_of = 1;</code>
   * @return Whether the allOf field is set.
   */
  boolean hasAllOf();
  /**
   * <pre>
   * The condition matches if all of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionsProto all_of = 1;</code>
   * @return The allOf.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.TriggerScriptConditionsProto getAllOf();

  /**
   * <pre>
   * The condition matches if at least one of these conditions matches.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionsProto any_of = 2;</code>
   * @return Whether the anyOf field is set.
   */
  boolean hasAnyOf();
  /**
   * <pre>
   * The condition matches if at least one of these conditions matches.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionsProto any_of = 2;</code>
   * @return The anyOf.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.TriggerScriptConditionsProto getAnyOf();

  /**
   * <pre>
   * The condition matches if none of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionsProto none_of = 3;</code>
   * @return Whether the noneOf field is set.
   */
  boolean hasNoneOf();
  /**
   * <pre>
   * The condition matches if none of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionsProto none_of = 3;</code>
   * @return The noneOf.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.TriggerScriptConditionsProto getNoneOf();

  /**
   * <pre>
   * The condition matches if the specified selector matches the current DOM..
   * </pre>
   *
   * <code>.autofill_assistant.SelectorProto selector = 8;</code>
   * @return Whether the selector field is set.
   */
  boolean hasSelector();
  /**
   * <pre>
   * The condition matches if the specified selector matches the current DOM..
   * </pre>
   *
   * <code>.autofill_assistant.SelectorProto selector = 8;</code>
   * @return The selector.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.SelectorProto getSelector();

  /**
   * <pre>
   * The condition matches if the user has stored login credentials for the
   * domain.
   * </pre>
   *
   * <code>.autofill_assistant.Empty stored_login_credentials = 5;</code>
   * @return Whether the storedLoginCredentials field is set.
   */
  boolean hasStoredLoginCredentials();
  /**
   * <pre>
   * The condition matches if the user has stored login credentials for the
   * domain.
   * </pre>
   *
   * <code>.autofill_assistant.Empty stored_login_credentials = 5;</code>
   * @return The storedLoginCredentials.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.Empty getStoredLoginCredentials();

  /**
   * <pre>
   * The condition matches if the user has never seen a trigger script before.
   * </pre>
   *
   * <code>.autofill_assistant.Empty is_first_time_user = 6;</code>
   * @return Whether the isFirstTimeUser field is set.
   */
  boolean hasIsFirstTimeUser();
  /**
   * <pre>
   * The condition matches if the user has never seen a trigger script before.
   * </pre>
   *
   * <code>.autofill_assistant.Empty is_first_time_user = 6;</code>
   * @return The isFirstTimeUser.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.Empty getIsFirstTimeUser();

  /**
   * <pre>
   * The condition matches if the client is in the specified experiment.
   * </pre>
   *
   * <code>int32 experiment_id = 7;</code>
   * @return Whether the experimentId field is set.
   */
  boolean hasExperimentId();
  /**
   * <pre>
   * The condition matches if the client is in the specified experiment.
   * </pre>
   *
   * <code>int32 experiment_id = 7;</code>
   * @return The experimentId.
   */
  int getExperimentId();

  /**
   * <pre>
   * The condition matches if the keyboard is hidden.
   * </pre>
   *
   * <code>.autofill_assistant.Empty keyboard_hidden = 9;</code>
   * @return Whether the keyboardHidden field is set.
   */
  boolean hasKeyboardHidden();
  /**
   * <pre>
   * The condition matches if the keyboard is hidden.
   * </pre>
   *
   * <code>.autofill_assistant.Empty keyboard_hidden = 9;</code>
   * @return The keyboardHidden.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.Empty getKeyboardHidden();

  /**
   * <pre>
   * The condition describes a parameter value that must be set to trigger.
   * </pre>
   *
   * <code>.autofill_assistant.ScriptParameterMatchProto script_parameter_match = 10;</code>
   * @return Whether the scriptParameterMatch field is set.
   */
  boolean hasScriptParameterMatch();
  /**
   * <pre>
   * The condition describes a parameter value that must be set to trigger.
   * </pre>
   *
   * <code>.autofill_assistant.ScriptParameterMatchProto script_parameter_match = 10;</code>
   * @return The scriptParameterMatch.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterMatchProto getScriptParameterMatch();

  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#'.
   * </pre>
   *
   * <code>string path_pattern = 11;</code>
   * @return Whether the pathPattern field is set.
   */
  boolean hasPathPattern();
  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#'.
   * </pre>
   *
   * <code>string path_pattern = 11;</code>
   * @return The pathPattern.
   */
  java.lang.String getPathPattern();
  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#'.
   * </pre>
   *
   * <code>string path_pattern = 11;</code>
   * @return The bytes for pathPattern.
   */
  com.google.protobuf.ByteString
      getPathPatternBytes();

  /**
   * <pre>
   * Domain (exact match), including the scheme (e.g.
   * "https://www.example.com").
   * </pre>
   *
   * <code>string domain_with_scheme = 12;</code>
   * @return Whether the domainWithScheme field is set.
   */
  boolean hasDomainWithScheme();
  /**
   * <pre>
   * Domain (exact match), including the scheme (e.g.
   * "https://www.example.com").
   * </pre>
   *
   * <code>string domain_with_scheme = 12;</code>
   * @return The domainWithScheme.
   */
  java.lang.String getDomainWithScheme();
  /**
   * <pre>
   * Domain (exact match), including the scheme (e.g.
   * "https://www.example.com").
   * </pre>
   *
   * <code>string domain_with_scheme = 12;</code>
   * @return The bytes for domainWithScheme.
   */
  com.google.protobuf.ByteString
      getDomainWithSchemeBytes();

  /**
   * <pre>
   * The condition matches if the DOM state of the specified frame matches
   * |document_ready_state|.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionProto.DocumentReadyStateCondition document_ready_state = 13;</code>
   * @return Whether the documentReadyState field is set.
   */
  boolean hasDocumentReadyState();
  /**
   * <pre>
   * The condition matches if the DOM state of the specified frame matches
   * |document_ready_state|.
   * </pre>
   *
   * <code>.autofill_assistant.TriggerScriptConditionProto.DocumentReadyStateCondition document_ready_state = 13;</code>
   * @return The documentReadyState.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.TriggerScriptConditionProto.DocumentReadyStateCondition getDocumentReadyState();

  public org.chromium.chrome.browser.autofill_assistant.proto.TriggerScriptConditionProto.TypeCase getTypeCase();
}
