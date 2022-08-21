// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/emulation.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace emulation {

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
      "Emulation.virtualTimeBudgetExpired",
      base::BindRepeating(&Domain::DispatchVirtualTimeBudgetExpiredEvent,
                          base::Unretained(this)));
}

void Domain::CanEmulate(
    std::unique_ptr<CanEmulateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)> callback) {
  dispatcher_->SendMessage("Emulation.canEmulate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCanEmulateResponse, std::move(callback)));
}

void Domain::CanEmulate(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)> callback) {
  std::unique_ptr<CanEmulateParams> params = CanEmulateParams::Builder()
      .Build();
dispatcher_->SendMessage("Emulation.canEmulate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCanEmulateResponse, std::move(callback)));
}
void Domain::ClearDeviceMetricsOverride(
    std::unique_ptr<ClearDeviceMetricsOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.clearDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearDeviceMetricsOverrideResponse, std::move(callback)));
}

void Domain::ClearDeviceMetricsOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ClearDeviceMetricsOverrideParams> params = ClearDeviceMetricsOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.clearDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ClearDeviceMetricsOverride(std::unique_ptr<ClearDeviceMetricsOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.clearDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ClearGeolocationOverride(
    std::unique_ptr<ClearGeolocationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearGeolocationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.clearGeolocationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearGeolocationOverrideResponse, std::move(callback)));
}

void Domain::ClearGeolocationOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ClearGeolocationOverrideParams> params = ClearGeolocationOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.clearGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ClearGeolocationOverride(std::unique_ptr<ClearGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.clearGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::ResetPageScaleFactor(
    std::unique_ptr<ResetPageScaleFactorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPageScaleFactorResult>)> callback) {
  dispatcher_->SendMessage("Emulation.resetPageScaleFactor", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResetPageScaleFactorResponse, std::move(callback)));
}
void ExperimentalDomain::SetFocusEmulationEnabled(
    std::unique_ptr<SetFocusEmulationEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFocusEmulationEnabledResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setFocusEmulationEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetFocusEmulationEnabledResponse, std::move(callback)));
}
void ExperimentalDomain::SetAutoDarkModeOverride(
    std::unique_ptr<SetAutoDarkModeOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoDarkModeOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setAutoDarkModeOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAutoDarkModeOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::SetCPUThrottlingRate(
    std::unique_ptr<SetCPUThrottlingRateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCPUThrottlingRateResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setCPUThrottlingRate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetCPUThrottlingRateResponse, std::move(callback)));
}
void Domain::SetDefaultBackgroundColorOverride(
    std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setDefaultBackgroundColorOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDefaultBackgroundColorOverrideResponse, std::move(callback)));
}

void Domain::SetDefaultBackgroundColorOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params = SetDefaultBackgroundColorOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.setDefaultBackgroundColorOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetDefaultBackgroundColorOverride(std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setDefaultBackgroundColorOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetDeviceMetricsOverride(
    std::unique_ptr<SetDeviceMetricsOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDeviceMetricsOverrideResponse, std::move(callback)));
}

void Domain::SetDeviceMetricsOverride(int width, int height, double device_scale_factor, bool mobile, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetDeviceMetricsOverrideParams> params = SetDeviceMetricsOverrideParams::Builder()
      .SetWidth(std::move(width))
      .SetHeight(std::move(height))
      .SetDeviceScaleFactor(std::move(device_scale_factor))
      .SetMobile(std::move(mobile))
      .Build();
  dispatcher_->SendMessage("Emulation.setDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetDeviceMetricsOverride(std::unique_ptr<SetDeviceMetricsOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setDeviceMetricsOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetScrollbarsHidden(
    std::unique_ptr<SetScrollbarsHiddenParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScrollbarsHiddenResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setScrollbarsHidden", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetScrollbarsHiddenResponse, std::move(callback)));
}
void ExperimentalDomain::SetDocumentCookieDisabled(
    std::unique_ptr<SetDocumentCookieDisabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentCookieDisabledResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setDocumentCookieDisabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDocumentCookieDisabledResponse, std::move(callback)));
}
void ExperimentalDomain::SetEmitTouchEventsForMouse(
    std::unique_ptr<SetEmitTouchEventsForMouseParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmitTouchEventsForMouseResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setEmitTouchEventsForMouse", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetEmitTouchEventsForMouseResponse, std::move(callback)));
}
void Domain::SetEmulatedMedia(
    std::unique_ptr<SetEmulatedMediaParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedMediaResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setEmulatedMedia", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetEmulatedMediaResponse, std::move(callback)));
}

