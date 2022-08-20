// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/page.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace page {

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
      "Page.domContentEventFired",
      base::BindRepeating(&Domain::DispatchDomContentEventFiredEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.fileChooserOpened",
      base::BindRepeating(&Domain::DispatchFileChooserOpenedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameAttached",
      base::BindRepeating(&Domain::DispatchFrameAttachedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameClearedScheduledNavigation",
      base::BindRepeating(&Domain::DispatchFrameClearedScheduledNavigationEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameDetached",
      base::BindRepeating(&Domain::DispatchFrameDetachedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameNavigated",
      base::BindRepeating(&Domain::DispatchFrameNavigatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.documentOpened",
      base::BindRepeating(&Domain::DispatchDocumentOpenedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameResized",
      base::BindRepeating(&Domain::DispatchFrameResizedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameRequestedNavigation",
      base::BindRepeating(&Domain::DispatchFrameRequestedNavigationEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameScheduledNavigation",
      base::BindRepeating(&Domain::DispatchFrameScheduledNavigationEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameStartedLoading",
      base::BindRepeating(&Domain::DispatchFrameStartedLoadingEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.frameStoppedLoading",
      base::BindRepeating(&Domain::DispatchFrameStoppedLoadingEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.downloadWillBegin",
      base::BindRepeating(&Domain::DispatchDownloadWillBeginEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.downloadProgress",
      base::BindRepeating(&Domain::DispatchDownloadProgressEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.interstitialHidden",
      base::BindRepeating(&Domain::DispatchInterstitialHiddenEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.interstitialShown",
      base::BindRepeating(&Domain::DispatchInterstitialShownEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.javascriptDialogClosed",
      base::BindRepeating(&Domain::DispatchJavascriptDialogClosedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.javascriptDialogOpening",
      base::BindRepeating(&Domain::DispatchJavascriptDialogOpeningEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.lifecycleEvent",
      base::BindRepeating(&Domain::DispatchLifecycleEventEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.backForwardCacheNotUsed",
      base::BindRepeating(&Domain::DispatchBackForwardCacheNotUsedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.prerenderAttemptCompleted",
      base::BindRepeating(&Domain::DispatchPrerenderAttemptCompletedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.loadEventFired",
      base::BindRepeating(&Domain::DispatchLoadEventFiredEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.navigatedWithinDocument",
      base::BindRepeating(&Domain::DispatchNavigatedWithinDocumentEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.screencastFrame",
      base::BindRepeating(&Domain::DispatchScreencastFrameEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.screencastVisibilityChanged",
      base::BindRepeating(&Domain::DispatchScreencastVisibilityChangedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.windowOpen",
      base::BindRepeating(&Domain::DispatchWindowOpenEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Page.compilationCacheProduced",
      base::BindRepeating(&Domain::DispatchCompilationCacheProducedEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::AddScriptToEvaluateOnLoad(
    std::unique_ptr<AddScriptToEvaluateOnLoadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddScriptToEvaluateOnLoadResult>)> callback) {
  dispatcher_->SendMessage("Page.addScriptToEvaluateOnLoad", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddScriptToEvaluateOnLoadResponse, std::move(callback)));
}
void Domain::AddScriptToEvaluateOnNewDocument(
    std::unique_ptr<AddScriptToEvaluateOnNewDocumentParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback) {
  dispatcher_->SendMessage("Page.addScriptToEvaluateOnNewDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddScriptToEvaluateOnNewDocumentResponse, std::move(callback)));
}

void Domain::AddScriptToEvaluateOnNewDocument(const std::string& source, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback) {
  std::unique_ptr<AddScriptToEvaluateOnNewDocumentParams> params = AddScriptToEvaluateOnNewDocumentParams::Builder()
      .SetSource(std::move(source))
      .Build();
dispatcher_->SendMessage("Page.addScriptToEvaluateOnNewDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddScriptToEvaluateOnNewDocumentResponse, std::move(callback)));
}
void Domain::BringToFront(
    std::unique_ptr<BringToFrontParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<BringToFrontResult>)> callback) {
  dispatcher_->SendMessage("Page.bringToFront", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleBringToFrontResponse, std::move(callback)));
}

void Domain::BringToFront(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<BringToFrontParams> params = BringToFrontParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.bringToFront", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::BringToFront(std::unique_ptr<BringToFrontParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.bringToFront", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::CaptureScreenshot(
    std::unique_ptr<CaptureScreenshotParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureScreenshotResult>)> callback) {
  dispatcher_->SendMessage("Page.captureScreenshot", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCaptureScreenshotResponse, std::move(callback)));
}

void Domain::CaptureScreenshot(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureScreenshotResult>)> callback) {
  std::unique_ptr<CaptureScreenshotParams> params = CaptureScreenshotParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.captureScreenshot", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCaptureScreenshotResponse, std::move(callback)));
}
void ExperimentalDomain::CaptureSnapshot(
    std::unique_ptr<CaptureSnapshotParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureSnapshotResult>)> callback) {
  dispatcher_->SendMessage("Page.captureSnapshot", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCaptureSnapshotResponse, std::move(callback)));
}
void ExperimentalDomain::ClearDeviceMetricsOverride(
    std::unique_ptr<ClearDeviceMetricsOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback) {
  dispatcher_->SendMessage("Page.clearDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearDeviceMetricsOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::ClearDeviceOrientationOverride(
    std::unique_ptr<ClearDeviceOrientationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceOrientationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Page.clearDeviceOrientationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearDeviceOrientationOverrideResponse, std::move(callback)));
}
void Domain::ClearGeolocationOverride(
    std::unique_ptr<ClearGeolocationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearGeolocationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Page.clearGeolocationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearGeolocationOverrideResponse, std::move(callback)));
}

void Domain::ClearGeolocationOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ClearGeolocationOverrideParams> params = ClearGeolocationOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.clearGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ClearGeolocationOverride(std::unique_ptr<ClearGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.clearGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::CreateIsolatedWorld(
    std::unique_ptr<CreateIsolatedWorldParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateIsolatedWorldResult>)> callback) {
  dispatcher_->SendMessage("Page.createIsolatedWorld", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCreateIsolatedWorldResponse, std::move(callback)));
}

void Domain::CreateIsolatedWorld(const std::string& frame_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateIsolatedWorldResult>)> callback) {
  std::unique_ptr<CreateIsolatedWorldParams> params = CreateIsolatedWorldParams::Builder()
      .SetFrameId(std::move(frame_id))
      .Build();
dispatcher_->SendMessage("Page.createIsolatedWorld", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCreateIsolatedWorldResponse, std::move(callback)));
}
void ExperimentalDomain::DeleteCookie(
    std::unique_ptr<DeleteCookieParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DeleteCookieResult>)> callback) {
  dispatcher_->SendMessage("Page.deleteCookie", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDeleteCookieResponse, std::move(callback)));
}
void Domain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Page.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Page.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::GetAppManifest(
    std::unique_ptr<GetAppManifestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAppManifestResult>)> callback) {
  dispatcher_->SendMessage("Page.getAppManifest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetAppManifestResponse, std::move(callback)));
}

void Domain::GetAppManifest(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAppManifestResult>)> callback) {
  std::unique_ptr<GetAppManifestParams> params = GetAppManifestParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getAppManifest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetAppManifestResponse, std::move(callback)));
}
void ExperimentalDomain::GetInstallabilityErrors(
    std::unique_ptr<GetInstallabilityErrorsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInstallabilityErrorsResult>)> callback) {
  dispatcher_->SendMessage("Page.getInstallabilityErrors", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetInstallabilityErrorsResponse, std::move(callback)));
}
void ExperimentalDomain::GetManifestIcons(
    std::unique_ptr<GetManifestIconsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetManifestIconsResult>)> callback) {
  dispatcher_->SendMessage("Page.getManifestIcons", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetManifestIconsResponse, std::move(callback)));
}
void ExperimentalDomain::GetAppId(
    std::unique_ptr<GetAppIdParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAppIdResult>)> callback) {
  dispatcher_->SendMessage("Page.getAppId", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetAppIdResponse, std::move(callback)));
}
void ExperimentalDomain::GetCookies(
    std::unique_ptr<GetCookiesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetCookiesResult>)> callback) {
  dispatcher_->SendMessage("Page.getCookies", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetCookiesResponse, std::move(callback)));
}
void Domain::GetFrameTree(
    std::unique_ptr<GetFrameTreeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFrameTreeResult>)> callback) {
  dispatcher_->SendMessage("Page.getFrameTree", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetFrameTreeResponse, std::move(callback)));
}

