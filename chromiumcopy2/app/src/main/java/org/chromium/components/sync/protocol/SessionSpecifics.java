// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/session_specifics.proto

package org.chromium.components.sync.protocol;

/**
 * Protobuf type {@code sync_pb.SessionSpecifics}
 */
public  final class SessionSpecifics extends
    com.google.protobuf.GeneratedMessageLite<
        SessionSpecifics, SessionSpecifics.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.SessionSpecifics)
    SessionSpecificsOrBuilder {
  private SessionSpecifics() {
    sessionTag_ = "";
    tabNodeId_ = -1;
  }
  private int bitField0_;
  public static final int SESSION_TAG_FIELD_NUMBER = 1;
  private java.lang.String sessionTag_;
  /**
   * <pre>
   * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
   * to populate this tag for *new* sessions.
   * </pre>
   *
   * <code>optional string session_tag = 1;</code>
   * @return Whether the sessionTag field is set.
   */
  @java.lang.Override
  public boolean hasSessionTag() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
   * to populate this tag for *new* sessions.
   * </pre>
   *
   * <code>optional string session_tag = 1;</code>
   * @return The sessionTag.
   */
  @java.lang.Override
  public java.lang.String getSessionTag() {
    return sessionTag_;
  }
  /**
   * <pre>
   * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
   * to populate this tag for *new* sessions.
   * </pre>
   *
   * <code>optional string session_tag = 1;</code>
   * @return The bytes for sessionTag.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getSessionTagBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(sessionTag_);
  }
  /**
   * <pre>
   * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
   * to populate this tag for *new* sessions.
   * </pre>
   *
   * <code>optional string session_tag = 1;</code>
   * @param value The sessionTag to set.
   */
  private void setSessionTag(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    sessionTag_ = value;
  }
  /**
   * <pre>
   * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
   * to populate this tag for *new* sessions.
   * </pre>
   *
   * <code>optional string session_tag = 1;</code>
   */
  private void clearSessionTag() {
    bitField0_ = (bitField0_ & ~0x00000001);
    sessionTag_ = getDefaultInstance().getSessionTag();
  }
  /**
   * <pre>
   * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
   * to populate this tag for *new* sessions.
   * </pre>
   *
   * <code>optional string session_tag = 1;</code>
   * @param value The bytes for sessionTag to set.
   */
  private void setSessionTagBytes(
      com.google.protobuf.ByteString value) {
    sessionTag_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int HEADER_FIELD_NUMBER = 2;
  private org.chromium.components.sync.protocol.SessionHeader header_;
  /**
   * <code>optional .sync_pb.SessionHeader header = 2;</code>
   */
  @java.lang.Override
  public boolean hasHeader() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <code>optional .sync_pb.SessionHeader header = 2;</code>
   */
  @java.lang.Override
  public org.chromium.components.sync.protocol.SessionHeader getHeader() {
    return header_ == null ? org.chromium.components.sync.protocol.SessionHeader.getDefaultInstance() : header_;
  }
  /**
   * <code>optional .sync_pb.SessionHeader header = 2;</code>
   */
  private void setHeader(org.chromium.components.sync.protocol.SessionHeader value) {
    value.getClass();
  header_ = value;
    bitField0_ |= 0x00000002;
    }
  /**
   * <code>optional .sync_pb.SessionHeader header = 2;</code>
   */
  @java.lang.SuppressWarnings({"ReferenceEquality"})
  private void mergeHeader(org.chromium.components.sync.protocol.SessionHeader value) {
    value.getClass();
  if (header_ != null &&
        header_ != org.chromium.components.sync.protocol.SessionHeader.getDefaultInstance()) {
      header_ =
        org.chromium.components.sync.protocol.SessionHeader.newBuilder(header_).mergeFrom(value).buildPartial();
    } else {
      header_ = value;
    }
    bitField0_ |= 0x00000002;
  }
  /**
   * <code>optional .sync_pb.SessionHeader header = 2;</code>
   */
  private void clearHeader() {  header_ = null;
    bitField0_ = (bitField0_ & ~0x00000002);
  }

  public static final int TAB_FIELD_NUMBER = 3;
  private org.chromium.components.sync.protocol.SessionTab tab_;
  /**
   * <code>optional .sync_pb.SessionTab tab = 3;</code>
   */
  @java.lang.Override
  public boolean hasTab() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <code>optional .sync_pb.SessionTab tab = 3;</code>
   */
  @java.lang.Override
  public org.chromium.components.sync.protocol.SessionTab getTab() {
    return tab_ == null ? org.chromium.components.sync.protocol.SessionTab.getDefaultInstance() : tab_;
  }
  /**
   * <code>optional .sync_pb.SessionTab tab = 3;</code>
   */
  private void setTab(org.chromium.components.sync.protocol.SessionTab value) {
    value.getClass();
  tab_ = value;
    bitField0_ |= 0x00000004;
    }
  /**
   * <code>optional .sync_pb.SessionTab tab = 3;</code>
   */
  @java.lang.SuppressWarnings({"ReferenceEquality"})
  private void mergeTab(org.chromium.components.sync.protocol.SessionTab value) {
    value.getClass();
  if (tab_ != null &&
        tab_ != org.chromium.components.sync.protocol.SessionTab.getDefaultInstance()) {
      tab_ =
        org.chromium.components.sync.protocol.SessionTab.newBuilder(tab_).mergeFrom(value).buildPartial();
    } else {
      tab_ = value;
    }
    bitField0_ |= 0x00000004;
  }
  /**
   * <code>optional .sync_pb.SessionTab tab = 3;</code>
   */
  private void clearTab() {  tab_ = null;
    bitField0_ = (bitField0_ & ~0x00000004);
  }

  public static final int TAB_NODE_ID_FIELD_NUMBER = 4;
  private int tabNodeId_;
  /**
   * <pre>
   * The local tab id used by sync. Unique across all nodes for that client.
   * </pre>
   *
   * <code>optional int32 tab_node_id = 4 [default = -1];</code>
   * @return Whether the tabNodeId field is set.
   */
  @java.lang.Override
  public boolean hasTabNodeId() {
    return ((bitField0_ & 0x00000008) != 0);
  }
  /**
   * <pre>
   * The local tab id used by sync. Unique across all nodes for that client.
   * </pre>
   *
   * <code>optional int32 tab_node_id = 4 [default = -1];</code>
   * @return The tabNodeId.
   */
  @java.lang.Override
  public int getTabNodeId() {
    return tabNodeId_;
  }
  /**
   * <pre>
   * The local tab id used by sync. Unique across all nodes for that client.
   * </pre>
   *
   * <code>optional int32 tab_node_id = 4 [default = -1];</code>
   * @param value The tabNodeId to set.
   */
  private void setTabNodeId(int value) {
    bitField0_ |= 0x00000008;
    tabNodeId_ = value;
  }
  /**
   * <pre>
   * The local tab id used by sync. Unique across all nodes for that client.
   * </pre>
   *
   * <code>optional int32 tab_node_id = 4 [default = -1];</code>
   */
  private void clearTabNodeId() {
    bitField0_ = (bitField0_ & ~0x00000008);
    tabNodeId_ = -1;
  }

  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.SessionSpecifics parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.SessionSpecifics prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code sync_pb.SessionSpecifics}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.SessionSpecifics, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.SessionSpecifics)
      org.chromium.components.sync.protocol.SessionSpecificsOrBuilder {
    // Construct using org.chromium.components.sync.protocol.SessionSpecifics.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
     * to populate this tag for *new* sessions.
     * </pre>
     *
     * <code>optional string session_tag = 1;</code>
     * @return Whether the sessionTag field is set.
     */
    @java.lang.Override
    public boolean hasSessionTag() {
      return instance.hasSessionTag();
    }
    /**
     * <pre>
     * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
     * to populate this tag for *new* sessions.
     * </pre>
     *
     * <code>optional string session_tag = 1;</code>
     * @return The sessionTag.
     */
    @java.lang.Override
    public java.lang.String getSessionTag() {
      return instance.getSessionTag();
    }
    /**
     * <pre>
     * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
     * to populate this tag for *new* sessions.
     * </pre>
     *
     * <code>optional string session_tag = 1;</code>
     * @return The bytes for sessionTag.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getSessionTagBytes() {
      return instance.getSessionTagBytes();
    }
    /**
     * <pre>
     * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
     * to populate this tag for *new* sessions.
     * </pre>
     *
     * <code>optional string session_tag = 1;</code>
     * @param value The sessionTag to set.
     * @return This builder for chaining.
     */
    public Builder setSessionTag(
        java.lang.String value) {
      copyOnWrite();
      instance.setSessionTag(value);
      return this;
    }
    /**
     * <pre>
     * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
     * to populate this tag for *new* sessions.
     * </pre>
     *
     * <code>optional string session_tag = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearSessionTag() {
      copyOnWrite();
      instance.clearSessionTag();
      return this;
    }
    /**
     * <pre>
     * Unique id for the client. M89 and higher use sync's cache GUID (client ID)
     * to populate this tag for *new* sessions.
     * </pre>
     *
     * <code>optional string session_tag = 1;</code>
     * @param value The bytes for sessionTag to set.
     * @return This builder for chaining.
     */
    public Builder setSessionTagBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setSessionTagBytes(value);
      return this;
    }

    /**
     * <code>optional .sync_pb.SessionHeader header = 2;</code>
     */
    @java.lang.Override
    public boolean hasHeader() {
      return instance.hasHeader();
    }
    /**
     * <code>optional .sync_pb.SessionHeader header = 2;</code>
     */
    @java.lang.Override
    public org.chromium.components.sync.protocol.SessionHeader getHeader() {
      return instance.getHeader();
    }
    /**
     * <code>optional .sync_pb.SessionHeader header = 2;</code>
     */
    public Builder setHeader(org.chromium.components.sync.protocol.SessionHeader value) {
      copyOnWrite();
      instance.setHeader(value);
      return this;
      }
    /**
     * <code>optional .sync_pb.SessionHeader header = 2;</code>
     */
    public Builder setHeader(
        org.chromium.components.sync.protocol.SessionHeader.Builder builderForValue) {
      copyOnWrite();
      instance.setHeader(builderForValue.build());
      return this;
    }
    /**
     * <code>optional .sync_pb.SessionHeader header = 2;</code>
     */
    public Builder mergeHeader(org.chromium.components.sync.protocol.SessionHeader value) {
      copyOnWrite();
      instance.mergeHeader(value);
      return this;
    }
    /**
     * <code>optional .sync_pb.SessionHeader header = 2;</code>
     */
    public Builder clearHeader() {  copyOnWrite();
      instance.clearHeader();
      return this;
    }

    /**
     * <code>optional .sync_pb.SessionTab tab = 3;</code>
     */
    @java.lang.Override
    public boolean hasTab() {
      return instance.hasTab();
    }
    /**
     * <code>optional .sync_pb.SessionTab tab = 3;</code>
     */
    @java.lang.Override
    public org.chromium.components.sync.protocol.SessionTab getTab() {
      return instance.getTab();
    }
    /**
     * <code>optional .sync_pb.SessionTab tab = 3;</code>
     */
    public Builder setTab(org.chromium.components.sync.protocol.SessionTab value) {
      copyOnWrite();
      instance.setTab(value);
      return this;
      }
    /**
     * <code>optional .sync_pb.SessionTab tab = 3;</code>
     */
    public Builder setTab(
        org.chromium.components.sync.protocol.SessionTab.Builder builderForValue) {
      copyOnWrite();
      instance.setTab(builderForValue.build());
      return this;
    }
    /**
     * <code>optional .sync_pb.SessionTab tab = 3;</code>
     */
    public Builder mergeTab(org.chromium.components.sync.protocol.SessionTab value) {
      copyOnWrite();
      instance.mergeTab(value);
      return this;
    }
    /**
     * <code>optional .sync_pb.SessionTab tab = 3;</code>
     */
    public Builder clearTab() {  copyOnWrite();
      instance.clearTab();
      return this;
    }

    /**
     * <pre>
     * The local tab id used by sync. Unique across all nodes for that client.
     * </pre>
     *
     * <code>optional int32 tab_node_id = 4 [default = -1];</code>
     * @return Whether the tabNodeId field is set.
     */
    @java.lang.Override
    public boolean hasTabNodeId() {
      return instance.hasTabNodeId();
    }
    /**
     * <pre>
     * The local tab id used by sync. Unique across all nodes for that client.
     * </pre>
     *
     * <code>optional int32 tab_node_id = 4 [default = -1];</code>
     * @return The tabNodeId.
     */
    @java.lang.Override
    public int getTabNodeId() {
      return instance.getTabNodeId();
    }
    /**
     * <pre>
     * The local tab id used by sync. Unique across all nodes for that client.
     * </pre>
     *
     * <code>optional int32 tab_node_id = 4 [default = -1];</code>
     * @param value The tabNodeId to set.
     * @return This builder for chaining.
     */
    public Builder setTabNodeId(int value) {
      copyOnWrite();
      instance.setTabNodeId(value);
      return this;
    }
    /**
     * <pre>
     * The local tab id used by sync. Unique across all nodes for that client.
     * </pre>
     *
     * <code>optional int32 tab_node_id = 4 [default = -1];</code>
     * @return This builder for chaining.
     */
    public Builder clearTabNodeId() {
      copyOnWrite();
      instance.clearTabNodeId();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.SessionSpecifics)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.SessionSpecifics();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "sessionTag_",
            "header_",
            "tab_",
            "tabNodeId_",
          };
          java.lang.String info =
              "\u0001\u0004\u0000\u0001\u0001\u0004\u0004\u0000\u0000\u0000\u0001\u1008\u0000\u0002" +
              "\u1009\u0001\u0003\u1009\u0002\u0004\u1004\u0003";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.SessionSpecifics> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.SessionSpecifics.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.SessionSpecifics>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.SessionSpecifics)
  private static final org.chromium.components.sync.protocol.SessionSpecifics DEFAULT_INSTANCE;
  static {
    SessionSpecifics defaultInstance = new SessionSpecifics();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      SessionSpecifics.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.SessionSpecifics getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<SessionSpecifics> PARSER;

  public static com.google.protobuf.Parser<SessionSpecifics> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

