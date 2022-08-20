// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_OVERLAY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_OVERLAY_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_overlay.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/message_dispatcher.h"


namespace autofill_assistant {
namespace overlay {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // Fired when the node should be inspected. This happens after call to `setInspectMode` or when
  // user manually inspects an element.
  virtual void OnInspectNodeRequested(const InspectNodeRequestedParams& params) {}
  // Fired when the node should be highlighted. This happens after call to `setInspectMode`.
  virtual void OnNodeHighlightRequested(const NodeHighlightRequestedParams& params) {}
  // Fired when user asks to capture screenshot of some area on the page.
  virtual void OnScreenshotRequested(const ScreenshotRequestedParams& params) {}
  // Fired when user cancels the inspect mode.
  virtual void OnInspectModeCanceled(const InspectModeCanceledParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // Experimental: Fired when the node should be inspected. This happens after call to `setInspectMode` or when
  // user manually inspects an element.
  virtual void OnInspectNodeRequested(const InspectNodeRequestedParams& params) final {}
  // Experimental: Fired when the node should be highlighted. This happens after call to `setInspectMode`.
  virtual void OnNodeHighlightRequested(const NodeHighlightRequestedParams& params) final {}
  // Experimental: Fired when user asks to capture screenshot of some area on the page.
  virtual void OnScreenshotRequested(const ScreenshotRequestedParams& params) final {}
  // Experimental: Fired when user cancels the inspect mode.
  virtual void OnInspectModeCanceled(const InspectModeCanceledParams& params) final {}
};

// This domain provides various functionality related to drawing atop the inspected page.
class Domain {
 public:
  Domain(const Domain&) = delete;
  Domain& operator=(const Domain&) = delete;

  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(Observer* observer);
  void RemoveObserver(Observer* observer);

  // Return the experimental interface for this domain. Note that experimental
  // commands may be changed or removed at any time.
  ExperimentalDomain* GetExperimental();

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleDisableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleEnableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetHighlightObjectForTestResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHighlightObjectForTestResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetGridHighlightObjectsForTestResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetGridHighlightObjectsForTestResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetSourceOrderHighlightObjectForTestResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSourceOrderHighlightObjectForTestResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHideHighlightResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHighlightFrameResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightFrameResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHighlightNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHighlightQuadResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightQuadResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHighlightRectResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHighlightSourceOrderResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightSourceOrderResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetInspectModeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectModeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowAdHighlightsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowAdHighlightsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetPausedInDebuggerMessageResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPausedInDebuggerMessageResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowDebugBordersResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowDebugBordersResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowFPSCounterResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFPSCounterResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowGridOverlaysResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowGridOverlaysResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowFlexOverlaysResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFlexOverlaysResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowScrollSnapOverlaysResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollSnapOverlaysResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowContainerQueryOverlaysResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowContainerQueryOverlaysResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowPaintRectsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowPaintRectsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowLayoutShiftRegionsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowLayoutShiftRegionsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowScrollBottleneckRectsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollBottleneckRectsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowHitTestBordersResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHitTestBordersResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowWebVitalsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowWebVitalsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowViewportSizeOnResizeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowViewportSizeOnResizeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowHingeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHingeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetShowIsolatedElementsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowIsolatedElementsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchInspectNodeRequestedEvent(const base::Value& params);
  void DispatchNodeHighlightRequestedEvent(const base::Value& params);
  void DispatchScreenshotRequestedEvent(const base::Value& params);
  void DispatchInspectModeCanceledEvent(const base::Value& params);

  MessageDispatcher* dispatcher_;  // Not owned.
  base::ObserverList<ExperimentalObserver>::Unchecked observers_;

 protected:
  void RegisterEventHandlersIfNeeded();

 private:
  bool event_handlers_registered_ = false;

};

class ExperimentalDomain : public Domain {
 public:
  ExperimentalDomain(MessageDispatcher* dispatcher);

  ExperimentalDomain(const ExperimentalDomain&) = delete;
  ExperimentalDomain& operator=(const ExperimentalDomain&) = delete;

  ~ExperimentalDomain();

  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(ExperimentalObserver* observer);
  void RemoveObserver(ExperimentalObserver* observer);

  // Disables domain notifications.
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)>());

