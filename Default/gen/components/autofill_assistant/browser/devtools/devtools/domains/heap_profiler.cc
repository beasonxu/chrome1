// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/heap_profiler.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace heap_profiler {

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
      "HeapProfiler.addHeapSnapshotChunk",
      base::BindRepeating(&Domain::DispatchAddHeapSnapshotChunkEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "HeapProfiler.heapStatsUpdate",
      base::BindRepeating(&Domain::DispatchHeapStatsUpdateEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "HeapProfiler.lastSeenObjectId",
      base::BindRepeating(&Domain::DispatchLastSeenObjectIdEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "HeapProfiler.reportHeapSnapshotProgress",
      base::BindRepeating(&Domain::DispatchReportHeapSnapshotProgressEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "HeapProfiler.resetProfiles",
      base::BindRepeating(&Domain::DispatchResetProfilesEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::AddInspectedHeapObject(
    std::unique_ptr<AddInspectedHeapObjectParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddInspectedHeapObjectResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.addInspectedHeapObject", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddInspectedHeapObjectResponse, std::move(callback)));
}
void ExperimentalDomain::CollectGarbage(
    std::unique_ptr<CollectGarbageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectGarbageResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.collectGarbage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCollectGarbageResponse, std::move(callback)));
}
void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}
void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::GetHeapObjectId(
    std::unique_ptr<GetHeapObjectIdParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapObjectIdResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.getHeapObjectId", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetHeapObjectIdResponse, std::move(callback)));
}
void ExperimentalDomain::GetObjectByHeapObjectId(
    std::unique_ptr<GetObjectByHeapObjectIdParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetObjectByHeapObjectIdResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.getObjectByHeapObjectId", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetObjectByHeapObjectIdResponse, std::move(callback)));
}
void ExperimentalDomain::GetSamplingProfile(
    std::unique_ptr<GetSamplingProfileParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSamplingProfileResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.getSamplingProfile", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetSamplingProfileResponse, std::move(callback)));
}
void ExperimentalDomain::StartSampling(
    std::unique_ptr<StartSamplingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartSamplingResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.startSampling", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartSamplingResponse, std::move(callback)));
}
void ExperimentalDomain::StartTrackingHeapObjects(
    std::unique_ptr<StartTrackingHeapObjectsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartTrackingHeapObjectsResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.startTrackingHeapObjects", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartTrackingHeapObjectsResponse, std::move(callback)));
}
void ExperimentalDomain::StopSampling(
    std::unique_ptr<StopSamplingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopSamplingResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.stopSampling", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopSamplingResponse, std::move(callback)));
}
void ExperimentalDomain::StopTrackingHeapObjects(
    std::unique_ptr<StopTrackingHeapObjectsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopTrackingHeapObjectsResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.stopTrackingHeapObjects", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopTrackingHeapObjectsResponse, std::move(callback)));
}
void ExperimentalDomain::TakeHeapSnapshot(
    std::unique_ptr<TakeHeapSnapshotParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeHeapSnapshotResult>)> callback) {
  dispatcher_->SendMessage("HeapProfiler.takeHeapSnapshot", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakeHeapSnapshotResponse, std::move(callback)));
}


// static
void Domain::HandleAddInspectedHeapObjectResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddInspectedHeapObjectResult>)> callback,
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
  std::unique_ptr<AddInspectedHeapObjectResult> result = AddInspectedHeapObjectResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCollectGarbageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectGarbageResult>)> callback,
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
  std::unique_ptr<CollectGarbageResult> result = CollectGarbageResult::Parse(response, &errors);
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
void Domain::HandleGetHeapObjectIdResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapObjectIdResult>)> callback,
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
  std::unique_ptr<GetHeapObjectIdResult> result = GetHeapObjectIdResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetObjectByHeapObjectIdResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetObjectByHeapObjectIdResult>)> callback,
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
  std::unique_ptr<GetObjectByHeapObjectIdResult> result = GetObjectByHeapObjectIdResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetSamplingProfileResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSamplingProfileResult>)> callback,
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
  std::unique_ptr<GetSamplingProfileResult> result = GetSamplingProfileResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartSamplingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartSamplingResult>)> callback,
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
  std::unique_ptr<StartSamplingResult> result = StartSamplingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartTrackingHeapObjectsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartTrackingHeapObjectsResult>)> callback,
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
  std::unique_ptr<StartTrackingHeapObjectsResult> result = StartTrackingHeapObjectsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopSamplingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopSamplingResult>)> callback,
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
  std::unique_ptr<StopSamplingResult> result = StopSamplingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopTrackingHeapObjectsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopTrackingHeapObjectsResult>)> callback,
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
  std::unique_ptr<StopTrackingHeapObjectsResult> result = StopTrackingHeapObjectsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTakeHeapSnapshotResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeHeapSnapshotResult>)> callback,
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
  std::unique_ptr<TakeHeapSnapshotResult> result = TakeHeapSnapshotResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchAddHeapSnapshotChunkEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<AddHeapSnapshotChunkParams> parsed_params(AddHeapSnapshotChunkParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnAddHeapSnapshotChunk(*parsed_params);
  }
}

void Domain::DispatchHeapStatsUpdateEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<HeapStatsUpdateParams> parsed_params(HeapStatsUpdateParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnHeapStatsUpdate(*parsed_params);
  }
}

void Domain::DispatchLastSeenObjectIdEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<LastSeenObjectIdParams> parsed_params(LastSeenObjectIdParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnLastSeenObjectId(*parsed_params);
  }
}

void Domain::DispatchReportHeapSnapshotProgressEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ReportHeapSnapshotProgressParams> parsed_params(ReportHeapSnapshotProgressParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnReportHeapSnapshotProgress(*parsed_params);
  }
}

void Domain::DispatchResetProfilesEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ResetProfilesParams> parsed_params(ResetProfilesParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnResetProfiles(*parsed_params);
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

}  // namespace heap_profiler

} // namespace autofill_assistant
