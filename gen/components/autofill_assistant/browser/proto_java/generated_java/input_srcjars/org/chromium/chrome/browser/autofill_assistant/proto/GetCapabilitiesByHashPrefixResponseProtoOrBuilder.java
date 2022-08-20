// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface GetCapabilitiesByHashPrefixResponseProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.GetCapabilitiesByHashPrefixResponseProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Match information for the requested hash prefixes. No correlation should
   * be assumed between the order of returned info and the order of requested
   * prefixes. Clients are expected to match the returned urls to determine
   * which responses they are interested in.
   * </pre>
   *
   * <code>repeated .autofill_assistant.GetCapabilitiesByHashPrefixResponseProto.MatchInfoProto match_info = 1;</code>
   */
  java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.GetCapabilitiesByHashPrefixResponseProto.MatchInfoProto> 
      getMatchInfoList();
  /**
   * <pre>
   * Match information for the requested hash prefixes. No correlation should
   * be assumed between the order of returned info and the order of requested
   * prefixes. Clients are expected to match the returned urls to determine
   * which responses they are interested in.
   * </pre>
   *
   * <code>repeated .autofill_assistant.GetCapabilitiesByHashPrefixResponseProto.MatchInfoProto match_info = 1;</code>
   */
  org.chromium.chrome.browser.autofill_assistant.proto.GetCapabilitiesByHashPrefixResponseProto.MatchInfoProto getMatchInfo(int index);
  /**
   * <pre>
   * Match information for the requested hash prefixes. No correlation should
   * be assumed between the order of returned info and the order of requested
   * prefixes. Clients are expected to match the returned urls to determine
   * which responses they are interested in.
   * </pre>
   *
   * <code>repeated .autofill_assistant.GetCapabilitiesByHashPrefixResponseProto.MatchInfoProto match_info = 1;</code>
   */
  int getMatchInfoCount();
}
