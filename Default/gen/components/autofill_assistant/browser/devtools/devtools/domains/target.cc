// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/target.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace target {

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
      "Target.attachedToTarget",
      base::BindRepeating(&Domain::DispatchAttachedToTargetEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Target.detachedFromTarget",
      base::BindRepeating(&Domain::DispatchDetachedFromTargetEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Target.receivedMessageFromTarget",
      base::BindRepeating(&Domain::DispatchReceivedMessageFromTargetEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Target.targetCreated",
      base::BindRepeating(&Domain::DispatchTargetCreatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Target.targetDestroyed",
      base::BindRepeating(&Domain::DispatchTargetDestroyedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Target.targetCrashed",
      base::BindRepeating(&Domain::DispatchTargetCrashedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Target.targetInfoChanged",
      base::BindRepeating(&Domain::DispatchTargetInfoChangedEvent,
                          base::Unretained(this)));
}

void Domain::ActivateTarget(
    std::unique_ptr<ActivateTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ActivateTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.activateTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleActivateTargetResponse, std::move(callback)));
}

void Domain::ActivateTarget(const std::string& target_id, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ActivateTargetParams> params = ActivateTargetParams::Builder()
      .SetTargetId(std::move(target_id))
      .Build();
  dispatcher_->SendMessage("Target.activateTarget", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ActivateTarget(std::unique_ptr<ActivateTargetParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Target.activateTarget", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::AttachToTarget(
    std::unique_ptr<AttachToTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.attachToTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAttachToTargetResponse, std::move(callback)));
}

void Domain::AttachToTarget(const std::string& target_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)> callback) {
  std::unique_ptr<AttachToTargetParams> params = AttachToTargetParams::Builder()
      .SetTargetId(std::move(target_id))
      .Build();
dispatcher_->SendMessage("Target.attachToTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAttachToTargetResponse, std::move(callback)));
}
void ExperimentalDomain::AttachToBrowserTarget(
    std::unique_ptr<AttachToBrowserTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToBrowserTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.attachToBrowserTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAttachToBrowserTargetResponse, std::move(callback)));
}
void Domain::CloseTarget(
    std::unique_ptr<CloseTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.closeTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCloseTargetResponse, std::move(callback)));
}

void Domain::CloseTarget(const std::string& target_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)> callback) {
  std::unique_ptr<CloseTargetParams> params = CloseTargetParams::Builder()
      .SetTargetId(std::move(target_id))
      .Build();
dispatcher_->SendMessage("Target.closeTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCloseTargetResponse, std::move(callback)));
}
void ExperimentalDomain::ExposeDevToolsProtocol(
    std::unique_ptr<ExposeDevToolsProtocolParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExposeDevToolsProtocolResult>)> callback) {
  dispatcher_->SendMessage("Target.exposeDevToolsProtocol", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleExposeDevToolsProtocolResponse, std::move(callback)));
}
void ExperimentalDomain::CreateBrowserContext(
    std::unique_ptr<CreateBrowserContextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateBrowserContextResult>)> callback) {
  dispatcher_->SendMessage("Target.createBrowserContext", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCreateBrowserContextResponse, std::move(callback)));
}
void ExperimentalDomain::GetBrowserContexts(
    std::unique_ptr<GetBrowserContextsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserContextsResult>)> callback) {
  dispatcher_->SendMessage("Target.getBrowserContexts", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBrowserContextsResponse, std::move(callback)));
}
void Domain::CreateTarget(
    std::unique_ptr<CreateTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.createTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCreateTargetResponse, std::move(callback)));
}

void Domain::CreateTarget(const std::string& url, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)> callback) {
  std::unique_ptr<CreateTargetParams> params = CreateTargetParams::Builder()
      .SetUrl(std::move(url))
      .Build();
dispatcher_->SendMessage("Target.createTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCreateTargetResponse, std::move(callback)));
}
void Domain::DetachFromTarget(
    std::unique_ptr<DetachFromTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DetachFromTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.detachFromTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDetachFromTargetResponse, std::move(callback)));
}

void Domain::DetachFromTarget(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DetachFromTargetParams> params = DetachFromTargetParams::Builder()
      .Build();
  dispatcher_->SendMessage("Target.detachFromTarget", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DetachFromTarget(std::unique_ptr<DetachFromTargetParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Target.detachFromTarget", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::DisposeBrowserContext(
    std::unique_ptr<DisposeBrowserContextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisposeBrowserContextResult>)> callback) {
  dispatcher_->SendMessage("Target.disposeBrowserContext", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisposeBrowserContextResponse, std::move(callback)));
}
void ExperimentalDomain::GetTargetInfo(
    std::unique_ptr<GetTargetInfoParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetInfoResult>)> callback) {
  dispatcher_->SendMessage("Target.getTargetInfo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetTargetInfoResponse, std::move(callback)));
}
void Domain::GetTargets(
    std::unique_ptr<GetTargetsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)> callback) {
  dispatcher_->SendMessage("Target.getTargets", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetTargetsResponse, std::move(callback)));
}

void Domain::GetTargets(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)> callback) {
  std::unique_ptr<GetTargetsParams> params = GetTargetsParams::Builder()
      .Build();
dispatcher_->SendMessage("Target.getTargets", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetTargetsResponse, std::move(callback)));
}
void Domain::SendMessageToTarget(
    std::unique_ptr<SendMessageToTargetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SendMessageToTargetResult>)> callback) {
  dispatcher_->SendMessage("Target.sendMessageToTarget", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSendMessageToTargetResponse, std::move(callback)));
}