void Domain::GetFrameTree(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFrameTreeResult>)> callback) {
  std::unique_ptr<GetFrameTreeParams> params = GetFrameTreeParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getFrameTree", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetFrameTreeResponse, std::move(callback)));
}
void Domain::GetLayoutMetrics(
    std::unique_ptr<GetLayoutMetricsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayoutMetricsResult>)> callback) {
  dispatcher_->SendMessage("Page.getLayoutMetrics", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetLayoutMetricsResponse, std::move(callback)));
}

void Domain::GetLayoutMetrics(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayoutMetricsResult>)> callback) {
  std::unique_ptr<GetLayoutMetricsParams> params = GetLayoutMetricsParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getLayoutMetrics", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetLayoutMetricsResponse, std::move(callback)));
}
void Domain::GetNavigationHistory(
    std::unique_ptr<GetNavigationHistoryParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNavigationHistoryResult>)> callback) {
  dispatcher_->SendMessage("Page.getNavigationHistory", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetNavigationHistoryResponse, std::move(callback)));
}

void Domain::GetNavigationHistory(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNavigationHistoryResult>)> callback) {
  std::unique_ptr<GetNavigationHistoryParams> params = GetNavigationHistoryParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.getNavigationHistory", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetNavigationHistoryResponse, std::move(callback)));
}
void Domain::ResetNavigationHistory(
    std::unique_ptr<ResetNavigationHistoryParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetNavigationHistoryResult>)> callback) {
  dispatcher_->SendMessage("Page.resetNavigationHistory", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResetNavigationHistoryResponse, std::move(callback)));
}

