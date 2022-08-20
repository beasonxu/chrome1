// third_party/blink/public/mojom/frame/frame.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/frame.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT KeepAliveHandleInterceptorForTesting : public KeepAliveHandle {
  virtual KeepAliveHandle* GetForwardingInterface() = 0;
};
class BLINK_COMMON_EXPORT KeepAliveHandleAsyncWaiter {
 public:
  explicit KeepAliveHandleAsyncWaiter(KeepAliveHandle* proxy);

  KeepAliveHandleAsyncWaiter(const KeepAliveHandleAsyncWaiter&) = delete;
  KeepAliveHandleAsyncWaiter& operator=(const KeepAliveHandleAsyncWaiter&) = delete;

  ~KeepAliveHandleAsyncWaiter();

 private:
  KeepAliveHandle* const proxy_;
};


class BLINK_COMMON_EXPORT KeepAliveHandleFactoryInterceptorForTesting : public KeepAliveHandleFactory {
  virtual KeepAliveHandleFactory* GetForwardingInterface() = 0;
  void IssueKeepAliveHandle(::mojo::PendingReceiver<KeepAliveHandle> keep_alive_handle) override;
};
class BLINK_COMMON_EXPORT KeepAliveHandleFactoryAsyncWaiter {
 public:
  explicit KeepAliveHandleFactoryAsyncWaiter(KeepAliveHandleFactory* proxy);

  KeepAliveHandleFactoryAsyncWaiter(const KeepAliveHandleFactoryAsyncWaiter&) = delete;
  KeepAliveHandleFactoryAsyncWaiter& operator=(const KeepAliveHandleFactoryAsyncWaiter&) = delete;

  ~KeepAliveHandleFactoryAsyncWaiter();

 private:
  KeepAliveHandleFactory* const proxy_;
};


