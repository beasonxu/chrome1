// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/model.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface AutofillCreditCardProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.AutofillCreditCardProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The GUID of the card.
   * </pre>
   *
   * <code>string guid = 1;</code>
   * @return Whether the guid field is set.
   */
  boolean hasGuid();
  /**
   * <pre>
   * The GUID of the card.
   * </pre>
   *
   * <code>string guid = 1;</code>
   * @return The guid.
   */
  java.lang.String getGuid();
  /**
   * <pre>
   * The GUID of the card.
   * </pre>
   *
   * <code>string guid = 1;</code>
   * @return The bytes for guid.
   */
  com.google.protobuf.ByteString
      getGuidBytes();

  /**
   * <pre>
   * The currently selected credit card. Only works if a card was selected in
   * a previous |CollectUserData| action.
   * </pre>
   *
   * <code>.autofill_assistant.Empty selected_credit_card = 2;</code>
   * @return Whether the selectedCreditCard field is set.
   */
  boolean hasSelectedCreditCard();
  /**
   * <pre>
   * The currently selected credit card. Only works if a card was selected in
   * a previous |CollectUserData| action.
   * </pre>
   *
   * <code>.autofill_assistant.Empty selected_credit_card = 2;</code>
   * @return The selectedCreditCard.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.Empty getSelectedCreditCard();

  public org.chromium.chrome.browser.autofill_assistant.proto.AutofillCreditCardProto.IdentifierCase getIdentifierCase();
}
