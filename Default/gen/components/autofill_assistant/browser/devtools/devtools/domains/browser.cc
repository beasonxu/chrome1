// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/browser.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace browser {

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
      "Browser.downloadWillBegin",
      base::BindRepeating(&Domain::DispatchDownloadWillBeginEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Browser.downloadProgress",
      base::BindRepeating(&Domain::DispatchDownloadProgressEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::SetPermission(
    std::unique_ptr<SetPermissionParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPermissionResult>)> callback) {
  dispatcher_->SendMessage("Browser.setPermission", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetPermissionResponse, std::move(callback)));
}
void ExperimentalDomain::GrantPermissions(
    std::unique_ptr<GrantPermissionsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GrantPermissionsResult>)> callback) {
  dispatcher_->SendMessage("Browser.grantPermissions", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGrantPermissionsResponse, std::move(callback)));
}
void ExperimentalDomain::ResetPermissions(
    std::unique_ptr<ResetPermissionsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPermissionsResult>)> callback) {
  dispatcher_->SendMessage("Browser.resetPermissions", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResetPermissionsResponse, std::move(callback)));
}
void ExperimentalDomain::SetDownloadBehavior(
    std::unique_ptr<SetDownloadBehaviorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDownloadBehaviorResult>)> callback) {
  dispatcher_->SendMessage("Browser.setDownloadBehavior", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDownloadBehaviorResponse, std::move(callback)));
}
void ExperimentalDomain::CancelDownload(
    std::unique_ptr<CancelDownloadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CancelDownloadResult>)> callback) {
  dispatcher_->SendMessage("Browser.cancelDownload", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCancelDownloadResponse, std::move(callback)));
}
void Domain::Close(
    std::unique_ptr<CloseParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseResult>)> callback) {
  dispatcher_->SendMessage("Browser.close", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCloseResponse, std::move(callback)));
}

void Domain::Close(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<CloseParams> params = CloseParams::Builder()
      .Build();
  dispatcher_->SendMessage("Browser.close", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Close(std::unique_ptr<CloseParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Browser.close", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::Crash(
    std::unique_ptr<CrashParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CrashResult>)> callback) {
  dispatcher_->SendMessage("Browser.crash", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCrashResponse, std::move(callback)));
}
void ExperimentalDomain::CrashGpuProcess(
    std::unique_ptr<CrashGpuProcessParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CrashGpuProcessResult>)> callback) {
  dispatcher_->SendMessage("Browser.crashGpuProcess", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCrashGpuProcessResponse, std::move(callback)));
}
void Domain::GetVersion(
    std::unique_ptr<GetVersionParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetVersionResult>)> callback) {
  dispatcher_->SendMessage("Browser.getVersion", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetVersionResponse, std::move(callback)));
}

void Domain::GetVersion(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetVersionResult>)> callback) {
  std::unique_ptr<GetVersionParams> params = GetVersionParams::Builder()
      .Build();
dispatcher_->SendMessage("Browser.getVersion", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetVersionResponse, std::move(callback)));
}
void ExperimentalDomain::GetBrowserCommandLine(
    std::unique_ptr<GetBrowserCommandLineParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserCommandLineResult>)> callback) {
  dispatcher_->SendMessage("Browser.getBrowserCommandLine", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBrowserCommandLineResponse, std::move(callback)));
}
void ExperimentalDomain::GetHistograms(
    std::unique_ptr<GetHistogramsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHistogramsResult>)> callback) {
  dispatcher_->SendMessage("Browser.getHistograms", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetHistogramsResponse, std::move(callback)));
}
void ExperimentalDomain::GetHistogram(
    std::unique_ptr<GetHistogramParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHistogramResult>)> callback) {
  dispatcher_->SendMessage("Browser.getHistogram", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetHistogramResponse, std::move(callback)));
}
void ExperimentalDomain::GetWindowBounds(
    std::unique_ptr<GetWindowBoundsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetWindowBoundsResult>)> callback) {
  dispatcher_->SendMessage("Browser.getWindowBounds", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetWindowBoundsResponse, std::move(callback)));
}
void ExperimentalDomain::GetWindowForTarget(
    std::unique_ptr<GetWindowForTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetWindowForTargetResult>)> callback) {
  dispatcher_->SendMessage("Browser.getWindowForTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetWindowForTargetResponse, std::move(callback)));
}
void ExperimentalDomain::SetWindowBounds(
    std::unique_ptr<SetWindowBoundsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetWindowBoundsResult>)> callback) {
  dispatcher_->SendMessage("Browser.setWindowBounds", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetWindowBoundsResponse, std::move(callback)));
}
void ExperimentalDomain::SetDockTile(
    std::unique_ptr<SetDockTileParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDockTileResult>)> callback) {
  dispatcher_->SendMessage("Browser.setDockTile", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDockTileResponse, std::move(callback)));
}
void ExperimentalDomain::ExecuteBrowserCommand(
    std::unique_ptr<ExecuteBrowserCommandParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExecuteBrowserCommandResult>)> callback) {
  dispatcher_->SendMessage("Browser.executeBrowserCommand", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleExecuteBrowserCommandResponse, std::move(callback)));
}


// static
void Domain::HandleSetPermissionResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPermissionResult>)> callback,
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
  std::unique_ptr<SetPermissionResult> result = SetPermissionResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGrantPermissionsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GrantPermissionsResult>)> callback,
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
  std::unique_ptr<GrantPermissionsResult> result = GrantPermissionsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleResetPermissionsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPermissionsResult>)> callback,
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
  std::unique_ptr<ResetPermissionsResult> result = ResetPermissionsResult::Parse(response, &errors);
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
void Domain::HandleCancelDownloadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CancelDownloadResult>)> callback,
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
  std::unique_ptr<CancelDownloadResult> result = CancelDownloadResult::Parse(response, &errors);
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
void Domain::HandleCrashGpuProcessResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CrashGpuProcessResult>)> callback,
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
  std::unique_ptr<CrashGpuProcessResult> result = CrashGpuProcessResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetVersionResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetVersionResult>)> callback,
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
  std::unique_ptr<GetVersionResult> result = GetVersionResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetBrowserCommandLineResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserCommandLineResult>)> callback,
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
  std::unique_ptr<GetBrowserCommandLineResult> result = GetBrowserCommandLineResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetHistogramsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHistogramsResult>)> callback,
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
  std::unique_ptr<GetHistogramsResult> result = GetHistogramsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetHistogramResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHistogramResult>)> callback,
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
  std::unique_ptr<GetHistogramResult> result = GetHistogramResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetWindowBoundsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetWindowBoundsResult>)> callback,
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
  std::unique_ptr<GetWindowBoundsResult> result = GetWindowBoundsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetWindowForTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetWindowForTargetResult>)> callback,
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
  std::unique_ptr<GetWindowForTargetResult> result = GetWindowForTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetWindowBoundsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetWindowBoundsResult>)> callback,
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
  std::unique_ptr<SetWindowBoundsResult> result = SetWindowBoundsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDockTileResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDockTileResult>)> callback,
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
  std::unique_ptr<SetDockTileResult> result = SetDockTileResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleExecuteBrowserCommandResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExecuteBrowserCommandResult>)> callback,
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
  std::unique_ptr<ExecuteBrowserCommandResult> result = ExecuteBrowserCommandResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
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

}  // namespace browser

} // namespace autofill_assistant