class BLINK_COMMON_EXPORT LocalFrameHostInterceptorForTesting : public LocalFrameHost {
  virtual LocalFrameHost* GetForwardingInterface() = 0;
  void EnterFullscreen(::blink::mojom::FullscreenOptionsPtr options, EnterFullscreenCallback callback) override;
  void ExitFullscreen() override;
  void FullscreenStateChanged(bool is_fullscreen, ::blink::mojom::FullscreenOptionsPtr options) override;
  void RegisterProtocolHandler(const std::string& scheme, const ::GURL& url, bool user_gesture) override;
  void UnregisterProtocolHandler(const std::string& scheme, const ::GURL& url, bool user_gesture) override;
  void DidDisplayInsecureContent() override;
  void DidContainInsecureFormAction() override;
  void MainDocumentElementAvailable(bool uses_temporary_zoom_level) override;
  void SetNeedsOcclusionTracking(bool needs_tracking) override;
  void SetVirtualKeyboardOverlayPolicy(bool vk_overlays_content) override;
  void VisibilityChanged(::blink::mojom::FrameVisibility visibility) override;
  void DidChangeThemeColor(absl::optional<::SkColor> theme_color) override;
  void DidChangeBackgroundColor(::SkColor background_color, bool color_adjust) override;
  void DidFailLoadWithError(const ::GURL& url, int32_t error_code) override;
  void DidFocusFrame() override;
  void DidCallFocus() override;
  void EnforceInsecureRequestPolicy(::blink::mojom::InsecureRequestPolicy policy_bitmap) override;
  void EnforceInsecureNavigationsSet(const std::vector<uint32_t>& set) override;
  void SuddenTerminationDisablerChanged(bool present, ::blink::mojom::SuddenTerminationDisablerType disabler_type) override;
  void HadStickyUserActivationBeforeNavigationChanged(bool has_gesture) override;
  void ScrollRectToVisibleInParentFrame(const ::gfx::RectF& rect_to_scroll, ::blink::mojom::ScrollIntoViewParamsPtr params) override;
  void BubbleLogicalScrollInParentFrame(::blink::mojom::ScrollDirection direction, ::ui::ScrollGranularity granularity) override;
  void DidBlockNavigation(const ::GURL& blocked_url, const ::GURL& initiator_url, ::blink::mojom::NavigationBlockedReason reason) override;
  void DidChangeLoadProgress(double load_progress) override;
  void DidFinishLoad(const ::GURL& validated_url) override;
  void DispatchLoad() override;
  void GoToEntryAtOffset(int32_t offset, bool has_user_gesture) override;
  void NavigateToNavigationApiKey(const std::string& key, bool has_user_gesture) override;
  void UpdateTitle(const absl::optional<::std::u16string>& title, ::base::i18n::TextDirection title_direction) override;
  void UpdateUserActivationState(::blink::mojom::UserActivationUpdateType update_type, ::blink::mojom::UserActivationNotificationType notification_type) override;
  void HandleAccessibilityFindInPageResult(FindInPageResultAXParamsPtr params) override;
  void HandleAccessibilityFindInPageTermination() override;
  void DocumentOnLoadCompleted() override;
  void ForwardResourceTimingToParent(::blink::mojom::ResourceTimingInfoPtr timing) override;
  void DidDispatchDOMContentLoadedEvent() override;
  void RunModalAlertDialog(const ::std::u16string& alert_message, bool disable_third_party_subframe_suppresion, RunModalAlertDialogCallback callback) override;
  void RunModalConfirmDialog(const ::std::u16string& alert_message, bool disable_third_party_subframe_suppresion, RunModalConfirmDialogCallback callback) override;
  void RunModalPromptDialog(const ::std::u16string& alert_message, const ::std::u16string& default_value, bool disable_third_party_subframe_suppresion, RunModalPromptDialogCallback callback) override;
  void RunBeforeUnloadConfirm(bool is_reload, RunBeforeUnloadConfirmCallback callback) override;
  void UpdateFaviconURL(std::vector<::blink::mojom::FaviconURLPtr> favicon_urls) override;
  void DownloadURL(DownloadURLParamsPtr params) override;
  void FocusedElementChanged(bool is_editable_element, const ::gfx::Rect& bounds_in_frame_widget, ::blink::mojom::FocusType focus_type) override;
  void TextSelectionChanged(const ::std::u16string& text, uint32_t offset, const ::gfx::Range& range) override;
  void ShowPopupMenu(::mojo::PendingRemote<::blink::mojom::PopupMenuClient> popup_client, const ::gfx::Rect& bounds, int32_t item_height, double font_size, int32_t selected_item, std::vector<::blink::mojom::MenuItemPtr> menu_items, bool right_aligned, bool allow_multiple_selection) override;
  void CreateNewPopupWidget(::mojo::PendingAssociatedReceiver<::blink::mojom::PopupWidgetHost> popup_host, ::mojo::PendingAssociatedReceiver<::blink::mojom::WidgetHost> blink_widget_host, ::mojo::PendingAssociatedRemote<::blink::mojom::Widget> blink_widget) override;
  void ShowContextMenu(::mojo::PendingAssociatedRemote<::blink::mojom::ContextMenuClient> client, const ::blink::UntrustworthyContextMenuParams& params) override;
  void DidLoadResourceFromMemoryCache(const ::GURL& url, const std::string& http_method, const std::string& mime_type, ::network::mojom::RequestDestination request_destination, bool include_credentials) override;
  void DidChangeFrameOwnerProperties(const ::blink::FrameToken& child_frame_token, ::blink::mojom::FrameOwnerPropertiesPtr frame_owner_properties) override;
  void DidChangeOpener(const absl::optional<::blink::LocalFrameToken>& opener_frame) override;
  void DidChangeFramePolicy(const ::blink::FrameToken& child_frame_token, const ::blink::FramePolicy& frame_policy) override;
  void DidChangeIframeAttributes(const ::blink::FrameToken& child_frame_token, IframeAttributesPtr attributes) override;
  void CapturePaintPreviewOfSubframe(const ::gfx::Rect& clip_rect, const ::base::UnguessableToken& guid) override;
  void SetCloseListener(::mojo::PendingRemote<::blink::mojom::CloseListener> listener) override;
  void Detach() override;
  void GetKeepAliveHandleFactory(::mojo::PendingReceiver<KeepAliveHandleFactory> factory) override;
  void DidAddMessageToConsole(::blink::mojom::ConsoleMessageLevel log_level, const ::std::u16string& msg, uint32_t line_number, const absl::optional<::std::u16string>& source_id, const absl::optional<::std::u16string>& untrusted_stack_trace) override;
  void FrameSizeChanged(const ::gfx::Size& size) override;
  void DidInferColorScheme(::blink::mojom::PreferredColorScheme color_scheme) override;
  void DidChangeSrcDoc(const ::blink::FrameToken& child_frame_token, const std::string& srcdoc_value) override;
  void ReceivedDelegatedCapability(::blink::mojom::DelegatedCapability delegated_capability) override;
  void CreatePortal(::mojo::PendingAssociatedReceiver<::blink::mojom::Portal> portal, ::mojo::PendingAssociatedRemote<::blink::mojom::PortalClient> client, ::blink::mojom::RemoteFrameInterfacesFromRendererPtr remote_frame_interfaces, CreatePortalCallback callback) override;
  void AdoptPortal(const ::blink::PortalToken& portal_token, ::blink::mojom::RemoteFrameInterfacesFromRendererPtr remote_frame_interfaces, AdoptPortalCallback callback) override;
  void CreateFencedFrame(::mojo::PendingAssociatedReceiver<::blink::mojom::FencedFrameOwnerHost> fenced_frame, ::blink::mojom::FencedFrameMode mode, ::blink::mojom::RemoteFrameInterfacesFromRendererPtr remote_frame_interfaces, const ::blink::RemoteFrameToken& frame_token, const ::base::UnguessableToken& devtools_frame_token) override;
};
class BLINK_COMMON_EXPORT LocalFrameHostAsyncWaiter {
 public:
  explicit LocalFrameHostAsyncWaiter(LocalFrameHost* proxy);

