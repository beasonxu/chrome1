// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/generic_ui.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * <pre>
 * Creates new UI and interactions, i.e., a nested instance and attaches it to
 * |parent_view_identifier|. Nested UI instances have their own view layout and
 * interactions, but share the same model with their parent. All interactions
 * between ancestor and descendant UIs must pass through the user model, as
 * neither can directly reference views or interactions of the other.
 * Use |ClearViewContainerProto| on a nested UI's view parent to detach and
 * destroy the nested UI.
 * </pre>
 *
 * Protobuf type {@code autofill_assistant.CreateNestedGenericUiProto}
 */
public  final class CreateNestedGenericUiProto extends
    com.google.protobuf.GeneratedMessageLite<
        CreateNestedGenericUiProto, CreateNestedGenericUiProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.CreateNestedGenericUiProto)
    CreateNestedGenericUiProtoOrBuilder {
  private CreateNestedGenericUiProto() {
    genericUiIdentifier_ = "";
    parentViewIdentifier_ = "";
  }
  private int bitField0_;
  public static final int GENERIC_UI_IDENTIFIER_FIELD_NUMBER = 1;
  private java.lang.String genericUiIdentifier_;
  /**
   * <pre>
   * Identifier for the newly created instance.
   * </pre>
   *
   * <code>optional string generic_ui_identifier = 1;</code>
   * @return Whether the genericUiIdentifier field is set.
   */
  @java.lang.Override
  public boolean hasGenericUiIdentifier() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Identifier for the newly created instance.
   * </pre>
   *
   * <code>optional string generic_ui_identifier = 1;</code>
   * @return The genericUiIdentifier.
   */
  @java.lang.Override
  public java.lang.String getGenericUiIdentifier() {
    return genericUiIdentifier_;
  }
  /**
   * <pre>
   * Identifier for the newly created instance.
   * </pre>
   *
   * <code>optional string generic_ui_identifier = 1;</code>
   * @return The bytes for genericUiIdentifier.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getGenericUiIdentifierBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(genericUiIdentifier_);
  }
  /**
   * <pre>
   * Identifier for the newly created instance.
   * </pre>
   *
   * <code>optional string generic_ui_identifier = 1;</code>
   * @param value The genericUiIdentifier to set.
   */
  private void setGenericUiIdentifier(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    genericUiIdentifier_ = value;
  }
  /**
   * <pre>
   * Identifier for the newly created instance.
   * </pre>
   *
   * <code>optional string generic_ui_identifier = 1;</code>
   */
  private void clearGenericUiIdentifier() {
    bitField0_ = (bitField0_ & ~0x00000001);
    genericUiIdentifier_ = getDefaultInstance().getGenericUiIdentifier();
  }
  /**
   * <pre>
   * Identifier for the newly created instance.
   * </pre>
   *
   * <code>optional string generic_ui_identifier = 1;</code>
   * @param value The bytes for genericUiIdentifier to set.
   */
  private void setGenericUiIdentifierBytes(
      com.google.protobuf.ByteString value) {
    genericUiIdentifier_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int GENERIC_UI_FIELD_NUMBER = 2;
  private org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto genericUi_;
  /**
   * <pre>
   * The UI to create.
   * </pre>
   *
   * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
   */
  @java.lang.Override
  public boolean hasGenericUi() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * The UI to create.
   * </pre>
   *
   * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto getGenericUi() {
    return genericUi_ == null ? org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto.getDefaultInstance() : genericUi_;
  }
  /**
   * <pre>
   * The UI to create.
   * </pre>
   *
   * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
   */
  private void setGenericUi(org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto value) {
    value.getClass();
  genericUi_ = value;
    bitField0_ |= 0x00000002;
    }
  /**
   * <pre>
   * The UI to create.
   * </pre>
   *
   * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
   */
  @java.lang.SuppressWarnings({"ReferenceEquality"})
  private void mergeGenericUi(org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto value) {
    value.getClass();
  if (genericUi_ != null &&
        genericUi_ != org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto.getDefaultInstance()) {
      genericUi_ =
        org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto.newBuilder(genericUi_).mergeFrom(value).buildPartial();
    } else {
      genericUi_ = value;
    }
    bitField0_ |= 0x00000002;
  }
  /**
   * <pre>
   * The UI to create.
   * </pre>
   *
   * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
   */
  private void clearGenericUi() {  genericUi_ = null;
    bitField0_ = (bitField0_ & ~0x00000002);
  }

  public static final int PARENT_VIEW_IDENTIFIER_FIELD_NUMBER = 3;
  private java.lang.String parentViewIdentifier_;
  /**
   * <pre>
   * The view identifier of the parent to attach (=append) this UI to.
   * </pre>
   *
   * <code>optional string parent_view_identifier = 3;</code>
   * @return Whether the parentViewIdentifier field is set.
   */
  @java.lang.Override
  public boolean hasParentViewIdentifier() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <pre>
   * The view identifier of the parent to attach (=append) this UI to.
   * </pre>
   *
   * <code>optional string parent_view_identifier = 3;</code>
   * @return The parentViewIdentifier.
   */
  @java.lang.Override
  public java.lang.String getParentViewIdentifier() {
    return parentViewIdentifier_;
  }
  /**
   * <pre>
   * The view identifier of the parent to attach (=append) this UI to.
   * </pre>
   *
   * <code>optional string parent_view_identifier = 3;</code>
   * @return The bytes for parentViewIdentifier.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getParentViewIdentifierBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(parentViewIdentifier_);
  }
  /**
   * <pre>
   * The view identifier of the parent to attach (=append) this UI to.
   * </pre>
   *
   * <code>optional string parent_view_identifier = 3;</code>
   * @param value The parentViewIdentifier to set.
   */
  private void setParentViewIdentifier(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000004;
    parentViewIdentifier_ = value;
  }
  /**
   * <pre>
   * The view identifier of the parent to attach (=append) this UI to.
   * </pre>
   *
   * <code>optional string parent_view_identifier = 3;</code>
   */
  private void clearParentViewIdentifier() {
    bitField0_ = (bitField0_ & ~0x00000004);
    parentViewIdentifier_ = getDefaultInstance().getParentViewIdentifier();
  }
  /**
   * <pre>
   * The view identifier of the parent to attach (=append) this UI to.
   * </pre>
   *
   * <code>optional string parent_view_identifier = 3;</code>
   * @param value The bytes for parentViewIdentifier to set.
   */
  private void setParentViewIdentifierBytes(
      com.google.protobuf.ByteString value) {
    parentViewIdentifier_ = value.toStringUtf8();
    bitField0_ |= 0x00000004;
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Creates new UI and interactions, i.e., a nested instance and attaches it to
   * |parent_view_identifier|. Nested UI instances have their own view layout and
   * interactions, but share the same model with their parent. All interactions
   * between ancestor and descendant UIs must pass through the user model, as
   * neither can directly reference views or interactions of the other.
   * Use |ClearViewContainerProto| on a nested UI's view parent to detach and
   * destroy the nested UI.
   * </pre>
   *
   * Protobuf type {@code autofill_assistant.CreateNestedGenericUiProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.CreateNestedGenericUiProto)
      org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Identifier for the newly created instance.
     * </pre>
     *
     * <code>optional string generic_ui_identifier = 1;</code>
     * @return Whether the genericUiIdentifier field is set.
     */
    @java.lang.Override
    public boolean hasGenericUiIdentifier() {
      return instance.hasGenericUiIdentifier();
    }
    /**
     * <pre>
     * Identifier for the newly created instance.
     * </pre>
     *
     * <code>optional string generic_ui_identifier = 1;</code>
     * @return The genericUiIdentifier.
     */
    @java.lang.Override
    public java.lang.String getGenericUiIdentifier() {
      return instance.getGenericUiIdentifier();
    }
    /**
     * <pre>
     * Identifier for the newly created instance.
     * </pre>
     *
     * <code>optional string generic_ui_identifier = 1;</code>
     * @return The bytes for genericUiIdentifier.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getGenericUiIdentifierBytes() {
      return instance.getGenericUiIdentifierBytes();
    }
    /**
     * <pre>
     * Identifier for the newly created instance.
     * </pre>
     *
     * <code>optional string generic_ui_identifier = 1;</code>
     * @param value The genericUiIdentifier to set.
     * @return This builder for chaining.
     */
    public Builder setGenericUiIdentifier(
        java.lang.String value) {
      copyOnWrite();
      instance.setGenericUiIdentifier(value);
      return this;
    }
    /**
     * <pre>
     * Identifier for the newly created instance.
     * </pre>
     *
     * <code>optional string generic_ui_identifier = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearGenericUiIdentifier() {
      copyOnWrite();
      instance.clearGenericUiIdentifier();
      return this;
    }
    /**
     * <pre>
     * Identifier for the newly created instance.
     * </pre>
     *
     * <code>optional string generic_ui_identifier = 1;</code>
     * @param value The bytes for genericUiIdentifier to set.
     * @return This builder for chaining.
     */
    public Builder setGenericUiIdentifierBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setGenericUiIdentifierBytes(value);
      return this;
    }

    /**
     * <pre>
     * The UI to create.
     * </pre>
     *
     * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
     */
    @java.lang.Override
    public boolean hasGenericUi() {
      return instance.hasGenericUi();
    }
    /**
     * <pre>
     * The UI to create.
     * </pre>
     *
     * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto getGenericUi() {
      return instance.getGenericUi();
    }
    /**
     * <pre>
     * The UI to create.
     * </pre>
     *
     * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
     */
    public Builder setGenericUi(org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto value) {
      copyOnWrite();
      instance.setGenericUi(value);
      return this;
      }
    /**
     * <pre>
     * The UI to create.
     * </pre>
     *
     * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
     */
    public Builder setGenericUi(
        org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto.Builder builderForValue) {
      copyOnWrite();
      instance.setGenericUi(builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * The UI to create.
     * </pre>
     *
     * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
     */
    public Builder mergeGenericUi(org.chromium.chrome.browser.autofill_assistant.proto.GenericUserInterfaceProto value) {
      copyOnWrite();
      instance.mergeGenericUi(value);
      return this;
    }
    /**
     * <pre>
     * The UI to create.
     * </pre>
     *
     * <code>optional .autofill_assistant.GenericUserInterfaceProto generic_ui = 2;</code>
     */
    public Builder clearGenericUi() {  copyOnWrite();
      instance.clearGenericUi();
      return this;
    }

    /**
     * <pre>
     * The view identifier of the parent to attach (=append) this UI to.
     * </pre>
     *
     * <code>optional string parent_view_identifier = 3;</code>
     * @return Whether the parentViewIdentifier field is set.
     */
    @java.lang.Override
    public boolean hasParentViewIdentifier() {
      return instance.hasParentViewIdentifier();
    }
    /**
     * <pre>
     * The view identifier of the parent to attach (=append) this UI to.
     * </pre>
     *
     * <code>optional string parent_view_identifier = 3;</code>
     * @return The parentViewIdentifier.
     */
    @java.lang.Override
    public java.lang.String getParentViewIdentifier() {
      return instance.getParentViewIdentifier();
    }
    /**
     * <pre>
     * The view identifier of the parent to attach (=append) this UI to.
     * </pre>
     *
     * <code>optional string parent_view_identifier = 3;</code>
     * @return The bytes for parentViewIdentifier.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getParentViewIdentifierBytes() {
      return instance.getParentViewIdentifierBytes();
    }
    /**
     * <pre>
     * The view identifier of the parent to attach (=append) this UI to.
     * </pre>
     *
     * <code>optional string parent_view_identifier = 3;</code>
     * @param value The parentViewIdentifier to set.
     * @return This builder for chaining.
     */
    public Builder setParentViewIdentifier(
        java.lang.String value) {
      copyOnWrite();
      instance.setParentViewIdentifier(value);
      return this;
    }
    /**
     * <pre>
     * The view identifier of the parent to attach (=append) this UI to.
     * </pre>
     *
     * <code>optional string parent_view_identifier = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearParentViewIdentifier() {
      copyOnWrite();
      instance.clearParentViewIdentifier();
      return this;
    }
    /**
     * <pre>
     * The view identifier of the parent to attach (=append) this UI to.
     * </pre>
     *
     * <code>optional string parent_view_identifier = 3;</code>
     * @param value The bytes for parentViewIdentifier to set.
     * @return This builder for chaining.
     */
    public Builder setParentViewIdentifierBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setParentViewIdentifierBytes(value);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.CreateNestedGenericUiProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "genericUiIdentifier_",
            "genericUi_",
            "parentViewIdentifier_",
          };
          java.lang.String info =
              "\u0001\u0003\u0000\u0001\u0001\u0003\u0003\u0000\u0000\u0000\u0001\u1008\u0000\u0002" +
              "\u1009\u0001\u0003\u1008\u0002";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.CreateNestedGenericUiProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto DEFAULT_INSTANCE;
  static {
    CreateNestedGenericUiProto defaultInstance = new CreateNestedGenericUiProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      CreateNestedGenericUiProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.CreateNestedGenericUiProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<CreateNestedGenericUiProto> PARSER;

  public static com.google.protobuf.Parser<CreateNestedGenericUiProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

