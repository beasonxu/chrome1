// third_party/blink/public/mojom/frame/remote_frame.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_REMOTE_FRAME_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_REMOTE_FRAME_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/remote_frame.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT RemoteFrameHostInterceptorForTesting : public RemoteFrameHost {
  virtual RemoteFrameHost* GetForwardingInterface() = 0;
  void SetInheritedEffectiveTouchAction(::cc::TouchAction touch_action) override;
  void UpdateRenderThrottlingStatus(bool is_throttled, bool subtree_throttled, bool display_locked) override;
  void VisibilityChanged(::blink::mojom::FrameVisibility visibility) override;
  void DidFocusFrame() override;
  void CheckCompleted() override;
  void CapturePaintPreviewOfCrossProcessSubframe(const ::gfx::Rect& clip_rect, const ::base::UnguessableToken& guid) override;
  void SetIsInert(bool inert) override;
  void DidChangeOpener(const absl::optional<::blink::LocalFrameToken>& opener_frame) override;
  void AdvanceFocus(::blink::mojom::FocusType focus_type, const ::blink::LocalFrameToken& source_frame_token) override;
  void RouteMessageEvent(const absl::optional<::blink::LocalFrameToken>& source_frame_token, const ::std::u16string& source_origin, const ::std::u16string& target_origin, ::blink::TransferableMessage message) override;
  void PrintCrossProcessSubframe(const ::gfx::Rect& frame_content_rect, int32_t document_cookie) override;
  void Detach() override;
  void UpdateViewportIntersection(::blink::mojom::ViewportIntersectionStatePtr intersection_state, const absl::optional<::blink::FrameVisualProperties>& visual_properties) override;
  void SynchronizeVisualProperties(const ::blink::FrameVisualProperties& properties) override;
  void OpenURL(OpenURLParamsPtr params) override;
};
class BLINK_COMMON_EXPORT RemoteFrameHostAsyncWaiter {
 public:
  explicit RemoteFrameHostAsyncWaiter(RemoteFrameHost* proxy);

  RemoteFrameHostAsyncWaiter(const RemoteFrameHostAsyncWaiter&) = delete;
  RemoteFrameHostAsyncWaiter& operator=(const RemoteFrameHostAsyncWaiter&) = delete;

  ~RemoteFrameHostAsyncWaiter();

 private:
  RemoteFrameHost* const proxy_;
};