  LocalFrameHostAsyncWaiter(const LocalFrameHostAsyncWaiter&) = delete;
  LocalFrameHostAsyncWaiter& operator=(const LocalFrameHostAsyncWaiter&) = delete;

  ~LocalFrameHostAsyncWaiter();
  void EnterFullscreen(
      ::blink::mojom::FullscreenOptionsPtr options, bool* out_granted);
  void RunModalAlertDialog(
      const ::std::u16string& alert_message, bool disable_third_party_subframe_suppresion);
  void RunModalConfirmDialog(
      const ::std::u16string& alert_message, bool disable_third_party_subframe_suppresion, bool* out_success);
  void RunModalPromptDialog(
      const ::std::u16string& alert_message, const ::std::u16string& default_value, bool disable_third_party_subframe_suppresion, bool* out_success, ::std::u16string* out_result);
  void RunBeforeUnloadConfirm(
      bool is_reload, bool* out_success);
  void CreatePortal(
      ::mojo::PendingAssociatedReceiver<::blink::mojom::Portal> portal, ::mojo::PendingAssociatedRemote<::blink::mojom::PortalClient> client, ::blink::mojom::RemoteFrameInterfacesFromRendererPtr remote_frame_interfaces, ::blink::mojom::FrameReplicationStatePtr* out_initial_replicated_state, ::blink::PortalToken* out_portal_token, ::blink::RemoteFrameToken* out_frame_token, ::base::UnguessableToken* out_devtools_frame_token);
  void AdoptPortal(
      const ::blink::PortalToken& portal_token, ::blink::mojom::RemoteFrameInterfacesFromRendererPtr remote_frame_interfaces, ::blink::mojom::FrameReplicationStatePtr* out_replicated_state, ::blink::RemoteFrameToken* out_frame_token, ::base::UnguessableToken* out_devtools_frame_token);

 private:
  LocalFrameHost* const proxy_;
};


