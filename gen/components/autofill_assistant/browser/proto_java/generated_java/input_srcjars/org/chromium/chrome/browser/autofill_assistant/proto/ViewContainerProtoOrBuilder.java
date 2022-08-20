// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/view_layout.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ViewContainerProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ViewContainerProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * The list of views to add to this container.
   * </pre>
   *
   * <code>repeated .autofill_assistant.ViewProto views = 1;</code>
   */
  java.util.List<org.chromium.chrome.browser.autofill_assistant.proto.ViewProto> 
      getViewsList();
  /**
   * <pre>
   * The list of views to add to this container.
   * </pre>
   *
   * <code>repeated .autofill_assistant.ViewProto views = 1;</code>
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ViewProto getViews(int index);
  /**
   * <pre>
   * The list of views to add to this container.
   * </pre>
   *
   * <code>repeated .autofill_assistant.ViewProto views = 1;</code>
   */
  int getViewsCount();

  /**
   * <code>.autofill_assistant.LinearLayoutProto linear_layout = 2;</code>
   * @return Whether the linearLayout field is set.
   */
  boolean hasLinearLayout();
  /**
   * <code>.autofill_assistant.LinearLayoutProto linear_layout = 2;</code>
   * @return The linearLayout.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.LinearLayoutProto getLinearLayout();

  /**
   * <code>.autofill_assistant.VerticalExpanderAccordionProto expander_accordion = 3;</code>
   * @return Whether the expanderAccordion field is set.
   */
  boolean hasExpanderAccordion();
  /**
   * <code>.autofill_assistant.VerticalExpanderAccordionProto expander_accordion = 3;</code>
   * @return The expanderAccordion.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.VerticalExpanderAccordionProto getExpanderAccordion();

  public org.chromium.chrome.browser.autofill_assistant.proto.ViewContainerProto.ContainerCase getContainerCase();
}
