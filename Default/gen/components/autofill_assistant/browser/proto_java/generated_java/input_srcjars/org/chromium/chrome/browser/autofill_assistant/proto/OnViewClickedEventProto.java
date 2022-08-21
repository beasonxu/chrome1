// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/generic_ui.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * <pre>
 * Event that is triggered whenever |view_identifier| is clicked.
 * </pre>
 *
 * Protobuf type {@code autofill_assistant.OnViewClickedEventProto}
 */
public  final class OnViewClickedEventProto extends
    com.google.protobuf.GeneratedMessageLite<
        OnViewClickedEventProto, OnViewClickedEventProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.OnViewClickedEventProto)
    OnViewClickedEventProtoOrBuilder {
  private OnViewClickedEventProto() {
    viewIdentifier_ = "";
  }
  private int bitField0_;
  public static final int VIEW_IDENTIFIER_FIELD_NUMBER = 1;
  private java.lang.String viewIdentifier_;
  /**
   * <pre>
   * The identifier of the view to observe.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @return Whether the viewIdentifier field is set.
   */
  @java.lang.Override
  public boolean hasViewIdentifier() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * The identifier of the view to observe.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @return The viewIdentifier.
   */
  @java.lang.Override
  public java.lang.String getViewIdentifier() {
    return viewIdentifier_;
  }
  /**
   * <pre>
   * The identifier of the view to observe.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @return The bytes for viewIdentifier.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getViewIdentifierBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(viewIdentifier_);
  }
  /**
   * <pre>
   * The identifier of the view to observe.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @param value The viewIdentifier to set.
   */
  private void setViewIdentifier(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    viewIdentifier_ = value;
  }
  /**
   * <pre>
   * The identifier of the view to observe.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   */
  private void clearViewIdentifier() {
    bitField0_ = (bitField0_ & ~0x00000001);
    viewIdentifier_ = getDefaultInstance().getViewIdentifier();
  }
  /**
   * <pre>
   * The identifier of the view to observe.
   * </pre>
   *
   * <code>optional string view_identifier = 1;</code>
   * @param value The bytes for viewIdentifier to set.
   */
  private void setViewIdentifierBytes(
      com.google.protobuf.ByteString value) {
    viewIdentifier_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Event that is triggered whenever |view_identifier| is clicked.
   * </pre>
   *
   * Protobuf type {@code autofill_assistant.OnViewClickedEventProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.OnViewClickedEventProto)
      org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * The identifier of the view to observe.
     * </pre>
     *
     * <code>optional string view_identifier = 1;</code>
     * @return Whether the viewIdentifier field is set.
     */
    @java.lang.Override
    public boolean hasViewIdentifier() {
      return instance.hasViewIdentifier();
    }
    /**
     * <pre>
     * The identifier of the view to observe.
     * </pre>
     *
     * <code>optional string view_identifier = 1;</code>
     * @return The viewIdentifier.
     */
    @java.lang.Override
    public java.lang.String getViewIdentifier() {
      return instance.getViewIdentifier();
    }
    /**
     * <pre>
     * The identifier of the view to observe.
     * </pre>
     *
     * <code>optional string view_identifier = 1;</code>
     * @return The bytes for viewIdentifier.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getViewIdentifierBytes() {
      return instance.getViewIdentifierBytes();
    }
    /**
     * <pre>
     * The identifier of the view to observe.
     * </pre>
     *
     * <code>optional string view_identifier = 1;</code>
     * @param value The viewIdentifier to set.
     * @return This builder for chaining.
     */
    public Builder setViewIdentifier(
        java.lang.String value) {
      copyOnWrite();
      instance.setViewIdentifier(value);
      return this;
    }
    /**
     * <pre>
     * The identifier of the view to observe.
     * </pre>
     *
     * <code>optional string view_identifier = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearViewIdentifier() {
      copyOnWrite();
      instance.clearViewIdentifier();
      return this;
    }
    /**
     * <pre>
     * The identifier of the view to observe.
     * </pre>
     *
     * <code>optional string view_identifier = 1;</code>
     * @param value The bytes for viewIdentifier to set.
     * @return This builder for chaining.
     */
    public Builder setViewIdentifierBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setViewIdentifierBytes(value);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.OnViewClickedEventProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "viewIdentifier_",
          };
          java.lang.String info =
              "\u0001\u0001\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001\u1008\u0000";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.OnViewClickedEventProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto DEFAULT_INSTANCE;
  static {
    OnViewClickedEventProto defaultInstance = new OnViewClickedEventProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      OnViewClickedEventProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.OnViewClickedEventProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<OnViewClickedEventProto> PARSER;

  public static com.google.protobuf.Parser<OnViewClickedEventProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

