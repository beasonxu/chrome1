// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/nigori_local_data.proto

package org.chromium.components.sync.protocol;

public interface CustomPassphraseKeyDerivationParamsOrBuilder extends
    // @@protoc_insertion_point(interface_extends:sync_pb.CustomPassphraseKeyDerivationParams)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Method used for deriving keys from custom passphrase.
   * </pre>
   *
   * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
   * @return Whether the customPassphraseKeyDerivationMethod field is set.
   */
  boolean hasCustomPassphraseKeyDerivationMethod();
  /**
   * <pre>
   * Method used for deriving keys from custom passphrase.
   * </pre>
   *
   * <code>optional .sync_pb.NigoriSpecifics.KeyDerivationMethod custom_passphrase_key_derivation_method = 1;</code>
   * @return The customPassphraseKeyDerivationMethod.
   */
  org.chromium.components.sync.protocol.NigoriSpecifics.KeyDerivationMethod getCustomPassphraseKeyDerivationMethod();

  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @return Whether the customPassphraseKeyDerivationSalt field is set.
   */
  boolean hasCustomPassphraseKeyDerivationSalt();
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @return The customPassphraseKeyDerivationSalt.
   */
  java.lang.String getCustomPassphraseKeyDerivationSalt();
  /**
   * <pre>
   * Salt used for the derivation of the key from the custom passphrase. Should
   * be set iff custom_passphrase_key_derivation_method == SCRYPT_8192_8_11.
   * </pre>
   *
   * <code>optional string custom_passphrase_key_derivation_salt = 2;</code>
   * @return The bytes for customPassphraseKeyDerivationSalt.
   */
  com.google.protobuf.ByteString
      getCustomPassphraseKeyDerivationSaltBytes();
}
