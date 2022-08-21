// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/view_layout.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ConfigBasedUrlProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ConfigBasedUrlProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <code>map&lt;string, string&gt; url = 1;</code>
   */
  int getUrlCount();
  /**
   * <code>map&lt;string, string&gt; url = 1;</code>
   */
  boolean containsUrl(
      java.lang.String key);
  /**
   * Use {@link #getUrlMap()} instead.
   */
  @java.lang.Deprecated
  java.util.Map<java.lang.String, java.lang.String>
  getUrl();
  /**
   * <code>map&lt;string, string&gt; url = 1;</code>
   */
  java.util.Map<java.lang.String, java.lang.String>
  getUrlMap();
  /**
   * <code>map&lt;string, string&gt; url = 1;</code>
   */

  java.lang.String getUrlOrDefault(
      java.lang.String key,
      java.lang.String defaultValue);
  /**
   * <code>map&lt;string, string&gt; url = 1;</code>
   */

  java.lang.String getUrlOrThrow(
      java.lang.String key);
}
