// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ElementConditionProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ElementConditionProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The condition matches if all of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.ElementConditionsProto all_of = 1;</code>
   * @return Whether the allOf field is set.
   */
  boolean hasAllOf();
  /**
   * <pre>
   * The condition matches if all of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.ElementConditionsProto all_of = 1;</code>
   * @return The allOf.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ElementConditionsProto getAllOf();

  /**
   * <pre>
   * The condition matches if at least one of these conditions matches.
   * </pre>
   *
   * <code>.autofill_assistant.ElementConditionsProto any_of = 2;</code>
   * @return Whether the anyOf field is set.
   */
  boolean hasAnyOf();
  /**
   * <pre>
   * The condition matches if at least one of these conditions matches.
   * </pre>
   *
   * <code>.autofill_assistant.ElementConditionsProto any_of = 2;</code>
   * @return The anyOf.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ElementConditionsProto getAnyOf();

  /**
   * <pre>
   * The condition matches if none of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.ElementConditionsProto none_of = 3;</code>
   * @return Whether the noneOf field is set.
   */
  boolean hasNoneOf();
  /**
   * <pre>
   * The condition matches if none of these conditions match.
   * </pre>
   *
   * <code>.autofill_assistant.ElementConditionsProto none_of = 3;</code>
   * @return The noneOf.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ElementConditionsProto getNoneOf();

  /**
   * <pre>
   * The condition matches if the given element exists. An empty
   * ElementReference never match.
   * </pre>
   *
   * <code>.autofill_assistant.SelectorProto match = 4;</code>
   * @return Whether the match field is set.
   */
  boolean hasMatch();
  /**
   * <pre>
   * The condition matches if the given element exists. An empty
   * ElementReference never match.
   * </pre>
   *
   * <code>.autofill_assistant.SelectorProto match = 4;</code>
   * @return The match.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.SelectorProto getMatch();

  /**
   * <pre>
   * A payload that identifies this condition. WaitForDom puts this payload
   * into the result. This is ignored outside of WaitForDom.
   * Prefer using tag.
   * </pre>
   *
   * <code>optional bytes payload = 5;</code>
   * @return Whether the payload field is set.
   */
  boolean hasPayload();
  /**
   * <pre>
   * A payload that identifies this condition. WaitForDom puts this payload
   * into the result. This is ignored outside of WaitForDom.
   * Prefer using tag.
   * </pre>
   *
   * <code>optional bytes payload = 5;</code>
   * @return The payload.
   */
  com.google.protobuf.ByteString getPayload();

  /**
   * <pre>
   * A tag that is echoed back to WaitForDom.Result if the condition matches.
   * This is ignored outside of WaitForDom.
   * </pre>
   *
   * <code>optional string tag = 8;</code>
   * @return Whether the tag field is set.
   */
  boolean hasTag();
  /**
   * <pre>
   * A tag that is echoed back to WaitForDom.Result if the condition matches.
   * This is ignored outside of WaitForDom.
   * </pre>
   *
   * <code>optional string tag = 8;</code>
   * @return The tag.
   */
  java.lang.String getTag();
  /**
   * <pre>
   * A tag that is echoed back to WaitForDom.Result if the condition matches.
   * This is ignored outside of WaitForDom.
   * </pre>
   *
   * <code>optional string tag = 8;</code>
   * @return The bytes for tag.
   */
  com.google.protobuf.ByteString
      getTagBytes();

  /**
   * <pre>
   * Optional. If set, the element of |match| will be stored under this
   * identifier on the client. If |require_unique_element| is not set to true,
   * the first match will be stored.
   * </pre>
   *
   * <code>optional .autofill_assistant.ClientIdProto client_id = 6;</code>
   * @return Whether the clientId field is set.
   */
  boolean hasClientId();
  /**
   * <pre>
   * Optional. If set, the element of |match| will be stored under this
   * identifier on the client. If |require_unique_element| is not set to true,
   * the first match will be stored.
   * </pre>
   *
   * <code>optional .autofill_assistant.ClientIdProto client_id = 6;</code>
   * @return The clientId.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ClientIdProto getClientId();

  /**
   * <pre>
   * Optional. If set to true, the finding of element of |match| will be done
   * in a strict manner, failing if multiple elements match the Selector. By
   * default the matching is non-strict, selecting the first match.
   * </pre>
   *
   * <code>optional bool require_unique_element = 7;</code>
   * @return Whether the requireUniqueElement field is set.
   */
  boolean hasRequireUniqueElement();
  /**
   * <pre>
   * Optional. If set to true, the finding of element of |match| will be done
   * in a strict manner, failing if multiple elements match the Selector. By
   * default the matching is non-strict, selecting the first match.
   * </pre>
   *
   * <code>optional bool require_unique_element = 7;</code>
   * @return The requireUniqueElement.
   */
  boolean getRequireUniqueElement();

  public org.chromium.chrome.browser.autofill_assistant.proto.ElementConditionProto.TypeCase getTypeCase();
}