void Domain::SendMessageToTarget(const std::string& message, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SendMessageToTargetParams> params = SendMessageToTargetParams::Builder()
      .SetMessage(std::move(message))
      .Build();
  dispatcher_->SendMessage("Target.sendMessageToTarget", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SendMessageToTarget(std::unique_ptr<SendMessageToTargetParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Target.sendMessageToTarget", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetAutoAttach(
    std::unique_ptr<SetAutoAttachParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoAttachResult>)> callback) {
  dispatcher_->SendMessage("Target.setAutoAttach", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAutoAttachResponse, std::move(callback)));
}
void ExperimentalDomain::AutoAttachRelated(
    std::unique_ptr<AutoAttachRelatedParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AutoAttachRelatedResult>)> callback) {
  dispatcher_->SendMessage("Target.autoAttachRelated", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAutoAttachRelatedResponse, std::move(callback)));
}
void Domain::SetDiscoverTargets(
    std::unique_ptr<SetDiscoverTargetsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDiscoverTargetsResult>)> callback) {
  dispatcher_->SendMessage("Target.setDiscoverTargets", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDiscoverTargetsResponse, std::move(callback)));
}

void Domain::SetDiscoverTargets(bool discover, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetDiscoverTargetsParams> params = SetDiscoverTargetsParams::Builder()
      .SetDiscover(std::move(discover))
      .Build();
  dispatcher_->SendMessage("Target.setDiscoverTargets", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetDiscoverTargets(std::unique_ptr<SetDiscoverTargetsParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Target.setDiscoverTargets", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetRemoteLocations(
    std::unique_ptr<SetRemoteLocationsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRemoteLocationsResult>)> callback) {
  dispatcher_->SendMessage("Target.setRemoteLocations", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetRemoteLocationsResponse, std::move(callback)));
}


// static
void Domain::HandleActivateTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ActivateTargetResult>)> callback,
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
  std::unique_ptr<ActivateTargetResult> result = ActivateTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAttachToTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)> callback,
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
  std::unique_ptr<AttachToTargetResult> result = AttachToTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAttachToBrowserTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToBrowserTargetResult>)> callback,
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
  std::unique_ptr<AttachToBrowserTargetResult> result = AttachToBrowserTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCloseTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)> callback,
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
  std::unique_ptr<CloseTargetResult> result = CloseTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleExposeDevToolsProtocolResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExposeDevToolsProtocolResult>)> callback,
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
  std::unique_ptr<ExposeDevToolsProtocolResult> result = ExposeDevToolsProtocolResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCreateBrowserContextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateBrowserContextResult>)> callback,
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
  std::unique_ptr<CreateBrowserContextResult> result = CreateBrowserContextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetBrowserContextsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserContextsResult>)> callback,
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
  std::unique_ptr<GetBrowserContextsResult> result = GetBrowserContextsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCreateTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)> callback,
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
  std::unique_ptr<CreateTargetResult> result = CreateTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDetachFromTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DetachFromTargetResult>)> callback,
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
  std::unique_ptr<DetachFromTargetResult> result = DetachFromTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDisposeBrowserContextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisposeBrowserContextResult>)> callback,
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
  std::unique_ptr<DisposeBrowserContextResult> result = DisposeBrowserContextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetTargetInfoResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetInfoResult>)> callback,
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
  std::unique_ptr<GetTargetInfoResult> result = GetTargetInfoResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetTargetsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)> callback,
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
  std::unique_ptr<GetTargetsResult> result = GetTargetsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSendMessageToTargetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SendMessageToTargetResult>)> callback,
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
  std::unique_ptr<SendMessageToTargetResult> result = SendMessageToTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAutoAttachResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoAttachResult>)> callback,
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
  std::unique_ptr<SetAutoAttachResult> result = SetAutoAttachResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAutoAttachRelatedResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AutoAttachRelatedResult>)> callback,
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
  std::unique_ptr<AutoAttachRelatedResult> result = AutoAttachRelatedResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDiscoverTargetsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDiscoverTargetsResult>)> callback,
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
  std::unique_ptr<SetDiscoverTargetsResult> result = SetDiscoverTargetsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetRemoteLocationsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRemoteLocationsResult>)> callback,
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
  std::unique_ptr<SetRemoteLocationsResult> result = SetRemoteLocationsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchAttachedToTargetEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<AttachedToTargetParams> parsed_params(AttachedToTargetParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnAttachedToTarget(*parsed_params);
  }
}

void Domain::DispatchDetachedFromTargetEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DetachedFromTargetParams> parsed_params(DetachedFromTargetParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDetachedFromTarget(*parsed_params);
  }
}

void Domain::DispatchReceivedMessageFromTargetEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ReceivedMessageFromTargetParams> parsed_params(ReceivedMessageFromTargetParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnReceivedMessageFromTarget(*parsed_params);
  }
}

void Domain::DispatchTargetCreatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<TargetCreatedParams> parsed_params(TargetCreatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnTargetCreated(*parsed_params);
  }
}

void Domain::DispatchTargetDestroyedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<TargetDestroyedParams> parsed_params(TargetDestroyedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnTargetDestroyed(*parsed_params);
  }
}

void Domain::DispatchTargetCrashedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<TargetCrashedParams> parsed_params(TargetCrashedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnTargetCrashed(*parsed_params);
  }
}

void Domain::DispatchTargetInfoChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<TargetInfoChangedParams> parsed_params(TargetInfoChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnTargetInfoChanged(*parsed_params);
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

}  // namespace target

} // namespace autofill_assistant