class BLINK_COMMON_EXPORT LocalFrameInterceptorForTesting : public LocalFrame {
  virtual LocalFrame* GetForwardingInterface() = 0;
  void GetTextSurroundingSelection(uint32_t max_length, GetTextSurroundingSelectionCallback callback) override;
  void SendInterventionReport(const std::string& id, const std::string& message) override;
  void SetFrameOwnerProperties(::blink::mojom::FrameOwnerPropertiesPtr properties) override;
  void NotifyUserActivation(::blink::mojom::UserActivationNotificationType notification_type) override;
  void NotifyVirtualKeyboardOverlayRect(const ::gfx::Rect& keyboard_rect) override;
  void AddMessageToConsole(::blink::mojom::ConsoleMessageLevel level, const std::string& message, bool discard_duplicates) override;
  void AddInspectorIssue(::blink::mojom::InspectorIssueInfoPtr info) override;
  void SwapInImmediately() override;
  void CheckCompleted() override;
  void StopLoading() override;
  void Collapse(bool collapsed) override;
  void EnableViewSourceMode() override;
  void Focus() override;
  void ClearFocusedElement() override;
  void GetResourceSnapshotForWebBundle(::mojo::PendingReceiver<::data_decoder::mojom::ResourceSnapshotForWebBundle> receiver) override;
  void CopyImageAt(const ::gfx::Point& window_point) override;
  void SaveImageAt(const ::gfx::Point& window_point) override;
  void ReportBlinkFeatureUsage(const std::vector<::blink::mojom::WebFeature>& features) override;
  void RenderFallbackContent() override;
  void RenderFallbackContentWithResourceTiming(::blink::mojom::ResourceTimingInfoPtr timing, const std::string& server_timing_value) override;
  void BeforeUnload(bool is_reload, BeforeUnloadCallback callback) override;
  void MediaPlayerActionAt(const ::gfx::Point& location, ::blink::mojom::MediaPlayerActionPtr action) override;
  void PluginActionAt(const ::gfx::Point& location, PluginActionType action) override;
  void AdvanceFocusInFrame(::blink::mojom::FocusType focus_type, const absl::optional<::blink::RemoteFrameToken>& source_frame_token) override;
  void AdvanceFocusForIME(::blink::mojom::FocusType focus_type) override;
  void ReportContentSecurityPolicyViolation(::network::mojom::CSPViolationPtr violation) override;
  void DidUpdateFramePolicy(const ::blink::FramePolicy& frame_policy) override;
  void PostMessageEvent(const absl::optional<::blink::RemoteFrameToken>& source_frame_token, const ::std::u16string& source_origin, const ::std::u16string& target_origin, ::blink::TransferableMessage message) override;
  void JavaScriptMethodExecuteRequest(const ::std::u16string& object_name, const ::std::u16string& method_name, ::base::Value::List arguments, bool wants_result, JavaScriptMethodExecuteRequestCallback callback) override;
  void JavaScriptExecuteRequest(const ::std::u16string& javascript, bool wants_result, JavaScriptExecuteRequestCallback callback) override;
  void JavaScriptExecuteRequestForTests(const ::std::u16string& javascript, bool has_user_gesture, bool resolve_promises, int32_t world_id, JavaScriptExecuteRequestForTestsCallback callback) override;
  void JavaScriptExecuteRequestInIsolatedWorld(const ::std::u16string& javascript, bool wants_result, int32_t world_id, JavaScriptExecuteRequestInIsolatedWorldCallback callback) override;
  void BindReportingObserver(::mojo::PendingReceiver<::blink::mojom::ReportingObserver> receiver) override;
  void UpdateOpener(const absl::optional<::blink::FrameToken>& opener_frame_token) override;
  void GetSavableResourceLinks(GetSavableResourceLinksCallback callback) override;
  void MixedContentFound(const ::GURL& main_resource_url, const ::GURL& mixed_content_url, ::blink::mojom::RequestContextType request_context, bool was_allowed, const ::GURL& url_before_redirects, bool had_redirect, ::network::mojom::SourceLocationPtr source_location) override;
  void BindDevToolsAgent(::mojo::PendingAssociatedRemote<::blink::mojom::DevToolsAgentHost> agent_host, ::mojo::PendingAssociatedReceiver<::blink::mojom::DevToolsAgent> agent) override;
  void ExtractSmartClipData(const ::gfx::Rect& rect, ExtractSmartClipDataCallback callback) override;
  void HandleRendererDebugURL(const ::GURL& url) override;
  void GetCanonicalUrlForSharing(GetCanonicalUrlForSharingCallback callback) override;
  void GetOpenGraphMetadata(GetOpenGraphMetadataCallback callback) override;
  void SetNavigationApiHistoryEntriesForRestore(::blink::mojom::NavigationApiHistoryEntryArraysPtr entry_arrays) override;
};
class BLINK_COMMON_EXPORT LocalFrameAsyncWaiter {
 public:
  explicit LocalFrameAsyncWaiter(LocalFrame* proxy);

