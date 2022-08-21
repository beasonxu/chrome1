// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * Protobuf type {@code autofill_assistant.UserFormSectionProto}
 */
public  final class UserFormSectionProto extends
    com.google.protobuf.GeneratedMessageLite<
        UserFormSectionProto, UserFormSectionProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.UserFormSectionProto)
    UserFormSectionProtoOrBuilder {
  private UserFormSectionProto() {
    title_ = "";
  }
  private int bitField0_;
  private int sectionCase_ = 0;
  private java.lang.Object section_;
  public enum SectionCase {
    STATIC_TEXT_SECTION(2),
    TEXT_INPUT_SECTION(3),
    POPUP_LIST_SECTION(4),
    SECTION_NOT_SET(0);
    private final int value;
    private SectionCase(int value) {
      this.value = value;
    }
    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static SectionCase valueOf(int value) {
      return forNumber(value);
    }

    public static SectionCase forNumber(int value) {
      switch (value) {
        case 2: return STATIC_TEXT_SECTION;
        case 3: return TEXT_INPUT_SECTION;
        case 4: return POPUP_LIST_SECTION;
        case 0: return SECTION_NOT_SET;
        default: return null;
      }
    }
    public int getNumber() {
      return this.value;
    }
  };

  @java.lang.Override
  public SectionCase
  getSectionCase() {
    return SectionCase.forNumber(
        sectionCase_);
  }

  private void clearSection() {
    sectionCase_ = 0;
    section_ = null;
  }

  public static final int TITLE_FIELD_NUMBER = 1;
  private java.lang.String title_;
  /**
   * <code>optional string title = 1;</code>
   * @return Whether the title field is set.
   */
  @java.lang.Override
  public boolean hasTitle() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <code>optional string title = 1;</code>
   * @return The title.
   */
  @java.lang.Override
  public java.lang.String getTitle() {
    return title_;
  }
  /**
   * <code>optional string title = 1;</code>
   * @return The bytes for title.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getTitleBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(title_);
  }
  /**
   * <code>optional string title = 1;</code>
   * @param value The title to set.
   */
  private void setTitle(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    title_ = value;
  }
  /**
   * <code>optional string title = 1;</code>
   */
  private void clearTitle() {
    bitField0_ = (bitField0_ & ~0x00000001);
    title_ = getDefaultInstance().getTitle();
  }
  /**
   * <code>optional string title = 1;</code>
   * @param value The bytes for title to set.
   */
  private void setTitleBytes(
      com.google.protobuf.ByteString value) {
    title_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int STATIC_TEXT_SECTION_FIELD_NUMBER = 2;
  /**
   * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
   */
  @java.lang.Override
  public boolean hasStaticTextSection() {
    return sectionCase_ == 2;
  }
  /**
   * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto getStaticTextSection() {
    if (sectionCase_ == 2) {
       return (org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto) section_;
    }
    return org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto.getDefaultInstance();
  }
  /**
   * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
   */
  private void setStaticTextSection(org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto value) {
    value.getClass();
  section_ = value;
    sectionCase_ = 2;
  }
  /**
   * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
   */
  private void mergeStaticTextSection(org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto value) {
    value.getClass();
  if (sectionCase_ == 2 &&
        section_ != org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto.getDefaultInstance()) {
      section_ = org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto.newBuilder((org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto) section_)
          .mergeFrom(value).buildPartial();
    } else {
      section_ = value;
    }
    sectionCase_ = 2;
  }
  /**
   * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
   */
  private void clearStaticTextSection() {
    if (sectionCase_ == 2) {
      sectionCase_ = 0;
      section_ = null;
    }
  }

  public static final int TEXT_INPUT_SECTION_FIELD_NUMBER = 3;
  /**
   * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
   */
  @java.lang.Override
  public boolean hasTextInputSection() {
    return sectionCase_ == 3;
  }
  /**
   * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto getTextInputSection() {
    if (sectionCase_ == 3) {
       return (org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto) section_;
    }
    return org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto.getDefaultInstance();
  }
  /**
   * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
   */
  private void setTextInputSection(org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto value) {
    value.getClass();
  section_ = value;
    sectionCase_ = 3;
  }
  /**
   * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
   */
  private void mergeTextInputSection(org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto value) {
    value.getClass();
  if (sectionCase_ == 3 &&
        section_ != org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto.getDefaultInstance()) {
      section_ = org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto.newBuilder((org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto) section_)
          .mergeFrom(value).buildPartial();
    } else {
      section_ = value;
    }
    sectionCase_ = 3;
  }
  /**
   * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
   */
  private void clearTextInputSection() {
    if (sectionCase_ == 3) {
      sectionCase_ = 0;
      section_ = null;
    }
  }

  public static final int POPUP_LIST_SECTION_FIELD_NUMBER = 4;
  /**
   * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
   */
  @java.lang.Override
  public boolean hasPopupListSection() {
    return sectionCase_ == 4;
  }
  /**
   * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto getPopupListSection() {
    if (sectionCase_ == 4) {
       return (org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto) section_;
    }
    return org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto.getDefaultInstance();
  }
  /**
   * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
   */
  private void setPopupListSection(org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto value) {
    value.getClass();
  section_ = value;
    sectionCase_ = 4;
  }
  /**
   * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
   */
  private void mergePopupListSection(org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto value) {
    value.getClass();
  if (sectionCase_ == 4 &&
        section_ != org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto.getDefaultInstance()) {
      section_ = org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto.newBuilder((org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto) section_)
          .mergeFrom(value).buildPartial();
    } else {
      section_ = value;
    }
    sectionCase_ = 4;
  }
  /**
   * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
   */
  private void clearPopupListSection() {
    if (sectionCase_ == 4) {
      sectionCase_ = 0;
      section_ = null;
    }
  }

  public static final int SEND_RESULT_TO_BACKEND_FIELD_NUMBER = 5;
  private boolean sendResultToBackend_;
  /**
   * <pre>
   * Whether to send the result values to the backend.
   * </pre>
   *
   * <code>optional bool send_result_to_backend = 5;</code>
   * @return Whether the sendResultToBackend field is set.
   */
  @java.lang.Override
  public boolean hasSendResultToBackend() {
    return ((bitField0_ & 0x00000010) != 0);
  }
  /**
   * <pre>
   * Whether to send the result values to the backend.
   * </pre>
   *
   * <code>optional bool send_result_to_backend = 5;</code>
   * @return The sendResultToBackend.
   */
  @java.lang.Override
  public boolean getSendResultToBackend() {
    return sendResultToBackend_;
  }
  /**
   * <pre>
   * Whether to send the result values to the backend.
   * </pre>
   *
   * <code>optional bool send_result_to_backend = 5;</code>
   * @param value The sendResultToBackend to set.
   */
  private void setSendResultToBackend(boolean value) {
    bitField0_ |= 0x00000010;
    sendResultToBackend_ = value;
  }
  /**
   * <pre>
   * Whether to send the result values to the backend.
   * </pre>
   *
   * <code>optional bool send_result_to_backend = 5;</code>
   */
  private void clearSendResultToBackend() {
    bitField0_ = (bitField0_ & ~0x00000010);
    sendResultToBackend_ = false;
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code autofill_assistant.UserFormSectionProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.UserFormSectionProto)
      org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }

    @java.lang.Override
    public SectionCase
        getSectionCase() {
      return instance.getSectionCase();
    }

    public Builder clearSection() {
      copyOnWrite();
      instance.clearSection();
      return this;
    }


    /**
     * <code>optional string title = 1;</code>
     * @return Whether the title field is set.
     */
    @java.lang.Override
    public boolean hasTitle() {
      return instance.hasTitle();
    }
    /**
     * <code>optional string title = 1;</code>
     * @return The title.
     */
    @java.lang.Override
    public java.lang.String getTitle() {
      return instance.getTitle();
    }
    /**
     * <code>optional string title = 1;</code>
     * @return The bytes for title.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getTitleBytes() {
      return instance.getTitleBytes();
    }
    /**
     * <code>optional string title = 1;</code>
     * @param value The title to set.
     * @return This builder for chaining.
     */
    public Builder setTitle(
        java.lang.String value) {
      copyOnWrite();
      instance.setTitle(value);
      return this;
    }
    /**
     * <code>optional string title = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearTitle() {
      copyOnWrite();
      instance.clearTitle();
      return this;
    }
    /**
     * <code>optional string title = 1;</code>
     * @param value The bytes for title to set.
     * @return This builder for chaining.
     */
    public Builder setTitleBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setTitleBytes(value);
      return this;
    }

    /**
     * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
     */
    @java.lang.Override
    public boolean hasStaticTextSection() {
      return instance.hasStaticTextSection();
    }
    /**
     * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto getStaticTextSection() {
      return instance.getStaticTextSection();
    }
    /**
     * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
     */
    public Builder setStaticTextSection(org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto value) {
      copyOnWrite();
      instance.setStaticTextSection(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
     */
    public Builder setStaticTextSection(
        org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto.Builder builderForValue) {
      copyOnWrite();
      instance.setStaticTextSection(builderForValue.build());
      return this;
    }
    /**
     * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
     */
    public Builder mergeStaticTextSection(org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto value) {
      copyOnWrite();
      instance.mergeStaticTextSection(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.StaticTextSectionProto static_text_section = 2;</code>
     */
    public Builder clearStaticTextSection() {
      copyOnWrite();
      instance.clearStaticTextSection();
      return this;
    }

    /**
     * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
     */
    @java.lang.Override
    public boolean hasTextInputSection() {
      return instance.hasTextInputSection();
    }
    /**
     * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto getTextInputSection() {
      return instance.getTextInputSection();
    }
    /**
     * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
     */
    public Builder setTextInputSection(org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto value) {
      copyOnWrite();
      instance.setTextInputSection(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
     */
    public Builder setTextInputSection(
        org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto.Builder builderForValue) {
      copyOnWrite();
      instance.setTextInputSection(builderForValue.build());
      return this;
    }
    /**
     * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
     */
    public Builder mergeTextInputSection(org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto value) {
      copyOnWrite();
      instance.mergeTextInputSection(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.TextInputSectionProto text_input_section = 3;</code>
     */
    public Builder clearTextInputSection() {
      copyOnWrite();
      instance.clearTextInputSection();
      return this;
    }

    /**
     * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
     */
    @java.lang.Override
    public boolean hasPopupListSection() {
      return instance.hasPopupListSection();
    }
    /**
     * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto getPopupListSection() {
      return instance.getPopupListSection();
    }
    /**
     * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
     */
    public Builder setPopupListSection(org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto value) {
      copyOnWrite();
      instance.setPopupListSection(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
     */
    public Builder setPopupListSection(
        org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto.Builder builderForValue) {
      copyOnWrite();
      instance.setPopupListSection(builderForValue.build());
      return this;
    }
    /**
     * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
     */
    public Builder mergePopupListSection(org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto value) {
      copyOnWrite();
      instance.mergePopupListSection(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.PopupListSectionProto popup_list_section = 4;</code>
     */
    public Builder clearPopupListSection() {
      copyOnWrite();
      instance.clearPopupListSection();
      return this;
    }

    /**
     * <pre>
     * Whether to send the result values to the backend.
     * </pre>
     *
     * <code>optional bool send_result_to_backend = 5;</code>
     * @return Whether the sendResultToBackend field is set.
     */
    @java.lang.Override
    public boolean hasSendResultToBackend() {
      return instance.hasSendResultToBackend();
    }
    /**
     * <pre>
     * Whether to send the result values to the backend.
     * </pre>
     *
     * <code>optional bool send_result_to_backend = 5;</code>
     * @return The sendResultToBackend.
     */
    @java.lang.Override
    public boolean getSendResultToBackend() {
      return instance.getSendResultToBackend();
    }
    /**
     * <pre>
     * Whether to send the result values to the backend.
     * </pre>
     *
     * <code>optional bool send_result_to_backend = 5;</code>
     * @param value The sendResultToBackend to set.
     * @return This builder for chaining.
     */
    public Builder setSendResultToBackend(boolean value) {
      copyOnWrite();
      instance.setSendResultToBackend(value);
      return this;
    }
    /**
     * <pre>
     * Whether to send the result values to the backend.
     * </pre>
     *
     * <code>optional bool send_result_to_backend = 5;</code>
     * @return This builder for chaining.
     */
    public Builder clearSendResultToBackend() {
      copyOnWrite();
      instance.clearSendResultToBackend();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.UserFormSectionProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "section_",
            "sectionCase_",
            "bitField0_",
            "title_",
            org.chromium.chrome.browser.autofill_assistant.proto.StaticTextSectionProto.class,
            org.chromium.chrome.browser.autofill_assistant.proto.TextInputSectionProto.class,
            org.chromium.chrome.browser.autofill_assistant.proto.PopupListSectionProto.class,
            "sendResultToBackend_",
          };
          java.lang.String info =
              "\u0001\u0005\u0001\u0001\u0001\u0005\u0005\u0000\u0000\u0000\u0001\u1008\u0000\u0002" +
              "\u103c\u0000\u0003\u103c\u0000\u0004\u103c\u0000\u0005\u1007\u0004";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.UserFormSectionProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto DEFAULT_INSTANCE;
  static {
    UserFormSectionProto defaultInstance = new UserFormSectionProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      UserFormSectionProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.UserFormSectionProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<UserFormSectionProto> PARSER;

  public static com.google.protobuf.Parser<UserFormSectionProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

