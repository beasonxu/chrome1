// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ScriptPreconditionProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ScriptPreconditionProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#''.
   * </pre>
   *
   * <code>repeated string path_pattern = 5;</code>
   * @return A list containing the pathPattern.
   */
  java.util.List<java.lang.String>
      getPathPatternList();
  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#''.
   * </pre>
   *
   * <code>repeated string path_pattern = 5;</code>
   * @return The count of pathPattern.
   */
  int getPathPatternCount();
  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#''.
   * </pre>
   *
   * <code>repeated string path_pattern = 5;</code>
   * @param index The index of the element to return.
   * @return The pathPattern at the given index.
   */
  java.lang.String getPathPattern(int index);
  /**
   * <pre>
   * Pattern of the path parts of the URL, including query and '#''.
   * </pre>
   *
   * <code>repeated string path_pattern = 5;</code>
   * @param index The index of the element to return.
   * @return The pathPattern at the given index.
   */
  com.google.protobuf.ByteString
      getPathPatternBytes(int index);

  /**
   * <pre>
   * Domain (exact match) excluding the last '/' character.
   * </pre>
   *
   * <code>repeated string domain = 6;</code>
   * @return A list containing the domain.
   */
  java.util.List<java.lang.String>
      getDomainList();
  /**
   * <pre>
   * Domain (exact match) excluding the last '/' character.
   * </pre>
   *
   * <code>repeated string domain = 6;</code>
   * @return The count of domain.
   */
  int getDomainCount();
  /**
   * <pre>
   * Domain (exact match) excluding the last '/' character.
   * </pre>
   *
   * <code>repeated string domain = 6;</code>
   * @param index The index of the element to return.
   * @return The domain at the given index.
   */
  java.lang.String getDomain(int index);
  /**
   * <pre>
   * Domain (exact match) excluding the last '/' character.
   * </pre>
   *
   * <code>repeated string domain = 6;</code>
   * @param index The index of the element to return.
   * @return The domain at the given index.
   */
  com.google.protobuf.ByteString
      getDomainBytes(int index);

  /**
   * <pre>
   * Combined with AND: all matches must be true for precondition to hold.
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterMatchProto script_parameter_match = 7;</code>
   */
  java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterMatchProto> 
      getScriptParameterMatchList();
  /**
   * <pre>
   * Combined with AND: all matches must be true for precondition to hold.
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterMatchProto script_parameter_match = 7;</code>
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterMatchProto getScriptParameterMatch(int index);
  /**
   * <pre>
   * Combined with AND: all matches must be true for precondition to hold.
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterMatchProto script_parameter_match = 7;</code>
   */
  int getScriptParameterMatchCount();

  /**
   * <pre>
   * Script can only run if the given condition match.
   * </pre>
   *
   * <code>optional .autofill_assistant.ElementConditionProto element_condition = 10;</code>
   * @return Whether the elementCondition field is set.
   */
  boolean hasElementCondition();
  /**
   * <pre>
   * Script can only run if the given condition match.
   * </pre>
   *
   * <code>optional .autofill_assistant.ElementConditionProto element_condition = 10;</code>
   * @return The elementCondition.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ElementConditionProto getElementCondition();
}