class BLINK_COMMON_EXPORT RemoteFrameInterceptorForTesting : public RemoteFrame {
  virtual RemoteFrame* GetForwardingInterface() = 0;
  void WillEnterFullscreen(::blink::mojom::FullscreenOptionsPtr options) override;
  void EnforceInsecureNavigationsSet(const std::vector<uint32_t>& set) override;
  void SetFrameOwnerProperties(::blink::mojom::FrameOwnerPropertiesPtr properties) override;
  void EnforceInsecureRequestPolicy(::blink::mojom::InsecureRequestPolicy policy) override;
  void SetReplicatedOrigin(const ::url::Origin& origin, bool is_potentially_trustworthy_unique_origin) override;
  void SetReplicatedIsAdFrame(bool is_ad_frame) override;
  void SetReplicatedName(const std::string& name, const std::string& unique_name) override;
  void DispatchLoadEventForFrameOwner() override;
  void SetNeedsOcclusionTracking(bool needs_tracking) override;
  void Collapse(bool collapsed) override;
  void Focus() override;
  void SetHadStickyUserActivationBeforeNavigation(bool has_gesture) override;
  void BubbleLogicalScroll(::blink::mojom::ScrollDirection direction, ::ui::ScrollGranularity granularity) override;
  void UpdateUserActivationState(::blink::mojom::UserActivationUpdateType state_update_type, ::blink::mojom::UserActivationNotificationType notification_type) override;
  void SetEmbeddingToken(const ::base::UnguessableToken& embedding_token) override;
  void SetPageFocus(bool is_focused) override;
  void RenderFallbackContent() override;
  void RenderFallbackContentWithResourceTiming(::blink::mojom::ResourceTimingInfoPtr timing, const std::string& server_timing_value) override;
  void AddResourceTimingFromChild(::blink::mojom::ResourceTimingInfoPtr timing) override;
  void ScrollRectToVisible(const ::gfx::RectF& rect, ::blink::mojom::ScrollIntoViewParamsPtr params) override;
  void DidStartLoading() override;
  void DidStopLoading() override;
  void IntrinsicSizingInfoOfChildChanged(::blink::mojom::IntrinsicSizingInfoPtr sizing_info) override;
  void DidSetFramePolicyHeaders(::network::mojom::WebSandboxFlags sandbox_flags, const std::vector<::blink::ParsedPermissionsPolicyDeclaration>& parsed_permissions_policy) override;
  void DidUpdateFramePolicy(const ::blink::FramePolicy& frame_policy) override;
  void UpdateOpener(const absl::optional<::blink::FrameToken>& opener_frame_token) override;
  void DetachAndDispose() override;
  void EnableAutoResize(const ::gfx::Size& min_size, const ::gfx::Size& max_size) override;
  void DisableAutoResize() override;
  void DidUpdateVisualProperties(const ::cc::RenderFrameMetadata& metadata) override;
  void SetFrameSinkId(const ::viz::FrameSinkId& frame_sink_id) override;
  void ChildProcessGone() override;
  void CreateRemoteChild(const ::blink::RemoteFrameToken& token, const absl::optional<::blink::FrameToken>& opener_frame_token, ::blink::mojom::TreeScopeType tree_scope_type, ::blink::mojom::FrameReplicationStatePtr replication_state, const ::base::UnguessableToken& devtools_frame_token, RemoteFrameInterfacesFromBrowserPtr remote_frame_interfaces) override;
};
class BLINK_COMMON_EXPORT RemoteFrameAsyncWaiter {
 public:
  explicit RemoteFrameAsyncWaiter(RemoteFrame* proxy);

  RemoteFrameAsyncWaiter(const RemoteFrameAsyncWaiter&) = delete;
  RemoteFrameAsyncWaiter& operator=(const RemoteFrameAsyncWaiter&) = delete;

  ~RemoteFrameAsyncWaiter();

 private:
  RemoteFrame* const proxy_;
};


class BLINK_COMMON_EXPORT RemoteMainFrameInterceptorForTesting : public RemoteMainFrame {
  virtual RemoteMainFrame* GetForwardingInterface() = 0;
  void UpdateTextAutosizerPageInfo(::blink::mojom::TextAutosizerPageInfoPtr page_info) override;
};
class BLINK_COMMON_EXPORT RemoteMainFrameAsyncWaiter {
 public:
  explicit RemoteMainFrameAsyncWaiter(RemoteMainFrame* proxy);

  RemoteMainFrameAsyncWaiter(const RemoteMainFrameAsyncWaiter&) = delete;
  RemoteMainFrameAsyncWaiter& operator=(const RemoteMainFrameAsyncWaiter&) = delete;

  ~RemoteMainFrameAsyncWaiter();

 private:
  RemoteMainFrame* const proxy_;
};


class BLINK_COMMON_EXPORT RemoteMainFrameHostInterceptorForTesting : public RemoteMainFrameHost {
  virtual RemoteMainFrameHost* GetForwardingInterface() = 0;
  void FocusPage() override;
  void TakeFocus(bool reverse) override;
  void UpdateTargetURL(const ::GURL& url, UpdateTargetURLCallback callback) override;
  void RouteCloseEvent() override;
};
class BLINK_COMMON_EXPORT RemoteMainFrameHostAsyncWaiter {
 public:
  explicit RemoteMainFrameHostAsyncWaiter(RemoteMainFrameHost* proxy);

  RemoteMainFrameHostAsyncWaiter(const RemoteMainFrameHostAsyncWaiter&) = delete;
  RemoteMainFrameHostAsyncWaiter& operator=(const RemoteMainFrameHostAsyncWaiter&) = delete;

  ~RemoteMainFrameHostAsyncWaiter();
  void UpdateTargetURL(
      const ::GURL& url);

 private:
  RemoteMainFrameHost* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_REMOTE_FRAME_MOJOM_TEST_UTILS_H_