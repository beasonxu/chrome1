// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/autofill_specifics.proto

package org.chromium.components.sync.protocol;

/**
 * <pre>
 * Contains information about the cloud token data of server credit cards.
 * </pre>
 *
 * Protobuf type {@code sync_pb.WalletCreditCardCloudTokenData}
 */
public  final class WalletCreditCardCloudTokenData extends
    com.google.protobuf.GeneratedMessageLite<
        WalletCreditCardCloudTokenData, WalletCreditCardCloudTokenData.Builder> implements
    // @@protoc_insertion_point(message_implements:sync_pb.WalletCreditCardCloudTokenData)
    WalletCreditCardCloudTokenDataOrBuilder {
  private WalletCreditCardCloudTokenData() {
    maskedCardId_ = "";
    suffix_ = "";
    artFifeUrl_ = "";
    instrumentToken_ = "";
  }
  private int bitField0_;
  public static final int MASKED_CARD_ID_FIELD_NUMBER = 1;
  private java.lang.String maskedCardId_;
  /**
   * <pre>
   * Server-generated ID string for the card this cloud token data is related
   * to. This should match the id in WalletMaskedCreditCard for to fetch the
   * corresponding actual card data. Note this is not unique across all cloud
   * token data, which means one card can have multiple sets of cloud token data
   * with the same masked_card_id.
   * </pre>
   *
   * <code>optional string masked_card_id = 1;</code>
   * @return Whether the maskedCardId field is set.
   */
  @java.lang.Override
  public boolean hasMaskedCardId() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Server-generated ID string for the card this cloud token data is related
   * to. This should match the id in WalletMaskedCreditCard for to fetch the
   * corresponding actual card data. Note this is not unique across all cloud
   * token data, which means one card can have multiple sets of cloud token data
   * with the same masked_card_id.
   * </pre>
   *
   * <code>optional string masked_card_id = 1;</code>
   * @return The maskedCardId.
   */
  @java.lang.Override
  public java.lang.String getMaskedCardId() {
    return maskedCardId_;
  }
  /**
   * <pre>
   * Server-generated ID string for the card this cloud token data is related
   * to. This should match the id in WalletMaskedCreditCard for to fetch the
   * corresponding actual card data. Note this is not unique across all cloud
   * token data, which means one card can have multiple sets of cloud token data
   * with the same masked_card_id.
   * </pre>
   *
   * <code>optional string masked_card_id = 1;</code>
   * @return The bytes for maskedCardId.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getMaskedCardIdBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(maskedCardId_);
  }
  /**
   * <pre>
   * Server-generated ID string for the card this cloud token data is related
   * to. This should match the id in WalletMaskedCreditCard for to fetch the
   * corresponding actual card data. Note this is not unique across all cloud
   * token data, which means one card can have multiple sets of cloud token data
   * with the same masked_card_id.
   * </pre>
   *
   * <code>optional string masked_card_id = 1;</code>
   * @param value The maskedCardId to set.
   */
  private void setMaskedCardId(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000001;
    maskedCardId_ = value;
  }
  /**
   * <pre>
   * Server-generated ID string for the card this cloud token data is related
   * to. This should match the id in WalletMaskedCreditCard for to fetch the
   * corresponding actual card data. Note this is not unique across all cloud
   * token data, which means one card can have multiple sets of cloud token data
   * with the same masked_card_id.
   * </pre>
   *
   * <code>optional string masked_card_id = 1;</code>
   */
  private void clearMaskedCardId() {
    bitField0_ = (bitField0_ & ~0x00000001);
    maskedCardId_ = getDefaultInstance().getMaskedCardId();
  }
  /**
   * <pre>
   * Server-generated ID string for the card this cloud token data is related
   * to. This should match the id in WalletMaskedCreditCard for to fetch the
   * corresponding actual card data. Note this is not unique across all cloud
   * token data, which means one card can have multiple sets of cloud token data
   * with the same masked_card_id.
   * </pre>
   *
   * <code>optional string masked_card_id = 1;</code>
   * @param value The bytes for maskedCardId to set.
   */
  private void setMaskedCardIdBytes(
      com.google.protobuf.ByteString value) {
    maskedCardId_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int SUFFIX_FIELD_NUMBER = 2;
  private java.lang.String suffix_;
  /**
   * <pre>
   * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
   * </pre>
   *
   * <code>optional string suffix = 2;</code>
   * @return Whether the suffix field is set.
   */
  @java.lang.Override
  public boolean hasSuffix() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
   * </pre>
   *
   * <code>optional string suffix = 2;</code>
   * @return The suffix.
   */
  @java.lang.Override
  public java.lang.String getSuffix() {
    return suffix_;
  }
  /**
   * <pre>
   * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
   * </pre>
   *
   * <code>optional string suffix = 2;</code>
   * @return The bytes for suffix.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getSuffixBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(suffix_);
  }
  /**
   * <pre>
   * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
   * </pre>
   *
   * <code>optional string suffix = 2;</code>
   * @param value The suffix to set.
   */
  private void setSuffix(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000002;
    suffix_ = value;
  }
  /**
   * <pre>
   * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
   * </pre>
   *
   * <code>optional string suffix = 2;</code>
   */
  private void clearSuffix() {
    bitField0_ = (bitField0_ & ~0x00000002);
    suffix_ = getDefaultInstance().getSuffix();
  }
  /**
   * <pre>
   * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
   * </pre>
   *
   * <code>optional string suffix = 2;</code>
   * @param value The bytes for suffix to set.
   */
  private void setSuffixBytes(
      com.google.protobuf.ByteString value) {
    suffix_ = value.toStringUtf8();
    bitField0_ |= 0x00000002;
  }

  public static final int EXP_MONTH_FIELD_NUMBER = 3;
  private int expMonth_;
  /**
   * <pre>
   * CPAN Month number 1-12.
   * </pre>
   *
   * <code>optional int32 exp_month = 3;</code>
   * @return Whether the expMonth field is set.
   */
  @java.lang.Override
  public boolean hasExpMonth() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <pre>
   * CPAN Month number 1-12.
   * </pre>
   *
   * <code>optional int32 exp_month = 3;</code>
   * @return The expMonth.
   */
  @java.lang.Override
  public int getExpMonth() {
    return expMonth_;
  }
  /**
   * <pre>
   * CPAN Month number 1-12.
   * </pre>
   *
   * <code>optional int32 exp_month = 3;</code>
   * @param value The expMonth to set.
   */
  private void setExpMonth(int value) {
    bitField0_ |= 0x00000004;
    expMonth_ = value;
  }
  /**
   * <pre>
   * CPAN Month number 1-12.
   * </pre>
   *
   * <code>optional int32 exp_month = 3;</code>
   */
  private void clearExpMonth() {
    bitField0_ = (bitField0_ & ~0x00000004);
    expMonth_ = 0;
  }

  public static final int EXP_YEAR_FIELD_NUMBER = 4;
  private int expYear_;
  /**
   * <pre>
   * CPAN Four-digit year (e.g. 2017).
   * </pre>
   *
   * <code>optional int32 exp_year = 4;</code>
   * @return Whether the expYear field is set.
   */
  @java.lang.Override
  public boolean hasExpYear() {
    return ((bitField0_ & 0x00000008) != 0);
  }
  /**
   * <pre>
   * CPAN Four-digit year (e.g. 2017).
   * </pre>
   *
   * <code>optional int32 exp_year = 4;</code>
   * @return The expYear.
   */
  @java.lang.Override
  public int getExpYear() {
    return expYear_;
  }
  /**
   * <pre>
   * CPAN Four-digit year (e.g. 2017).
   * </pre>
   *
   * <code>optional int32 exp_year = 4;</code>
   * @param value The expYear to set.
   */
  private void setExpYear(int value) {
    bitField0_ |= 0x00000008;
    expYear_ = value;
  }
  /**
   * <pre>
   * CPAN Four-digit year (e.g. 2017).
   * </pre>
   *
   * <code>optional int32 exp_year = 4;</code>
   */
  private void clearExpYear() {
    bitField0_ = (bitField0_ & ~0x00000008);
    expYear_ = 0;
  }

  public static final int ART_FIFE_URL_FIELD_NUMBER = 5;
  private java.lang.String artFifeUrl_;
  /**
   * <pre>
   * URL of the card art to be displayed for CPAN.
   * </pre>
   *
   * <code>optional string art_fife_url = 5;</code>
   * @return Whether the artFifeUrl field is set.
   */
  @java.lang.Override
  public boolean hasArtFifeUrl() {
    return ((bitField0_ & 0x00000010) != 0);
  }
  /**
   * <pre>
   * URL of the card art to be displayed for CPAN.
   * </pre>
   *
   * <code>optional string art_fife_url = 5;</code>
   * @return The artFifeUrl.
   */
  @java.lang.Override
  public java.lang.String getArtFifeUrl() {
    return artFifeUrl_;
  }
  /**
   * <pre>
   * URL of the card art to be displayed for CPAN.
   * </pre>
   *
   * <code>optional string art_fife_url = 5;</code>
   * @return The bytes for artFifeUrl.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getArtFifeUrlBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(artFifeUrl_);
  }
  /**
   * <pre>
   * URL of the card art to be displayed for CPAN.
   * </pre>
   *
   * <code>optional string art_fife_url = 5;</code>
   * @param value The artFifeUrl to set.
   */
  private void setArtFifeUrl(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000010;
    artFifeUrl_ = value;
  }
  /**
   * <pre>
   * URL of the card art to be displayed for CPAN.
   * </pre>
   *
   * <code>optional string art_fife_url = 5;</code>
   */
  private void clearArtFifeUrl() {
    bitField0_ = (bitField0_ & ~0x00000010);
    artFifeUrl_ = getDefaultInstance().getArtFifeUrl();
  }
  /**
   * <pre>
   * URL of the card art to be displayed for CPAN.
   * </pre>
   *
   * <code>optional string art_fife_url = 5;</code>
   * @param value The bytes for artFifeUrl to set.
   */
  private void setArtFifeUrlBytes(
      com.google.protobuf.ByteString value) {
    artFifeUrl_ = value.toStringUtf8();
    bitField0_ |= 0x00000010;
  }

  public static final int INSTRUMENT_TOKEN_FIELD_NUMBER = 6;
  private java.lang.String instrumentToken_;
  /**
   * <pre>
   * Opaque identifier for the cloud token.
   * </pre>
   *
   * <code>optional string instrument_token = 6;</code>
   * @return Whether the instrumentToken field is set.
   */
  @java.lang.Override
  public boolean hasInstrumentToken() {
    return ((bitField0_ & 0x00000020) != 0);
  }
  /**
   * <pre>
   * Opaque identifier for the cloud token.
   * </pre>
   *
   * <code>optional string instrument_token = 6;</code>
   * @return The instrumentToken.
   */
  @java.lang.Override
  public java.lang.String getInstrumentToken() {
    return instrumentToken_;
  }
  /**
   * <pre>
   * Opaque identifier for the cloud token.
   * </pre>
   *
   * <code>optional string instrument_token = 6;</code>
   * @return The bytes for instrumentToken.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getInstrumentTokenBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(instrumentToken_);
  }
  /**
   * <pre>
   * Opaque identifier for the cloud token.
   * </pre>
   *
   * <code>optional string instrument_token = 6;</code>
   * @param value The instrumentToken to set.
   */
  private void setInstrumentToken(
      java.lang.String value) {
    value.getClass();
  bitField0_ |= 0x00000020;
    instrumentToken_ = value;
  }
  /**
   * <pre>
   * Opaque identifier for the cloud token.
   * </pre>
   *
   * <code>optional string instrument_token = 6;</code>
   */
  private void clearInstrumentToken() {
    bitField0_ = (bitField0_ & ~0x00000020);
    instrumentToken_ = getDefaultInstance().getInstrumentToken();
  }
  /**
   * <pre>
   * Opaque identifier for the cloud token.
   * </pre>
   *
   * <code>optional string instrument_token = 6;</code>
   * @param value The bytes for instrumentToken to set.
   */
  private void setInstrumentTokenBytes(
      com.google.protobuf.ByteString value) {
    instrumentToken_ = value.toStringUtf8();
    bitField0_ |= 0x00000020;
  }

  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Contains information about the cloud token data of server credit cards.
   * </pre>
   *
   * Protobuf type {@code sync_pb.WalletCreditCardCloudTokenData}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData, Builder> implements
      // @@protoc_insertion_point(builder_implements:sync_pb.WalletCreditCardCloudTokenData)
      org.chromium.components.sync.protocol.WalletCreditCardCloudTokenDataOrBuilder {
    // Construct using org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Server-generated ID string for the card this cloud token data is related
     * to. This should match the id in WalletMaskedCreditCard for to fetch the
     * corresponding actual card data. Note this is not unique across all cloud
     * token data, which means one card can have multiple sets of cloud token data
     * with the same masked_card_id.
     * </pre>
     *
     * <code>optional string masked_card_id = 1;</code>
     * @return Whether the maskedCardId field is set.
     */
    @java.lang.Override
    public boolean hasMaskedCardId() {
      return instance.hasMaskedCardId();
    }
    /**
     * <pre>
     * Server-generated ID string for the card this cloud token data is related
     * to. This should match the id in WalletMaskedCreditCard for to fetch the
     * corresponding actual card data. Note this is not unique across all cloud
     * token data, which means one card can have multiple sets of cloud token data
     * with the same masked_card_id.
     * </pre>
     *
     * <code>optional string masked_card_id = 1;</code>
     * @return The maskedCardId.
     */
    @java.lang.Override
    public java.lang.String getMaskedCardId() {
      return instance.getMaskedCardId();
    }
    /**
     * <pre>
     * Server-generated ID string for the card this cloud token data is related
     * to. This should match the id in WalletMaskedCreditCard for to fetch the
     * corresponding actual card data. Note this is not unique across all cloud
     * token data, which means one card can have multiple sets of cloud token data
     * with the same masked_card_id.
     * </pre>
     *
     * <code>optional string masked_card_id = 1;</code>
     * @return The bytes for maskedCardId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getMaskedCardIdBytes() {
      return instance.getMaskedCardIdBytes();
    }
    /**
     * <pre>
     * Server-generated ID string for the card this cloud token data is related
     * to. This should match the id in WalletMaskedCreditCard for to fetch the
     * corresponding actual card data. Note this is not unique across all cloud
     * token data, which means one card can have multiple sets of cloud token data
     * with the same masked_card_id.
     * </pre>
     *
     * <code>optional string masked_card_id = 1;</code>
     * @param value The maskedCardId to set.
     * @return This builder for chaining.
     */
    public Builder setMaskedCardId(
        java.lang.String value) {
      copyOnWrite();
      instance.setMaskedCardId(value);
      return this;
    }
    /**
     * <pre>
     * Server-generated ID string for the card this cloud token data is related
     * to. This should match the id in WalletMaskedCreditCard for to fetch the
     * corresponding actual card data. Note this is not unique across all cloud
     * token data, which means one card can have multiple sets of cloud token data
     * with the same masked_card_id.
     * </pre>
     *
     * <code>optional string masked_card_id = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearMaskedCardId() {
      copyOnWrite();
      instance.clearMaskedCardId();
      return this;
    }
    /**
     * <pre>
     * Server-generated ID string for the card this cloud token data is related
     * to. This should match the id in WalletMaskedCreditCard for to fetch the
     * corresponding actual card data. Note this is not unique across all cloud
     * token data, which means one card can have multiple sets of cloud token data
     * with the same masked_card_id.
     * </pre>
     *
     * <code>optional string masked_card_id = 1;</code>
     * @param value The bytes for maskedCardId to set.
     * @return This builder for chaining.
     */
    public Builder setMaskedCardIdBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setMaskedCardIdBytes(value);
      return this;
    }

    /**
     * <pre>
     * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
     * </pre>
     *
     * <code>optional string suffix = 2;</code>
     * @return Whether the suffix field is set.
     */
    @java.lang.Override
    public boolean hasSuffix() {
      return instance.hasSuffix();
    }
    /**
     * <pre>
     * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
     * </pre>
     *
     * <code>optional string suffix = 2;</code>
     * @return The suffix.
     */
    @java.lang.Override
    public java.lang.String getSuffix() {
      return instance.getSuffix();
    }
    /**
     * <pre>
     * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
     * </pre>
     *
     * <code>optional string suffix = 2;</code>
     * @return The bytes for suffix.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getSuffixBytes() {
      return instance.getSuffixBytes();
    }
    /**
     * <pre>
     * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
     * </pre>
     *
     * <code>optional string suffix = 2;</code>
     * @param value The suffix to set.
     * @return This builder for chaining.
     */
    public Builder setSuffix(
        java.lang.String value) {
      copyOnWrite();
      instance.setSuffix(value);
      return this;
    }
    /**
     * <pre>
     * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
     * </pre>
     *
     * <code>optional string suffix = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearSuffix() {
      copyOnWrite();
      instance.clearSuffix();
      return this;
    }
    /**
     * <pre>
     * Last 4-5 digits of the Cloud Primary Account Number (CPAN).
     * </pre>
     *
     * <code>optional string suffix = 2;</code>
     * @param value The bytes for suffix to set.
     * @return This builder for chaining.
     */
    public Builder setSuffixBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setSuffixBytes(value);
      return this;
    }

    /**
     * <pre>
     * CPAN Month number 1-12.
     * </pre>
     *
     * <code>optional int32 exp_month = 3;</code>
     * @return Whether the expMonth field is set.
     */
    @java.lang.Override
    public boolean hasExpMonth() {
      return instance.hasExpMonth();
    }
    /**
     * <pre>
     * CPAN Month number 1-12.
     * </pre>
     *
     * <code>optional int32 exp_month = 3;</code>
     * @return The expMonth.
     */
    @java.lang.Override
    public int getExpMonth() {
      return instance.getExpMonth();
    }
    /**
     * <pre>
     * CPAN Month number 1-12.
     * </pre>
     *
     * <code>optional int32 exp_month = 3;</code>
     * @param value The expMonth to set.
     * @return This builder for chaining.
     */
    public Builder setExpMonth(int value) {
      copyOnWrite();
      instance.setExpMonth(value);
      return this;
    }
    /**
     * <pre>
     * CPAN Month number 1-12.
     * </pre>
     *
     * <code>optional int32 exp_month = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearExpMonth() {
      copyOnWrite();
      instance.clearExpMonth();
      return this;
    }

    /**
     * <pre>
     * CPAN Four-digit year (e.g. 2017).
     * </pre>
     *
     * <code>optional int32 exp_year = 4;</code>
     * @return Whether the expYear field is set.
     */
    @java.lang.Override
    public boolean hasExpYear() {
      return instance.hasExpYear();
    }
    /**
     * <pre>
     * CPAN Four-digit year (e.g. 2017).
     * </pre>
     *
     * <code>optional int32 exp_year = 4;</code>
     * @return The expYear.
     */
    @java.lang.Override
    public int getExpYear() {
      return instance.getExpYear();
    }
    /**
     * <pre>
     * CPAN Four-digit year (e.g. 2017).
     * </pre>
     *
     * <code>optional int32 exp_year = 4;</code>
     * @param value The expYear to set.
     * @return This builder for chaining.
     */
    public Builder setExpYear(int value) {
      copyOnWrite();
      instance.setExpYear(value);
      return this;
    }
    /**
     * <pre>
     * CPAN Four-digit year (e.g. 2017).
     * </pre>
     *
     * <code>optional int32 exp_year = 4;</code>
     * @return This builder for chaining.
     */
    public Builder clearExpYear() {
      copyOnWrite();
      instance.clearExpYear();
      return this;
    }

    /**
     * <pre>
     * URL of the card art to be displayed for CPAN.
     * </pre>
     *
     * <code>optional string art_fife_url = 5;</code>
     * @return Whether the artFifeUrl field is set.
     */
    @java.lang.Override
    public boolean hasArtFifeUrl() {
      return instance.hasArtFifeUrl();
    }
    /**
     * <pre>
     * URL of the card art to be displayed for CPAN.
     * </pre>
     *
     * <code>optional string art_fife_url = 5;</code>
     * @return The artFifeUrl.
     */
    @java.lang.Override
    public java.lang.String getArtFifeUrl() {
      return instance.getArtFifeUrl();
    }
    /**
     * <pre>
     * URL of the card art to be displayed for CPAN.
     * </pre>
     *
     * <code>optional string art_fife_url = 5;</code>
     * @return The bytes for artFifeUrl.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getArtFifeUrlBytes() {
      return instance.getArtFifeUrlBytes();
    }
    /**
     * <pre>
     * URL of the card art to be displayed for CPAN.
     * </pre>
     *
     * <code>optional string art_fife_url = 5;</code>
     * @param value The artFifeUrl to set.
     * @return This builder for chaining.
     */
    public Builder setArtFifeUrl(
        java.lang.String value) {
      copyOnWrite();
      instance.setArtFifeUrl(value);
      return this;
    }
    /**
     * <pre>
     * URL of the card art to be displayed for CPAN.
     * </pre>
     *
     * <code>optional string art_fife_url = 5;</code>
     * @return This builder for chaining.
     */
    public Builder clearArtFifeUrl() {
      copyOnWrite();
      instance.clearArtFifeUrl();
      return this;
    }
    /**
     * <pre>
     * URL of the card art to be displayed for CPAN.
     * </pre>
     *
     * <code>optional string art_fife_url = 5;</code>
     * @param value The bytes for artFifeUrl to set.
     * @return This builder for chaining.
     */
    public Builder setArtFifeUrlBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setArtFifeUrlBytes(value);
      return this;
    }

    /**
     * <pre>
     * Opaque identifier for the cloud token.
     * </pre>
     *
     * <code>optional string instrument_token = 6;</code>
     * @return Whether the instrumentToken field is set.
     */
    @java.lang.Override
    public boolean hasInstrumentToken() {
      return instance.hasInstrumentToken();
    }
    /**
     * <pre>
     * Opaque identifier for the cloud token.
     * </pre>
     *
     * <code>optional string instrument_token = 6;</code>
     * @return The instrumentToken.
     */
    @java.lang.Override
    public java.lang.String getInstrumentToken() {
      return instance.getInstrumentToken();
    }
    /**
     * <pre>
     * Opaque identifier for the cloud token.
     * </pre>
     *
     * <code>optional string instrument_token = 6;</code>
     * @return The bytes for instrumentToken.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getInstrumentTokenBytes() {
      return instance.getInstrumentTokenBytes();
    }
    /**
     * <pre>
     * Opaque identifier for the cloud token.
     * </pre>
     *
     * <code>optional string instrument_token = 6;</code>
     * @param value The instrumentToken to set.
     * @return This builder for chaining.
     */
    public Builder setInstrumentToken(
        java.lang.String value) {
      copyOnWrite();
      instance.setInstrumentToken(value);
      return this;
    }
    /**
     * <pre>
     * Opaque identifier for the cloud token.
     * </pre>
     *
     * <code>optional string instrument_token = 6;</code>
     * @return This builder for chaining.
     */
    public Builder clearInstrumentToken() {
      copyOnWrite();
      instance.clearInstrumentToken();
      return this;
    }
    /**
     * <pre>
     * Opaque identifier for the cloud token.
     * </pre>
     *
     * <code>optional string instrument_token = 6;</code>
     * @param value The bytes for instrumentToken to set.
     * @return This builder for chaining.
     */
    public Builder setInstrumentTokenBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setInstrumentTokenBytes(value);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:sync_pb.WalletCreditCardCloudTokenData)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "maskedCardId_",
            "suffix_",
            "expMonth_",
            "expYear_",
            "artFifeUrl_",
            "instrumentToken_",
          };
          java.lang.String info =
              "\u0001\u0006\u0000\u0001\u0001\u0006\u0006\u0000\u0000\u0000\u0001\u1008\u0000\u0002" +
              "\u1008\u0001\u0003\u1004\u0002\u0004\u1004\u0003\u0005\u1008\u0004\u0006\u1008\u0005" +
              "";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData>(
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


  // @@protoc_insertion_point(class_scope:sync_pb.WalletCreditCardCloudTokenData)
  private static final org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData DEFAULT_INSTANCE;
  static {
    WalletCreditCardCloudTokenData defaultInstance = new WalletCreditCardCloudTokenData();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      WalletCreditCardCloudTokenData.class, defaultInstance);
  }

  public static org.chromium.components.sync.protocol.WalletCreditCardCloudTokenData getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<WalletCreditCardCloudTokenData> PARSER;

  public static com.google.protobuf.Parser<WalletCreditCardCloudTokenData> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