void Domain::ResetNavigationHistory(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ResetNavigationHistoryParams> params = ResetNavigationHistoryParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.resetNavigationHistory", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ResetNavigationHistory(std::unique_ptr<ResetNavigationHistoryParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.resetNavigationHistory", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::GetResourceContent(
    std::unique_ptr<GetResourceContentParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResourceContentResult>)> callback) {
  dispatcher_->SendMessage("Page.getResourceContent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetResourceContentResponse, std::move(callback)));
}
void ExperimentalDomain::GetResourceTree(
    std::unique_ptr<GetResourceTreeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResourceTreeResult>)> callback) {
  dispatcher_->SendMessage("Page.getResourceTree", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetResourceTreeResponse, std::move(callback)));
}
void Domain::HandleJavaScriptDialog(
    std::unique_ptr<HandleJavaScriptDialogParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleJavaScriptDialogResult>)> callback) {
  dispatcher_->SendMessage("Page.handleJavaScriptDialog", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHandleJavaScriptDialogResponse, std::move(callback)));
}

void Domain::HandleJavaScriptDialog(bool accept, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<HandleJavaScriptDialogParams> params = HandleJavaScriptDialogParams::Builder()
      .SetAccept(std::move(accept))
      .Build();
  dispatcher_->SendMessage("Page.handleJavaScriptDialog", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HandleJavaScriptDialog(std::unique_ptr<HandleJavaScriptDialogParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.handleJavaScriptDialog", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Navigate(
    std::unique_ptr<NavigateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<NavigateResult>)> callback) {
  dispatcher_->SendMessage("Page.navigate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleNavigateResponse, std::move(callback)));
}

void Domain::Navigate(const std::string& url, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<NavigateResult>)> callback) {
  std::unique_ptr<NavigateParams> params = NavigateParams::Builder()
      .SetUrl(std::move(url))
      .Build();
dispatcher_->SendMessage("Page.navigate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleNavigateResponse, std::move(callback)));
}
void Domain::NavigateToHistoryEntry(
    std::unique_ptr<NavigateToHistoryEntryParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<NavigateToHistoryEntryResult>)> callback) {
  dispatcher_->SendMessage("Page.navigateToHistoryEntry", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleNavigateToHistoryEntryResponse, std::move(callback)));
}

void Domain::NavigateToHistoryEntry(int entry_id, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<NavigateToHistoryEntryParams> params = NavigateToHistoryEntryParams::Builder()
      .SetEntryId(std::move(entry_id))
      .Build();
  dispatcher_->SendMessage("Page.navigateToHistoryEntry", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::NavigateToHistoryEntry(std::unique_ptr<NavigateToHistoryEntryParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.navigateToHistoryEntry", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::PrintToPDF(
    std::unique_ptr<PrintToPDFParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PrintToPDFResult>)> callback) {
  dispatcher_->SendMessage("Page.printToPDF", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandlePrintToPDFResponse, std::move(callback)));
}

void Domain::PrintToPDF(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PrintToPDFResult>)> callback) {
  std::unique_ptr<PrintToPDFParams> params = PrintToPDFParams::Builder()
      .Build();
dispatcher_->SendMessage("Page.printToPDF", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandlePrintToPDFResponse, std::move(callback)));
}
void Domain::Reload(
    std::unique_ptr<ReloadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReloadResult>)> callback) {
  dispatcher_->SendMessage("Page.reload", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleReloadResponse, std::move(callback)));
}

