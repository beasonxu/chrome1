// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/action_value.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface AutofillValueOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.AutofillValue)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The profile to be used. This has to be requested with a
   * |CollectUserDataAction| first.
   * </pre>
   *
   * <code>optional .autofill_assistant.AutofillProfile profile = 1;</code>
   * @return Whether the profile field is set.
   */
  boolean hasProfile();
  /**
   * <pre>
   * The profile to be used. This has to be requested with a
   * |CollectUserDataAction| first.
   * </pre>
   *
   * <code>optional .autofill_assistant.AutofillProfile profile = 1;</code>
   * @return The profile.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.AutofillProfile getProfile();

  /**
   * <pre>
   * The value expression.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueExpression value_expression = 5;</code>
   * @return Whether the valueExpression field is set.
   */
  boolean hasValueExpression();
  /**
   * <pre>
   * The value expression.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueExpression value_expression = 5;</code>
   * @return The valueExpression.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ValueExpression getValueExpression();

  /**
   * <pre>
   * The locale, if not specified will default to "en-US".
   * </pre>
   *
   * <code>optional string locale = 6;</code>
   * @return Whether the locale field is set.
   */
  boolean hasLocale();
  /**
   * <pre>
   * The locale, if not specified will default to "en-US".
   * </pre>
   *
   * <code>optional string locale = 6;</code>
   * @return The locale.
   */
  java.lang.String getLocale();
  /**
   * <pre>
   * The locale, if not specified will default to "en-US".
   * </pre>
   *
   * <code>optional string locale = 6;</code>
   * @return The bytes for locale.
   */
  com.google.protobuf.ByteString
      getLocaleBytes();
}
