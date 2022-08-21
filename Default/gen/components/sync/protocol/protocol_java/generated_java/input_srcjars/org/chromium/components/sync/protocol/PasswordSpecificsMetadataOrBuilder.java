// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/password_specifics.proto

package org.chromium.components.sync.protocol;

public interface PasswordSpecificsMetadataOrBuilder extends
    // @@protoc_insertion_point(interface_extends:sync_pb.PasswordSpecificsMetadata)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <code>optional string url = 1;</code>
   * @return Whether the url field is set.
   */
  boolean hasUrl();
  /**
   * <code>optional string url = 1;</code>
   * @return The url.
   */
  java.lang.String getUrl();
  /**
   * <code>optional string url = 1;</code>
   * @return The bytes for url.
   */
  com.google.protobuf.ByteString
      getUrlBytes();

  /**
   * <pre>
   * True, if user chose permanently not to save the credentials for the form.
   * Introduced in M82.
   * </pre>
   *
   * <code>optional bool blacklisted = 2;</code>
   * @return Whether the blacklisted field is set.
   */
  boolean hasBlacklisted();
  /**
   * <pre>
   * True, if user chose permanently not to save the credentials for the form.
   * Introduced in M82.
   * </pre>
   *
   * <code>optional bool blacklisted = 2;</code>
   * @return The blacklisted.
   */
  boolean getBlacklisted();
}