void Domain::Reload(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ReloadParams> params = ReloadParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.reload", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Reload(std::unique_ptr<ReloadParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.reload", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::RemoveScriptToEvaluateOnLoad(
    std::unique_ptr<RemoveScriptToEvaluateOnLoadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)> callback) {
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnLoad", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveScriptToEvaluateOnLoadResponse, std::move(callback)));
}
void Domain::RemoveScriptToEvaluateOnNewDocument(
    std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)> callback) {
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnNewDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveScriptToEvaluateOnNewDocumentResponse, std::move(callback)));
}

void Domain::RemoveScriptToEvaluateOnNewDocument(const std::string& identifier, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params = RemoveScriptToEvaluateOnNewDocumentParams::Builder()
      .SetIdentifier(std::move(identifier))
      .Build();
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnNewDocument", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveScriptToEvaluateOnNewDocument(std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.removeScriptToEvaluateOnNewDocument", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::ScreencastFrameAck(
    std::unique_ptr<ScreencastFrameAckParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ScreencastFrameAckResult>)> callback) {
  dispatcher_->SendMessage("Page.screencastFrameAck", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleScreencastFrameAckResponse, std::move(callback)));
}
void ExperimentalDomain::SearchInResource(
    std::unique_ptr<SearchInResourceParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SearchInResourceResult>)> callback) {
  dispatcher_->SendMessage("Page.searchInResource", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSearchInResourceResponse, std::move(callback)));
}
void ExperimentalDomain::SetAdBlockingEnabled(
    std::unique_ptr<SetAdBlockingEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAdBlockingEnabledResult>)> callback) {
  dispatcher_->SendMessage("Page.setAdBlockingEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAdBlockingEnabledResponse, std::move(callback)));
}
void ExperimentalDomain::SetBypassCSP(
    std::unique_ptr<SetBypassCSPParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBypassCSPResult>)> callback) {
  dispatcher_->SendMessage("Page.setBypassCSP", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetBypassCSPResponse, std::move(callback)));
}
void ExperimentalDomain::GetPermissionsPolicyState(
    std::unique_ptr<GetPermissionsPolicyStateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPermissionsPolicyStateResult>)> callback) {
  dispatcher_->SendMessage("Page.getPermissionsPolicyState", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetPermissionsPolicyStateResponse, std::move(callback)));
}
void ExperimentalDomain::GetOriginTrials(
    std::unique_ptr<GetOriginTrialsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetOriginTrialsResult>)> callback) {
  dispatcher_->SendMessage("Page.getOriginTrials", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetOriginTrialsResponse, std::move(callback)));
}
void ExperimentalDomain::SetDeviceMetricsOverride(
    std::unique_ptr<SetDeviceMetricsOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback) {
  dispatcher_->SendMessage("Page.setDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDeviceMetricsOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::SetDeviceOrientationOverride(
    std::unique_ptr<SetDeviceOrientationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceOrientationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Page.setDeviceOrientationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDeviceOrientationOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::SetFontFamilies(
    std::unique_ptr<SetFontFamiliesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFontFamiliesResult>)> callback) {
  dispatcher_->SendMessage("Page.setFontFamilies", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetFontFamiliesResponse, std::move(callback)));
}
void ExperimentalDomain::SetFontSizes(
    std::unique_ptr<SetFontSizesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFontSizesResult>)> callback) {
  dispatcher_->SendMessage("Page.setFontSizes", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetFontSizesResponse, std::move(callback)));
}
void Domain::SetDocumentContent(
    std::unique_ptr<SetDocumentContentParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentContentResult>)> callback) {
  dispatcher_->SendMessage("Page.setDocumentContent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDocumentContentResponse, std::move(callback)));
}

void Domain::SetDocumentContent(const std::string& frame_id, const std::string& html, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetDocumentContentParams> params = SetDocumentContentParams::Builder()
      .SetFrameId(std::move(frame_id))
      .SetHtml(std::move(html))
      .Build();
  dispatcher_->SendMessage("Page.setDocumentContent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetDocumentContent(std::unique_ptr<SetDocumentContentParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.setDocumentContent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetDownloadBehavior(
    std::unique_ptr<SetDownloadBehaviorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDownloadBehaviorResult>)> callback) {
  dispatcher_->SendMessage("Page.setDownloadBehavior", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDownloadBehaviorResponse, std::move(callback)));
}
void Domain::SetGeolocationOverride(
    std::unique_ptr<SetGeolocationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetGeolocationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Page.setGeolocationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetGeolocationOverrideResponse, std::move(callback)));
}

