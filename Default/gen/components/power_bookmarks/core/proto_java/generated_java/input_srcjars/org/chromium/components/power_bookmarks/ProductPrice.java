// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/power_bookmarks/core/proto/shopping_specifics.proto

package org.chromium.components.power_bookmarks;

/**
 * Protobuf type {@code power_bookmarks.ProductPrice}
 */
public  final class ProductPrice extends
    com.google.protobuf.GeneratedMessageLite<
        ProductPrice, ProductPrice.Builder> implements
    // @@protoc_insertion_point(message_implements:power_bookmarks.ProductPrice)
    ProductPriceOrBuilder {
  private ProductPrice() {
    currencyCode_ = "";
  }
  private int bitField0_;
  public static final int CURRENCY_CODE_FIELD_NUMBER = 1;
  private java.lang.String currencyCode_;
  /**
   * <pre>
   * Code for the currency e.g. USD.
   * </pre>
   *
   * <code>optional string currency_code = 1;</code>
   * @return Whether the currencyCode field is set.
   */
  @java.lang.Override
  public boolean hasCurrencyCode() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Code for the currency e.g. USD.
   * </pre>
   *
   * <code>optional string currency_code = 1;</code>
   * @return The currencyCode.
   */
  @java.lang.Override
  public java.lang.String getCurrencyCode() {
    return currencyCode_;
  }
  /**
   * <pre>
   * Code for the currency e.g. USD.
   * </pre>
   *
   * <code>optional string currency_code = 1;</code>
   * @return The bytes for currencyCode.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getCurrencyCodeBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(currencyCode_);
  }
  /**
   * <pre>
   * Code for the currency e.g. USD.
   * </pre>
   *
   * <code>optional string currency_code = 1;</code>
   * @param value The currencyCode to set.
   */
  private void setCurrencyCode(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    currencyCode_ = value;
  }
  /**
   * <pre>
   * Code for the currency e.g. USD.
   * </pre>
   *
   * <code>optional string currency_code = 1;</code>
   */
  private void clearCurrencyCode() {
    bitField0_ = (bitField0_ & ~0x00000001);
    currencyCode_ = getDefaultInstance().getCurrencyCode();
  }
  /**
   * <pre>
   * Code for the currency e.g. USD.
   * </pre>
   *
   * <code>optional string currency_code = 1;</code>
   * @param value The bytes for currencyCode to set.
   */
  private void setCurrencyCodeBytes(
      com.google.protobuf.ByteString value) {
    currencyCode_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int AMOUNT_MICROS_FIELD_NUMBER = 2;
  private long amountMicros_;
  /**
   * <pre>
   * Price in micros.
   * </pre>
   *
   * <code>optional int64 amount_micros = 2;</code>
   * @return Whether the amountMicros field is set.
   */
  @java.lang.Override
  public boolean hasAmountMicros() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * Price in micros.
   * </pre>
   *
   * <code>optional int64 amount_micros = 2;</code>
   * @return The amountMicros.
   */
  @java.lang.Override
  public long getAmountMicros() {
    return amountMicros_;
  }
  /**
   * <pre>
   * Price in micros.
   * </pre>
   *
   * <code>optional int64 amount_micros = 2;</code>
   * @param value The amountMicros to set.
   */
  private void setAmountMicros(long value) {
    bitField0_ |= 0x00000002;
    amountMicros_ = value;
  }
  /**
   * <pre>
   * Price in micros.
   * </pre>
   *
   * <code>optional int64 amount_micros = 2;</code>
   */
  private void clearAmountMicros() {
    bitField0_ = (bitField0_ & ~0x00000002);
    amountMicros_ = 0L;
  }

  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.power_bookmarks.ProductPrice parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.power_bookmarks.ProductPrice prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code power_bookmarks.ProductPrice}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.power_bookmarks.ProductPrice, Builder> implements
      // @@protoc_insertion_point(builder_implements:power_bookmarks.ProductPrice)
      org.chromium.components.power_bookmarks.ProductPriceOrBuilder {
    // Construct using org.chromium.components.power_bookmarks.ProductPrice.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Code for the currency e.g. USD.
     * </pre>
     *
     * <code>optional string currency_code = 1;</code>
     * @return Whether the currencyCode field is set.
     */
    @java.lang.Override
    public boolean hasCurrencyCode() {
      return instance.hasCurrencyCode();
    }
    /**
     * <pre>
     * Code for the currency e.g. USD.
     * </pre>
     *
     * <code>optional string currency_code = 1;</code>
     * @return The currencyCode.
     */
    @java.lang.Override
    public java.lang.String getCurrencyCode() {
      return instance.getCurrencyCode();
    }
    /**
     * <pre>
     * Code for the currency e.g. USD.
     * </pre>
     *
     * <code>optional string currency_code = 1;</code>
     * @return The bytes for currencyCode.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getCurrencyCodeBytes() {
      return instance.getCurrencyCodeBytes();
    }
    /**
     * <pre>
     * Code for the currency e.g. USD.
     * </pre>
     *
     * <code>optional string currency_code = 1;</code>
     * @param value The currencyCode to set.
     * @return This builder for chaining.
     */
    public Builder setCurrencyCode(
        java.lang.String value) {
      copyOnWrite();
      instance.setCurrencyCode(value);
      return this;
    }
    /**
     * <pre>
     * Code for the currency e.g. USD.
     * </pre>
     *
     * <code>optional string currency_code = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearCurrencyCode() {
      copyOnWrite();
      instance.clearCurrencyCode();
      return this;
    }
    /**
     * <pre>
     * Code for the currency e.g. USD.
     * </pre>
     *
     * <code>optional string currency_code = 1;</code>
     * @param value The bytes for currencyCode to set.
     * @return This builder for chaining.
     */
    public Builder setCurrencyCodeBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setCurrencyCodeBytes(value);
      return this;
    }

    /**
     * <pre>
     * Price in micros.
     * </pre>
     *
     * <code>optional int64 amount_micros = 2;</code>
     * @return Whether the amountMicros field is set.
     */
    @java.lang.Override
    public boolean hasAmountMicros() {
      return instance.hasAmountMicros();
    }
    /**
     * <pre>
     * Price in micros.
     * </pre>
     *
     * <code>optional int64 amount_micros = 2;</code>
     * @return The amountMicros.
     */
    @java.lang.Override
    public long getAmountMicros() {
      return instance.getAmountMicros();
    }
    /**
     * <pre>
     * Price in micros.
     * </pre>
     *
     * <code>optional int64 amount_micros = 2;</code>
     * @param value The amountMicros to set.
     * @return This builder for chaining.
     */
    public Builder setAmountMicros(long value) {
      copyOnWrite();
      instance.setAmountMicros(value);
      return this;
    }
    /**
     * <pre>
     * Price in micros.
     * </pre>
     *
     * <code>optional int64 amount_micros = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearAmountMicros() {
      copyOnWrite();
      instance.clearAmountMicros();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:power_bookmarks.ProductPrice)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.power_bookmarks.ProductPrice();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "currencyCode_",
            "amountMicros_",
          };
          java.lang.String info =
              "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u1008\u0000\u0002" +
              "\u1002\u0001";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.power_bookmarks.ProductPrice> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.power_bookmarks.ProductPrice.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.power_bookmarks.ProductPrice>(
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


  // @@protoc_insertion_point(class_scope:power_bookmarks.ProductPrice)
  private static final org.chromium.components.power_bookmarks.ProductPrice DEFAULT_INSTANCE;
  static {
    ProductPrice defaultInstance = new ProductPrice();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      ProductPrice.class, defaultInstance);
  }

  public static org.chromium.components.power_bookmarks.ProductPrice getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<ProductPrice> PARSER;

  public static com.google.protobuf.Parser<ProductPrice> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

