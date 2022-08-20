// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/common/proto/semantic_feature_overrides.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * Protobuf type {@code autofill_assistant.SparseEncoding}
 */
public  final class SparseEncoding extends
    com.google.protobuf.GeneratedMessageLite<
        SparseEncoding, SparseEncoding.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.SparseEncoding)
    SparseEncodingOrBuilder {
  private SparseEncoding() {
  }
  private int bitField0_;
  public static final int FEATURE_CONCATENATION_INDEX_FIELD_NUMBER = 1;
  private int featureConcatenationIndex_;
  /**
   * <code>optional int32 feature_concatenation_index = 1;</code>
   * @return Whether the featureConcatenationIndex field is set.
   */
  @java.lang.Override
  public boolean hasFeatureConcatenationIndex() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <code>optional int32 feature_concatenation_index = 1;</code>
   * @return The featureConcatenationIndex.
   */
  @java.lang.Override
  public int getFeatureConcatenationIndex() {
    return featureConcatenationIndex_;
  }
  /**
   * <code>optional int32 feature_concatenation_index = 1;</code>
   * @param value The featureConcatenationIndex to set.
   */
  private void setFeatureConcatenationIndex(int value) {
    bitField0_ |= 0x00000001;
    featureConcatenationIndex_ = value;
  }
  /**
   * <code>optional int32 feature_concatenation_index = 1;</code>
   */
  private void clearFeatureConcatenationIndex() {
    bitField0_ = (bitField0_ & ~0x00000001);
    featureConcatenationIndex_ = 0;
  }

  public static final int VOCABULARY_INDEX_FIELD_NUMBER = 2;
  private int vocabularyIndex_;
  /**
   * <code>optional int32 vocabulary_index = 2;</code>
   * @return Whether the vocabularyIndex field is set.
   */
  @java.lang.Override
  public boolean hasVocabularyIndex() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <code>optional int32 vocabulary_index = 2;</code>
   * @return The vocabularyIndex.
   */
  @java.lang.Override
  public int getVocabularyIndex() {
    return vocabularyIndex_;
  }
  /**
   * <code>optional int32 vocabulary_index = 2;</code>
   * @param value The vocabularyIndex to set.
   */
  private void setVocabularyIndex(int value) {
    bitField0_ |= 0x00000002;
    vocabularyIndex_ = value;
  }
  /**
   * <code>optional int32 vocabulary_index = 2;</code>
   */
  private void clearVocabularyIndex() {
    bitField0_ = (bitField0_ & ~0x00000002);
    vocabularyIndex_ = 0;
  }

  public static final int NUMBER_OF_OCCURRENCES_FIELD_NUMBER = 3;
  private int numberOfOccurrences_;
  /**
   * <code>optional int32 number_of_occurrences = 3;</code>
   * @return Whether the numberOfOccurrences field is set.
   */
  @java.lang.Override
  public boolean hasNumberOfOccurrences() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <code>optional int32 number_of_occurrences = 3;</code>
   * @return The numberOfOccurrences.
   */
  @java.lang.Override
  public int getNumberOfOccurrences() {
    return numberOfOccurrences_;
  }
  /**
   * <code>optional int32 number_of_occurrences = 3;</code>
   * @param value The numberOfOccurrences to set.
   */
  private void setNumberOfOccurrences(int value) {
    bitField0_ |= 0x00000004;
    numberOfOccurrences_ = value;
  }
  /**
   * <code>optional int32 number_of_occurrences = 3;</code>
   */
  private void clearNumberOfOccurrences() {
    bitField0_ = (bitField0_ & ~0x00000004);
    numberOfOccurrences_ = 0;
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code autofill_assistant.SparseEncoding}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.SparseEncoding)
      org.chromium.chrome.browser.autofill_assistant.proto.SparseEncodingOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <code>optional int32 feature_concatenation_index = 1;</code>
     * @return Whether the featureConcatenationIndex field is set.
     */
    @java.lang.Override
    public boolean hasFeatureConcatenationIndex() {
      return instance.hasFeatureConcatenationIndex();
    }
    /**
     * <code>optional int32 feature_concatenation_index = 1;</code>
     * @return The featureConcatenationIndex.
     */
    @java.lang.Override
    public int getFeatureConcatenationIndex() {
      return instance.getFeatureConcatenationIndex();
    }
    /**
     * <code>optional int32 feature_concatenation_index = 1;</code>
     * @param value The featureConcatenationIndex to set.
     * @return This builder for chaining.
     */
    public Builder setFeatureConcatenationIndex(int value) {
      copyOnWrite();
      instance.setFeatureConcatenationIndex(value);
      return this;
    }
    /**
     * <code>optional int32 feature_concatenation_index = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearFeatureConcatenationIndex() {
      copyOnWrite();
      instance.clearFeatureConcatenationIndex();
      return this;
    }

    /**
     * <code>optional int32 vocabulary_index = 2;</code>
     * @return Whether the vocabularyIndex field is set.
     */
    @java.lang.Override
    public boolean hasVocabularyIndex() {
      return instance.hasVocabularyIndex();
    }
    /**
     * <code>optional int32 vocabulary_index = 2;</code>
     * @return The vocabularyIndex.
     */
    @java.lang.Override
    public int getVocabularyIndex() {
      return instance.getVocabularyIndex();
    }
    /**
     * <code>optional int32 vocabulary_index = 2;</code>
     * @param value The vocabularyIndex to set.
     * @return This builder for chaining.
     */
    public Builder setVocabularyIndex(int value) {
      copyOnWrite();
      instance.setVocabularyIndex(value);
      return this;
    }
    /**
     * <code>optional int32 vocabulary_index = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearVocabularyIndex() {
      copyOnWrite();
      instance.clearVocabularyIndex();
      return this;
    }

    /**
     * <code>optional int32 number_of_occurrences = 3;</code>
     * @return Whether the numberOfOccurrences field is set.
     */
    @java.lang.Override
    public boolean hasNumberOfOccurrences() {
      return instance.hasNumberOfOccurrences();
    }
    /**
     * <code>optional int32 number_of_occurrences = 3;</code>
     * @return The numberOfOccurrences.
     */
    @java.lang.Override
    public int getNumberOfOccurrences() {
      return instance.getNumberOfOccurrences();
    }
    /**
     * <code>optional int32 number_of_occurrences = 3;</code>
     * @param value The numberOfOccurrences to set.
     * @return This builder for chaining.
     */
    public Builder setNumberOfOccurrences(int value) {
      copyOnWrite();
      instance.setNumberOfOccurrences(value);
      return this;
    }
    /**
     * <code>optional int32 number_of_occurrences = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearNumberOfOccurrences() {
      copyOnWrite();
      instance.clearNumberOfOccurrences();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.SparseEncoding)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "featureConcatenationIndex_",
            "vocabularyIndex_",
            "numberOfOccurrences_",
          };
          java.lang.String info =
              "\u0001\u0003\u0000\u0001\u0001\u0003\u0003\u0000\u0000\u0000\u0001\u1004\u0000\u0002" +
              "\u1004\u0001\u0003\u1004\u0002";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.SparseEncoding)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding DEFAULT_INSTANCE;
  static {
    SparseEncoding defaultInstance = new SparseEncoding();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      SparseEncoding.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.SparseEncoding getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<SparseEncoding> PARSER;

  public static com.google.protobuf.Parser<SparseEncoding> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

