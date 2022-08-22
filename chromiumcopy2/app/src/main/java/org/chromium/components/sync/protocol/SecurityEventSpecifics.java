// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/security_event_specifics.proto

package org.chromium.components.sync.protocol;

/**
 * Protobuf type {@code sync_pb.SecurityEventSpecifics}
 */
public  final class SecurityEventSpecifics extends
    com.google.protobuf.GeneratedMessageLite<
        SecurityEventSpecifics, SecurityEventSpecifics.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.SecurityEventSpecifics)
    SecurityEventSpecificsOrBuilder {
  private SecurityEventSpecifics() {
  }
  private int bitField0_;
  private int eventCase_ = 0;
  private java.lang.Object event_;
  public enum EventCase {
    GAIA_PASSWORD_REUSE_EVENT(1),
    EVENT_NOT_SET(0);
    private final int value;
    private EventCase(int value) {
      this.value = value;
    }
    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static EventCase valueOf(int value) {
      return forNumber(value);
    }

    public static EventCase forNumber(int value) {
      switch (value) {
        case 1: return GAIA_PASSWORD_REUSE_EVENT;
        case 0: return EVENT_NOT_SET;
        default: return null;
      }
    }
    public int getNumber() {
      return this.value;
    }
  };

  @java.lang.Override
  public EventCase
  getEventCase() {
    return EventCase.forNumber(
        eventCase_);
  }

  private void clearEvent() {
    eventCase_ = 0;
    event_ = null;
  }

  public static final int GAIA_PASSWORD_REUSE_EVENT_FIELD_NUMBER = 1;
  /**
   * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
   */
  @java.lang.Override
  public boolean hasGaiaPasswordReuseEvent() {
    return eventCase_ == 1;
  }
  /**
   * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
   */
  @java.lang.Override
  public org.chromium.components.sync.protocol.GaiaPasswordReuse getGaiaPasswordReuseEvent() {
    if (eventCase_ == 1) {
       return (org.chromium.components.sync.protocol.GaiaPasswordReuse) event_;
    }
    return org.chromium.components.sync.protocol.GaiaPasswordReuse.getDefaultInstance();
  }
  /**
   * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
   */
  private void setGaiaPasswordReuseEvent(org.chromium.components.sync.protocol.GaiaPasswordReuse value) {
    value.getClass();
  event_ = value;
    eventCase_ = 1;
  }
  /**
   * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
   */
  private void mergeGaiaPasswordReuseEvent(org.chromium.components.sync.protocol.GaiaPasswordReuse value) {
    value.getClass();
  if (eventCase_ == 1 &&
        event_ != org.chromium.components.sync.protocol.GaiaPasswordReuse.getDefaultInstance()) {
      event_ = org.chromium.components.sync.protocol.GaiaPasswordReuse.newBuilder((org.chromium.components.sync.protocol.GaiaPasswordReuse) event_)
          .mergeFrom(value).buildPartial();
    } else {
      event_ = value;
    }
    eventCase_ = 1;
  }
  /**
   * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
   */
  private void clearGaiaPasswordReuseEvent() {
    if (eventCase_ == 1) {
      eventCase_ = 0;
      event_ = null;
    }
  }

  public static final int EVENT_TIME_USEC_FIELD_NUMBER = 2;
  private long eventTimeUsec_;
  /**
   * <pre>
   * Time of event, as measured by client in microseconds since Windows epoch.
   * </pre>
   *
   * <code>optional int64 event_time_usec = 2;</code>
   * @return Whether the eventTimeUsec field is set.
   */
  @java.lang.Override
  public boolean hasEventTimeUsec() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * Time of event, as measured by client in microseconds since Windows epoch.
   * </pre>
   *
   * <code>optional int64 event_time_usec = 2;</code>
   * @return The eventTimeUsec.
   */
  @java.lang.Override
  public long getEventTimeUsec() {
    return eventTimeUsec_;
  }
  /**
   * <pre>
   * Time of event, as measured by client in microseconds since Windows epoch.
   * </pre>
   *
   * <code>optional int64 event_time_usec = 2;</code>
   * @param value The eventTimeUsec to set.
   */
  private void setEventTimeUsec(long value) {
    bitField0_ |= 0x00000002;
    eventTimeUsec_ = value;
  }
  /**
   * <pre>
   * Time of event, as measured by client in microseconds since Windows epoch.
   * </pre>
   *
   * <code>optional int64 event_time_usec = 2;</code>
   */
  private void clearEventTimeUsec() {
    bitField0_ = (bitField0_ & ~0x00000002);
    eventTimeUsec_ = 0L;
  }

  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.SecurityEventSpecifics parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.SecurityEventSpecifics prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code sync_pb.SecurityEventSpecifics}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.SecurityEventSpecifics, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.SecurityEventSpecifics)
      org.chromium.components.sync.protocol.SecurityEventSpecificsOrBuilder {
    // Construct using org.chromium.components.sync.protocol.SecurityEventSpecifics.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }

    @java.lang.Override
    public EventCase
        getEventCase() {
      return instance.getEventCase();
    }

    public Builder clearEvent() {
      copyOnWrite();
      instance.clearEvent();
      return this;
    }


    /**
     * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
     */
    @java.lang.Override
    public boolean hasGaiaPasswordReuseEvent() {
      return instance.hasGaiaPasswordReuseEvent();
    }
    /**
     * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
     */
    @java.lang.Override
    public org.chromium.components.sync.protocol.GaiaPasswordReuse getGaiaPasswordReuseEvent() {
      return instance.getGaiaPasswordReuseEvent();
    }
    /**
     * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
     */
    public Builder setGaiaPasswordReuseEvent(org.chromium.components.sync.protocol.GaiaPasswordReuse value) {
      copyOnWrite();
      instance.setGaiaPasswordReuseEvent(value);
      return this;
    }
    /**
     * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
     */
    public Builder setGaiaPasswordReuseEvent(
        org.chromium.components.sync.protocol.GaiaPasswordReuse.Builder builderForValue) {
      copyOnWrite();
      instance.setGaiaPasswordReuseEvent(builderForValue.build());
      return this;
    }
    /**
     * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
     */
    public Builder mergeGaiaPasswordReuseEvent(org.chromium.components.sync.protocol.GaiaPasswordReuse value) {
      copyOnWrite();
      instance.mergeGaiaPasswordReuseEvent(value);
      return this;
    }
    /**
     * <code>.sync_pb.GaiaPasswordReuse gaia_password_reuse_event = 1;</code>
     */
    public Builder clearGaiaPasswordReuseEvent() {
      copyOnWrite();
      instance.clearGaiaPasswordReuseEvent();
      return this;
    }

    /**
     * <pre>
     * Time of event, as measured by client in microseconds since Windows epoch.
     * </pre>
     *
     * <code>optional int64 event_time_usec = 2;</code>
     * @return Whether the eventTimeUsec field is set.
     */
    @java.lang.Override
    public boolean hasEventTimeUsec() {
      return instance.hasEventTimeUsec();
    }
    /**
     * <pre>
     * Time of event, as measured by client in microseconds since Windows epoch.
     * </pre>
     *
     * <code>optional int64 event_time_usec = 2;</code>
     * @return The eventTimeUsec.
     */
    @java.lang.Override
    public long getEventTimeUsec() {
      return instance.getEventTimeUsec();
    }
    /**
     * <pre>
     * Time of event, as measured by client in microseconds since Windows epoch.
     * </pre>
     *
     * <code>optional int64 event_time_usec = 2;</code>
     * @param value The eventTimeUsec to set.
     * @return This builder for chaining.
     */
    public Builder setEventTimeUsec(long value) {
      copyOnWrite();
      instance.setEventTimeUsec(value);
      return this;
    }
    /**
     * <pre>
     * Time of event, as measured by client in microseconds since Windows epoch.
     * </pre>
     *
     * <code>optional int64 event_time_usec = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearEventTimeUsec() {
      copyOnWrite();
      instance.clearEventTimeUsec();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.SecurityEventSpecifics)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.SecurityEventSpecifics();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "event_",
            "eventCase_",
            "bitField0_",
            org.chromium.components.sync.protocol.GaiaPasswordReuse.class,
            "eventTimeUsec_",
          };
          java.lang.String info =
              "\u0001\u0002\u0001\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u103c\u0000\u0002" +
              "\u1002\u0001";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.SecurityEventSpecifics> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.SecurityEventSpecifics.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.SecurityEventSpecifics>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.SecurityEventSpecifics)
  private static final org.chromium.components.sync.protocol.SecurityEventSpecifics DEFAULT_INSTANCE;
  static {
    SecurityEventSpecifics defaultInstance = new SecurityEventSpecifics();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      SecurityEventSpecifics.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.SecurityEventSpecifics getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<SecurityEventSpecifics> PARSER;

  public static com.google.protobuf.Parser<SecurityEventSpecifics> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

