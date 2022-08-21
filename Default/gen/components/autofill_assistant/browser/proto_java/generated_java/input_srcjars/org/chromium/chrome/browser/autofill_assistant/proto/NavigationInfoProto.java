// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * Protobuf type {@code autofill_assistant.NavigationInfoProto}
 */
public  final class NavigationInfoProto extends
    com.google.protobuf.GeneratedMessageLite<
        NavigationInfoProto, NavigationInfoProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.NavigationInfoProto)
    NavigationInfoProtoOrBuilder {
  private NavigationInfoProto() {
  }
  private int bitField0_;
  public static final int STARTED_FIELD_NUMBER = 1;
  private boolean started_;
  /**
   * <pre>
   * Navigation started while processing the current action.
   * </pre>
   *
   * <code>optional bool started = 1;</code>
   * @return Whether the started field is set.
   */
  @java.lang.Override
  public boolean hasStarted() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Navigation started while processing the current action.
   * </pre>
   *
   * <code>optional bool started = 1;</code>
   * @return The started.
   */
  @java.lang.Override
  public boolean getStarted() {
    return started_;
  }
  /**
   * <pre>
   * Navigation started while processing the current action.
   * </pre>
   *
   * <code>optional bool started = 1;</code>
   * @param value The started to set.
   */
  private void setStarted(boolean value) {
    bitField0_ |= 0x00000001;
    started_ = value;
  }
  /**
   * <pre>
   * Navigation started while processing the current action.
   * </pre>
   *
   * <code>optional bool started = 1;</code>
   */
  private void clearStarted() {
    bitField0_ = (bitField0_ & ~0x00000001);
    started_ = false;
  }

  public static final int ENDED_FIELD_NUMBER = 2;
  private boolean ended_;
  /**
   * <pre>
   * Navigation ended while processing the current action.
   * </pre>
   *
   * <code>optional bool ended = 2;</code>
   * @return Whether the ended field is set.
   */
  @java.lang.Override
  public boolean hasEnded() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * Navigation ended while processing the current action.
   * </pre>
   *
   * <code>optional bool ended = 2;</code>
   * @return The ended.
   */
  @java.lang.Override
  public boolean getEnded() {
    return ended_;
  }
  /**
   * <pre>
   * Navigation ended while processing the current action.
   * </pre>
   *
   * <code>optional bool ended = 2;</code>
   * @param value The ended to set.
   */
  private void setEnded(boolean value) {
    bitField0_ |= 0x00000002;
    ended_ = value;
  }
  /**
   * <pre>
   * Navigation ended while processing the current action.
   * </pre>
   *
   * <code>optional bool ended = 2;</code>
   */
  private void clearEnded() {
    bitField0_ = (bitField0_ & ~0x00000002);
    ended_ = false;
  }

  public static final int HAS_ERROR_FIELD_NUMBER = 3;
  private boolean hasError_;
  /**
   * <pre>
   * Navigation failed before or during the processing of the current action.
   * </pre>
   *
   * <code>optional bool has_error = 3;</code>
   * @return Whether the hasError field is set.
   */
  @java.lang.Override
  public boolean hasHasError() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <pre>
   * Navigation failed before or during the processing of the current action.
   * </pre>
   *
   * <code>optional bool has_error = 3;</code>
   * @return The hasError.
   */
  @java.lang.Override
  public boolean getHasError() {
    return hasError_;
  }
  /**
   * <pre>
   * Navigation failed before or during the processing of the current action.
   * </pre>
   *
   * <code>optional bool has_error = 3;</code>
   * @param value The hasError to set.
   */
  private void setHasError(boolean value) {
    bitField0_ |= 0x00000004;
    hasError_ = value;
  }
  /**
   * <pre>
   * Navigation failed before or during the processing of the current action.
   * </pre>
   *
   * <code>optional bool has_error = 3;</code>
   */
  private void clearHasError() {
    bitField0_ = (bitField0_ & ~0x00000004);
    hasError_ = false;
  }

  public static final int UNEXPECTED_FIELD_NUMBER = 4;
  private boolean unexpected_;
  /**
   * <pre>
   * Unexpected navigation started while processing the current action. This
   * will happen during some actions, such as PROMPT action but it should
   * normally not happen during scripts that have been updated to use
   * expect_navigation.
   * </pre>
   *
   * <code>optional bool unexpected = 4;</code>
   * @return Whether the unexpected field is set.
   */
  @java.lang.Override
  public boolean hasUnexpected() {
    return ((bitField0_ & 0x00000008) != 0);
  }
  /**
   * <pre>
   * Unexpected navigation started while processing the current action. This
   * will happen during some actions, such as PROMPT action but it should
   * normally not happen during scripts that have been updated to use
   * expect_navigation.
   * </pre>
   *
   * <code>optional bool unexpected = 4;</code>
   * @return The unexpected.
   */
  @java.lang.Override
  public boolean getUnexpected() {
    return unexpected_;
  }
  /**
   * <pre>
   * Unexpected navigation started while processing the current action. This
   * will happen during some actions, such as PROMPT action but it should
   * normally not happen during scripts that have been updated to use
   * expect_navigation.
   * </pre>
   *
   * <code>optional bool unexpected = 4;</code>
   * @param value The unexpected to set.
   */
  private void setUnexpected(boolean value) {
    bitField0_ |= 0x00000008;
    unexpected_ = value;
  }
  /**
   * <pre>
   * Unexpected navigation started while processing the current action. This
   * will happen during some actions, such as PROMPT action but it should
   * normally not happen during scripts that have been updated to use
   * expect_navigation.
   * </pre>
   *
   * <code>optional bool unexpected = 4;</code>
   */
  private void clearUnexpected() {
    bitField0_ = (bitField0_ & ~0x00000008);
    unexpected_ = false;
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code autofill_assistant.NavigationInfoProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.NavigationInfoProto)
      org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Navigation started while processing the current action.
     * </pre>
     *
     * <code>optional bool started = 1;</code>
     * @return Whether the started field is set.
     */
    @java.lang.Override
    public boolean hasStarted() {
      return instance.hasStarted();
    }
    /**
     * <pre>
     * Navigation started while processing the current action.
     * </pre>
     *
     * <code>optional bool started = 1;</code>
     * @return The started.
     */
    @java.lang.Override
    public boolean getStarted() {
      return instance.getStarted();
    }
    /**
     * <pre>
     * Navigation started while processing the current action.
     * </pre>
     *
     * <code>optional bool started = 1;</code>
     * @param value The started to set.
     * @return This builder for chaining.
     */
    public Builder setStarted(boolean value) {
      copyOnWrite();
      instance.setStarted(value);
      return this;
    }
    /**
     * <pre>
     * Navigation started while processing the current action.
     * </pre>
     *
     * <code>optional bool started = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearStarted() {
      copyOnWrite();
      instance.clearStarted();
      return this;
    }

    /**
     * <pre>
     * Navigation ended while processing the current action.
     * </pre>
     *
     * <code>optional bool ended = 2;</code>
     * @return Whether the ended field is set.
     */
    @java.lang.Override
    public boolean hasEnded() {
      return instance.hasEnded();
    }
    /**
     * <pre>
     * Navigation ended while processing the current action.
     * </pre>
     *
     * <code>optional bool ended = 2;</code>
     * @return The ended.
     */
    @java.lang.Override
    public boolean getEnded() {
      return instance.getEnded();
    }
    /**
     * <pre>
     * Navigation ended while processing the current action.
     * </pre>
     *
     * <code>optional bool ended = 2;</code>
     * @param value The ended to set.
     * @return This builder for chaining.
     */
    public Builder setEnded(boolean value) {
      copyOnWrite();
      instance.setEnded(value);
      return this;
    }
    /**
     * <pre>
     * Navigation ended while processing the current action.
     * </pre>
     *
     * <code>optional bool ended = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearEnded() {
      copyOnWrite();
      instance.clearEnded();
      return this;
    }

    /**
     * <pre>
     * Navigation failed before or during the processing of the current action.
     * </pre>
     *
     * <code>optional bool has_error = 3;</code>
     * @return Whether the hasError field is set.
     */
    @java.lang.Override
    public boolean hasHasError() {
      return instance.hasHasError();
    }
    /**
     * <pre>
     * Navigation failed before or during the processing of the current action.
     * </pre>
     *
     * <code>optional bool has_error = 3;</code>
     * @return The hasError.
     */
    @java.lang.Override
    public boolean getHasError() {
      return instance.getHasError();
    }
    /**
     * <pre>
     * Navigation failed before or during the processing of the current action.
     * </pre>
     *
     * <code>optional bool has_error = 3;</code>
     * @param value The hasError to set.
     * @return This builder for chaining.
     */
    public Builder setHasError(boolean value) {
      copyOnWrite();
      instance.setHasError(value);
      return this;
    }
    /**
     * <pre>
     * Navigation failed before or during the processing of the current action.
     * </pre>
     *
     * <code>optional bool has_error = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearHasError() {
      copyOnWrite();
      instance.clearHasError();
      return this;
    }

    /**
     * <pre>
     * Unexpected navigation started while processing the current action. This
     * will happen during some actions, such as PROMPT action but it should
     * normally not happen during scripts that have been updated to use
     * expect_navigation.
     * </pre>
     *
     * <code>optional bool unexpected = 4;</code>
     * @return Whether the unexpected field is set.
     */
    @java.lang.Override
    public boolean hasUnexpected() {
      return instance.hasUnexpected();
    }
    /**
     * <pre>
     * Unexpected navigation started while processing the current action. This
     * will happen during some actions, such as PROMPT action but it should
     * normally not happen during scripts that have been updated to use
     * expect_navigation.
     * </pre>
     *
     * <code>optional bool unexpected = 4;</code>
     * @return The unexpected.
     */
    @java.lang.Override
    public boolean getUnexpected() {
      return instance.getUnexpected();
    }
    /**
     * <pre>
     * Unexpected navigation started while processing the current action. This
     * will happen during some actions, such as PROMPT action but it should
     * normally not happen during scripts that have been updated to use
     * expect_navigation.
     * </pre>
     *
     * <code>optional bool unexpected = 4;</code>
     * @param value The unexpected to set.
     * @return This builder for chaining.
     */
    public Builder setUnexpected(boolean value) {
      copyOnWrite();
      instance.setUnexpected(value);
      return this;
    }
    /**
     * <pre>
     * Unexpected navigation started while processing the current action. This
     * will happen during some actions, such as PROMPT action but it should
     * normally not happen during scripts that have been updated to use
     * expect_navigation.
     * </pre>
     *
     * <code>optional bool unexpected = 4;</code>
     * @return This builder for chaining.
     */
    public Builder clearUnexpected() {
      copyOnWrite();
      instance.clearUnexpected();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.NavigationInfoProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "started_",
            "ended_",
            "hasError_",
            "unexpected_",
          };
          java.lang.String info =
              "\u0001\u0004\u0000\u0001\u0001\u0004\u0004\u0000\u0000\u0000\u0001\u1007\u0000\u0002" +
              "\u1007\u0001\u0003\u1007\u0002\u0004\u1007\u0003";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.NavigationInfoProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto DEFAULT_INSTANCE;
  static {
    NavigationInfoProto defaultInstance = new NavigationInfoProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      NavigationInfoProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.NavigationInfoProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<NavigationInfoProto> PARSER;

  public static com.google.protobuf.Parser<NavigationInfoProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

