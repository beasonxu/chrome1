// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * Protobuf type {@code autofill_assistant.InfoBoxProto}
 */
public  final class InfoBoxProto extends
    com.google.protobuf.GeneratedMessageLite<
        InfoBoxProto, InfoBoxProto.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.InfoBoxProto)
    InfoBoxProtoOrBuilder {
  private InfoBoxProto() {
    explanation_ = "";
  }
  private int bitField0_;
  private int imageCase_ = 0;
  private java.lang.Object image_;
  public enum ImageCase {
    IMAGE_PATH(1),
    DRAWABLE(4),
    IMAGE_NOT_SET(0);
    private final int value;
    private ImageCase(int value) {
      this.value = value;
    }
    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static ImageCase valueOf(int value) {
      return forNumber(value);
    }

    public static ImageCase forNumber(int value) {
      switch (value) {
        case 1: return IMAGE_PATH;
        case 4: return DRAWABLE;
        case 0: return IMAGE_NOT_SET;
        default: return null;
      }
    }
    public int getNumber() {
      return this.value;
    }
  };

  @java.lang.Override
  public ImageCase
  getImageCase() {
    return ImageCase.forNumber(
        imageCase_);
  }

  private void clearImage() {
    imageCase_ = 0;
    image_ = null;
  }

  public static final int IMAGE_PATH_FIELD_NUMBER = 1;
  /**
   * <pre>
   * Optional path to an image.
   * This is deprecated and will be removed in M108.
   * </pre>
   *
   * <code>string image_path = 1;</code>
   * @return Whether the imagePath field is set.
   */
  @java.lang.Override
  public boolean hasImagePath() {
    return imageCase_ == 1;
  }
  /**
   * <pre>
   * Optional path to an image.
   * This is deprecated and will be removed in M108.
   * </pre>
   *
   * <code>string image_path = 1;</code>
   * @return The imagePath.
   */
  @java.lang.Override
  public java.lang.String getImagePath() {
    java.lang.String ref = "";
    if (imageCase_ == 1) {
      ref = (java.lang.String) image_;
    }
    return ref;
  }
  /**
   * <pre>
   * Optional path to an image.
   * This is deprecated and will be removed in M108.
   * </pre>
   *
   * <code>string image_path = 1;</code>
   * @return The bytes for imagePath.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getImagePathBytes() {
    java.lang.String ref = "";
    if (imageCase_ == 1) {
      ref = (java.lang.String) image_;
    }
    return com.google.protobuf.ByteString.copyFromUtf8(ref);
  }
  /**
   * <pre>
   * Optional path to an image.
   * This is deprecated and will be removed in M108.
   * </pre>
   *
   * <code>string image_path = 1;</code>
   * @param value The imagePath to set.
   */
  private void setImagePath(
      java.lang.String value) {
    value.getClass();
  imageCase_ = 1;
    image_ = value;
  }
  /**
   * <pre>
   * Optional path to an image.
   * This is deprecated and will be removed in M108.
   * </pre>
   *
   * <code>string image_path = 1;</code>
   */
  private void clearImagePath() {
    if (imageCase_ == 1) {
      imageCase_ = 0;
      image_ = null;
    }
  }
  /**
   * <pre>
   * Optional path to an image.
   * This is deprecated and will be removed in M108.
   * </pre>
   *
   * <code>string image_path = 1;</code>
   * @param value The bytes for imagePath to set.
   */
  private void setImagePathBytes(
      com.google.protobuf.ByteString value) {
    image_ = value.toStringUtf8();
    imageCase_ = 1;
  }

  public static final int DRAWABLE_FIELD_NUMBER = 4;
  /**
   * <pre>
   * Drawable shown in a separate ImageView above TextView.
   * </pre>
   *
   * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
   */
  @java.lang.Override
  public boolean hasDrawable() {
    return imageCase_ == 4;
  }
  /**
   * <pre>
   * Drawable shown in a separate ImageView above TextView.
   * </pre>
   *
   * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto getDrawable() {
    if (imageCase_ == 4) {
       return (org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto) image_;
    }
    return org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto.getDefaultInstance();
  }
  /**
   * <pre>
   * Drawable shown in a separate ImageView above TextView.
   * </pre>
   *
   * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
   */
  private void setDrawable(org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto value) {
    value.getClass();
  image_ = value;
    imageCase_ = 4;
  }
  /**
   * <pre>
   * Drawable shown in a separate ImageView above TextView.
   * </pre>
   *
   * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
   */
  private void mergeDrawable(org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto value) {
    value.getClass();
  if (imageCase_ == 4 &&
        image_ != org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto.getDefaultInstance()) {
      image_ = org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto.newBuilder((org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto) image_)
          .mergeFrom(value).buildPartial();
    } else {
      image_ = value;
    }
    imageCase_ = 4;
  }
  /**
   * <pre>
   * Drawable shown in a separate ImageView above TextView.
   * </pre>
   *
   * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
   */
  private void clearDrawable() {
    if (imageCase_ == 4) {
      imageCase_ = 0;
      image_ = null;
    }
  }

  public static final int EXPLANATION_FIELD_NUMBER = 2;
  private java.lang.String explanation_;
  /**
   * <pre>
   * The explanation to show in the box. Not setting this field will clear an
   * existing info box.
   * </pre>
   *
   * <code>optional string explanation = 2;</code>
   * @return Whether the explanation field is set.
   */
  @java.lang.Override
  public boolean hasExplanation() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <pre>
   * The explanation to show in the box. Not setting this field will clear an
   * existing info box.
   * </pre>
   *
   * <code>optional string explanation = 2;</code>
   * @return The explanation.
   */
  @java.lang.Override
  public java.lang.String getExplanation() {
    return explanation_;
  }
  /**
   * <pre>
   * The explanation to show in the box. Not setting this field will clear an
   * existing info box.
   * </pre>
   *
   * <code>optional string explanation = 2;</code>
   * @return The bytes for explanation.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getExplanationBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(explanation_);
  }
  /**
   * <pre>
   * The explanation to show in the box. Not setting this field will clear an
   * existing info box.
   * </pre>
   *
   * <code>optional string explanation = 2;</code>
   * @param value The explanation to set.
   */
  private void setExplanation(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000004;
    explanation_ = value;
  }
  /**
   * <pre>
   * The explanation to show in the box. Not setting this field will clear an
   * existing info box.
   * </pre>
   *
   * <code>optional string explanation = 2;</code>
   */
  private void clearExplanation() {
    bitField0_ = (bitField0_ & ~0x00000004);
    explanation_ = getDefaultInstance().getExplanation();
  }
  /**
   * <pre>
   * The explanation to show in the box. Not setting this field will clear an
   * existing info box.
   * </pre>
   *
   * <code>optional string explanation = 2;</code>
   * @param value The bytes for explanation to set.
   */
  private void setExplanationBytes(
      com.google.protobuf.ByteString value) {
    explanation_ = value.toStringUtf8();
    bitField0_ |= 0x00000004;
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code autofill_assistant.InfoBoxProto}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.InfoBoxProto)
      org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProtoOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }

    @java.lang.Override
    public ImageCase
        getImageCase() {
      return instance.getImageCase();
    }

    public Builder clearImage() {
      copyOnWrite();
      instance.clearImage();
      return this;
    }


    /**
     * <pre>
     * Optional path to an image.
     * This is deprecated and will be removed in M108.
     * </pre>
     *
     * <code>string image_path = 1;</code>
     * @return Whether the imagePath field is set.
     */
    @java.lang.Override
    public boolean hasImagePath() {
      return instance.hasImagePath();
    }
    /**
     * <pre>
     * Optional path to an image.
     * This is deprecated and will be removed in M108.
     * </pre>
     *
     * <code>string image_path = 1;</code>
     * @return The imagePath.
     */
    @java.lang.Override
    public java.lang.String getImagePath() {
      return instance.getImagePath();
    }
    /**
     * <pre>
     * Optional path to an image.
     * This is deprecated and will be removed in M108.
     * </pre>
     *
     * <code>string image_path = 1;</code>
     * @return The bytes for imagePath.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getImagePathBytes() {
      return instance.getImagePathBytes();
    }
    /**
     * <pre>
     * Optional path to an image.
     * This is deprecated and will be removed in M108.
     * </pre>
     *
     * <code>string image_path = 1;</code>
     * @param value The imagePath to set.
     * @return This builder for chaining.
     */
    public Builder setImagePath(
        java.lang.String value) {
      copyOnWrite();
      instance.setImagePath(value);
      return this;
    }
    /**
     * <pre>
     * Optional path to an image.
     * This is deprecated and will be removed in M108.
     * </pre>
     *
     * <code>string image_path = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearImagePath() {
      copyOnWrite();
      instance.clearImagePath();
      return this;
    }
    /**
     * <pre>
     * Optional path to an image.
     * This is deprecated and will be removed in M108.
     * </pre>
     *
     * <code>string image_path = 1;</code>
     * @param value The bytes for imagePath to set.
     * @return This builder for chaining.
     */
    public Builder setImagePathBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setImagePathBytes(value);
      return this;
    }

    /**
     * <pre>
     * Drawable shown in a separate ImageView above TextView.
     * </pre>
     *
     * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
     */
    @java.lang.Override
    public boolean hasDrawable() {
      return instance.hasDrawable();
    }
    /**
     * <pre>
     * Drawable shown in a separate ImageView above TextView.
     * </pre>
     *
     * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto getDrawable() {
      return instance.getDrawable();
    }
    /**
     * <pre>
     * Drawable shown in a separate ImageView above TextView.
     * </pre>
     *
     * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
     */
    public Builder setDrawable(org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto value) {
      copyOnWrite();
      instance.setDrawable(value);
      return this;
    }
    /**
     * <pre>
     * Drawable shown in a separate ImageView above TextView.
     * </pre>
     *
     * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
     */
    public Builder setDrawable(
        org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto.Builder builderForValue) {
      copyOnWrite();
      instance.setDrawable(builderForValue.build());
      return this;
    }
    /**
     * <pre>
     * Drawable shown in a separate ImageView above TextView.
     * </pre>
     *
     * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
     */
    public Builder mergeDrawable(org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto value) {
      copyOnWrite();
      instance.mergeDrawable(value);
      return this;
    }
    /**
     * <pre>
     * Drawable shown in a separate ImageView above TextView.
     * </pre>
     *
     * <code>.autofill_assistant.DrawableProto drawable = 4;</code>
     */
    public Builder clearDrawable() {
      copyOnWrite();
      instance.clearDrawable();
      return this;
    }

    /**
     * <pre>
     * The explanation to show in the box. Not setting this field will clear an
     * existing info box.
     * </pre>
     *
     * <code>optional string explanation = 2;</code>
     * @return Whether the explanation field is set.
     */
    @java.lang.Override
    public boolean hasExplanation() {
      return instance.hasExplanation();
    }
    /**
     * <pre>
     * The explanation to show in the box. Not setting this field will clear an
     * existing info box.
     * </pre>
     *
     * <code>optional string explanation = 2;</code>
     * @return The explanation.
     */
    @java.lang.Override
    public java.lang.String getExplanation() {
      return instance.getExplanation();
    }
    /**
     * <pre>
     * The explanation to show in the box. Not setting this field will clear an
     * existing info box.
     * </pre>
     *
     * <code>optional string explanation = 2;</code>
     * @return The bytes for explanation.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getExplanationBytes() {
      return instance.getExplanationBytes();
    }
    /**
     * <pre>
     * The explanation to show in the box. Not setting this field will clear an
     * existing info box.
     * </pre>
     *
     * <code>optional string explanation = 2;</code>
     * @param value The explanation to set.
     * @return This builder for chaining.
     */
    public Builder setExplanation(
        java.lang.String value) {
      copyOnWrite();
      instance.setExplanation(value);
      return this;
    }
    /**
     * <pre>
     * The explanation to show in the box. Not setting this field will clear an
     * existing info box.
     * </pre>
     *
     * <code>optional string explanation = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearExplanation() {
      copyOnWrite();
      instance.clearExplanation();
      return this;
    }
    /**
     * <pre>
     * The explanation to show in the box. Not setting this field will clear an
     * existing info box.
     * </pre>
     *
     * <code>optional string explanation = 2;</code>
     * @param value The bytes for explanation to set.
     * @return This builder for chaining.
     */
    public Builder setExplanationBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setExplanationBytes(value);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.InfoBoxProto)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "image_",
            "imageCase_",
            "bitField0_",
            "explanation_",
            org.chromium.chrome.browser.autofill_assistant.proto.DrawableProto.class,
          };
          java.lang.String info =
              "\u0001\u0003\u0001\u0001\u0001\u0004\u0003\u0000\u0000\u0000\u0001\u103b\u0000\u0002" +
              "\u1008\u0002\u0004\u103c\u0000";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.InfoBoxProto)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto DEFAULT_INSTANCE;
  static {
    InfoBoxProto defaultInstance = new InfoBoxProto();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      InfoBoxProto.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.InfoBoxProto getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<InfoBoxProto> PARSER;

  public static com.google.protobuf.Parser<InfoBoxProto> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

