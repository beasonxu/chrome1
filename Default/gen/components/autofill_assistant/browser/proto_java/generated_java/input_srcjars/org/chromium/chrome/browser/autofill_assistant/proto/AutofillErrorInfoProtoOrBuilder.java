// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface AutofillErrorInfoProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.AutofillErrorInfoProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Comma separated list of address keys in the client memory when the
   * unexpected error occurred. Memory values are never reported this way since
   * they may contain PII. Only the address key names!
   * </pre>
   *
   * <code>optional string client_memory_address_key_names = 1;</code>
   * @return Whether the clientMemoryAddressKeyNames field is set.
   */
  boolean hasClientMemoryAddressKeyNames();
  /**
   * <pre>
   * Comma separated list of address keys in the client memory when the
   * unexpected error occurred. Memory values are never reported this way since
   * they may contain PII. Only the address key names!
   * </pre>
   *
   * <code>optional string client_memory_address_key_names = 1;</code>
   * @return The clientMemoryAddressKeyNames.
   */
  java.lang.String getClientMemoryAddressKeyNames();
  /**
   * <pre>
   * Comma separated list of address keys in the client memory when the
   * unexpected error occurred. Memory values are never reported this way since
   * they may contain PII. Only the address key names!
   * </pre>
   *
   * <code>optional string client_memory_address_key_names = 1;</code>
   * @return The bytes for clientMemoryAddressKeyNames.
   */
  com.google.protobuf.ByteString
      getClientMemoryAddressKeyNamesBytes();

  /**
   * <pre>
   * Name of the address key requested in the list of keys in
   * |client_memory_address_key_names|.
   * </pre>
   *
   * <code>optional string address_key_requested = 2;</code>
   * @return Whether the addressKeyRequested field is set.
   */
  boolean hasAddressKeyRequested();
  /**
   * <pre>
   * Name of the address key requested in the list of keys in
   * |client_memory_address_key_names|.
   * </pre>
   *
   * <code>optional string address_key_requested = 2;</code>
   * @return The addressKeyRequested.
   */
  java.lang.String getAddressKeyRequested();
  /**
   * <pre>
   * Name of the address key requested in the list of keys in
   * |client_memory_address_key_names|.
   * </pre>
   *
   * <code>optional string address_key_requested = 2;</code>
   * @return The bytes for addressKeyRequested.
   */
  com.google.protobuf.ByteString
      getAddressKeyRequestedBytes();

  /**
   * <pre>
   * Whether the client memory at |address_key_requested| pointed to null.
   * </pre>
   *
   * <code>optional bool address_pointee_was_null = 3;</code>
   * @return Whether the addressPointeeWasNull field is set.
   */
  boolean hasAddressPointeeWasNull();
  /**
   * <pre>
   * Whether the client memory at |address_key_requested| pointed to null.
   * </pre>
   *
   * <code>optional bool address_pointee_was_null = 3;</code>
   * @return The addressPointeeWasNull.
   */
  boolean getAddressPointeeWasNull();

  /**
   * <pre>
   * Error status of the Chrome autofill attempt.
   * </pre>
   *
   * <code>optional .autofill_assistant.ProcessedActionStatusProto autofill_error_status = 4;</code>
   * @return Whether the autofillErrorStatus field is set.
   */
  boolean hasAutofillErrorStatus();
  /**
   * <pre>
   * Error status of the Chrome autofill attempt.
   * </pre>
   *
   * <code>optional .autofill_assistant.ProcessedActionStatusProto autofill_error_status = 4;</code>
   * @return The autofillErrorStatus.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ProcessedActionStatusProto getAutofillErrorStatus();

  /**
   * <pre>
   * Errors that occurred during fallback filling of autofill fields.
   * </pre>
   *
   * <code>repeated .autofill_assistant.AutofillErrorInfoProto.AutofillFieldError autofill_field_error = 5;</code>
   */
  java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.AutofillErrorInfoProto.AutofillFieldError> 
      getAutofillFieldErrorList();
  /**
   * <pre>
   * Errors that occurred during fallback filling of autofill fields.
   * </pre>
   *
   * <code>repeated .autofill_assistant.AutofillErrorInfoProto.AutofillFieldError autofill_field_error = 5;</code>
   */
  org.chromium.chrome.browser.autofill_assistant.proto.AutofillErrorInfoProto.AutofillFieldError getAutofillFieldError(int index);
  /**
   * <pre>
   * Errors that occurred during fallback filling of autofill fields.
   * </pre>
   *
   * <code>repeated .autofill_assistant.AutofillErrorInfoProto.AutofillFieldError autofill_field_error = 5;</code>
   */
  int getAutofillFieldErrorCount();

  /**
   * <pre>
   * Failure type from the |FullCardRequest|.
   * </pre>
   *
   * <code>optional .autofill_assistant.AutofillErrorInfoProto.GetFullCardFailureType get_full_card_failure_type = 6;</code>
   * @return Whether the getFullCardFailureType field is set.
   */
  boolean hasGetFullCardFailureType();
  /**
   * <pre>
   * Failure type from the |FullCardRequest|.
   * </pre>
   *
   * <code>optional .autofill_assistant.AutofillErrorInfoProto.GetFullCardFailureType get_full_card_failure_type = 6;</code>
   * @return The getFullCardFailureType.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.AutofillErrorInfoProto.GetFullCardFailureType getGetFullCardFailureType();
}
