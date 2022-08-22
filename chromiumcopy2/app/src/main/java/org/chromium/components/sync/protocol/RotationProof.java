// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/vault.proto

package org.chromium.components.sync.protocol;

/**
 * Protobuf type {@code sync_pb.RotationProof}
 */
public  final class RotationProof extends
    com.google.protobuf.GeneratedMessageLite<
        RotationProof, RotationProof.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.RotationProof)
    RotationProofOrBuilder {
  private RotationProof() {
    rotationProof_ = com.google.protobuf.ByteString.EMPTY;
  }
  public static final int NEW_EPOCH_FIELD_NUMBER = 1;
  private int newEpoch_;
  /**
   * <code>int32 new_epoch = 1;</code>
   * @return The newEpoch.
   */
  @java.lang.Override
  public int getNewEpoch() {
    return newEpoch_;
  }
  /**
   * <code>int32 new_epoch = 1;</code>
   * @param value The newEpoch to set.
   */
  private void setNewEpoch(int value) {
    
    newEpoch_ = value;
  }
  /**
   * <code>int32 new_epoch = 1;</code>
   */
  private void clearNewEpoch() {
    
    newEpoch_ = 0;
  }

  public static final int ROTATION_PROOF_FIELD_NUMBER = 2;
  private com.google.protobuf.ByteString rotationProof_;
  /**
   * <code>bytes rotation_proof = 2;</code>
   * @return The rotationProof.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString getRotationProof() {
    return rotationProof_;
  }
  /**
   * <code>bytes rotation_proof = 2;</code>
   * @param value The rotationProof to set.
   */
  private void setRotationProof(com.google.protobuf.ByteString value) {
    value.getClass();
  
    rotationProof_ = value;
  }
  /**
   * <code>bytes rotation_proof = 2;</code>
   */
  private void clearRotationProof() {
    
    rotationProof_ = getDefaultInstance().getRotationProof();
  }

  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.RotationProof parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.RotationProof prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code sync_pb.RotationProof}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.RotationProof, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.RotationProof)
      org.chromium.components.sync.protocol.RotationProofOrBuilder {
    // Construct using org.chromium.components.sync.protocol.RotationProof.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <code>int32 new_epoch = 1;</code>
     * @return The newEpoch.
     */
    @java.lang.Override
    public int getNewEpoch() {
      return instance.getNewEpoch();
    }
    /**
     * <code>int32 new_epoch = 1;</code>
     * @param value The newEpoch to set.
     * @return This builder for chaining.
     */
    public Builder setNewEpoch(int value) {
      copyOnWrite();
      instance.setNewEpoch(value);
      return this;
    }
    /**
     * <code>int32 new_epoch = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearNewEpoch() {
      copyOnWrite();
      instance.clearNewEpoch();
      return this;
    }

    /**
     * <code>bytes rotation_proof = 2;</code>
     * @return The rotationProof.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getRotationProof() {
      return instance.getRotationProof();
    }
    /**
     * <code>bytes rotation_proof = 2;</code>
     * @param value The rotationProof to set.
     * @return This builder for chaining.
     */
    public Builder setRotationProof(com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setRotationProof(value);
      return this;
    }
    /**
     * <code>bytes rotation_proof = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearRotationProof() {
      copyOnWrite();
      instance.clearRotationProof();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.RotationProof)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.RotationProof();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "newEpoch_",
            "rotationProof_",
          };
          java.lang.String info =
              "\u0000\u0002\u0000\u0000\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u0004\u0002\n" +
              "";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.RotationProof> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.RotationProof.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.RotationProof>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.RotationProof)
  private static final org.chromium.components.sync.protocol.RotationProof DEFAULT_INSTANCE;
  static {
    RotationProof defaultInstance = new RotationProof();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      RotationProof.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.RotationProof getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<RotationProof> PARSER;

  public static com.google.protobuf.Parser<RotationProof> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

