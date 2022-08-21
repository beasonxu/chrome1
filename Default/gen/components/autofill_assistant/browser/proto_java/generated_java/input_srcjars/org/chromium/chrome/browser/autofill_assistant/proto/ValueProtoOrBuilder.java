// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/model.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ValueProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ValueProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <code>.autofill_assistant.StringList strings = 1;</code>
   * @return Whether the strings field is set.
   */
  boolean hasStrings();
  /**
   * <code>.autofill_assistant.StringList strings = 1;</code>
   * @return The strings.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.StringList getStrings();

  /**
   * <code>.autofill_assistant.BooleanList booleans = 2;</code>
   * @return Whether the booleans field is set.
   */
  boolean hasBooleans();
  /**
   * <code>.autofill_assistant.BooleanList booleans = 2;</code>
   * @return The booleans.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.BooleanList getBooleans();

  /**
   * <code>.autofill_assistant.IntList ints = 3;</code>
   * @return Whether the ints field is set.
   */
  boolean hasInts();
  /**
   * <code>.autofill_assistant.IntList ints = 3;</code>
   * @return The ints.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.IntList getInts();

  /**
   * <code>.autofill_assistant.UserActionList user_actions = 4;</code>
   * @return Whether the userActions field is set.
   */
  boolean hasUserActions();
  /**
   * <code>.autofill_assistant.UserActionList user_actions = 4;</code>
   * @return The userActions.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.UserActionList getUserActions();

  /**
   * <code>.autofill_assistant.DateList dates = 5;</code>
   * @return Whether the dates field is set.
   */
  boolean hasDates();
  /**
   * <code>.autofill_assistant.DateList dates = 5;</code>
   * @return The dates.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.DateList getDates();

  /**
   * <code>.autofill_assistant.CreditCardList credit_cards = 7;</code>
   * @return Whether the creditCards field is set.
   */
  boolean hasCreditCards();
  /**
   * <code>.autofill_assistant.CreditCardList credit_cards = 7;</code>
   * @return The creditCards.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.CreditCardList getCreditCards();

  /**
   * <code>.autofill_assistant.ProfileList profiles = 8;</code>
   * @return Whether the profiles field is set.
   */
  boolean hasProfiles();
  /**
   * <code>.autofill_assistant.ProfileList profiles = 8;</code>
   * @return The profiles.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ProfileList getProfiles();

  /**
   * <code>.autofill_assistant.LoginOptionList login_options = 9;</code>
   * @return Whether the loginOptions field is set.
   */
  boolean hasLoginOptions();
  /**
   * <code>.autofill_assistant.LoginOptionList login_options = 9;</code>
   * @return The loginOptions.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.LoginOptionList getLoginOptions();

  /**
   * <code>.autofill_assistant.CreditCardResponseProto credit_card_response = 10;</code>
   * @return Whether the creditCardResponse field is set.
   */
  boolean hasCreditCardResponse();
  /**
   * <code>.autofill_assistant.CreditCardResponseProto credit_card_response = 10;</code>
   * @return The creditCardResponse.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.CreditCardResponseProto getCreditCardResponse();

  /**
   * <code>bytes server_payload = 12;</code>
   * @return Whether the serverPayload field is set.
   */
  boolean hasServerPayload();
  /**
   * <code>bytes server_payload = 12;</code>
   * @return The serverPayload.
   */
  com.google.protobuf.ByteString getServerPayload();

  /**
   * <pre>
   * If set to true, this value will not be sent to the backend. This flag is
   * mostly used internally, to prevent certain values from leaving the device.
   * Note that values derived from client_side_only values will inherit this
   * property.
   * </pre>
   *
   * <code>optional bool is_client_side_only = 6;</code>
   * @return Whether the isClientSideOnly field is set.
   */
  boolean hasIsClientSideOnly();
  /**
   * <pre>
   * If set to true, this value will not be sent to the backend. This flag is
   * mostly used internally, to prevent certain values from leaving the device.
   * Note that values derived from client_side_only values will inherit this
   * property.
   * </pre>
   *
   * <code>optional bool is_client_side_only = 6;</code>
   * @return The isClientSideOnly.
   */
  boolean getIsClientSideOnly();

  public org.chromium.chrome.browser.autofill_assistant.proto.ValueProto.KindCase getKindCase();
}
