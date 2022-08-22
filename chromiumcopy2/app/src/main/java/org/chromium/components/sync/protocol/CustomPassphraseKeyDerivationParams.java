// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/nigori_local_data.proto

package org.chromium.components.sync.protocol;

/**
 * Protobuf type {@code sync_pb.CustomPassphraseKeyDerivationParams}
 */
public  final class CustomPassphraseKeyDerivationParams extends
    com.google.protobuf.GeneratedMessageLite<
        CustomPassphraseKeyDerivationParams, CustomPassphraseKeyDerivationParams.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.CustomPassphraseKeyDerivationParams)
    CustomPassphraseKeyDerivationParamsOrBuilder {
  private CustomPassphraseKeyDerivationParams() {
    customPassphraseKeyDerivationSalt_ = "";
  }
  private int bitField0_;
  public static final int CUSTOM_PASSPHRASE_KEY_DERIVATION_METHOD_FIELD_NUMBER = 1;
  private int customPassphraseKeyDerivationMethod_;
  /**
   * <pre>
   * Method used for deriving keys from custom passphrase.
   * </pre>
   *
   * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
   * @return Whether the customPassphraseKeyDerivationMethod field is set.
   */
  @java.lang.Override
  public boolean hasCustomPassphraseKeyDerivationMethod() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Method used for deriving keys from custom passphrase.
   * </pre>
   *
   * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
   * @return The customPassphraseKeyDerivationMethod.
   */
  @java.lang.Override
  public org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod getCustomPassphraseKeyDerivationMethod() {
    org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod result = org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod.forNumber(customPassphraseKeyDerivationMethod_);
    return result == null ? org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod.UNSPECIFIED : result;
  }
  /**
   * <pre>
   * Method used for deriving keys from custom passphrase.
   * </pre>
   *
   * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
   * @param value The customPassphraseKeyDerivationMethod to set.
   */
  private void setCustomPassphraseKeyDerivationMethod(org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod value) {
    customPassphraseKeyDerivationMethod_ = value.getNumber();
    bitField0_ |= 0x00000001;
  }
  /**
   * <pre>
   * Method used for deriving keys from custom passphrase.
   * </pre>
   *
   * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
   */
  private void clearCustomPassphraseKeyDerivationMethod() {
    bitField0_ = (bitField0_ & ~0x00000001);
    customPassphraseKeyDerivationMethod_ = 0;
  }

  public static final int CUSTOM_PASSPHRASE_KEY_DERIVATION_SALT_FIELD_NUMBER = 2;
  private java.lang.String customPassphraseKeyDerivationSalt_;
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @return Whether the customPassphraseKeyDerivationSalt field is set.
   */
  @java.lang.Override
  public boolean hasCustomPassphraseKeyDerivationSalt() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @return The customPassphraseKeyDerivationSalt.
   */
  @java.lang.Override
  public java.lang.String getCustomPassphraseKeyDerivationSalt() {
    return customPassphraseKeyDerivationSalt_;
  }
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @return The bytes for customPassphraseKeyDerivationSalt.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getCustomPassphraseKeyDerivationSaltBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(customPassphraseKeyDerivationSalt_);
  }
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @param value The customPassphraseKeyDerivationSalt to set.
   */
  private void setCustomPassphraseKeyDerivationSalt(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000002;
    customPassphraseKeyDerivationSalt_ = value;
  }
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   */
  private void clearCustomPassphraseKeyDerivationSalt() {
    bitField0_ = (bitField0_ & ~0x00000002);
    customPassphraseKeyDerivationSalt_ = getDefaultInstance().getCustomPassphraseKeyDerivationSalt();
  }
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @param value The bytes for customPassphraseKeyDerivationSalt to set.
   */
  private void setCustomPassphraseKeyDerivationSaltBytes(
      com.google.protobuf.ByteString value) {
    customPassphraseKeyDerivationSalt_ = value.toStringUtf8();
    bitField0_ |= 0x00000002;
  }

  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code sync_pb.CustomPassphraseKeyDerivationParams}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.CustomPassphraseKeyDerivationParams)
      org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParamsOrBuilder {
    // Construct using org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Method used for deriving keys from custom passphrase.
     * </pre>
     *
     * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
     * @return Whether the customPassphraseKeyDerivationMethod field is set.
     */
    @java.lang.Override
    public boolean hasCustomPassphraseKeyDerivationMethod() {
      return instance.hasCustomPassphraseKeyDerivationMethod();
    }
    /**
     * <pre>
     * Method used for deriving keys from custom passphrase.
     * </pre>
     *
     * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
     * @return The customPassphraseKeyDerivationMethod.
     */
    @java.lang.Override
    public org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod getCustomPassphraseKeyDerivationMethod() {
      return instance.getCustomPassphraseKeyDerivationMethod();
    }
    /**
     * <pre>
     * Method used for deriving keys from custom passphrase.
     * </pre>
     *
     * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
     * @param value The enum numeric value on the wire for customPassphraseKeyDerivationMethod to set.
     * @return This builder for chaining.
     */
    public Builder setCustomPassphraseKeyDerivationMethod(org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod value) {
      copyOnWrite();
      instance.setCustomPassphraseKeyDerivationMethod(value);
      return this;
    }
    /**
     * <pre>
     * Method used for deriving keys from custom passphrase.
     * </pre>
     *
     * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearCustomPassphraseKeyDerivationMethod() {
      copyOnWrite();
      instance.clearCustomPassphraseKeyDerivationMethod();
      return this;
    }

    /**
     * <pre>
     * Salt used for the derivation of the key from the custom passphrase. Should
     * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
     * </pre>
     *
     * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
     * @return Whether the customPassphraseKeyDerivationSalt field is set.
     */
    @java.lang.Override
    public boolean hasCustomPassphraseKeyDerivationSalt() {
      return instance.hasCustomPassphraseKeyDerivationSalt();
    }
    /**
     * <pre>
     * Salt used for the derivation of the key from the custom passphrase. Should
     * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
     * </pre>
     *
     * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
     * @return The customPassphraseKeyDerivationSalt.
     */
    @java.lang.Override
    public java.lang.String getCustomPassphraseKeyDerivationSalt() {
      return instance.getCustomPassphraseKeyDerivationSalt();
    }
    /**
     * <pre>
     * Salt used for the derivation of the key from the custom passphrase. Should
     * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
     * </pre>
     *
     * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
     * @return The bytes for customPassphraseKeyDerivationSalt.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getCustomPassphraseKeyDerivationSaltBytes() {
      return instance.getCustomPassphraseKeyDerivationSaltBytes();
    }
    /**
     * <pre>
     * Salt used for the derivation of the key from the custom passphrase. Should
     * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
     * </pre>
     *
     * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
     * @param value The customPassphraseKeyDerivationSalt to set.
     * @return This builder for chaining.
     */
    public Builder setCustomPassphraseKeyDerivationSalt(
        java.lang.String value) {
      copyOnWrite();
      instance.setCustomPassphraseKeyDerivationSalt(value);
      return this;
    }
    /**
     * <pre>
     * Salt used for the derivation of the key from the custom passphrase. Should
     * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
     * </pre>
     *
     * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearCustomPassphraseKeyDerivationSalt() {
      copyOnWrite();
      instance.clearCustomPassphraseKeyDerivationSalt();
      return this;
    }
    /**
     * <pre>
     * Salt used for the derivation of the key from the custom passphrase. Should
     * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
     * </pre>
     *
     * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
     * @param value The bytes for customPassphraseKeyDerivationSalt to set.
     * @return This builder for chaining.
     */
    public Builder setCustomPassphraseKeyDerivationSaltBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setCustomPassphraseKeyDerivationSaltBytes(value);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.CustomPassphraseKeyDerivationParams)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "customPassphraseKeyDerivationMethod_",
            org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod.internalGetVerifier(),
            "customPassphraseKeyDerivationSalt_",
          };
          java.lang.String info =
              "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u100c\u0000\u0002" +
              "\u1008\u0001";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.CustomPassphraseKeyDerivationParams)
  private static final org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams DEFAULT_INSTANCE;
  static {
    CustomPassphraseKeyDerivationParams defaultInstance = new CustomPassphraseKeyDerivationParams();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      CustomPassphraseKeyDerivationParams.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.CustomPassphraseKeyDerivationParams getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<CustomPassphraseKeyDerivationParams> PARSER;

  public static com.google.protobuf.Parser<CustomPassphraseKeyDerivationParams> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

