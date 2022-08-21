// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/sync.proto

package org.chromium.components.sync.protocol;

public interface CommitMessageOrBuilder extends
    // @@protoc_insertion_point(interface_extends:sync_pb.CommitMessage)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <code>repeated .sync_pb.SyncEntity entries = 1;</code>
   */
  java.util.List<org.chromium.components.sync.protocol.SyncEntity> 
      getEntriesList();
  /**
   * <code>repeated .sync_pb.SyncEntity entries = 1;</code>
   */
  org.chromium.components.sync.protocol.SyncEntity getEntries(int index);
  /**
   * <code>repeated .sync_pb.SyncEntity entries = 1;</code>
   */
  int getEntriesCount();

  /**
   * <pre>
   * A GUID that identifies the committing sync client.  This value will be
   * returned as originator_cache_guid for any new items.
   * </pre>
   *
   * <code>optional string cache_guid = 2;</code>
   * @return Whether the cacheGuid field is set.
   */
  boolean hasCacheGuid();
  /**
   * <pre>
   * A GUID that identifies the committing sync client.  This value will be
   * returned as originator_cache_guid for any new items.
   * </pre>
   *
   * <code>optional string cache_guid = 2;</code>
   * @return The cacheGuid.
   */
  java.lang.String getCacheGuid();
  /**
   * <pre>
   * A GUID that identifies the committing sync client.  This value will be
   * returned as originator_cache_guid for any new items.
   * </pre>
   *
   * <code>optional string cache_guid = 2;</code>
   * @return The bytes for cacheGuid.
   */
  com.google.protobuf.ByteString
      getCacheGuidBytes();

  /**
   * <code>repeated .sync_pb.ChromiumExtensionsActivity extensions_activity = 3;</code>
   */
  java.util.List<org.chromium.components.sync.protocol.ChromiumExtensionsActivity> 
      getExtensionsActivityList();
  /**
   * <code>repeated .sync_pb.ChromiumExtensionsActivity extensions_activity = 3;</code>
   */
  org.chromium.components.sync.protocol.ChromiumExtensionsActivity getExtensionsActivity(int index);
  /**
   * <code>repeated .sync_pb.ChromiumExtensionsActivity extensions_activity = 3;</code>
   */
  int getExtensionsActivityCount();

  /**
   * <pre>
   * The configuration of this client at commit time. Used by the server to
   * make commit-time decisions about how to process datatypes that might
   * involve server-side interaction, and e.g require explicit user intent for
   * syncing a particular data type regardless of whether a commit for that
   * datatype is currently being sent up.
   * </pre>
   *
   * <code>optional .sync_pb.ClientConfigParams config_params = 4;</code>
   * @return Whether the configParams field is set.
   */
  boolean hasConfigParams();
  /**
   * <pre>
   * The configuration of this client at commit time. Used by the server to
   * make commit-time decisions about how to process datatypes that might
   * involve server-side interaction, and e.g require explicit user intent for
   * syncing a particular data type regardless of whether a commit for that
   * datatype is currently being sent up.
   * </pre>
   *
   * <code>optional .sync_pb.ClientConfigParams config_params = 4;</code>
   * @return The configParams.
   */
  org.chromium.components.sync.protocol.ClientConfigParams getConfigParams();

  /**
   * <pre>
   * Set of optional per-client datatype contexts.
   * </pre>
   *
   * <code>repeated .sync_pb.DataTypeContext client_contexts = 5;</code>
   */
  java.util.List<org.chromium.components.sync.protocol.DataTypeContext> 
      getClientContextsList();
  /**
   * <pre>
   * Set of optional per-client datatype contexts.
   * </pre>
   *
   * <code>repeated .sync_pb.DataTypeContext client_contexts = 5;</code>
   */
  org.chromium.components.sync.protocol.DataTypeContext getClientContexts(int index);
  /**
   * <pre>
   * Set of optional per-client datatype contexts.
   * </pre>
   *
   * <code>repeated .sync_pb.DataTypeContext client_contexts = 5;</code>
   */
  int getClientContextsCount();

  /**
   * <pre>
   * This field need to be 256 bytes if set. This attempts to mitigate CRIME
   * attacks when sync communicate from client to server with compression. So if
   * compression is used, this need to set a 256 random ASCII bytes. If no
   * compression, this field should not be set. The server can ignore the
   * padding.
   * </pre>
   *
   * <code>optional string padding = 6;</code>
   * @return Whether the padding field is set.
   */
  boolean hasPadding();
  /**
   * <pre>
   * This field need to be 256 bytes if set. This attempts to mitigate CRIME
   * attacks when sync communicate from client to server with compression. So if
   * compression is used, this need to set a 256 random ASCII bytes. If no
   * compression, this field should not be set. The server can ignore the
   * padding.
   * </pre>
   *
   * <code>optional string padding = 6;</code>
   * @return The padding.
   */
  java.lang.String getPadding();
  /**
   * <pre>
   * This field need to be 256 bytes if set. This attempts to mitigate CRIME
   * attacks when sync communicate from client to server with compression. So if
   * compression is used, this need to set a 256 random ASCII bytes. If no
   * compression, this field should not be set. The server can ignore the
   * padding.
   * </pre>
   *
   * <code>optional string padding = 6;</code>
   * @return The bytes for padding.
   */
  com.google.protobuf.ByteString
      getPaddingBytes();
}
