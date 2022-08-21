// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/data_type_progress_marker.proto

package org.chromium.components.sync.protocol;

/**
 * Protobuf type {@code sync_pb.DataTypeProgressMarker}
 */
public  final class DataTypeProgressMarker extends
    com.google.protobuf.GeneratedMessageLite<
        DataTypeProgressMarker, DataTypeProgressMarker.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.DataTypeProgressMarker)
    DataTypeProgressMarkerOrBuilder {
  private DataTypeProgressMarker() {
    token_ = com.google.protobuf.ByteString.EMPTY;
  }
  private int bitField0_;
  public static final int DATA_TYPE_ID_FIELD_NUMBER = 1;
  private int dataTypeId_;
  /**
   * <pre>
   * An integer identifying the data type whose progress is tracked by this
   * marker.  The legitimate values of this field correspond to the protobuf
   * field numbers of all EntitySpecifics fields supported by the server.
   * These values are externally declared in per-datatype .proto files.
   * </pre>
   *
   * <code>optional int32 data_type_id = 1;</code>
   * @return Whether the dataTypeId field is set.
   */
  @java.lang.Override
  public boolean hasDataTypeId() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * An integer identifying the data type whose progress is tracked by this
   * marker.  The legitimate values of this field correspond to the protobuf
   * field numbers of all EntitySpecifics fields supported by the server.
   * These values are externally declared in per-datatype .proto files.
   * </pre>
   *
   * <code>optional int32 data_type_id = 1;</code>
   * @return The dataTypeId.
   */
  @java.lang.Override
  public int getDataTypeId() {
    return dataTypeId_;
  }
  /**
   * <pre>
   * An integer identifying the data type whose progress is tracked by this
   * marker.  The legitimate values of this field correspond to the protobuf
   * field numbers of all EntitySpecifics fields supported by the server.
   * These values are externally declared in per-datatype .proto files.
   * </pre>
   *
   * <code>optional int32 data_type_id = 1;</code>
   * @param value The dataTypeId to set.
   */
  private void setDataTypeId(int value) {
    bitField0_ |= 0x00000001;
    dataTypeId_ = value;
  }
  /**
   * <pre>
   * An integer identifying the data type whose progress is tracked by this
   * marker.  The legitimate values of this field correspond to the protobuf
   * field numbers of all EntitySpecifics fields supported by the server.
   * These values are externally declared in per-datatype .proto files.
   * </pre>
   *
   * <code>optional int32 data_type_id = 1;</code>
   */
  private void clearDataTypeId() {
    bitField0_ = (bitField0_ & ~0x00000001);
    dataTypeId_ = 0;
  }

  public static final int TOKEN_FIELD_NUMBER = 2;
  private com.google.protobuf.ByteString token_;
  /**
   * <pre>
   * An opaque-to-the-client sequence of bytes that the server may interpret
   * as an indicator of the client's knowledge state.  If this is empty or
   * omitted by the client, it indicates that the client is initiating a
   * a first-time sync of this datatype.  Otherwise, clients must supply a
   * value previously returned by the server in an earlier GetUpdatesResponse.
   * These values are not comparable or generable on the client.
   * The opaque semantics of this field are to afford server implementations
   * some flexibility in implementing progress tracking.  For instance,
   * a server implementation built on top of a distributed storage service --
   * or multiple heterogenous such services -- might need to supply a vector
   * of totally ordered monotonic update timestamps, rather than a single
   * monotonically increasing value.  Other optimizations may also be
   * possible if the server is allowed to embed arbitrary information in
   * the progress token.
   * Server implementations should keep the size of these tokens relatively
   * small, on the order of tens of bytes, and they should remain small
   * regardless of the number of items synchronized.  (A possible bad server
   * implementation would be for progress_token to contain a list of all the
   * items ever sent to the client.  Servers shouldn't do this.)
   * </pre>
   *
   * <code>optional bytes token = 2;</code>
   * @return Whether the token field is set.
   */
  @java.lang.Override
  public boolean hasToken() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * An opaque-to-the-client sequence of bytes that the server may interpret
   * as an indicator of the client's knowledge state.  If this is empty or
   * omitted by the client, it indicates that the client is initiating a
   * a first-time sync of this datatype.  Otherwise, clients must supply a
   * value previously returned by the server in an earlier GetUpdatesResponse.
   * These values are not comparable or generable on the client.
   * The opaque semantics of this field are to afford server implementations
   * some flexibility in implementing progress tracking.  For instance,
   * a server implementation built on top of a distributed storage service --
   * or multiple heterogenous such services -- might need to supply a vector
   * of totally ordered monotonic update timestamps, rather than a single
   * monotonically increasing value.  Other optimizations may also be
   * possible if the server is allowed to embed arbitrary information in
   * the progress token.
   * Server implementations should keep the size of these tokens relatively
   * small, on the order of tens of bytes, and they should remain small
   * regardless of the number of items synchronized.  (A possible bad server
   * implementation would be for progress_token to contain a list of all the
   * items ever sent to the client.  Servers shouldn't do this.)
   * </pre>
   *
   * <code>optional bytes token = 2;</code>
   * @return The token.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString getToken() {
    return token_;
  }
  /**
   * <pre>
   * An opaque-to-the-client sequence of bytes that the server may interpret
   * as an indicator of the client's knowledge state.  If this is empty or
   * omitted by the client, it indicates that the client is initiating a
   * a first-time sync of this datatype.  Otherwise, clients must supply a
   * value previously returned by the server in an earlier GetUpdatesResponse.
   * These values are not comparable or generable on the client.
   * The opaque semantics of this field are to afford server implementations
   * some flexibility in implementing progress tracking.  For instance,
   * a server implementation built on top of a distributed storage service --
   * or multiple heterogenous such services -- might need to supply a vector
   * of totally ordered monotonic update timestamps, rather than a single
   * monotonically increasing value.  Other optimizations may also be
   * possible if the server is allowed to embed arbitrary information in
   * the progress token.
   * Server implementations should keep the size of these tokens relatively
   * small, on the order of tens of bytes, and they should remain small
   * regardless of the number of items synchronized.  (A possible bad server
   * implementation would be for progress_token to contain a list of all the
   * items ever sent to the client.  Servers shouldn't do this.)
   * </pre>
   *
   * <code>optional bytes token = 2;</code>
   * @param value The token to set.
   */
  private void setToken(com.google.protobuf.ByteString value) {
    value.getClass();
  bitField0_ |= 0x00000002;
    token_ = value;
  }
  /**
   * <pre>
   * An opaque-to-the-client sequence of bytes that the server may interpret
   * as an indicator of the client's knowledge state.  If this is empty or
   * omitted by the client, it indicates that the client is initiating a
   * a first-time sync of this datatype.  Otherwise, clients must supply a
   * value previously returned by the server in an earlier GetUpdatesResponse.
   * These values are not comparable or generable on the client.
   * The opaque semantics of this field are to afford server implementations
   * some flexibility in implementing progress tracking.  For instance,
   * a server implementation built on top of a distributed storage service --
   * or multiple heterogenous such services -- might need to supply a vector
   * of totally ordered monotonic update timestamps, rather than a single
   * monotonically increasing value.  Other optimizations may also be
   * possible if the server is allowed to embed arbitrary information in
   * the progress token.
   * Server implementations should keep the size of these tokens relatively
   * small, on the order of tens of bytes, and they should remain small
   * regardless of the number of items synchronized.  (A possible bad server
   * implementation would be for progress_token to contain a list of all the
   * items ever sent to the client.  Servers shouldn't do this.)
   * </pre>
   *
   * <code>optional bytes token = 2;</code>
   */
  private void clearToken() {
    bitField0_ = (bitField0_ & ~0x00000002);
    token_ = getDefaultInstance().getToken();
  }

  public static final int GET_UPDATE_TRIGGERS_FIELD_NUMBER = 5;
  private org.chromium.components.sync.protocol.GetUpdateTriggers getUpdateTriggers_;
  /**
   * <pre>
   * This field will be included only in GetUpdates with origin GU_TRIGGER.
   * </pre>
   *
   * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
   */
  @java.lang.Override
  public boolean hasGetUpdateTriggers() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <pre>
   * This field will be included only in GetUpdates with origin GU_TRIGGER.
   * </pre>
   *
   * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
   */
  @java.lang.Override
  public org.chromium.components.sync.protocol.GetUpdateTriggers getGetUpdateTriggers() {
    return getUpdateTriggers_ == null ? org.chromium.components.sync.protocol.GetUpdateTriggers.getDefaultInstance() : getUpdateTriggers_;
  }
  /**
   * <pre>
   * This field will be included only in GetUpdates with origin GU_TRIGGER.
   * </pre>
   *
   * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
   */
  private void setGetUpdateTriggers(org.chromium.components.sync.protocol.GetUpdateTriggers value) {
    value.getClass();
  getUpdateTriggers_ = value;
    bitField0_ |= 0x00000004;
    }
  /**
   * <pre>
   * This field will be included only in GetUpdates with origin GU_TRIGGER.
   * </pre>
   *
   * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
   */
  @java.lang.SuppressWarnings({"ReferenceEquality"})
  private void mergeGetUpdateTriggers(org.chromium.components.sync.protocol.GetUpdateTriggers value) {
    value.getClass();
  if (getUpdateTriggers_ != null &&
        getUpdateTriggers_ != org.chromium.components.sync.protocol.GetUpdateTriggers.getDefaultInstance()) {
      getUpdateTriggers_ =
        org.chromium.components.sync.protocol.GetUpdateTriggers.newBuilder(getUpdateTriggers_).mergeFrom(value).buildPartial();
    } else {
      getUpdateTriggers_ = value;
    }
    bitField0_ |= 0x00000004;
  }
  /**
   * <pre>
   * This field will be included only in GetUpdates with origin GU_TRIGGER.
   * </pre>
   *
   * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
   */
  private void clearGetUpdateTriggers() {  getUpdateTriggers_ = null;
    bitField0_ = (bitField0_ & ~0x00000004);
  }

  public static final int GC_DIRECTIVE_FIELD_NUMBER = 6;
  private org.chromium.components.sync.protocol.GarbageCollectionDirective gcDirective_;
  /**
   * <pre>
   * The garbage collection directive for this data type.  The client should
   * purge items locally based on this directive.  Since this directive is
   * designed to be sent from server only, the client should persist it locally
   * as needed and avoid sending it to the server.
   * </pre>
   *
   * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
   */
  @java.lang.Override
  public boolean hasGcDirective() {
    return ((bitField0_ & 0x00000008) != 0);
  }
  /**
   * <pre>
   * The garbage collection directive for this data type.  The client should
   * purge items locally based on this directive.  Since this directive is
   * designed to be sent from server only, the client should persist it locally
   * as needed and avoid sending it to the server.
   * </pre>
   *
   * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
   */
  @java.lang.Override
  public org.chromium.components.sync.protocol.GarbageCollectionDirective getGcDirective() {
    return gcDirective_ == null ? org.chromium.components.sync.protocol.GarbageCollectionDirective.getDefaultInstance() : gcDirective_;
  }
  /**
   * <pre>
   * The garbage collection directive for this data type.  The client should
   * purge items locally based on this directive.  Since this directive is
   * designed to be sent from server only, the client should persist it locally
   * as needed and avoid sending it to the server.
   * </pre>
   *
   * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
   */
  private void setGcDirective(org.chromium.components.sync.protocol.GarbageCollectionDirective value) {
    value.getClass();
  gcDirective_ = value;
    bitField0_ |= 0x00000008;
    }
  /**
   * <pre>
   * The garbage collection directive for this data type.  The client should
   * purge items locally based on this directive.  Since this directive is
   * designed to be sent from server only, the client should persist it locally
   * as needed and avoid sending it to the server.
   * </pre>
   *
   * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
   */
  @java.lang.SuppressWarnings({"ReferenceEquality"})
  private void mergeGcDirective(org.chromium.components.sync.protocol.GarbageCollectionDirective value) {
    value.getClass();
  if (gcDirective_ != null &&
        gcDirective_ != org.chromium.components.sync.protocol.GarbageCollectionDirective.getDefaultInstance()) {
      gcDirective_ =
        org.chromium.components.sync.protocol.GarbageCollectionDirective.newBuilder(gcDirective_).mergeFrom(value).buildPartial();
    } else {
      gcDirective_ = value;
    }
    bitField0_ |= 0x00000008;
  }
  /**
   * <pre>
   * The garbage collection directive for this data type.  The client should
   * purge items locally based on this directive.  Since this directive is
   * designed to be sent from server only, the client should persist it locally
   * as needed and avoid sending it to the server.
   * </pre>
   *
   * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
   */
  private void clearGcDirective() {  gcDirective_ = null;
    bitField0_ = (bitField0_ & ~0x00000008);
  }

  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.DataTypeProgressMarker parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.DataTypeProgressMarker prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code sync_pb.DataTypeProgressMarker}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.DataTypeProgressMarker, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.DataTypeProgressMarker)
      org.chromium.components.sync.protocol.DataTypeProgressMarkerOrBuilder {
    // Construct using org.chromium.components.sync.protocol.DataTypeProgressMarker.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * An integer identifying the data type whose progress is tracked by this
     * marker.  The legitimate values of this field correspond to the protobuf
     * field numbers of all EntitySpecifics fields supported by the server.
     * These values are externally declared in per-datatype .proto files.
     * </pre>
     *
     * <code>optional int32 data_type_id = 1;</code>
     * @return Whether the dataTypeId field is set.
     */
    @java.lang.Override
    public boolean hasDataTypeId() {
      return instance.hasDataTypeId();
    }
    /**
     * <pre>
     * An integer identifying the data type whose progress is tracked by this
     * marker.  The legitimate values of this field correspond to the protobuf
     * field numbers of all EntitySpecifics fields supported by the server.
     * These values are externally declared in per-datatype .proto files.
     * </pre>
     *
     * <code>optional int32 data_type_id = 1;</code>
     * @return The dataTypeId.
     */
    @java.lang.Override
    public int getDataTypeId() {
      return instance.getDataTypeId();
    }
    /**
     * <pre>
     * An integer identifying the data type whose progress is tracked by this
     * marker.  The legitimate values of this field correspond to the protobuf
     * field numbers of all EntitySpecifics fields supported by the server.
     * These values are externally declared in per-datatype .proto files.
     * </pre>
     *
     * <code>optional int32 data_type_id = 1;</code>
     * @param value The dataTypeId to set.
     * @return This builder for chaining.
     */
    public Builder setDataTypeId(int value) {
      copyOnWrite();
      instance.setDataTypeId(value);
      return this;
    }
    /**
     * <pre>
     * An integer identifying the data type whose progress is tracked by this
     * marker.  The legitimate values of this field correspond to the protobuf
     * field numbers of all EntitySpecifics fields supported by the server.
     * These values are externally declared in per-datatype .proto files.
     * </pre>
     *
     * <code>optional int32 data_type_id = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearDataTypeId() {
      copyOnWrite();
      instance.clearDataTypeId();
      return this;
    }

    /**
     * <pre>
     * An opaque-to-the-client sequence of bytes that the server may interpret
     * as an indicator of the client's knowledge state.  If this is empty or
     * omitted by the client, it indicates that the client is initiating a
     * a first-time sync of this datatype.  Otherwise, clients must supply a
     * value previously returned by the server in an earlier GetUpdatesResponse.
     * These values are not comparable or generable on the client.
     * The opaque semantics of this field are to afford server implementations
     * some flexibility in implementing progress tracking.  For instance,
     * a server implementation built on top of a distributed storage service --
     * or multiple heterogenous such services -- might need to supply a vector
     * of totally ordered monotonic update timestamps, rather than a single
     * monotonically increasing value.  Other optimizations may also be
     * possible if the server is allowed to embed arbitrary information in
     * the progress token.
     * Server implementations should keep the size of these tokens relatively
     * small, on the order of tens of bytes, and they should remain small
     * regardless of the number of items synchronized.  (A possible bad server
     * implementation would be for progress_token to contain a list of all the
     * items ever sent to the client.  Servers shouldn't do this.)
     * </pre>
     *
     * <code>optional bytes token = 2;</code>
     * @return Whether the token field is set.
     */
    @java.lang.Override
    public boolean hasToken() {
      return instance.hasToken();
    }
    /**
     * <pre>
     * An opaque-to-the-client sequence of bytes that the server may interpret
     * as an indicator of the client's knowledge state.  If this is empty or
     * omitted by the client, it indicates that the client is initiating a
     * a first-time sync of this datatype.  Otherwise, clients must supply a
     * value previously returned by the server in an earlier GetUpdatesResponse.
     * These values are not comparable or generable on the client.
     * The opaque semantics of this field are to afford server implementations
     * some flexibility in implementing progress tracking.  For instance,
     * a server implementation built on top of a distributed storage service --
     * or multiple heterogenous such services -- might need to supply a vector
     * of totally ordered monotonic update timestamps, rather than a single
     * monotonically increasing value.  Other optimizations may also be
     * possible if the server is allowed to embed arbitrary information in
     * the progress token.
     * Server implementations should keep the size of these tokens relatively
     * small, on the order of tens of bytes, and they should remain small
     * regardless of the number of items synchronized.  (A possible bad server
     * implementation would be for progress_token to contain a list of all the
     * items ever sent to the client.  Servers shouldn't do this.)
     * </pre>
     *
     * <code>optional bytes token = 2;</code>
     * @return The token.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getToken() {
      return instance.getToken();
    }
    /**
     * <pre>
     * An opaque-to-the-client sequence of bytes that the server may interpret
     * as an indicator of the client's knowledge state.  If this is empty or
     * omitted by the client, it indicates that the client is initiating a
     * a first-time sync of this datatype.  Otherwise, clients must supply a
     * value previously returned by the server in an earlier GetUpdatesResponse.
     * These values are not comparable or generable on the client.
     * The opaque semantics of this field are to afford server implementations
     * some flexibility in implementing progress tracking.  For instance,
     * a server implementation built on top of a distributed storage service --
     * or multiple heterogenous such services -- might need to supply a vector
     * of totally ordered monotonic update timestamps, rather than a single
     * monotonically increasing value.  Other optimizations may also be
     * possible if the server is allowed to embed arbitrary information in
     * the progress token.
     * Server implementations should keep the size of these tokens relatively
     * small, on the order of tens of bytes, and they should remain small
     * regardless of the number of items synchronized.  (A possible bad server
     * implementation would be for progress_token to contain a list of all the
     * items ever sent to the client.  Servers shouldn't do this.)
     * </pre>
     *
     * <code>optional bytes token = 2;</code>
     * @param value The token to set.
     * @return This builder for chaining.
     */
    public Builder setToken(com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setToken(value);
      return this;
    }
    /**
     * <pre>
     * An opaque-to-the-client sequence of bytes that the server may interpret
     * as an indicator of the client's knowledge state.  If this is empty or
     * omitted by the client, it indicates that the client is initiating a
     * a first-time sync of this datatype.  Otherwise, clients must supply a
     * value previously returned by the server in an earlier GetUpdatesResponse.
     * These values are not comparable or generable on the client.
     * The opaque semantics of this field are to afford server implementations
     * some flexibility in implementing progress tracking.  For instance,
     * a server implementation built on top of a distributed storage service --
     * or multiple heterogenous such services -- might need to supply a vector
     * of totally ordered monotonic update timestamps, rather than a single
     * monotonically increasing value.  Other optimizations may also be
     * possible if the server is allowed to embed arbitrary information in
     * the progress token.
     * Server implementations should keep the size of these tokens relatively
     * small, on the order of tens of bytes, and they should remain small
     * regardless of the number of items synchronized.  (A possible bad server
     * implementation would be for progress_token to contain a list of all the
     * items ever sent to the client.  Servers shouldn't do this.)
     * </pre>
     *
     * <code>optional bytes token = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearToken() {
      copyOnWrite();
      instance.clearToken();
      return this;
    }

    /**
     * <pre>
     * This field will be included only in GetUpdates with origin GU_TRIGGER.
     * </pre>
     *
     * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
     */
    @java.lang.Override
    public boolean hasGetUpdateTriggers() {
      return instance.hasGetUpdateTriggers();
    }
    /**
     * <pre>
     * This field will be included only in GetUpdates with origin GU_TRIGGER.
     * </pre>
     *
     * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
     */
    @java.lang.Override
    public org.chromium.components.sync.protocol.GetUpdateTriggers getGetUpdateTriggers() {
      return instance.getGetUpdateTriggers();
    }
    /**
     * <pre>
     * This field will be included only in GetUpdates with origin GU_TRIGGER.
     * </pre>
     *
     * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
     */
    public Builder setGetUpdateTriggers(org.chromium.components.sync.protocol.GetUpdateTriggers value) {
      copyOnWrite();
      instance.setGetUpdateTriggers(value);
      return this;
      }
    /**
     * <pre>
     * This field will be included only in GetUpdates with origin GU_TRIGGER.
     * </pre>
     *
     * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
     */
    public Builder setGetUpdateTriggers(
        org.chromium.components.sync.protocol.GetUpdateTriggers.Builder builderForValue) {
      copyOnWrite();
      instance.setGetUpdateTriggers(builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * This field will be included only in GetUpdates with origin GU_TRIGGER.
     * </pre>
     *
     * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
     */
    public Builder mergeGetUpdateTriggers(org.chromium.components.sync.protocol.GetUpdateTriggers value) {
      copyOnWrite();
      instance.mergeGetUpdateTriggers(value);
      return this;
    }
    /**
     * <pre>
     * This field will be included only in GetUpdates with origin GU_TRIGGER.
     * </pre>
     *
     * <code>optional .sync_pb.GetUpdateTriggers get_update_triggers = 5;</code>
     */
    public Builder clearGetUpdateTriggers() {  copyOnWrite();
      instance.clearGetUpdateTriggers();
      return this;
    }

    /**
     * <pre>
     * The garbage collection directive for this data type.  The client should
     * purge items locally based on this directive.  Since this directive is
     * designed to be sent from server only, the client should persist it locally
     * as needed and avoid sending it to the server.
     * </pre>
     *
     * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
     */
    @java.lang.Override
    public boolean hasGcDirective() {
      return instance.hasGcDirective();
    }
    /**
     * <pre>
     * The garbage collection directive for this data type.  The client should
     * purge items locally based on this directive.  Since this directive is
     * designed to be sent from server only, the client should persist it locally
     * as needed and avoid sending it to the server.
     * </pre>
     *
     * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
     */
    @java.lang.Override
    public org.chromium.components.sync.protocol.GarbageCollectionDirective getGcDirective() {
      return instance.getGcDirective();
    }
    /**
     * <pre>
     * The garbage collection directive for this data type.  The client should
     * purge items locally based on this directive.  Since this directive is
     * designed to be sent from server only, the client should persist it locally
     * as needed and avoid sending it to the server.
     * </pre>
     *
     * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
     */
    public Builder setGcDirective(org.chromium.components.sync.protocol.GarbageCollectionDirective value) {
      copyOnWrite();
      instance.setGcDirective(value);
      return this;
      }
    /**
     * <pre>
     * The garbage collection directive for this data type.  The client should
     * purge items locally based on this directive.  Since this directive is
     * designed to be sent from server only, the client should persist it locally
     * as needed and avoid sending it to the server.
     * </pre>
     *
     * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
     */
    public Builder setGcDirective(
        org.chromium.components.sync.protocol.GarbageCollectionDirective.Builder builderForValue) {
      copyOnWrite();
      instance.setGcDirective(builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * The garbage collection directive for this data type.  The client should
     * purge items locally based on this directive.  Since this directive is
     * designed to be sent from server only, the client should persist it locally
     * as needed and avoid sending it to the server.
     * </pre>
     *
     * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
     */
    public Builder mergeGcDirective(org.chromium.components.sync.protocol.GarbageCollectionDirective value) {
      copyOnWrite();
      instance.mergeGcDirective(value);
      return this;
    }
    /**
     * <pre>
     * The garbage collection directive for this data type.  The client should
     * purge items locally based on this directive.  Since this directive is
     * designed to be sent from server only, the client should persist it locally
     * as needed and avoid sending it to the server.
     * </pre>
     *
     * <code>optional .sync_pb.GarbageCollectionDirective gc_directive = 6;</code>
     */
    public Builder clearGcDirective() {  copyOnWrite();
      instance.clearGcDirective();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.DataTypeProgressMarker)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.DataTypeProgressMarker();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "dataTypeId_",
            "token_",
            "getUpdateTriggers_",
            "gcDirective_",
          };
          java.lang.String info =
              "\u0001\u0004\u0000\u0001\u0001\u0006\u0004\u0000\u0000\u0000\u0001\u1004\u0000\u0002" +
              "\u100a\u0001\u0005\u1009\u0002\u0006\u1009\u0003";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.DataTypeProgressMarker> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.DataTypeProgressMarker.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.DataTypeProgressMarker>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.DataTypeProgressMarker)
  private static final org.chromium.components.sync.protocol.DataTypeProgressMarker DEFAULT_INSTANCE;
  static {
    DataTypeProgressMarker defaultInstance = new DataTypeProgressMarker();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      DataTypeProgressMarker.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.DataTypeProgressMarker getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<DataTypeProgressMarker> PARSER;

  public static com.google.protobuf.Parser<DataTypeProgressMarker> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

