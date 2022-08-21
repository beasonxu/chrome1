// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/overlay.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace overlay {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}

void Domain::AddObserver(Observer* observer) {
  RegisterEventHandlersIfNeeded();
  observers_.AddObserver(observer);
}

void Domain::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void Domain::RegisterEventHandlersIfNeeded() {
  if (event_handlers_registered_)
    return;
  event_handlers_registered_ = true;
  dispatcher_->RegisterEventHandler(
      "Overlay.inspectNodeRequested",
      base::BindRepeating(&Domain::DispatchInspectNodeRequestedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Overlay.nodeHighlightRequested",
      base::BindRepeating(&Domain::DispatchNodeHighlightRequestedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Overlay.screenshotRequested",
      base::BindRepeating(&Domain::DispatchScreenshotRequestedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Overlay.inspectModeCanceled",
      base::BindRepeating(&Domain::DispatchInspectModeCanceledEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Overlay.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}
void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Overlay.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::GetHighlightObjectForTest(
    std::unique_ptr<GetHighlightObjectForTestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHighlightObjectForTestResult>)> callback) {
  dispatcher_->SendMessage("Overlay.getHighlightObjectForTest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetHighlightObjectForTestResponse, std::move(callback)));
}
void ExperimentalDomain::GetGridHighlightObjectsForTest(
    std::unique_ptr<GetGridHighlightObjectsForTestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetGridHighlightObjectsForTestResult>)> callback) {
  dispatcher_->SendMessage("Overlay.getGridHighlightObjectsForTest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetGridHighlightObjectsForTestResponse, std::move(callback)));
}
void ExperimentalDomain::GetSourceOrderHighlightObjectForTest(
    std::unique_ptr<GetSourceOrderHighlightObjectForTestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSourceOrderHighlightObjectForTestResult>)> callback) {
  dispatcher_->SendMessage("Overlay.getSourceOrderHighlightObjectForTest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetSourceOrderHighlightObjectForTestResponse, std::move(callback)));
}
void ExperimentalDomain::HideHighlight(
    std::unique_ptr<HideHighlightParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)> callback) {
  dispatcher_->SendMessage("Overlay.hideHighlight", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHideHighlightResponse, std::move(callback)));
}
void ExperimentalDomain::HighlightFrame(
    std::unique_ptr<HighlightFrameParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightFrameResult>)> callback) {
  dispatcher_->SendMessage("Overlay.highlightFrame", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightFrameResponse, std::move(callback)));
}
void ExperimentalDomain::HighlightNode(
    std::unique_ptr<HighlightNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)> callback) {
  dispatcher_->SendMessage("Overlay.highlightNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightNodeResponse, std::move(callback)));
}
void ExperimentalDomain::HighlightQuad(
    std::unique_ptr<HighlightQuadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightQuadResult>)> callback) {
  dispatcher_->SendMessage("Overlay.highlightQuad", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightQuadResponse, std::move(callback)));
}
void ExperimentalDomain::HighlightRect(
    std::unique_ptr<HighlightRectParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)> callback) {
  dispatcher_->SendMessage("Overlay.highlightRect", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightRectResponse, std::move(callback)));
}
void ExperimentalDomain::HighlightSourceOrder(
    std::unique_ptr<HighlightSourceOrderParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightSourceOrderResult>)> callback) {
  dispatcher_->SendMessage("Overlay.highlightSourceOrder", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightSourceOrderResponse, std::move(callback)));
}
void ExperimentalDomain::SetInspectMode(
    std::unique_ptr<SetInspectModeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectModeResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setInspectMode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetInspectModeResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowAdHighlights(
    std::unique_ptr<SetShowAdHighlightsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowAdHighlightsResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowAdHighlights", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowAdHighlightsResponse, std::move(callback)));
}
void ExperimentalDomain::SetPausedInDebuggerMessage(
    std::unique_ptr<SetPausedInDebuggerMessageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPausedInDebuggerMessageResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setPausedInDebuggerMessage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetPausedInDebuggerMessageResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowDebugBorders(
    std::unique_ptr<SetShowDebugBordersParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowDebugBordersResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowDebugBorders", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowDebugBordersResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowFPSCounter(
    std::unique_ptr<SetShowFPSCounterParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFPSCounterResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowFPSCounter", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowFPSCounterResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowGridOverlays(
    std::unique_ptr<SetShowGridOverlaysParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowGridOverlaysResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowGridOverlays", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowGridOverlaysResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowFlexOverlays(
    std::unique_ptr<SetShowFlexOverlaysParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFlexOverlaysResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowFlexOverlays", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowFlexOverlaysResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowScrollSnapOverlays(
    std::unique_ptr<SetShowScrollSnapOverlaysParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollSnapOverlaysResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowScrollSnapOverlays", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowScrollSnapOverlaysResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowContainerQueryOverlays(
    std::unique_ptr<SetShowContainerQueryOverlaysParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowContainerQueryOverlaysResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowContainerQueryOverlays", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowContainerQueryOverlaysResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowPaintRects(
    std::unique_ptr<SetShowPaintRectsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowPaintRectsResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowPaintRects", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowPaintRectsResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowLayoutShiftRegions(
    std::unique_ptr<SetShowLayoutShiftRegionsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowLayoutShiftRegionsResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowLayoutShiftRegions", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowLayoutShiftRegionsResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowScrollBottleneckRects(
    std::unique_ptr<SetShowScrollBottleneckRectsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollBottleneckRectsResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowScrollBottleneckRects", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowScrollBottleneckRectsResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowHitTestBorders(
    std::unique_ptr<SetShowHitTestBordersParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHitTestBordersResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowHitTestBorders", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowHitTestBordersResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowWebVitals(
    std::unique_ptr<SetShowWebVitalsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowWebVitalsResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowWebVitals", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowWebVitalsResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowViewportSizeOnResize(
    std::unique_ptr<SetShowViewportSizeOnResizeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowViewportSizeOnResizeResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowViewportSizeOnResize", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowViewportSizeOnResizeResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowHinge(
    std::unique_ptr<SetShowHingeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHingeResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowHinge", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowHingeResponse, std::move(callback)));
}
void ExperimentalDomain::SetShowIsolatedElements(
    std::unique_ptr<SetShowIsolatedElementsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowIsolatedElementsResult>)> callback) {
  dispatcher_->SendMessage("Overlay.setShowIsolatedElements", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetShowIsolatedElementsResponse, std::move(callback)));
}