void Domain::SetEmulatedMedia(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetEmulatedMediaParams> params = SetEmulatedMediaParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.setEmulatedMedia", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetEmulatedMedia(std::unique_ptr<SetEmulatedMediaParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setEmulatedMedia", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetEmulatedVisionDeficiency(
    std::unique_ptr<SetEmulatedVisionDeficiencyParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedVisionDeficiencyResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setEmulatedVisionDeficiency", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetEmulatedVisionDeficiencyResponse, std::move(callback)));
}
void Domain::SetGeolocationOverride(
    std::unique_ptr<SetGeolocationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetGeolocationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setGeolocationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetGeolocationOverrideResponse, std::move(callback)));
}

void Domain::SetGeolocationOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetGeolocationOverrideParams> params = SetGeolocationOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.setGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetGeolocationOverride(std::unique_ptr<SetGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setGeolocationOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetIdleOverride(
    std::unique_ptr<SetIdleOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIdleOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setIdleOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetIdleOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::ClearIdleOverride(
    std::unique_ptr<ClearIdleOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearIdleOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.clearIdleOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearIdleOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::SetNavigatorOverrides(
    std::unique_ptr<SetNavigatorOverridesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNavigatorOverridesResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setNavigatorOverrides", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetNavigatorOverridesResponse, std::move(callback)));
}
void ExperimentalDomain::SetPageScaleFactor(
    std::unique_ptr<SetPageScaleFactorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPageScaleFactorResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setPageScaleFactor", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetPageScaleFactorResponse, std::move(callback)));
}
void Domain::SetScriptExecutionDisabled(
    std::unique_ptr<SetScriptExecutionDisabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScriptExecutionDisabledResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setScriptExecutionDisabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetScriptExecutionDisabledResponse, std::move(callback)));
}

void Domain::SetScriptExecutionDisabled(bool value, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetScriptExecutionDisabledParams> params = SetScriptExecutionDisabledParams::Builder()
      .SetValue(std::move(value))
      .Build();
  dispatcher_->SendMessage("Emulation.setScriptExecutionDisabled", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetScriptExecutionDisabled(std::unique_ptr<SetScriptExecutionDisabledParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setScriptExecutionDisabled", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetTouchEmulationEnabled(
    std::unique_ptr<SetTouchEmulationEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTouchEmulationEnabledResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setTouchEmulationEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetTouchEmulationEnabledResponse, std::move(callback)));
}

void Domain::SetTouchEmulationEnabled(bool enabled, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetTouchEmulationEnabledParams> params = SetTouchEmulationEnabledParams::Builder()
      .SetEnabled(std::move(enabled))
      .Build();
  dispatcher_->SendMessage("Emulation.setTouchEmulationEnabled", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetTouchEmulationEnabled(std::unique_ptr<SetTouchEmulationEnabledParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setTouchEmulationEnabled", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetVirtualTimePolicy(
    std::unique_ptr<SetVirtualTimePolicyParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVirtualTimePolicyResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setVirtualTimePolicy", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetVirtualTimePolicyResponse, std::move(callback)));
}
void ExperimentalDomain::SetLocaleOverride(
    std::unique_ptr<SetLocaleOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocaleOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setLocaleOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetLocaleOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::SetTimezoneOverride(
    std::unique_ptr<SetTimezoneOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTimezoneOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setTimezoneOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetTimezoneOverrideResponse, std::move(callback)));
}
void ExperimentalDomain::SetVisibleSize(
    std::unique_ptr<SetVisibleSizeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVisibleSizeResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setVisibleSize", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetVisibleSizeResponse, std::move(callback)));
}
void ExperimentalDomain::SetDisabledImageTypes(
    std::unique_ptr<SetDisabledImageTypesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDisabledImageTypesResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setDisabledImageTypes", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDisabledImageTypesResponse, std::move(callback)));
}
void ExperimentalDomain::SetHardwareConcurrencyOverride(
    std::unique_ptr<SetHardwareConcurrencyOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetHardwareConcurrencyOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setHardwareConcurrencyOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetHardwareConcurrencyOverrideResponse, std::move(callback)));
}
void Domain::SetUserAgentOverride(
    std::unique_ptr<SetUserAgentOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserAgentOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setUserAgentOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetUserAgentOverrideResponse, std::move(callback)));
}

