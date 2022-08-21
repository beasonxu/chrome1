// content/common/renderer.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_TEST_UTILS_H_
#define CONTENT_COMMON_RENDERER_MOJOM_TEST_UTILS_H_

#include "content/common/renderer.mojom.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {


class CONTENT_EXPORT RendererInterceptorForTesting : public Renderer {
  virtual Renderer* GetForwardingInterface() = 0;
  void CreateAgentSchedulingGroup(::mojo::PendingReceiver<::IPC::mojom::ChannelBootstrap> bootstrap, ::mojo::PendingRemote<::blink::mojom::BrowserInterfaceBroker> broker_remote) override;
  void CreateAssociatedAgentSchedulingGroup(::mojo::PendingAssociatedReceiver<::content::mojom::AgentSchedulingGroup> agent_scheduling_group, ::mojo::PendingRemote<::blink::mojom::BrowserInterfaceBroker> broker_remote) override;
  void OnNetworkConnectionChanged(::net::NetworkChangeNotifier::ConnectionType connection_type, double max_bandwidth_mbps) override;
  void OnNetworkQualityChanged(::net::EffectiveConnectionType effective_connection_type, ::base::TimeDelta http_rtt, ::base::TimeDelta transport_rtt, double bandwidth_kbps) override;
  void SetWebKitSharedTimersSuspended(bool suspend) override;
  void UpdateScrollbarTheme(UpdateScrollbarThemeParamsPtr params) override;
  void OnSystemColorsChanged(int32_t aqua_color_variant, const std::string& highlight_text_color, const std::string& highlight_color) override;
  void UpdateSystemColorInfo(UpdateSystemColorInfoParamsPtr params) override;
  void PurgePluginListCache(bool reload_pages) override;
  void SetProcessState(RenderProcessBackgroundState background_state, RenderProcessVisibleState visible_state) override;
  void SetIsLockedToSite() override;
  void SetIsCrossOriginIsolated(bool value) override;
  void SetIsIsolatedApplication(bool value) override;
  void InitializeRenderer(const std::string& user_agent, const std::string& full_user_agent, const std::string& reduced_user_agent, const ::blink::UserAgentMetadata& metadata, const std::vector<std::string>& cors_exempt_header_list) override;
};
class CONTENT_EXPORT RendererAsyncWaiter {
 public:
  explicit RendererAsyncWaiter(Renderer* proxy);

  RendererAsyncWaiter(const RendererAsyncWaiter&) = delete;
  RendererAsyncWaiter& operator=(const RendererAsyncWaiter&) = delete;

  ~RendererAsyncWaiter();

 private:
  Renderer* const proxy_;
};




}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_MOJOM_TEST_UTILS_H_