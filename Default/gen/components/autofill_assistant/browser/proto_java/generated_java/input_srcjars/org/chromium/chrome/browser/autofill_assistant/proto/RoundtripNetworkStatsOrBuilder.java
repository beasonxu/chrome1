// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface RoundtripNetworkStatsOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.RoundtripNetworkStats)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The total size of the received HTTP response body in bytes, before
   * decoding. This is essentially the network footprint of the received
   * response, modulo HTTP headers.
   * </pre>
   *
   * <code>optional int64 roundtrip_encoded_body_size_bytes = 1;</code>
   * @return Whether the roundtripEncodedBodySizeBytes field is set.
   */
  boolean hasRoundtripEncodedBodySizeBytes();
  /**
   * <pre>
   * The total size of the received HTTP response body in bytes, before
   * decoding. This is essentially the network footprint of the received
   * response, modulo HTTP headers.
   * </pre>
   *
   * <code>optional int64 roundtrip_encoded_body_size_bytes = 1;</code>
   * @return The roundtripEncodedBodySizeBytes.
   */
  long getRoundtripEncodedBodySizeBytes();

  /**
   * <pre>
   * The total size of the received HTTP response body in bytes, after
   * decoding. This is essentially the memory footprint of the received proto,
   * and a baseline to compare the footprint of individual actions with.
   * </pre>
   *
   * <code>optional int64 roundtrip_decoded_body_size_bytes = 2;</code>
   * @return Whether the roundtripDecodedBodySizeBytes field is set.
   */
  boolean hasRoundtripDecodedBodySizeBytes();
  /**
   * <pre>
   * The total size of the received HTTP response body in bytes, after
   * decoding. This is essentially the memory footprint of the received proto,
   * and a baseline to compare the footprint of individual actions with.
   * </pre>
   *
   * <code>optional int64 roundtrip_decoded_body_size_bytes = 2;</code>
   * @return The roundtripDecodedBodySizeBytes.
   */
  long getRoundtripDecodedBodySizeBytes();

  /**
   * <pre>
   * The network stats for ALL received actions. Note that this may include
   * actions that were not executed, so this list can be longer than
   * |processed_actions|.
   * </pre>
   *
   * <code>repeated .autofill_assistant.RoundtripNetworkStats.ActionNetworkStats action_stats = 3;</code>
   */
  java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.RoundtripNetworkStats.ActionNetworkStats> 
      getActionStatsList();
  /**
   * <pre>
   * The network stats for ALL received actions. Note that this may include
   * actions that were not executed, so this list can be longer than
   * |processed_actions|.
   * </pre>
   *
   * <code>repeated .autofill_assistant.RoundtripNetworkStats.ActionNetworkStats action_stats = 3;</code>
   */
  org.chromium.chrome.browser.autofill_assistant.proto.RoundtripNetworkStats.ActionNetworkStats getActionStats(int index);
  /**
   * <pre>
   * The network stats for ALL received actions. Note that this may include
   * actions that were not executed, so this list can be longer than
   * |processed_actions|.
   * </pre>
   *
   * <code>repeated .autofill_assistant.RoundtripNetworkStats.ActionNetworkStats action_stats = 3;</code>
   */
  int getActionStatsCount();

  /**
   * <pre>
   * Used for Chrome metrics only; in backend-metrics, this will always be 1 and
   * can be ignored.
   * </pre>
   *
   * <code>optional int32 num_roundtrips = 4;</code>
   * @return Whether the numRoundtrips field is set.
   */
  boolean hasNumRoundtrips();
  /**
   * <pre>
   * Used for Chrome metrics only; in backend-metrics, this will always be 1 and
   * can be ignored.
   * </pre>
   *
   * <code>optional int32 num_roundtrips = 4;</code>
   * @return The numRoundtrips.
   */
  int getNumRoundtrips();
}
