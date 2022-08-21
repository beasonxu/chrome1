// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: content/common/proto/semantic_feature_overrides.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

/**
 * Protobuf type {@code autofill_assistant.SemanticSelectorPolicy}
 */
public  final class SemanticSelectorPolicy extends
    com.google.protobuf.GeneratedMessageLite<
        SemanticSelectorPolicy, SemanticSelectorPolicy.Builder> implements
    // @@protoc_insertion_point(message_implements:autofill_assistant.SemanticSelectorPolicy)
    SemanticSelectorPolicyOrBuilder {
  private SemanticSelectorPolicy() {
  }
  private int bitField0_;
  private int featureOverridesCase_ = 0;
  private java.lang.Object featureOverrides_;
  public enum FeatureOverridesCase {
    BAG_OF_WORDS(1),
    FEATUREOVERRIDES_NOT_SET(0);
    private final int value;
    private FeatureOverridesCase(int value) {
      this.value = value;
    }
    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static FeatureOverridesCase valueOf(int value) {
      return forNumber(value);
    }

    public static FeatureOverridesCase forNumber(int value) {
      switch (value) {
        case 1: return BAG_OF_WORDS;
        case 0: return FEATUREOVERRIDES_NOT_SET;
        default: return null;
      }
    }
    public int getNumber() {
      return this.value;
    }
  };

  @java.lang.Override
  public FeatureOverridesCase
  getFeatureOverridesCase() {
    return FeatureOverridesCase.forNumber(
        featureOverridesCase_);
  }

  private void clearFeatureOverrides() {
    featureOverridesCase_ = 0;
    featureOverrides_ = null;
  }

  public static final int BAG_OF_WORDS_FIELD_NUMBER = 1;
  /**
   * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
   */
  @java.lang.Override
  public boolean hasBagOfWords() {
    return featureOverridesCase_ == 1;
  }
  /**
   * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
   */
  @java.lang.Override
  public org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides getBagOfWords() {
    if (featureOverridesCase_ == 1) {
       return (org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides) featureOverrides_;
    }
    return org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides.getDefaultInstance();
  }
  /**
   * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
   */
  private void setBagOfWords(org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides value) {
    value.getClass();
  featureOverrides_ = value;
    featureOverridesCase_ = 1;
  }
  /**
   * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
   */
  private void mergeBagOfWords(org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides value) {
    value.getClass();
  if (featureOverridesCase_ == 1 &&
        featureOverrides_ != org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides.getDefaultInstance()) {
      featureOverrides_ = org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides.newBuilder((org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides) featureOverrides_)
          .mergeFrom(value).buildPartial();
    } else {
      featureOverrides_ = value;
    }
    featureOverridesCase_ = 1;
  }
  /**
   * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
   */
  private void clearBagOfWords() {
    if (featureOverridesCase_ == 1) {
      featureOverridesCase_ = 0;
      featureOverrides_ = null;
    }
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code autofill_assistant.SemanticSelectorPolicy}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy, Builder> implements
      // @@protoc_insertion_point(builder_implements:autofill_assistant.SemanticSelectorPolicy)
      org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicyOrBuilder {
    // Construct using org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }

    @java.lang.Override
    public FeatureOverridesCase
        getFeatureOverridesCase() {
      return instance.getFeatureOverridesCase();
    }

    public Builder clearFeatureOverrides() {
      copyOnWrite();
      instance.clearFeatureOverrides();
      return this;
    }


    /**
     * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
     */
    @java.lang.Override
    public boolean hasBagOfWords() {
      return instance.hasBagOfWords();
    }
    /**
     * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
     */
    @java.lang.Override
    public org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides getBagOfWords() {
      return instance.getBagOfWords();
    }
    /**
     * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
     */
    public Builder setBagOfWords(org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides value) {
      copyOnWrite();
      instance.setBagOfWords(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
     */
    public Builder setBagOfWords(
        org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides.Builder builderForValue) {
      copyOnWrite();
      instance.setBagOfWords(builderForValue.build());
      return this;
    }
    /**
     * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
     */
    public Builder mergeBagOfWords(org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides value) {
      copyOnWrite();
      instance.mergeBagOfWords(value);
      return this;
    }
    /**
     * <code>.autofill_assistant.VersionedFeatureOverrides bag_of_words = 1;</code>
     */
    public Builder clearBagOfWords() {
      copyOnWrite();
      instance.clearBagOfWords();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:autofill_assistant.SemanticSelectorPolicy)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "featureOverrides_",
            "featureOverridesCase_",
            "bitField0_",
            org.chromium.chrome.browser.autofill_assistant.proto.VersionedFeatureOverrides.class,
          };
          java.lang.String info =
              "\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001\u103c\u0000";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy> parser = PARSER;
        if (parser == null) {
          synchronized (org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy>(
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


  // @@protoc_insertion_point(class_scope:autofill_assistant.SemanticSelectorPolicy)
  private static final org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy DEFAULT_INSTANCE;
  static {
    SemanticSelectorPolicy defaultInstance = new SemanticSelectorPolicy();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      SemanticSelectorPolicy.class, defaultInstance);
  }

  public static org.chromium.chrome.browser.autofill_assistant.proto.SemanticSelectorPolicy getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<SemanticSelectorPolicy> PARSER;

  public static com.google.protobuf.Parser<SemanticSelectorPolicy> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

