// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface PaymentInstrumentProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.PaymentInstrumentProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The values for the card, where the key is one of autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; card_values = 2;</code>
   */
  int getCardValuesCount();
  /**
   * <pre>
   * The values for the card, where the key is one of autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; card_values = 2;</code>
   */
  boolean containsCardValues(
      int key);
  /**
   * Use {@link #getCardValuesMap()} instead.
   */
  @java.lang.Deprecated
  java.util.Map<java.lang.Integer, org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto>
  getCardValues();
  /**
   * <pre>
   * The values for the card, where the key is one of autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; card_values = 2;</code>
   */
  java.util.Map<java.lang.Integer, org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto>
  getCardValuesMap();
  /**
   * <pre>
   * The values for the card, where the key is one of autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; card_values = 2;</code>
   */

  org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto getCardValuesOrDefault(
      int key,
      org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto defaultValue);
  /**
   * <pre>
   * The values for the card, where the key is one of autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; card_values = 2;</code>
   */

  org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto getCardValuesOrThrow(
      int key);

  /**
   * <pre>
   * The payments instrument id used to identify and unmask the credit card.
   * </pre>
   *
   * <code>optional int64 instrument_id = 7;</code>
   * @return Whether the instrumentId field is set.
   */
  boolean hasInstrumentId();
  /**
   * <pre>
   * The payments instrument id used to identify and unmask the credit card.
   * </pre>
   *
   * <code>optional int64 instrument_id = 7;</code>
   * @return The instrumentId.
   */
  long getInstrumentId();

  /**
   * <pre>
   * The network of the card.
   * </pre>
   *
   * <code>optional string network = 5;</code>
   * @return Whether the network field is set.
   */
  boolean hasNetwork();
  /**
   * <pre>
   * The network of the card.
   * </pre>
   *
   * <code>optional string network = 5;</code>
   * @return The network.
   */
  java.lang.String getNetwork();
  /**
   * <pre>
   * The network of the card.
   * </pre>
   *
   * <code>optional string network = 5;</code>
   * @return The bytes for network.
   */
  com.google.protobuf.ByteString
      getNetworkBytes();

  /**
   * <pre>
   * The last 4 digits of the card.
   * </pre>
   *
   * <code>optional string last_four_digits = 6;</code>
   * @return Whether the lastFourDigits field is set.
   */
  boolean hasLastFourDigits();
  /**
   * <pre>
   * The last 4 digits of the card.
   * </pre>
   *
   * <code>optional string last_four_digits = 6;</code>
   * @return The lastFourDigits.
   */
  java.lang.String getLastFourDigits();
  /**
   * <pre>
   * The last 4 digits of the card.
   * </pre>
   *
   * <code>optional string last_four_digits = 6;</code>
   * @return The bytes for lastFourDigits.
   */
  com.google.protobuf.ByteString
      getLastFourDigitsBytes();

  /**
   * <pre>
   * The values for the billing address, where the key is one of
   * autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; address_values = 3;</code>
   */
  int getAddressValuesCount();
  /**
   * <pre>
   * The values for the billing address, where the key is one of
   * autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; address_values = 3;</code>
   */
  boolean containsAddressValues(
      int key);
  /**
   * Use {@link #getAddressValuesMap()} instead.
   */
  @java.lang.Deprecated
  java.util.Map<java.lang.Integer, org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto>
  getAddressValues();
  /**
   * <pre>
   * The values for the billing address, where the key is one of
   * autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; address_values = 3;</code>
   */
  java.util.Map<java.lang.Integer, org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto>
  getAddressValuesMap();
  /**
   * <pre>
   * The values for the billing address, where the key is one of
   * autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; address_values = 3;</code>
   */

  org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto getAddressValuesOrDefault(
      int key,
      org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto defaultValue);
  /**
   * <pre>
   * The values for the billing address, where the key is one of
   * autofill::ServerFieldType.
   * </pre>
   *
   * <code>map&lt;int32, .autofill_assistant.AutofillEntryProto&gt; address_values = 3;</code>
   */

  org.chromium.chrome.browser.autofill_assistant.proto.AutofillEntryProto getAddressValuesOrThrow(
      int key);

  /**
   * <pre>
   * The identifier for this payment instrument (credit card + billing address).
   * </pre>
   *
   * <code>optional string identifier = 4;</code>
   * @return Whether the identifier field is set.
   */
  boolean hasIdentifier();
  /**
   * <pre>
   * The identifier for this payment instrument (credit card + billing address).
   * </pre>
   *
   * <code>optional string identifier = 4;</code>
   * @return The identifier.
   */
  java.lang.String getIdentifier();
  /**
   * <pre>
   * The identifier for this payment instrument (credit card + billing address).
   * </pre>
   *
   * <code>optional string identifier = 4;</code>
   * @return The bytes for identifier.
   */
  com.google.protobuf.ByteString
      getIdentifierBytes();

  /**
   * <pre>
   * The token to edit this payment instrument.
   * </pre>
   *
   * <code>optional bytes edit_token = 8;</code>
   * @return Whether the editToken field is set.
   */
  boolean hasEditToken();
  /**
   * <pre>
   * The token to edit this payment instrument.
   * </pre>
   *
   * <code>optional bytes edit_token = 8;</code>
   * @return The editToken.
   */
  com.google.protobuf.ByteString getEditToken();
}
