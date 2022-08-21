// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/autofill_assistant/browser/service.proto

package org.chromium.chrome.browser.autofill_assistant.proto;

public interface ConfigureBottomSheetProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:autofill_assistant.ConfigureBottomSheetProto)
    com.google.protobuf.MessageLiteOrBuilder {

  /**
   * <pre>
   * Whether the viewport should be resized. Resizing the viewport is an
   * expensive operation, so toggling the resize on/off should be done
   * cautiously.
   * </pre>
   *
   * <code>optional .autofill_assistant.ConfigureBottomSheetProto.ViewportResizing viewport_resizing = 1;</code>
   * @return Whether the viewportResizing field is set.
   */
  boolean hasViewportResizing();
  /**
   * <pre>
   * Whether the viewport should be resized. Resizing the viewport is an
   * expensive operation, so toggling the resize on/off should be done
   * cautiously.
   * </pre>
   *
   * <code>optional .autofill_assistant.ConfigureBottomSheetProto.ViewportResizing viewport_resizing = 1;</code>
   * @return The viewportResizing.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ConfigureBottomSheetProto.ViewportResizing getViewportResizing();

  /**
   * <pre>
   * Set the peek mode. This will change the peek mode of the sheet without
   * actually updating the sheet to that setting. If viewport_resizing is set
   * to RESIZE_LAYOUT_VIEWPORT or was set by a previous ConfigureBottomSheet
   * action, the viewport will be resized to match the new peek height.
   * </pre>
   *
   * <code>optional .autofill_assistant.ConfigureBottomSheetProto.PeekMode peek_mode = 2;</code>
   * @return Whether the peekMode field is set.
   */
  boolean hasPeekMode();
  /**
   * <pre>
   * Set the peek mode. This will change the peek mode of the sheet without
   * actually updating the sheet to that setting. If viewport_resizing is set
   * to RESIZE_LAYOUT_VIEWPORT or was set by a previous ConfigureBottomSheet
   * action, the viewport will be resized to match the new peek height.
   * </pre>
   *
   * <code>optional .autofill_assistant.ConfigureBottomSheetProto.PeekMode peek_mode = 2;</code>
   * @return The peekMode.
   */
  org.chromium.chrome.browser.autofill_assistant.proto.ConfigureBottomSheetProto.PeekMode getPeekMode();

  /**
   * <pre>
   * Maximum time to wait for the window to resize before continuing with the
   * script. If 0 or unset, the action doesn't wait.
   * </pre>
   *
   * <code>optional int32 resize_timeout_ms = 3;</code>
   * @return Whether the resizeTimeoutMs field is set.
   */
  boolean hasResizeTimeoutMs();
  /**
   * <pre>
   * Maximum time to wait for the window to resize before continuing with the
   * script. If 0 or unset, the action doesn't wait.
   * </pre>
   *
   * <code>optional int32 resize_timeout_ms = 3;</code>
   * @return The resizeTimeoutMs.
   */
  int getResizeTimeoutMs();

  /**
   * <pre>
   * Go to the expanded state (same as if the user swiped the bottom sheet
   * up).
   * </pre>
   *
   * <code>bool expand = 4;</code>
   * @return Whether the expand field is set.
   */
  boolean hasExpand();
  /**
   * <pre>
   * Go to the expanded state (same as if the user swiped the bottom sheet
   * up).
   * </pre>
   *
   * <code>bool expand = 4;</code>
   * @return The expand.
   */
  boolean getExpand();

  /**
   * <pre>
   * Go to the peek state (same as if the user swiped the bottom
   * sheet down).
   * </pre>
   *
   * <code>bool collapse = 5;</code>
   * @return Whether the collapse field is set.
   */
  boolean hasCollapse();
  /**
   * <pre>
   * Go to the peek state (same as if the user swiped the bottom
   * sheet down).
   * </pre>
   *
   * <code>bool collapse = 5;</code>
   * @return The collapse.
   */
  boolean getCollapse();

  public org.chromium.chrome.browser.autofill_assistant.proto.ConfigureBottomSheetProto.ApplyStateCase getApplyStateCase();
}
