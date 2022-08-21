// third_party/blink/public/mojom/page/page.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_PAGE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_PAGE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/page/page.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT PageBroadcastInterceptorForTesting : public PageBroadcast {
  virtual PageBroadcast* GetForwardingInterface() = 0;
  void SetPageLifecycleState(PageLifecycleStatePtr state, PageRestoreParamsPtr page_restore_params, SetPageLifecycleStateCallback callback) override;
  void AudioStateChanged(bool is_audio_playing) override;
  void ActivatePrerenderedPage(PrerenderPageActivationParamsPtr prerender_page_activation_params, ActivatePrerenderedPageCallback callback) override;
  void SetInsidePortal(bool is_inside_portal) override;
  void UpdateWebPreferences(const ::blink::web_pref::WebPreferences& preferences) override;
  void UpdateRendererPreferences(const ::blink::RendererPreferences& preferences) override;
  void SetHistoryOffsetAndLength(int32_t offset, int32_t length) override;
  void SetPageBaseBackgroundColor(absl::optional<::SkColor> color) override;
  void CreateRemoteMainFrame(const ::blink::RemoteFrameToken& token, const absl::optional<::blink::FrameToken>& opener_frame_token, ::blink::mojom::blink::FrameReplicationStatePtr replication_state, const ::base::UnguessableToken& devtools_frame_token, ::blink::mojom::blink::RemoteFrameInterfacesFromBrowserPtr remote_frame_interfaces, ::blink::mojom::blink::RemoteMainFrameInterfacesPtr remote_main_frame_interfaces) override;
};
class CORE_EXPORT PageBroadcastAsyncWaiter {
 public:
  explicit PageBroadcastAsyncWaiter(PageBroadcast* proxy);

  PageBroadcastAsyncWaiter(const PageBroadcastAsyncWaiter&) = delete;
  PageBroadcastAsyncWaiter& operator=(const PageBroadcastAsyncWaiter&) = delete;

  ~PageBroadcastAsyncWaiter();
  void SetPageLifecycleState(
      PageLifecycleStatePtr state, PageRestoreParamsPtr page_restore_params);
  void ActivatePrerenderedPage(
      PrerenderPageActivationParamsPtr prerender_page_activation_params);

 private:
  PageBroadcast* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_PAGE_MOJOM_BLINK_TEST_UTILS_H_