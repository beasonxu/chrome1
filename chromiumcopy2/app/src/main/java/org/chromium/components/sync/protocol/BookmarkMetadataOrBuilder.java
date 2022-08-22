// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/bookmark_model_metadata.proto

package org.chromium.components.sync.protocol;

public interface BookmarkMetadataOrBuilder extends
    // @@protoc_insertion_point(interface_extends:sync_pb.BookmarkMetadata)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Bookmark local id.
   * </pre>
   *
   * <code>optional int64 id = 1;</code>
   * @return Whether the id field is set.
   */
  boolean hasId();
  /**
   * <pre>
   * Bookmark local id.
   * </pre>
   *
   * <code>optional int64 id = 1;</code>
   * @return The id.
   */
  long getId();

  /**
   * <pre>
   * Bookmarks sync metadata.
   * </pre>
   *
   * <code>optional .sync_pb.EntityMetadata metadata = 2;</code>
   * @return Whether the metadata field is set.
   */
  boolean hasMetadata();
  /**
   * <pre>
   * Bookmarks sync metadata.
   * </pre>
   *
   * <code>optional .sync_pb.EntityMetadata metadata = 2;</code>
   * @return The metadata.
   */
  org.chromium.components.sync.protocol.EntityMetadata getMetadata();
}