void Domain::SetGeolocationOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetGeolocationOverrideParams> params = SetGeolocationOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.setGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetGeolocationOverride(std::unique_ptr<SetGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.setGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetLifecycleEventsEnabled(
    std::unique_ptr<SetLifecycleEventsEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLifecycleEventsEnabledResult>)> callback) {
  dispatcher_->SendMessage("Page.setLifecycleEventsEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetLifecycleEventsEnabledResponse, std::move(callback)));
}
void ExperimentalDomain::SetTouchEmulationEnabled(
    std::unique_ptr<SetTouchEmulationEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTouchEmulationEnabledResult>)> callback) {
  dispatcher_->SendMessage("Page.setTouchEmulationEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetTouchEmulationEnabledResponse, std::move(callback)));
}
void ExperimentalDomain::StartScreencast(
    std::unique_ptr<StartScreencastParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartScreencastResult>)> callback) {
  dispatcher_->SendMessage("Page.startScreencast", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartScreencastResponse, std::move(callback)));
}
void Domain::StopLoading(
    std::unique_ptr<StopLoadingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopLoadingResult>)> callback) {
  dispatcher_->SendMessage("Page.stopLoading", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopLoadingResponse, std::move(callback)));
}

void Domain::StopLoading(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<StopLoadingParams> params = StopLoadingParams::Builder()
      .Build();
  dispatcher_->SendMessage("Page.stopLoading", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::StopLoading(std::unique_ptr<StopLoadingParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Page.stopLoading", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::Crash(
    std::unique_ptr<CrashParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CrashResult>)> callback) {
  dispatcher_->SendMessage("Page.crash", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCrashResponse, std::move(callback)));
}
void ExperimentalDomain::Close(
    std::unique_ptr<CloseParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseResult>)> callback) {
  dispatcher_->SendMessage("Page.close", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCloseResponse, std::move(callback)));
}
void ExperimentalDomain::SetWebLifecycleState(
    std::unique_ptr<SetWebLifecycleStateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetWebLifecycleStateResult>)> callback) {
  dispatcher_->SendMessage("Page.setWebLifecycleState", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetWebLifecycleStateResponse, std::move(callback)));
}
void ExperimentalDomain::StopScreencast(
    std::unique_ptr<StopScreencastParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopScreencastResult>)> callback) {
  dispatcher_->SendMessage("Page.stopScreencast", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopScreencastResponse, std::move(callback)));
}
void ExperimentalDomain::ProduceCompilationCache(
    std::unique_ptr<ProduceCompilationCacheParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ProduceCompilationCacheResult>)> callback) {
  dispatcher_->SendMessage("Page.produceCompilationCache", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleProduceCompilationCacheResponse, std::move(callback)));
}
void ExperimentalDomain::AddCompilationCache(
    std::unique_ptr<AddCompilationCacheParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddCompilationCacheResult>)> callback) {
  dispatcher_->SendMessage("Page.addCompilationCache", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddCompilationCacheResponse, std::move(callback)));
}
void ExperimentalDomain::ClearCompilationCache(
    std::unique_ptr<ClearCompilationCacheParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearCompilationCacheResult>)> callback) {
  dispatcher_->SendMessage("Page.clearCompilationCache", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearCompilationCacheResponse, std::move(callback)));
}
void ExperimentalDomain::SetSPCTransactionMode(
    std::unique_ptr<SetSPCTransactionModeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSPCTransactionModeResult>)> callback) {
  dispatcher_->SendMessage("Page.setSPCTransactionMode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetSPCTransactionModeResponse, std::move(callback)));
}
void ExperimentalDomain::GenerateTestReport(
    std::unique_ptr<GenerateTestReportParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GenerateTestReportResult>)> callback) {
  dispatcher_->SendMessage("Page.generateTestReport", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGenerateTestReportResponse, std::move(callback)));
}
void ExperimentalDomain::WaitForDebugger(
    std::unique_ptr<WaitForDebuggerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<WaitForDebuggerResult>)> callback) {
  dispatcher_->SendMessage("Page.waitForDebugger", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleWaitForDebuggerResponse, std::move(callback)));
}
void ExperimentalDomain::SetInterceptFileChooserDialog(
    std::unique_ptr<SetInterceptFileChooserDialogParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInterceptFileChooserDialogResult>)> callback) {
  dispatcher_->SendMessage("Page.setInterceptFileChooserDialog", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetInterceptFileChooserDialogResponse, std::move(callback)));
}


