// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/password_specifics.proto

package org.chromium.components.sync.protocol;

/**
 * <pre>
 * Contains the password specifics metadata which simplifies its lookup.
 * </pre>
 *
 * Protobuf type {@code sync_pb.PasswordSpecificsMetadata}
 */
public  final class PasswordSpecificsMetadata extends
    com.google.protobuf.GeneratedMessageLite<
        PasswordSpecificsMetadata, PasswordSpecificsMetadata.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.PasswordSpecificsMetadata)
    PasswordSpecificsMetadataOrBuilder {
  private PasswordSpecificsMetadata() {
    url_ = "";
  }
  private int bitField0_;
  public static final int URL_FIELD_NUMBER = 1;
  private java.lang.String url_;
  /**
   * <code>optional string url = 1;</code>
   * @return Whether the url field is set.
   */
  @java.lang.Override
  public boolean hasUrl() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <code>optional string url = 1;</code>
   * @return The url.
   */
  @java.lang.Override
  public java.lang.String getUrl() {
    return url_;
  }
  /**
   * <code>optional string url = 1;</code>
   * @return The bytes for url.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getUrlBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(url_);
  }
  /**
   * <code>optional string url = 1;</code>
   * @param value The url to set.
   */
  private void setUrl(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    url_ = value;
  }
  /**
   * <code>optional string url = 1;</code>
   */
  private void clearUrl() {
    bitField0_ = (bitField0_ & ~0x00000001);
    url_ = getDefaultInstance().getUrl();
  }
  /**
   * <code>optional string url = 1;</code>
   * @param value The bytes for url to set.
   */
  private void setUrlBytes(
      com.google.protobuf.ByteString value) {
    url_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int BLACKLISTED_FIELD_NUMBER = 2;
  private boolean blacklisted_;
  /**
   * <pre>
   * True, if user chose permanently not to save the credentials for the form.
   * Introduced in M82.
   * </pre>
   *
   * <code>optional bool blacklisted = 2;</code>
   * @return Whether the blacklisted field is set.
   */
  @java.lang.Override
  public boolean hasBlacklisted() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * True, if user chose permanently not to save the credentials for the form.
   * Introduced in M82.
   * </pre>
   *
   * <code>optional bool blacklisted = 2;</code>
   * @return The blacklisted.
   */
  @java.lang.Override
  public boolean getBlacklisted() {
    return blacklisted_;
  }
  /**
   * <pre>
   * True, if user chose permanently not to save the credentials for the form.
   * Introduced in M82.
   * </pre>
   *
   * <code>optional bool blacklisted = 2;</code>
   * @param value The blacklisted to set.
   */
  private void setBlacklisted(boolean value) {
    bitField0_ |= 0x00000002;
    blacklisted_ = value;
  }
  /**
   * <pre>
   * True, if user chose permanently not to save the credentials for the form.
   * Introduced in M82.
   * </pre>
   *
   * <code>optional bool blacklisted = 2;</code>
   */
  private void clearBlacklisted() {
    bitField0_ = (bitField0_ & ~0x00000002);
    blacklisted_ = false;
  }

  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.PasswordSpecificsMetadata prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Contains the password specifics metadata which simplifies its lookup.
   * </pre>
   *
   * Protobuf type {@code sync_pb.PasswordSpecificsMetadata}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.PasswordSpecificsMetadata, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.PasswordSpecificsMetadata)
      org.chromium.components.sync.protocol.PasswordSpecificsMetadataOrBuilder {
    // Construct using org.chromium.components.sync.protocol.PasswordSpecificsMetadata.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <code>optional string url = 1;</code>
     * @return Whether the url field is set.
     */
    @java.lang.Override
    public boolean hasUrl() {
      return instance.hasUrl();
    }
    /**
     * <code>optional string url = 1;</code>
     * @return The url.
     */
    @java.lang.Override
    public java.lang.String getUrl() {
      return instance.getUrl();
    }
    /**
     * <code>optional string url = 1;</code>
     * @return The bytes for url.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getUrlBytes() {
      return instance.getUrlBytes();
    }
    /**
     * <code>optional string url = 1;</code>
     * @param value The url to set.
     * @return This builder for chaining.
     */
    public Builder setUrl(
        java.lang.String value) {
      copyOnWrite();
      instance.setUrl(value);
      return this;
    }
    /**
     * <code>optional string url = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearUrl() {
      copyOnWrite();
      instance.clearUrl();
      return this;
    }
    /**
     * <code>optional string url = 1;</code>
     * @param value The bytes for url to set.
     * @return This builder for chaining.
     */
    public Builder setUrlBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setUrlBytes(value);
      return this;
    }

    /**
     * <pre>
     * True, if user chose permanently not to save the credentials for the form.
     * Introduced in M82.
     * </pre>
     *
     * <code>optional bool blacklisted = 2;</code>
     * @return Whether the blacklisted field is set.
     */
    @java.lang.Override
    public boolean hasBlacklisted() {
      return instance.hasBlacklisted();
    }
    /**
     * <pre>
     * True, if user chose permanently not to save the credentials for the form.
     * Introduced in M82.
     * </pre>
     *
     * <code>optional bool blacklisted = 2;</code>
     * @return The blacklisted.
     */
    @java.lang.Override
    public boolean getBlacklisted() {
      return instance.getBlacklisted();
    }
    /**
     * <pre>
     * True, if user chose permanently not to save the credentials for the form.
     * Introduced in M82.
     * </pre>
     *
     * <code>optional bool blacklisted = 2;</code>
     * @param value The blacklisted to set.
     * @return This builder for chaining.
     */
    public Builder setBlacklisted(boolean value) {
      copyOnWrite();
      instance.setBlacklisted(value);
      return this;
    }
    /**
     * <pre>
     * True, if user chose permanently not to save the credentials for the form.
     * Introduced in M82.
     * </pre>
     *
     * <code>optional bool blacklisted = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearBlacklisted() {
      copyOnWrite();
      instance.clearBlacklisted();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.PasswordSpecificsMetadata)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.PasswordSpecificsMetadata();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "url_",
            "blacklisted_",
          };
          java.lang.String info =
              "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u1008\u0000\u0002" +
              "\u1007\u0001";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.PasswordSpecificsMetadata> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.PasswordSpecificsMetadata.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.PasswordSpecificsMetadata>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.PasswordSpecificsMetadata)
  private static final org.chromium.components.sync.protocol.PasswordSpecificsMetadata DEFAULT_INSTANCE;
  static {
    PasswordSpecificsMetadata defaultInstance = new PasswordSpecificsMetadata();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      PasswordSpecificsMetadata.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.PasswordSpecificsMetadata getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<PasswordSpecificsMetadata> PARSER;

  public static com.google.protobuf.Parser<PasswordSpecificsMetadata> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

