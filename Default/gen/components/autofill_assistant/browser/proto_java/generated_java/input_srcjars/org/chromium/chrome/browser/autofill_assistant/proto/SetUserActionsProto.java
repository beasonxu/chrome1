// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/generic_ui.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * <pre>
 * Sets the list of available user actions. User actions are either direct
 * actions performed via assistant and/or chips that users can tap.
 * </pre>
 *
 * Protobuf type {@code autofill_assistant.SetUserActionsProto}
 */
public  final class SetUserActionsProto extends
    com.google.protobuf.GeneratedMessageLite<
        SetUserActionsProto, SetUserActionsProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.SetUserActionsProto)
    SetUserActionsProtoOrBuilder {
  private SetUserActionsProto() {
  }
  private int bitField0_;
  public static final int USER_ACTIONS_FIELD_NUMBER = 2;
  private org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto userActions_;
  /**
   * <pre>
   * The user actions to set. Must contain a UserActionList value.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
   */
  @java.lang.Override
  public boolean hasUserActions() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * The user actions to set. Must contain a UserActionList value.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto getUserActions() {
    return userActions_ == null ? org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto.getDefaultInstance() : userActions_;
  }
  /**
   * <pre>
   * The user actions to set. Must contain a UserActionList value.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
   */
  private void setUserActions(org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto value) {
    value.getClass();
  userActions_ = value;
    bitField0_ |= 0x00000001;
    }
  /**
   * <pre>
   * The user actions to set. Must contain a UserActionList value.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
   */
  @java.lang.SuppressWarnings({"ReferenceEquality"})
  private void mergeUserActions(org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto value) {
    value.getClass();
  if (userActions_ != null &&
        userActions_ != org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto.getDefaultInstance()) {
      userActions_ =
        org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto.newBuilder(userActions_).mergeFrom(value).buildPartial();
    } else {
      userActions_ = value;
    }
    bitField0_ |= 0x00000001;
  }
  /**
   * <pre>
   * The user actions to set. Must contain a UserActionList value.
   * </pre>
   *
   * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
   */
  private void clearUserActions() {  userActions_ = null;
    bitField0_ = (bitField0_ & ~0x00000001);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Sets the list of available user actions. User actions are either direct
   * actions performed via assistant and/or chips that users can tap.
   * </pre>
   *
   * Protobuf type {@code autofill_assistant.SetUserActionsProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.SetUserActionsProto)
      org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * The user actions to set. Must contain a UserActionList value.
     * </pre>
     *
     * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
     */
    @java.lang.Override
    public boolean hasUserActions() {
      return instance.hasUserActions();
    }
    /**
     * <pre>
     * The user actions to set. Must contain a UserActionList value.
     * </pre>
     *
     * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto getUserActions() {
      return instance.getUserActions();
    }
    /**
     * <pre>
     * The user actions to set. Must contain a UserActionList value.
     * </pre>
     *
     * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
     */
    public Builder setUserActions(org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto value) {
      copyOnWrite();
      instance.setUserActions(value);
      return this;
      }
    /**
     * <pre>
     * The user actions to set. Must contain a UserActionList value.
     * </pre>
     *
     * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
     */
    public Builder setUserActions(
        org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto.Builder builderForValue) {
      copyOnWrite();
      instance.setUserActions(builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * The user actions to set. Must contain a UserActionList value.
     * </pre>
     *
     * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
     */
    public Builder mergeUserActions(org.chromium.chrome.browser.autofill_assistant.proto.ValueReferenceProto value) {
      copyOnWrite();
      instance.mergeUserActions(value);
      return this;
    }
    /**
     * <pre>
     * The user actions to set. Must contain a UserActionList value.
     * </pre>
     *
     * <code>optional .autofill_assistant.ValueReferenceProto user_actions = 2;</code>
     */
    public Builder clearUserActions() {  copyOnWrite();
      instance.clearUserActions();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.SetUserActionsProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "userActions_",
          };
          java.lang.String info =
              "\u0001\u0001\u0000\u0001\u0002\u0002\u0001\u0000\u0000\u0000\u0002\u1009\u0000";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.SetUserActionsProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto DEFAULT_INSTANCE;
  static {
    SetUserActionsProto defaultInstance = new SetUserActionsProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      SetUserActionsProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.SetUserActionsProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<SetUserActionsProto> PARSER;

  public static com.google.protobuf.Parser<SetUserActionsProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