// static
void Domain::HandleAddScriptToEvaluateOnLoadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddScriptToEvaluateOnLoadResult>)> callback,
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
  std::unique_ptr<AddScriptToEvaluateOnLoadResult> result = AddScriptToEvaluateOnLoadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAddScriptToEvaluateOnNewDocumentResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult>)> callback,
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
  std::unique_ptr<AddScriptToEvaluateOnNewDocumentResult> result = AddScriptToEvaluateOnNewDocumentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleBringToFrontResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<BringToFrontResult>)> callback,
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
  std::unique_ptr<BringToFrontResult> result = BringToFrontResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCaptureScreenshotResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureScreenshotResult>)> callback,
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
  std::unique_ptr<CaptureScreenshotResult> result = CaptureScreenshotResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCaptureSnapshotResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureSnapshotResult>)> callback,
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
  std::unique_ptr<CaptureSnapshotResult> result = CaptureSnapshotResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleClearDeviceMetricsOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback,
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
  std::unique_ptr<ClearDeviceMetricsOverrideResult> result = ClearDeviceMetricsOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleClearDeviceOrientationOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceOrientationOverrideResult>)> callback,
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
  std::unique_ptr<ClearDeviceOrientationOverrideResult> result = ClearDeviceOrientationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleClearGeolocationOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearGeolocationOverrideResult>)> callback,
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
  std::unique_ptr<ClearGeolocationOverrideResult> result = ClearGeolocationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCreateIsolatedWorldResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateIsolatedWorldResult>)> callback,
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
  std::unique_ptr<CreateIsolatedWorldResult> result = CreateIsolatedWorldResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDeleteCookieResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DeleteCookieResult>)> callback,
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
  std::unique_ptr<DeleteCookieResult> result = DeleteCookieResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
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
void Domain::HandleGetAppManifestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAppManifestResult>)> callback,
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
  std::unique_ptr<GetAppManifestResult> result = GetAppManifestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetInstallabilityErrorsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInstallabilityErrorsResult>)> callback,
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
  std::unique_ptr<GetInstallabilityErrorsResult> result = GetInstallabilityErrorsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetManifestIconsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetManifestIconsResult>)> callback,
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
  std::unique_ptr<GetManifestIconsResult> result = GetManifestIconsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetAppIdResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAppIdResult>)> callback,
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
  std::unique_ptr<GetAppIdResult> result = GetAppIdResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetCookiesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetCookiesResult>)> callback,
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
  std::unique_ptr<GetCookiesResult> result = GetCookiesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetFrameTreeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFrameTreeResult>)> callback,
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
  std::unique_ptr<GetFrameTreeResult> result = GetFrameTreeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetLayoutMetricsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayoutMetricsResult>)> callback,
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
  std::unique_ptr<GetLayoutMetricsResult> result = GetLayoutMetricsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetNavigationHistoryResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNavigationHistoryResult>)> callback,
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
  std::unique_ptr<GetNavigationHistoryResult> result = GetNavigationHistoryResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleResetNavigationHistoryResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetNavigationHistoryResult>)> callback,
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
  std::unique_ptr<ResetNavigationHistoryResult> result = ResetNavigationHistoryResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetResourceContentResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResourceContentResult>)> callback,
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
  std::unique_ptr<GetResourceContentResult> result = GetResourceContentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetResourceTreeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResourceTreeResult>)> callback,
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
  std::unique_ptr<GetResourceTreeResult> result = GetResourceTreeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHandleJavaScriptDialogResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleJavaScriptDialogResult>)> callback,
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
  std::unique_ptr<HandleJavaScriptDialogResult> result = HandleJavaScriptDialogResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleNavigateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<NavigateResult>)> callback,
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
  std::unique_ptr<NavigateResult> result = NavigateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleNavigateToHistoryEntryResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<NavigateToHistoryEntryResult>)> callback,
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
  std::unique_ptr<NavigateToHistoryEntryResult> result = NavigateToHistoryEntryResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandlePrintToPDFResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PrintToPDFResult>)> callback,
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
  std::unique_ptr<PrintToPDFResult> result = PrintToPDFResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleReloadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReloadResult>)> callback,
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
  std::unique_ptr<ReloadResult> result = ReloadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveScriptToEvaluateOnLoadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveScriptToEvaluateOnLoadResult>)> callback,
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
  std::unique_ptr<RemoveScriptToEvaluateOnLoadResult> result = RemoveScriptToEvaluateOnLoadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveScriptToEvaluateOnNewDocumentResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult>)> callback,
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
  std::unique_ptr<RemoveScriptToEvaluateOnNewDocumentResult> result = RemoveScriptToEvaluateOnNewDocumentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleScreencastFrameAckResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ScreencastFrameAckResult>)> callback,
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
  std::unique_ptr<ScreencastFrameAckResult> result = ScreencastFrameAckResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSearchInResourceResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SearchInResourceResult>)> callback,
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
  std::unique_ptr<SearchInResourceResult> result = SearchInResourceResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAdBlockingEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAdBlockingEnabledResult>)> callback,
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
  std::unique_ptr<SetAdBlockingEnabledResult> result = SetAdBlockingEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetBypassCSPResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBypassCSPResult>)> callback,
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
  std::unique_ptr<SetBypassCSPResult> result = SetBypassCSPResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetPermissionsPolicyStateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPermissionsPolicyStateResult>)> callback,
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
  std::unique_ptr<GetPermissionsPolicyStateResult> result = GetPermissionsPolicyStateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetOriginTrialsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetOriginTrialsResult>)> callback,
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
  std::unique_ptr<GetOriginTrialsResult> result = GetOriginTrialsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDeviceMetricsOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback,
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
  std::unique_ptr<SetDeviceMetricsOverrideResult> result = SetDeviceMetricsOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDeviceOrientationOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceOrientationOverrideResult>)> callback,
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
  std::unique_ptr<SetDeviceOrientationOverrideResult> result = SetDeviceOrientationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetFontFamiliesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFontFamiliesResult>)> callback,
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
  std::unique_ptr<SetFontFamiliesResult> result = SetFontFamiliesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetFontSizesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFontSizesResult>)> callback,
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
  std::unique_ptr<SetFontSizesResult> result = SetFontSizesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDocumentContentResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentContentResult>)> callback,
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
  std::unique_ptr<SetDocumentContentResult> result = SetDocumentContentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDownloadBehaviorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDownloadBehaviorResult>)> callback,
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
  std::unique_ptr<SetDownloadBehaviorResult> result = SetDownloadBehaviorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetGeolocationOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetGeolocationOverrideResult>)> callback,
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
  std::unique_ptr<SetGeolocationOverrideResult> result = SetGeolocationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetLifecycleEventsEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLifecycleEventsEnabledResult>)> callback,
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
  std::unique_ptr<SetLifecycleEventsEnabledResult> result = SetLifecycleEventsEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetTouchEmulationEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTouchEmulationEnabledResult>)> callback,
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
  std::unique_ptr<SetTouchEmulationEnabledResult> result = SetTouchEmulationEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartScreencastResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartScreencastResult>)> callback,
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
  std::unique_ptr<StartScreencastResult> result = StartScreencastResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopLoadingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopLoadingResult>)> callback,
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
  std::unique_ptr<StopLoadingResult> result = StopLoadingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCrashResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CrashResult>)> callback,
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
  std::unique_ptr<CrashResult> result = CrashResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCloseResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseResult>)> callback,
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
  std::unique_ptr<CloseResult> result = CloseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetWebLifecycleStateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetWebLifecycleStateResult>)> callback,
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
  std::unique_ptr<SetWebLifecycleStateResult> result = SetWebLifecycleStateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopScreencastResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopScreencastResult>)> callback,
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
  std::unique_ptr<StopScreencastResult> result = StopScreencastResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleProduceCompilationCacheResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ProduceCompilationCacheResult>)> callback,
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
  std::unique_ptr<ProduceCompilationCacheResult> result = ProduceCompilationCacheResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAddCompilationCacheResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddCompilationCacheResult>)> callback,
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
  std::unique_ptr<AddCompilationCacheResult> result = AddCompilationCacheResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleClearCompilationCacheResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearCompilationCacheResult>)> callback,
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
  std::unique_ptr<ClearCompilationCacheResult> result = ClearCompilationCacheResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetSPCTransactionModeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSPCTransactionModeResult>)> callback,
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
  std::unique_ptr<SetSPCTransactionModeResult> result = SetSPCTransactionModeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGenerateTestReportResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GenerateTestReportResult>)> callback,
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
  std::unique_ptr<GenerateTestReportResult> result = GenerateTestReportResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleWaitForDebuggerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<WaitForDebuggerResult>)> callback,
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
  std::unique_ptr<WaitForDebuggerResult> result = WaitForDebuggerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetInterceptFileChooserDialogResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInterceptFileChooserDialogResult>)> callback,
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
  std::unique_ptr<SetInterceptFileChooserDialogResult> result = SetInterceptFileChooserDialogResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchDomContentEventFiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DomContentEventFiredParams> parsed_params(DomContentEventFiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDomContentEventFired(*parsed_params);
  }
}

void Domain::DispatchFileChooserOpenedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FileChooserOpenedParams> parsed_params(FileChooserOpenedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFileChooserOpened(*parsed_params);
  }
}

void Domain::DispatchFrameAttachedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameAttachedParams> parsed_params(FrameAttachedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameAttached(*parsed_params);
  }
}

void Domain::DispatchFrameClearedScheduledNavigationEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameClearedScheduledNavigationParams> parsed_params(FrameClearedScheduledNavigationParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameClearedScheduledNavigation(*parsed_params);
  }
}

void Domain::DispatchFrameDetachedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameDetachedParams> parsed_params(FrameDetachedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameDetached(*parsed_params);
  }
}

void Domain::DispatchFrameNavigatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameNavigatedParams> parsed_params(FrameNavigatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameNavigated(*parsed_params);
  }
}

void Domain::DispatchDocumentOpenedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DocumentOpenedParams> parsed_params(DocumentOpenedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDocumentOpened(*parsed_params);
  }
}

void Domain::DispatchFrameResizedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameResizedParams> parsed_params(FrameResizedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameResized(*parsed_params);
  }
}

void Domain::DispatchFrameRequestedNavigationEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameRequestedNavigationParams> parsed_params(FrameRequestedNavigationParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameRequestedNavigation(*parsed_params);
  }
}

void Domain::DispatchFrameScheduledNavigationEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameScheduledNavigationParams> parsed_params(FrameScheduledNavigationParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameScheduledNavigation(*parsed_params);
  }
}

void Domain::DispatchFrameStartedLoadingEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameStartedLoadingParams> parsed_params(FrameStartedLoadingParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameStartedLoading(*parsed_params);
  }
}

void Domain::DispatchFrameStoppedLoadingEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FrameStoppedLoadingParams> parsed_params(FrameStoppedLoadingParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFrameStoppedLoading(*parsed_params);
  }
}

void Domain::DispatchDownloadWillBeginEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DownloadWillBeginParams> parsed_params(DownloadWillBeginParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDownloadWillBegin(*parsed_params);
  }
}

void Domain::DispatchDownloadProgressEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DownloadProgressParams> parsed_params(DownloadProgressParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDownloadProgress(*parsed_params);
  }
}

void Domain::DispatchInterstitialHiddenEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InterstitialHiddenParams> parsed_params(InterstitialHiddenParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInterstitialHidden(*parsed_params);
  }
}

void Domain::DispatchInterstitialShownEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InterstitialShownParams> parsed_params(InterstitialShownParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInterstitialShown(*parsed_params);
  }
}

void Domain::DispatchJavascriptDialogClosedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<JavascriptDialogClosedParams> parsed_params(JavascriptDialogClosedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnJavascriptDialogClosed(*parsed_params);
  }
}

void Domain::DispatchJavascriptDialogOpeningEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<JavascriptDialogOpeningParams> parsed_params(JavascriptDialogOpeningParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnJavascriptDialogOpening(*parsed_params);
  }
}

void Domain::DispatchLifecycleEventEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<LifecycleEventParams> parsed_params(LifecycleEventParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnLifecycleEvent(*parsed_params);
  }
}

void Domain::DispatchBackForwardCacheNotUsedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<BackForwardCacheNotUsedParams> parsed_params(BackForwardCacheNotUsedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnBackForwardCacheNotUsed(*parsed_params);
  }
}

void Domain::DispatchPrerenderAttemptCompletedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PrerenderAttemptCompletedParams> parsed_params(PrerenderAttemptCompletedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPrerenderAttemptCompleted(*parsed_params);
  }
}

void Domain::DispatchLoadEventFiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<LoadEventFiredParams> parsed_params(LoadEventFiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnLoadEventFired(*parsed_params);
  }
}

void Domain::DispatchNavigatedWithinDocumentEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<NavigatedWithinDocumentParams> parsed_params(NavigatedWithinDocumentParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnNavigatedWithinDocument(*parsed_params);
  }
}

void Domain::DispatchScreencastFrameEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ScreencastFrameParams> parsed_params(ScreencastFrameParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnScreencastFrame(*parsed_params);
  }
}

void Domain::DispatchScreencastVisibilityChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ScreencastVisibilityChangedParams> parsed_params(ScreencastVisibilityChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnScreencastVisibilityChanged(*parsed_params);
  }
}

void Domain::DispatchWindowOpenEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<WindowOpenParams> parsed_params(WindowOpenParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnWindowOpen(*parsed_params);
  }
}

void Domain::DispatchCompilationCacheProducedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<CompilationCacheProducedParams> parsed_params(CompilationCacheProducedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnCompilationCacheProduced(*parsed_params);
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

}  // namespace page

} // namespace autofill_assistant
