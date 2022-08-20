// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/service_worker.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace service_worker {

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
      "ServiceWorker.workerErrorReported",
      base::BindRepeating(&Domain::DispatchWorkerErrorReportedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "ServiceWorker.workerRegistrationUpdated",
      base::BindRepeating(&Domain::DispatchWorkerRegistrationUpdatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "ServiceWorker.workerVersionUpdated",
      base::BindRepeating(&Domain::DispatchWorkerVersionUpdatedEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::DeliverPushMessage(
    std::unique_ptr<DeliverPushMessageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DeliverPushMessageResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.deliverPushMessage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDeliverPushMessageResponse, std::move(callback)));
}
void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}
void ExperimentalDomain::DispatchSyncEvent(
    std::unique_ptr<DispatchSyncEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchSyncEventResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.dispatchSyncEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDispatchSyncEventResponse, std::move(callback)));
}
void ExperimentalDomain::DispatchPeriodicSyncEvent(
    std::unique_ptr<DispatchPeriodicSyncEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchPeriodicSyncEventResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.dispatchPeriodicSyncEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDispatchPeriodicSyncEventResponse, std::move(callback)));
}
void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::InspectWorker(
    std::unique_ptr<InspectWorkerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<InspectWorkerResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.inspectWorker", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleInspectWorkerResponse, std::move(callback)));
}
void ExperimentalDomain::SetForceUpdateOnPageLoad(
    std::unique_ptr<SetForceUpdateOnPageLoadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetForceUpdateOnPageLoadResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.setForceUpdateOnPageLoad", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetForceUpdateOnPageLoadResponse, std::move(callback)));
}
void ExperimentalDomain::SkipWaiting(
    std::unique_ptr<SkipWaitingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SkipWaitingResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.skipWaiting", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSkipWaitingResponse, std::move(callback)));
}
void ExperimentalDomain::StartWorker(
    std::unique_ptr<StartWorkerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartWorkerResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.startWorker", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartWorkerResponse, std::move(callback)));
}
void ExperimentalDomain::StopAllWorkers(
    std::unique_ptr<StopAllWorkersParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopAllWorkersResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.stopAllWorkers", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopAllWorkersResponse, std::move(callback)));
}
void ExperimentalDomain::StopWorker(
    std::unique_ptr<StopWorkerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopWorkerResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.stopWorker", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopWorkerResponse, std::move(callback)));
}
void ExperimentalDomain::Unregister(
    std::unique_ptr<UnregisterParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<UnregisterResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.unregister", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleUnregisterResponse, std::move(callback)));
}
void ExperimentalDomain::UpdateRegistration(
    std::unique_ptr<UpdateRegistrationParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<UpdateRegistrationResult>)> callback) {
  dispatcher_->SendMessage("ServiceWorker.updateRegistration", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleUpdateRegistrationResponse, std::move(callback)));
}


// static
void Domain::HandleDeliverPushMessageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DeliverPushMessageResult>)> callback,
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
  std::unique_ptr<DeliverPushMessageResult> result = DeliverPushMessageResult::Parse(response, &errors);
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
void Domain::HandleDispatchSyncEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchSyncEventResult>)> callback,
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
  std::unique_ptr<DispatchSyncEventResult> result = DispatchSyncEventResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDispatchPeriodicSyncEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchPeriodicSyncEventResult>)> callback,
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
  std::unique_ptr<DispatchPeriodicSyncEventResult> result = DispatchPeriodicSyncEventResult::Parse(response, &errors);
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
void Domain::HandleInspectWorkerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<InspectWorkerResult>)> callback,
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
  std::unique_ptr<InspectWorkerResult> result = InspectWorkerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetForceUpdateOnPageLoadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetForceUpdateOnPageLoadResult>)> callback,
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
  std::unique_ptr<SetForceUpdateOnPageLoadResult> result = SetForceUpdateOnPageLoadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSkipWaitingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SkipWaitingResult>)> callback,
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
  std::unique_ptr<SkipWaitingResult> result = SkipWaitingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartWorkerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartWorkerResult>)> callback,
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
  std::unique_ptr<StartWorkerResult> result = StartWorkerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopAllWorkersResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopAllWorkersResult>)> callback,
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
  std::unique_ptr<StopAllWorkersResult> result = StopAllWorkersResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopWorkerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopWorkerResult>)> callback,
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
  std::unique_ptr<StopWorkerResult> result = StopWorkerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleUnregisterResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<UnregisterResult>)> callback,
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
  std::unique_ptr<UnregisterResult> result = UnregisterResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleUpdateRegistrationResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<UpdateRegistrationResult>)> callback,
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
  std::unique_ptr<UpdateRegistrationResult> result = UpdateRegistrationResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchWorkerErrorReportedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<WorkerErrorReportedParams> parsed_params(WorkerErrorReportedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnWorkerErrorReported(*parsed_params);
  }
}

void Domain::DispatchWorkerRegistrationUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<WorkerRegistrationUpdatedParams> parsed_params(WorkerRegistrationUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnWorkerRegistrationUpdated(*parsed_params);
  }
}

void Domain::DispatchWorkerVersionUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<WorkerVersionUpdatedParams> parsed_params(WorkerVersionUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnWorkerVersionUpdated(*parsed_params);
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

}  // namespace service_worker

} // namespace autofill_assistant