void Domain::SetUserAgentOverride(const std::string& user_agent, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetUserAgentOverrideParams> params = SetUserAgentOverrideParams::Builder()
      .SetUserAgent(std::move(user_agent))
      .Build();
  dispatcher_->SendMessage("Emulation.setUserAgentOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetUserAgentOverride(std::unique_ptr<SetUserAgentOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setUserAgentOverride", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetAutomationOverride(
    std::unique_ptr<SetAutomationOverrideParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setAutomationOverride", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAutomationOverrideResponse, std::move(callback)));
}


// static
void Domain::HandleCanEmulateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)> callback,
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
  std::unique_ptr<CanEmulateResult> result = CanEmulateResult::Parse(response, &errors);
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
void Domain::HandleResetPageScaleFactorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPageScaleFactorResult>)> callback,
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
  std::unique_ptr<ResetPageScaleFactorResult> result = ResetPageScaleFactorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetFocusEmulationEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFocusEmulationEnabledResult>)> callback,
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
  std::unique_ptr<SetFocusEmulationEnabledResult> result = SetFocusEmulationEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAutoDarkModeOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoDarkModeOverrideResult>)> callback,
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
  std::unique_ptr<SetAutoDarkModeOverrideResult> result = SetAutoDarkModeOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetCPUThrottlingRateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCPUThrottlingRateResult>)> callback,
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
  std::unique_ptr<SetCPUThrottlingRateResult> result = SetCPUThrottlingRateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDefaultBackgroundColorOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)> callback,
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
  std::unique_ptr<SetDefaultBackgroundColorOverrideResult> result = SetDefaultBackgroundColorOverrideResult::Parse(response, &errors);
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
void Domain::HandleSetScrollbarsHiddenResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScrollbarsHiddenResult>)> callback,
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
  std::unique_ptr<SetScrollbarsHiddenResult> result = SetScrollbarsHiddenResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDocumentCookieDisabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentCookieDisabledResult>)> callback,
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
  std::unique_ptr<SetDocumentCookieDisabledResult> result = SetDocumentCookieDisabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetEmitTouchEventsForMouseResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmitTouchEventsForMouseResult>)> callback,
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
  std::unique_ptr<SetEmitTouchEventsForMouseResult> result = SetEmitTouchEventsForMouseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetEmulatedMediaResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedMediaResult>)> callback,
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
  std::unique_ptr<SetEmulatedMediaResult> result = SetEmulatedMediaResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetEmulatedVisionDeficiencyResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedVisionDeficiencyResult>)> callback,
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
  std::unique_ptr<SetEmulatedVisionDeficiencyResult> result = SetEmulatedVisionDeficiencyResult::Parse(response, &errors);
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
void Domain::HandleSetIdleOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIdleOverrideResult>)> callback,
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
  std::unique_ptr<SetIdleOverrideResult> result = SetIdleOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleClearIdleOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearIdleOverrideResult>)> callback,
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
  std::unique_ptr<ClearIdleOverrideResult> result = ClearIdleOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetNavigatorOverridesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNavigatorOverridesResult>)> callback,
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
  std::unique_ptr<SetNavigatorOverridesResult> result = SetNavigatorOverridesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetPageScaleFactorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPageScaleFactorResult>)> callback,
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
  std::unique_ptr<SetPageScaleFactorResult> result = SetPageScaleFactorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetScriptExecutionDisabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScriptExecutionDisabledResult>)> callback,
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
  std::unique_ptr<SetScriptExecutionDisabledResult> result = SetScriptExecutionDisabledResult::Parse(response, &errors);
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
void Domain::HandleSetVirtualTimePolicyResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVirtualTimePolicyResult>)> callback,
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
  std::unique_ptr<SetVirtualTimePolicyResult> result = SetVirtualTimePolicyResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetLocaleOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocaleOverrideResult>)> callback,
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
  std::unique_ptr<SetLocaleOverrideResult> result = SetLocaleOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetTimezoneOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTimezoneOverrideResult>)> callback,
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
  std::unique_ptr<SetTimezoneOverrideResult> result = SetTimezoneOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetVisibleSizeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVisibleSizeResult>)> callback,
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
  std::unique_ptr<SetVisibleSizeResult> result = SetVisibleSizeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDisabledImageTypesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDisabledImageTypesResult>)> callback,
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
  std::unique_ptr<SetDisabledImageTypesResult> result = SetDisabledImageTypesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetHardwareConcurrencyOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetHardwareConcurrencyOverrideResult>)> callback,
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
  std::unique_ptr<SetHardwareConcurrencyOverrideResult> result = SetHardwareConcurrencyOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetUserAgentOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserAgentOverrideResult>)> callback,
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
  std::unique_ptr<SetUserAgentOverrideResult> result = SetUserAgentOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAutomationOverrideResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomationOverrideResult>)> callback,
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
  std::unique_ptr<SetAutomationOverrideResult> result = SetAutomationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchVirtualTimeBudgetExpiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimeBudgetExpiredParams> parsed_params(VirtualTimeBudgetExpiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnVirtualTimeBudgetExpired(*parsed_params);
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

}  // namespace emulation

} // namespace autofill_assistant