  // Enables domain notifications.
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)>());

  // For testing.
  void GetHighlightObjectForTest(std::unique_ptr<GetHighlightObjectForTestParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHighlightObjectForTestResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHighlightObjectForTestResult>)>());

  // For Persistent Grid testing.
  void GetGridHighlightObjectsForTest(std::unique_ptr<GetGridHighlightObjectsForTestParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetGridHighlightObjectsForTestResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetGridHighlightObjectsForTestResult>)>());

  // For Source Order Viewer testing.
  void GetSourceOrderHighlightObjectForTest(std::unique_ptr<GetSourceOrderHighlightObjectForTestParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSourceOrderHighlightObjectForTestResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSourceOrderHighlightObjectForTestResult>)>());

  // Hides any highlight.
  void HideHighlight(std::unique_ptr<HideHighlightParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)>());

  // Highlights owner element of the frame with given id.
  // Deprecated: Doesn't work reliablity and cannot be fixed due to process
  // separatation (the owner node might be in a different process). Determine
  // the owner node in the client and use highlightNode.
  void HighlightFrame(std::unique_ptr<HighlightFrameParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightFrameResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightFrameResult>)>());

  // Highlights DOM node with given id or with the given JavaScript object wrapper. Either nodeId or
  // objectId must be specified.
  void HighlightNode(std::unique_ptr<HighlightNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)>());

  // Highlights given quad. Coordinates are absolute with respect to the main frame viewport.
  void HighlightQuad(std::unique_ptr<HighlightQuadParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightQuadResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightQuadResult>)>());

  // Highlights given rectangle. Coordinates are absolute with respect to the main frame viewport.
  void HighlightRect(std::unique_ptr<HighlightRectParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)>());

  // Highlights the source order of the children of the DOM node with given id or with the given
  // JavaScript object wrapper. Either nodeId or objectId must be specified.
  void HighlightSourceOrder(std::unique_ptr<HighlightSourceOrderParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightSourceOrderResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightSourceOrderResult>)>());

  // Enters the 'inspect' mode. In this mode, elements that user is hovering over are highlighted.
  // Backend then generates 'inspectNodeRequested' event upon element selection.
  void SetInspectMode(std::unique_ptr<SetInspectModeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectModeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectModeResult>)>());

  // Highlights owner element of all frames detected to be ads.
  void SetShowAdHighlights(std::unique_ptr<SetShowAdHighlightsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowAdHighlightsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowAdHighlightsResult>)>());

  void SetPausedInDebuggerMessage(std::unique_ptr<SetPausedInDebuggerMessageParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPausedInDebuggerMessageResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPausedInDebuggerMessageResult>)>());

  // Requests that backend shows debug borders on layers
  void SetShowDebugBorders(std::unique_ptr<SetShowDebugBordersParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowDebugBordersResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowDebugBordersResult>)>());

  // Requests that backend shows the FPS counter
  void SetShowFPSCounter(std::unique_ptr<SetShowFPSCounterParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFPSCounterResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFPSCounterResult>)>());

  // Highlight multiple elements with the CSS Grid overlay.
  void SetShowGridOverlays(std::unique_ptr<SetShowGridOverlaysParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowGridOverlaysResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowGridOverlaysResult>)>());

  void SetShowFlexOverlays(std::unique_ptr<SetShowFlexOverlaysParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFlexOverlaysResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFlexOverlaysResult>)>());

  void SetShowScrollSnapOverlays(std::unique_ptr<SetShowScrollSnapOverlaysParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollSnapOverlaysResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollSnapOverlaysResult>)>());

  void SetShowContainerQueryOverlays(std::unique_ptr<SetShowContainerQueryOverlaysParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowContainerQueryOverlaysResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowContainerQueryOverlaysResult>)>());

  // Requests that backend shows paint rectangles
  void SetShowPaintRects(std::unique_ptr<SetShowPaintRectsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowPaintRectsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowPaintRectsResult>)>());

  // Requests that backend shows layout shift regions
  void SetShowLayoutShiftRegions(std::unique_ptr<SetShowLayoutShiftRegionsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowLayoutShiftRegionsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowLayoutShiftRegionsResult>)>());

  // Requests that backend shows scroll bottleneck rects
  void SetShowScrollBottleneckRects(std::unique_ptr<SetShowScrollBottleneckRectsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollBottleneckRectsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollBottleneckRectsResult>)>());

  // Deprecated, no longer has any effect.
  void SetShowHitTestBorders(std::unique_ptr<SetShowHitTestBordersParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHitTestBordersResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHitTestBordersResult>)>());

  // Request that backend shows an overlay with web vital metrics.
  void SetShowWebVitals(std::unique_ptr<SetShowWebVitalsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowWebVitalsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowWebVitalsResult>)>());

  // Paints viewport size upon main frame resize.
  void SetShowViewportSizeOnResize(std::unique_ptr<SetShowViewportSizeOnResizeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowViewportSizeOnResizeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowViewportSizeOnResizeResult>)>());

  // Add a dual screen device hinge
  void SetShowHinge(std::unique_ptr<SetShowHingeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHingeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHingeResult>)>());

  // Show elements in isolation mode with overlays.
  void SetShowIsolatedElements(std::unique_ptr<SetShowIsolatedElementsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowIsolatedElementsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowIsolatedElementsResult>)>());

};

}  // namespace overlay
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_OVERLAY_H_
