// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/profiler.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace profiler {

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
      "Profiler.consoleProfileFinished",
      base::BindRepeating(&Domain::DispatchConsoleProfileFinishedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Profiler.consoleProfileStarted",
      base::BindRepeating(&Domain::DispatchConsoleProfileStartedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Profiler.preciseCoverageDeltaUpdate",
      base::BindRepeating(&Domain::DispatchPreciseCoverageDeltaUpdateEvent,
                          base::Unretained(this)));
}

void Domain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Profiler.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Profiler.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Profiler.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Profiler.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Profiler.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Profiler.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::GetBestEffortCoverage(
    std::unique_ptr<GetBestEffortCoverageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBestEffortCoverageResult>)> callback) {
  dispatcher_->SendMessage("Profiler.getBestEffortCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBestEffortCoverageResponse, std::move(callback)));
}

void Domain::GetBestEffortCoverage(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBestEffortCoverageResult>)> callback) {
  std::unique_ptr<GetBestEffortCoverageParams> params = GetBestEffortCoverageParams::Builder()
      .Build();
dispatcher_->SendMessage("Profiler.getBestEffortCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBestEffortCoverageResponse, std::move(callback)));
}
void Domain::SetSamplingInterval(
    std::unique_ptr<SetSamplingIntervalParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSamplingIntervalResult>)> callback) {
  dispatcher_->SendMessage("Profiler.setSamplingInterval", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetSamplingIntervalResponse, std::move(callback)));
}

void Domain::SetSamplingInterval(int interval, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetSamplingIntervalParams> params = SetSamplingIntervalParams::Builder()
      .SetInterval(std::move(interval))
      .Build();
  dispatcher_->SendMessage("Profiler.setSamplingInterval", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetSamplingInterval(std::unique_ptr<SetSamplingIntervalParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Profiler.setSamplingInterval", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Start(
    std::unique_ptr<StartParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartResult>)> callback) {
  dispatcher_->SendMessage("Profiler.start", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartResponse, std::move(callback)));
}

void Domain::Start(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<StartParams> params = StartParams::Builder()
      .Build();
  dispatcher_->SendMessage("Profiler.start", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Start(std::unique_ptr<StartParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Profiler.start", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::StartPreciseCoverage(
    std::unique_ptr<StartPreciseCoverageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartPreciseCoverageResult>)> callback) {
  dispatcher_->SendMessage("Profiler.startPreciseCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartPreciseCoverageResponse, std::move(callback)));
}

void Domain::StartPreciseCoverage(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartPreciseCoverageResult>)> callback) {
  std::unique_ptr<StartPreciseCoverageParams> params = StartPreciseCoverageParams::Builder()
      .Build();
dispatcher_->SendMessage("Profiler.startPreciseCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartPreciseCoverageResponse, std::move(callback)));
}
void ExperimentalDomain::StartTypeProfile(
    std::unique_ptr<StartTypeProfileParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartTypeProfileResult>)> callback) {
  dispatcher_->SendMessage("Profiler.startTypeProfile", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartTypeProfileResponse, std::move(callback)));
}
void Domain::Stop(
    std::unique_ptr<StopParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopResult>)> callback) {
  dispatcher_->SendMessage("Profiler.stop", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopResponse, std::move(callback)));
}

void Domain::Stop(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopResult>)> callback) {
  std::unique_ptr<StopParams> params = StopParams::Builder()
      .Build();
dispatcher_->SendMessage("Profiler.stop", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopResponse, std::move(callback)));
}
void Domain::StopPreciseCoverage(
    std::unique_ptr<StopPreciseCoverageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopPreciseCoverageResult>)> callback) {
  dispatcher_->SendMessage("Profiler.stopPreciseCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopPreciseCoverageResponse, std::move(callback)));
}

void Domain::StopPreciseCoverage(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<StopPreciseCoverageParams> params = StopPreciseCoverageParams::Builder()
      .Build();
  dispatcher_->SendMessage("Profiler.stopPreciseCoverage", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::StopPreciseCoverage(std::unique_ptr<StopPreciseCoverageParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Profiler.stopPreciseCoverage", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::StopTypeProfile(
    std::unique_ptr<StopTypeProfileParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopTypeProfileResult>)> callback) {
  dispatcher_->SendMessage("Profiler.stopTypeProfile", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopTypeProfileResponse, std::move(callback)));
}
void Domain::TakePreciseCoverage(
    std::unique_ptr<TakePreciseCoverageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakePreciseCoverageResult>)> callback) {
  dispatcher_->SendMessage("Profiler.takePreciseCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakePreciseCoverageResponse, std::move(callback)));
}

void Domain::TakePreciseCoverage(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakePreciseCoverageResult>)> callback) {
  std::unique_ptr<TakePreciseCoverageParams> params = TakePreciseCoverageParams::Builder()
      .Build();
dispatcher_->SendMessage("Profiler.takePreciseCoverage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakePreciseCoverageResponse, std::move(callback)));
}
void ExperimentalDomain::TakeTypeProfile(
    std::unique_ptr<TakeTypeProfileParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeTypeProfileResult>)> callback) {
  dispatcher_->SendMessage("Profiler.takeTypeProfile", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakeTypeProfileResponse, std::move(callback)));
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
void Domain::HandleGetBestEffortCoverageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBestEffortCoverageResult>)> callback,
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
  std::unique_ptr<GetBestEffortCoverageResult> result = GetBestEffortCoverageResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetSamplingIntervalResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSamplingIntervalResult>)> callback,
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
  std::unique_ptr<SetSamplingIntervalResult> result = SetSamplingIntervalResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartResult>)> callback,
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
  std::unique_ptr<StartResult> result = StartResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartPreciseCoverageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartPreciseCoverageResult>)> callback,
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
  std::unique_ptr<StartPreciseCoverageResult> result = StartPreciseCoverageResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartTypeProfileResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartTypeProfileResult>)> callback,
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
  std::unique_ptr<StartTypeProfileResult> result = StartTypeProfileResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopResult>)> callback,
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
  std::unique_ptr<StopResult> result = StopResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopPreciseCoverageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopPreciseCoverageResult>)> callback,
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
  std::unique_ptr<StopPreciseCoverageResult> result = StopPreciseCoverageResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopTypeProfileResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopTypeProfileResult>)> callback,
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
  std::unique_ptr<StopTypeProfileResult> result = StopTypeProfileResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTakePreciseCoverageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakePreciseCoverageResult>)> callback,
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
  std::unique_ptr<TakePreciseCoverageResult> result = TakePreciseCoverageResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTakeTypeProfileResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeTypeProfileResult>)> callback,
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
  std::unique_ptr<TakeTypeProfileResult> result = TakeTypeProfileResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchConsoleProfileFinishedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ConsoleProfileFinishedParams> parsed_params(ConsoleProfileFinishedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnConsoleProfileFinished(*parsed_params);
  }
}

void Domain::DispatchConsoleProfileStartedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ConsoleProfileStartedParams> parsed_params(ConsoleProfileStartedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnConsoleProfileStarted(*parsed_params);
  }
}

void Domain::DispatchPreciseCoverageDeltaUpdateEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PreciseCoverageDeltaUpdateParams> parsed_params(PreciseCoverageDeltaUpdateParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPreciseCoverageDeltaUpdate(*parsed_params);
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

}  // namespace profiler

} // namespace autofill_assistant
