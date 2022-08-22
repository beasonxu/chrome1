// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_action_event.proto

package org.chromium.components.metrics;

public final class UserActionEventProtos {
  private UserActionEventProtos() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface UserActionEventProtoOrBuilder extends
      // @@protoc_insertion_point(interface_extends:metrics.UserActionEventProto)
      com.google.protobuf.MessageLiteOrBuilder {

    /**
     * <pre>
     * The name of the action, hashed.
     * </pre>
     *
     * <code>optional fixed64 name_hash = 1;</code>
     * @return Whether the nameHash field is set.
     */
    boolean hasNameHash();
    /**
     * <pre>
     * The name of the action, hashed.
     * </pre>
     *
     * <code>optional fixed64 name_hash = 1;</code>
     * @return The nameHash.
     */
    long getNameHash();

    /**
     * <pre>
     * The timestamp for the event, in seconds.
     * This value comes from Chromium's TimeTicks::Now(), which is an abstract
     * time value that is guaranteed to always be non-decreasing (regardless of
     * Daylight Saving Time or any other changes to the system clock).
     * These numbers are only comparable within a session.  To sequence events
     * across sessions, order by the |session_id| from the
     * ChromeUserMetricsExtension message.
     * </pre>
     *
     * <code>optional int64 time_sec = 2;</code>
     * @return Whether the timeSec field is set.
     */
    boolean hasTimeSec();
    /**
     * <pre>
     * The timestamp for the event, in seconds.
     * This value comes from Chromium's TimeTicks::Now(), which is an abstract
     * time value that is guaranteed to always be non-decreasing (regardless of
     * Daylight Saving Time or any other changes to the system clock).
     * These numbers are only comparable within a session.  To sequence events
     * across sessions, order by the |session_id| from the
     * ChromeUserMetricsExtension message.
     * </pre>
     *
     * <code>optional int64 time_sec = 2;</code>
     * @return The timeSec.
     */
    long getTimeSec();
  }
  /**
   * <pre>
   * Stores information about an event that occurs in response to a user action,
   * e.g. an interaction with a browser UI element.
   * Next tag: 3
   * </pre>
   *
   * Protobuf type {@code metrics.UserActionEventProto}
   */
  public  static final class UserActionEventProto extends
      com.google.protobuf.GeneratedMessageLite<
          UserActionEventProto, UserActionEventProto.Builder> implements
      // @@protoc_insertion_point(message_implements:metrics.UserActionEventProto)
      UserActionEventProtoOrBuilder {
    private UserActionEventProto() {
    }
    private int bitField0_;
    public static final int NAME_HASH_FIELD_NUMBER = 1;
    private long nameHash_;
    /**
     * <pre>
     * The name of the action, hashed.
     * </pre>
     *
     * <code>optional fixed64 name_hash = 1;</code>
     * @return Whether the nameHash field is set.
     */
    @java.lang.Override
    public boolean hasNameHash() {
      return ((bitField0_ & 0x00000001) != 0);
    }
    /**
     * <pre>
     * The name of the action, hashed.
     * </pre>
     *
     * <code>optional fixed64 name_hash = 1;</code>
     * @return The nameHash.
     */
    @java.lang.Override
    public long getNameHash() {
      return nameHash_;
    }
    /**
     * <pre>
     * The name of the action, hashed.
     * </pre>
     *
     * <code>optional fixed64 name_hash = 1;</code>
     * @param value The nameHash to set.
     */
    private void setNameHash(long value) {
      bitField0_ |= 0x00000001;
      nameHash_ = value;
    }
    /**
     * <pre>
     * The name of the action, hashed.
     * </pre>
     *
     * <code>optional fixed64 name_hash = 1;</code>
     */
    private void clearNameHash() {
      bitField0_ = (bitField0_ & ~0x00000001);
      nameHash_ = 0L;
    }

    public static final int TIME_SEC_FIELD_NUMBER = 2;
    private long timeSec_;
    /**
     * <pre>
     * The timestamp for the event, in seconds.
     * This value comes from Chromium's TimeTicks::Now(), which is an abstract
     * time value that is guaranteed to always be non-decreasing (regardless of
     * Daylight Saving Time or any other changes to the system clock).
     * These numbers are only comparable within a session.  To sequence events
     * across sessions, order by the |session_id| from the
     * ChromeUserMetricsExtension message.
     * </pre>
     *
     * <code>optional int64 time_sec = 2;</code>
     * @return Whether the timeSec field is set.
     */
    @java.lang.Override
    public boolean hasTimeSec() {
      return ((bitField0_ & 0x00000002) != 0);
    }
    /**
     * <pre>
     * The timestamp for the event, in seconds.
     * This value comes from Chromium's TimeTicks::Now(), which is an abstract
     * time value that is guaranteed to always be non-decreasing (regardless of
     * Daylight Saving Time or any other changes to the system clock).
     * These numbers are only comparable within a session.  To sequence events
     * across sessions, order by the |session_id| from the
     * ChromeUserMetricsExtension message.
     * </pre>
     *
     * <code>optional int64 time_sec = 2;</code>
     * @return The timeSec.
     */
    @java.lang.Override
    public long getTimeSec() {
      return timeSec_;
    }
    /**
     * <pre>
     * The timestamp for the event, in seconds.
     * This value comes from Chromium's TimeTicks::Now(), which is an abstract
     * time value that is guaranteed to always be non-decreasing (regardless of
     * Daylight Saving Time or any other changes to the system clock).
     * These numbers are only comparable within a session.  To sequence events
     * across sessions, order by the |session_id| from the
     * ChromeUserMetricsExtension message.
     * </pre>
     *
     * <code>optional int64 time_sec = 2;</code>
     * @param value The timeSec to set.
     */
    private void setTimeSec(long value) {
      bitField0_ |= 0x00000002;
      timeSec_ = value;
    }
    /**
     * <pre>
     * The timestamp for the event, in seconds.
     * This value comes from Chromium's TimeTicks::Now(), which is an abstract
     * time value that is guaranteed to always be non-decreasing (regardless of
     * Daylight Saving Time or any other changes to the system clock).
     * These numbers are only comparable within a session.  To sequence events
     * across sessions, order by the |session_id| from the
     * ChromeUserMetricsExtension message.
     * </pre>
     *
     * <code>optional int64 time_sec = 2;</code>
     */
    private void clearTimeSec() {
      bitField0_ = (bitField0_ & ~0x00000002);
      timeSec_ = 0L;
    }

    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }

    public static Builder newBuilder() {
      return (Builder) DEFAULT_INSTANCE.createBuilder();
    }
    public static Builder newBuilder(org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto prototype) {
      return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
    }

    /**
     * <pre>
     * Stores information about an event that occurs in response to a user action,
     * e.g. an interaction with a browser UI element.
     * Next tag: 3
     * </pre>
     *
     * Protobuf type {@code metrics.UserActionEventProto}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto, Builder> implements
        // @@protoc_insertion_point(builder_implements:metrics.UserActionEventProto)
        org.chromium.components.metrics.UserActionEventProtos.UserActionEventProtoOrBuilder {
      // Construct using org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto.newBuilder()
      private Builder() {
        super(DEFAULT_INSTANCE);
      }


      /**
       * <pre>
       * The name of the action, hashed.
       * </pre>
       *
       * <code>optional fixed64 name_hash = 1;</code>
       * @return Whether the nameHash field is set.
       */
      @java.lang.Override
      public boolean hasNameHash() {
        return instance.hasNameHash();
      }
      /**
       * <pre>
       * The name of the action, hashed.
       * </pre>
       *
       * <code>optional fixed64 name_hash = 1;</code>
       * @return The nameHash.
       */
      @java.lang.Override
      public long getNameHash() {
        return instance.getNameHash();
      }
      /**
       * <pre>
       * The name of the action, hashed.
       * </pre>
       *
       * <code>optional fixed64 name_hash = 1;</code>
       * @param value The nameHash to set.
       * @return This builder for chaining.
       */
      public Builder setNameHash(long value) {
        copyOnWrite();
        instance.setNameHash(value);
        return this;
      }
      /**
       * <pre>
       * The name of the action, hashed.
       * </pre>
       *
       * <code>optional fixed64 name_hash = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearNameHash() {
        copyOnWrite();
        instance.clearNameHash();
        return this;
      }

      /**
       * <pre>
       * The timestamp for the event, in seconds.
       * This value comes from Chromium's TimeTicks::Now(), which is an abstract
       * time value that is guaranteed to always be non-decreasing (regardless of
       * Daylight Saving Time or any other changes to the system clock).
       * These numbers are only comparable within a session.  To sequence events
       * across sessions, order by the |session_id| from the
       * ChromeUserMetricsExtension message.
       * </pre>
       *
       * <code>optional int64 time_sec = 2;</code>
       * @return Whether the timeSec field is set.
       */
      @java.lang.Override
      public boolean hasTimeSec() {
        return instance.hasTimeSec();
      }
      /**
       * <pre>
       * The timestamp for the event, in seconds.
       * This value comes from Chromium's TimeTicks::Now(), which is an abstract
       * time value that is guaranteed to always be non-decreasing (regardless of
       * Daylight Saving Time or any other changes to the system clock).
       * These numbers are only comparable within a session.  To sequence events
       * across sessions, order by the |session_id| from the
       * ChromeUserMetricsExtension message.
       * </pre>
       *
       * <code>optional int64 time_sec = 2;</code>
       * @return The timeSec.
       */
      @java.lang.Override
      public long getTimeSec() {
        return instance.getTimeSec();
      }
      /**
       * <pre>
       * The timestamp for the event, in seconds.
       * This value comes from Chromium's TimeTicks::Now(), which is an abstract
       * time value that is guaranteed to always be non-decreasing (regardless of
       * Daylight Saving Time or any other changes to the system clock).
       * These numbers are only comparable within a session.  To sequence events
       * across sessions, order by the |session_id| from the
       * ChromeUserMetricsExtension message.
       * </pre>
       *
       * <code>optional int64 time_sec = 2;</code>
       * @param value The timeSec to set.
       * @return This builder for chaining.
       */
      public Builder setTimeSec(long value) {
        copyOnWrite();
        instance.setTimeSec(value);
        return this;
      }
      /**
       * <pre>
       * The timestamp for the event, in seconds.
       * This value comes from Chromium's TimeTicks::Now(), which is an abstract
       * time value that is guaranteed to always be non-decreasing (regardless of
       * Daylight Saving Time or any other changes to the system clock).
       * These numbers are only comparable within a session.  To sequence events
       * across sessions, order by the |session_id| from the
       * ChromeUserMetricsExtension message.
       * </pre>
       *
       * <code>optional int64 time_sec = 2;</code>
       * @return This builder for chaining.
       */
      public Builder clearTimeSec() {
        copyOnWrite();
        instance.clearTimeSec();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:metrics.UserActionEventProto)
    }
    @java.lang.Override
    @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
    protected final java.lang.Object dynamicMethod(
        com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
        java.lang.Object arg0, java.lang.Object arg1) {
      switch (method) {
        case NEW_MUTABLE_INSTANCE: {
          return new org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto();
        }
        case NEW_BUILDER: {
          return new Builder();
        }
        case BUILD_MESSAGE_INFO: {
            java.lang.Object[] objects = new java.lang.Object[] {
              "bitField0_",
              "nameHash_",
              "timeSec_",
            };
            java.lang.String info =
                "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u1005\u0000\u0002" +
                "\u1002\u0001";
            return newMessageInfo(DEFAULT_INSTANCE, info, objects);
        }
        // fall through
        case GET_DEFAULT_INSTANCE: {
          return DEFAULT_INSTANCE;
        }
        case GET_PARSER: {
          com.google.protobuf.Parser<org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto> parser = PARSER;
          if (parser == null) {
            synchronized (org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto.class) {
              parser = PARSER;
              if (parser == null) {
                parser =
                    new DefaultInstanceBasedParser<org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto>(
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


    // @@protoc_insertion_point(class_scope:metrics.UserActionEventProto)
    private static final org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto DEFAULT_INSTANCE;
    static {
      UserActionEventProto defaultInstance = new UserActionEventProto();
      // New instances are implicitly immutable so no need to make
      // immutable.
      DEFAULT_INSTANCE = defaultInstance;
      com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
        UserActionEventProto.class, defaultInstance);
    }

    public static org.chromium.components.metrics.UserActionEventProtos.UserActionEventProto getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static volatile com.google.protobuf.Parser<UserActionEventProto> PARSER;

    public static com.google.protobuf.Parser<UserActionEventProto> parser() {
      return DEFAULT_INSTANCE.getParserForType();
    }
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