  LocalFrameAsyncWaiter(const LocalFrameAsyncWaiter&) = delete;
  LocalFrameAsyncWaiter& operator=(const LocalFrameAsyncWaiter&) = delete;

  ~LocalFrameAsyncWaiter();
  void GetTextSurroundingSelection(
      uint32_t max_length, ::std::u16string* out_content, uint32_t* out_start_offset, uint32_t* out_end_offset);
  void BeforeUnload(
      bool is_reload, bool* out_proceed, ::base::TimeTicks* out_before_unload_start_time, ::base::TimeTicks* out_before_unload_end_time);
  void JavaScriptMethodExecuteRequest(
      const ::std::u16string& object_name, const ::std::u16string& method_name, ::base::Value::List arguments, bool wants_result, ::base::Value* out_result);
  void JavaScriptExecuteRequest(
      const ::std::u16string& javascript, bool wants_result, ::base::Value* out_result);
  void JavaScriptExecuteRequestForTests(
      const ::std::u16string& javascript, bool has_user_gesture, bool resolve_promises, int32_t world_id, JavaScriptExecutionResultType* out_result_type, ::base::Value* out_result);
  void JavaScriptExecuteRequestInIsolatedWorld(
      const ::std::u16string& javascript, bool wants_result, int32_t world_id, ::base::Value* out_result);
  void GetSavableResourceLinks(
      GetSavableResourceLinksReplyPtr* out_reply);
  void ExtractSmartClipData(
      const ::gfx::Rect& rect, ::std::u16string* out_text, ::std::u16string* out_html, ::gfx::Rect* out_clip_rect);
  void GetCanonicalUrlForSharing(
      absl::optional<::GURL>* out_canonical_url);
  void GetOpenGraphMetadata(
      ::blink::mojom::OpenGraphMetadataPtr* out_metadata);

 private:
  LocalFrame* const proxy_;
};


class BLINK_COMMON_EXPORT HighPriorityLocalFrameInterceptorForTesting : public HighPriorityLocalFrame {
  virtual HighPriorityLocalFrame* GetForwardingInterface() = 0;
  void DispatchBeforeUnload(bool is_reload, DispatchBeforeUnloadCallback callback) override;
};
class BLINK_COMMON_EXPORT HighPriorityLocalFrameAsyncWaiter {
 public:
  explicit HighPriorityLocalFrameAsyncWaiter(HighPriorityLocalFrame* proxy);

  HighPriorityLocalFrameAsyncWaiter(const HighPriorityLocalFrameAsyncWaiter&) = delete;
  HighPriorityLocalFrameAsyncWaiter& operator=(const HighPriorityLocalFrameAsyncWaiter&) = delete;

  ~HighPriorityLocalFrameAsyncWaiter();
  void DispatchBeforeUnload(
      bool is_reload, bool* out_proceed, ::base::TimeTicks* out_before_unload_start_time, ::base::TimeTicks* out_before_unload_end_time);

 private:
  HighPriorityLocalFrame* const proxy_;
};


