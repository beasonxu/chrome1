// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/generic_ui.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ToStringProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ToStringProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The value to stringify.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto value = 3;</code>
   * @return Whether the value field is set.
   */
  boolean hasValue();
  /**
   * <pre>
   * The value to stringify.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto value = 3;</code>
   * @return The value.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto getValue();

  /**
   * <code>.autofill_assistant.DateFormatProto date_format = 2;</code>
   * @return Whether the dateFormat field is set.
   */
  boolean hasDateFormat();
  /**
   * <code>.autofill_assistant.DateFormatProto date_format = 2;</code>
   * @return The dateFormat.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.DateFormatProto getDateFormat();

  /**
   * <code>.autofill_assistant.AutofillFormatProto autofill_format = 4;</code>
   * @return Whether the autofillFormat field is set.
   */
  boolean hasAutofillFormat();
  /**
   * <code>.autofill_assistant.AutofillFormatProto autofill_format = 4;</code>
   * @return The autofillFormat.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.AutofillFormatProto getAutofillFormat();

  public org.chromium.chrome.browser.autofill_assistant.proto.ToStringProto.FormatOptionsCase getFormatOptionsCase();
}
