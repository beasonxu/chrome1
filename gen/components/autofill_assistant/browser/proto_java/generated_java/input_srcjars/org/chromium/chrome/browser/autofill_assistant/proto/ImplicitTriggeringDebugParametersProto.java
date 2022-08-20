// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * <pre>
 * Parameters for testers and developers of implicit triggering. This proto can
 * be specified via the base64-encoded command line switch
 * --autofill-assistant-implicit-triggering-debug-parameters. Values will take
 * precedence over existing values in case of conflict.
 * </pre>
 *
 * Protobuf type {@code autofill_assistant.ImplicitTriggeringDebugParametersProto}
 */
public  final class ImplicitTriggeringDebugParametersProto extends
    com.google.protobuf.GeneratedMessageLite<
        ImplicitTriggeringDebugParametersProto, ImplicitTriggeringDebugParametersProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.ImplicitTriggeringDebugParametersProto)
    ImplicitTriggeringDebugParametersProtoOrBuilder {
  private ImplicitTriggeringDebugParametersProto() {
    additionalScriptParameters_ = emptyProtobufList();
  }
  public static final int ADDITIONAL_SCRIPT_PARAMETERS_FIELD_NUMBER = 1;
  private com.google.protobuf.Internal.ProtobufList<org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> additionalScriptParameters_;
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  @java.lang.Override
  public java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> getAdditionalScriptParametersList() {
    return additionalScriptParameters_;
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  public java.util.List<? extends org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProtoOrBuilder> 
      getAdditionalScriptParametersOrBuilderList() {
    return additionalScriptParameters_;
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  @java.lang.Override
  public int getAdditionalScriptParametersCount() {
    return additionalScriptParameters_.size();
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto getAdditionalScriptParameters(int index) {
    return additionalScriptParameters_.get(index);
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  public org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProtoOrBuilder getAdditionalScriptParametersOrBuilder(
      int index) {
    return additionalScriptParameters_.get(index);
  }
  private void ensureAdditionalScriptParametersIsMutable() {
    com.google.protobuf.Internal.ProtobufList<org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> tmp = additionalScriptParameters_;
    if (!tmp.isModifiable()) {
      additionalScriptParameters_ =
          com.google.protobuf.GeneratedMessageLite.mutableCopy(tmp);
     }
  }

  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  private void setAdditionalScriptParameters(
      int index, org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto value) {
    value.getClass();
  ensureAdditionalScriptParametersIsMutable();
    additionalScriptParameters_.set(index, value);
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  private void addAdditionalScriptParameters(org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto value) {
    value.getClass();
  ensureAdditionalScriptParametersIsMutable();
    additionalScriptParameters_.add(value);
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  private void addAdditionalScriptParameters(
      int index, org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto value) {
    value.getClass();
  ensureAdditionalScriptParametersIsMutable();
    additionalScriptParameters_.add(index, value);
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  private void addAllAdditionalScriptParameters(
      java.lang.Iterable<? extends org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> values) {
    ensureAdditionalScriptParametersIsMutable();
    com.google.protobuf.AbstractMessageLite.addAll(
        values, additionalScriptParameters_);
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  private void clearAdditionalScriptParameters() {
    additionalScriptParameters_ = emptyProtobufList();
  }
  /**
   * <pre>
   * The list of additional script parameters to send to the backend. This is
   * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
   * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
   * see components/autofill_assistant/browser/script_parameters.cc
   * </pre>
   *
   * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
   */
  private void removeAdditionalScriptParameters(int index) {
    ensureAdditionalScriptParametersIsMutable();
    additionalScriptParameters_.remove(index);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Parameters for testers and developers of implicit triggering. This proto can
   * be specified via the base64-encoded command line switch
   * --autofill-assistant-implicit-triggering-debug-parameters. Values will take
   * precedence over existing values in case of conflict.
   * </pre>
   *
   * Protobuf type {@code autofill_assistant.ImplicitTriggeringDebugParametersProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.ImplicitTriggeringDebugParametersProto)
      org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    @java.lang.Override
    public java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> getAdditionalScriptParametersList() {
      return java.util.Collections.unmodifiableList(
          instance.getAdditionalScriptParametersList());
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    @java.lang.Override
    public int getAdditionalScriptParametersCount() {
      return instance.getAdditionalScriptParametersCount();
    }/**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto getAdditionalScriptParameters(int index) {
      return instance.getAdditionalScriptParameters(index);
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder setAdditionalScriptParameters(
        int index, org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto value) {
      copyOnWrite();
      instance.setAdditionalScriptParameters(index, value);
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder setAdditionalScriptParameters(
        int index, org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto.Builder builderForValue) {
      copyOnWrite();
      instance.setAdditionalScriptParameters(index,
          builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder addAdditionalScriptParameters(org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto value) {
      copyOnWrite();
      instance.addAdditionalScriptParameters(value);
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder addAdditionalScriptParameters(
        int index, org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto value) {
      copyOnWrite();
      instance.addAdditionalScriptParameters(index, value);
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder addAdditionalScriptParameters(
        org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto.Builder builderForValue) {
      copyOnWrite();
      instance.addAdditionalScriptParameters(builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder addAdditionalScriptParameters(
        int index, org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto.Builder builderForValue) {
      copyOnWrite();
      instance.addAdditionalScriptParameters(index,
          builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder addAllAdditionalScriptParameters(
        java.lang.Iterable<? extends org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto> values) {
      copyOnWrite();
      instance.addAllAdditionalScriptParameters(values);
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder clearAdditionalScriptParameters() {
      copyOnWrite();
      instance.clearAdditionalScriptParameters();
      return this;
    }
    /**
     * <pre>
     * The list of additional script parameters to send to the backend. This is
     * mainly intended to allow specifying DEBUG_SOCKET_ID and DEBUG_BUNDLE_ID.
     * Note: only a small set of parameters is allowlisted for GetTriggerScripts,
     * see components/autofill_assistant/browser/script_parameters.cc
     * </pre>
     *
     * <code>repeated .autofill_assistant.ScriptParameterProto additional_script_parameters = 1;</code>
     */
    public Builder removeAdditionalScriptParameters(int index) {
      copyOnWrite();
      instance.removeAdditionalScriptParameters(index);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.ImplicitTriggeringDebugParametersProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "additionalScriptParameters_",
            org.chromium.chrome.browser.autofill_assistant.proto.ScriptParameterProto.class,
          };
          java.lang.String info =
              "\u0001\u0001\u0000\u0000\u0001\u0001\u0001\u0000\u0001\u0000\u0001\u001b";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto>(
                      DEFAULT_INSTANCE);
              PARSER = parser;
            }
          }
        }
        return parser;
    }
    case GET_MEMOIZED_IS_INITIALIZED: {
      return (byte) 1;
    }
    case SET_MEMOIZED_IS_INITIALIZED: {
      return null;
    }
    }
    throw new UnsupportedOperationException();
  }


  // @@protoc_insertion_point(class_scope:autofill_assistant.ImplicitTriggeringDebugParametersProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto DEFAULT_INSTANCE;
  static {
    ImplicitTriggeringDebugParametersProto defaultInstance = new ImplicitTriggeringDebugParametersProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      ImplicitTriggeringDebugParametersProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.ImplicitTriggeringDebugParametersProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<ImplicitTriggeringDebugParametersProto> PARSER;

  public static com.google.protobuf.Parser<ImplicitTriggeringDebugParametersProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