class BLINK_COMMON_EXPORT LocalMainFrameInterceptorForTesting : public LocalMainFrame {
  virtual LocalMainFrame* GetForwardingInterface() = 0;
  void AnimateDoubleTapZoom(const ::gfx::Point& point, const ::gfx::Rect& rect) override;
  void SetScaleFactor(float scale) override;
  void ClosePage(ClosePageCallback callback) override;
  void SetInitialFocus(bool reverse) override;
  void EnablePreferredSizeChangedMode() override;
  void ZoomToFindInPageRect(const ::gfx::Rect& rect_in_root_frame) override;
  void InstallCoopAccessMonitor(const ::blink::FrameToken& accessed_window, ::network::mojom::CrossOriginOpenerPolicyReporterParamsPtr coop_reporter_info) override;
  void OnPortalActivated(const ::blink::PortalToken& portal_token, ::mojo::PendingAssociatedRemote<::blink::mojom::Portal> portal, ::mojo::PendingAssociatedReceiver<::blink::mojom::PortalClient> portal_client, ::blink::TransferableMessage data, uint64_t trace_id, OnPortalActivatedCallback callback) override;
  void ForwardMessageFromHost(::blink::TransferableMessage message, const ::url::Origin& source_origin) override;
  void UpdateBrowserControlsState(::cc::BrowserControlsState constraints, ::cc::BrowserControlsState current, bool animate) override;
};
class BLINK_COMMON_EXPORT LocalMainFrameAsyncWaiter {
 public:
  explicit LocalMainFrameAsyncWaiter(LocalMainFrame* proxy);

  LocalMainFrameAsyncWaiter(const LocalMainFrameAsyncWaiter&) = delete;
  LocalMainFrameAsyncWaiter& operator=(const LocalMainFrameAsyncWaiter&) = delete;

  ~LocalMainFrameAsyncWaiter();
  void ClosePage(
      );
  void OnPortalActivated(
      const ::blink::PortalToken& portal_token, ::mojo::PendingAssociatedRemote<::blink::mojom::Portal> portal, ::mojo::PendingAssociatedReceiver<::blink::mojom::PortalClient> portal_client, ::blink::TransferableMessage data, uint64_t trace_id, ::blink::mojom::PortalActivateResult* out_result);

 private:
  LocalMainFrame* const proxy_;
};


class BLINK_COMMON_EXPORT LocalMainFrameHostInterceptorForTesting : public LocalMainFrameHost {
  virtual LocalMainFrameHost* GetForwardingInterface() = 0;
  void ScaleFactorChanged(float scale) override;
  void ContentsPreferredSizeChanged(const ::gfx::Size& pref_size) override;
  void TextAutosizerPageInfoChanged(::blink::mojom::TextAutosizerPageInfoPtr page_info) override;
  void FocusPage() override;
  void TakeFocus(bool reverse) override;
  void UpdateTargetURL(const ::GURL& url, UpdateTargetURLCallback callback) override;
  void RequestClose() override;
  void ShowCreatedWindow(const ::blink::LocalFrameToken& opener_frame_token, ::WindowOpenDisposition disposition, const ::gfx::Rect& rect, bool opened_by_user_gesture, ShowCreatedWindowCallback callback) override;
  void SetWindowRect(const ::gfx::Rect& bounds, SetWindowRectCallback callback) override;
  void DidFirstVisuallyNonEmptyPaint() override;
  void DidAccessInitialMainDocument() override;
};
class BLINK_COMMON_EXPORT LocalMainFrameHostAsyncWaiter {
 public:
  explicit LocalMainFrameHostAsyncWaiter(LocalMainFrameHost* proxy);

  LocalMainFrameHostAsyncWaiter(const LocalMainFrameHostAsyncWaiter&) = delete;
  LocalMainFrameHostAsyncWaiter& operator=(const LocalMainFrameHostAsyncWaiter&) = delete;

  ~LocalMainFrameHostAsyncWaiter();
  void UpdateTargetURL(
      const ::GURL& url);
  void ShowCreatedWindow(
      const ::blink::LocalFrameToken& opener_frame_token, ::WindowOpenDisposition disposition, const ::gfx::Rect& rect, bool opened_by_user_gesture);
  void SetWindowRect(
      const ::gfx::Rect& bounds);

 private:
  LocalMainFrameHost* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_MOJOM_TEST_UTILS_H_