// static
void Domain::HandleDisableResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<DisableResult> result = DisableResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleEnableResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<EnableResult> result = EnableResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetHighlightObjectForTestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHighlightObjectForTestResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetHighlightObjectForTestResult> result = GetHighlightObjectForTestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetGridHighlightObjectsForTestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetGridHighlightObjectsForTestResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetGridHighlightObjectsForTestResult> result = GetGridHighlightObjectsForTestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetSourceOrderHighlightObjectForTestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSourceOrderHighlightObjectForTestResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetSourceOrderHighlightObjectForTestResult> result = GetSourceOrderHighlightObjectForTestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHideHighlightResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HideHighlightResult> result = HideHighlightResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightFrameResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightFrameResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HighlightFrameResult> result = HighlightFrameResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HighlightNodeResult> result = HighlightNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightQuadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightQuadResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HighlightQuadResult> result = HighlightQuadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightRectResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HighlightRectResult> result = HighlightRectResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightSourceOrderResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightSourceOrderResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<HighlightSourceOrderResult> result = HighlightSourceOrderResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetInspectModeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectModeResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetInspectModeResult> result = SetInspectModeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowAdHighlightsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowAdHighlightsResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowAdHighlightsResult> result = SetShowAdHighlightsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetPausedInDebuggerMessageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPausedInDebuggerMessageResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetPausedInDebuggerMessageResult> result = SetPausedInDebuggerMessageResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowDebugBordersResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowDebugBordersResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowDebugBordersResult> result = SetShowDebugBordersResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowFPSCounterResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFPSCounterResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowFPSCounterResult> result = SetShowFPSCounterResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowGridOverlaysResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowGridOverlaysResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowGridOverlaysResult> result = SetShowGridOverlaysResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowFlexOverlaysResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowFlexOverlaysResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowFlexOverlaysResult> result = SetShowFlexOverlaysResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowScrollSnapOverlaysResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollSnapOverlaysResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowScrollSnapOverlaysResult> result = SetShowScrollSnapOverlaysResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowContainerQueryOverlaysResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowContainerQueryOverlaysResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowContainerQueryOverlaysResult> result = SetShowContainerQueryOverlaysResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowPaintRectsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowPaintRectsResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowPaintRectsResult> result = SetShowPaintRectsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowLayoutShiftRegionsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowLayoutShiftRegionsResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowLayoutShiftRegionsResult> result = SetShowLayoutShiftRegionsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowScrollBottleneckRectsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowScrollBottleneckRectsResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowScrollBottleneckRectsResult> result = SetShowScrollBottleneckRectsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowHitTestBordersResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHitTestBordersResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowHitTestBordersResult> result = SetShowHitTestBordersResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowWebVitalsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowWebVitalsResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowWebVitalsResult> result = SetShowWebVitalsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowViewportSizeOnResizeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowViewportSizeOnResizeResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowViewportSizeOnResizeResult> result = SetShowViewportSizeOnResizeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowHingeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowHingeResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowHingeResult> result = SetShowHingeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetShowIsolatedElementsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetShowIsolatedElementsResult>)> callback,
    const MessageDispatcher::ReplyStatus& reply_status,
    const base::Value& response) {
  if (callback.is_null())
    return;

  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(reply_status, nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetShowIsolatedElementsResult> result = SetShowIsolatedElementsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchInspectNodeRequestedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InspectNodeRequestedParams> parsed_params(InspectNodeRequestedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInspectNodeRequested(*parsed_params);
  }
}

void Domain::DispatchNodeHighlightRequestedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<NodeHighlightRequestedParams> parsed_params(NodeHighlightRequestedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnNodeHighlightRequested(*parsed_params);
  }
}

void Domain::DispatchScreenshotRequestedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ScreenshotRequestedParams> parsed_params(ScreenshotRequestedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnScreenshotRequested(*parsed_params);
  }
}

void Domain::DispatchInspectModeCanceledEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InspectModeCanceledParams> parsed_params(InspectModeCanceledParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInspectModeCanceled(*parsed_params);
  }
}

Domain::Domain(MessageDispatcher* dispatcher)
    : dispatcher_(dispatcher) {
}

Domain::~Domain() {}

ExperimentalDomain::ExperimentalDomain(MessageDispatcher* dispatcher)
    : Domain(dispatcher) {}

ExperimentalDomain::~ExperimentalDomain() {}

void ExperimentalDomain::AddObserver(ExperimentalObserver* observer) {
  RegisterEventHandlersIfNeeded();
  observers_.AddObserver(observer);
}

void ExperimentalDomain::RemoveObserver(ExperimentalObserver* observer) {
  observers_.RemoveObserver(observer);
}

}  // namespace overlay

} // namespace autofill_assistant
