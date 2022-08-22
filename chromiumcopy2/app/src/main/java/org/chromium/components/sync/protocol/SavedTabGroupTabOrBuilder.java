// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/saved_tab_group_specifics.proto

package org.chromium.components.sync.protocol;

public interface SavedTabGroupTabOrBuilder extends
    // @@protoc_insertion_point(interface_extends:sync_pb.SavedTabGroupTab)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * An id that links the saved tab group tab to it's saved tab group.
   * </pre>
   *
   * <code>optional string group_guid = 1;</code>
   * @return Whether the groupGuid field is set.
   */
  boolean hasGroupGuid();
  /**
   * <pre>
   * An id that links the saved tab group tab to it's saved tab group.
   * </pre>
   *
   * <code>optional string group_guid = 1;</code>
   * @return The groupGuid.
   */
  java.lang.String getGroupGuid();
  /**
   * <pre>
   * An id that links the saved tab group tab to it's saved tab group.
   * </pre>
   *
   * <code>optional string group_guid = 1;</code>
   * @return The bytes for groupGuid.
   */
  com.google.protobuf.ByteString
      getGroupGuidBytes();

  /**
   * <pre>
   * The position in the Tab Strip the tab is located relative to the start of
   * the tab group. This is also the index in the saved_tabs_ vector in the
   * SavedTabGroup in the SavedTabGroupModel, which is updated by the
   * TabStripModel.
   * </pre>
   *
   * <code>optional int64 position = 2;</code>
   * @return Whether the position field is set.
   */
  boolean hasPosition();
  /**
   * <pre>
   * The position in the Tab Strip the tab is located relative to the start of
   * the tab group. This is also the index in the saved_tabs_ vector in the
   * SavedTabGroup in the SavedTabGroupModel, which is updated by the
   * TabStripModel.
   * </pre>
   *
   * <code>optional int64 position = 2;</code>
   * @return The position.
   */
  long getPosition();

  /**
   * <pre>
   * Tab Data used for constructing the tab.
   * </pre>
   *
   * <code>optional string url = 3;</code>
   * @return Whether the url field is set.
   */
  boolean hasUrl();
  /**
   * <pre>
   * Tab Data used for constructing the tab.
   * </pre>
   *
   * <code>optional string url = 3;</code>
   * @return The url.
   */
  java.lang.String getUrl();
  /**
   * <pre>
   * Tab Data used for constructing the tab.
   * </pre>
   *
   * <code>optional string url = 3;</code>
   * @return The bytes for url.
   */
  com.google.protobuf.ByteString
      getUrlBytes();
}
