// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_EMULATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_EMULATION_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/message_dispatcher.h"


namespace autofill_assistant {
namespace emulation {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // Notification sent after the virtual time budget for the current VirtualTimePolicy has run out.
  virtual void OnVirtualTimeBudgetExpired(const VirtualTimeBudgetExpiredParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // Experimental: Notification sent after the virtual time budget for the current VirtualTimePolicy has run out.
  virtual void OnVirtualTimeBudgetExpired(const VirtualTimeBudgetExpiredParams& params) final {}
};

// This domain emulates different environments for the page.
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

  // Tells whether emulation is supported.
  void CanEmulate(std::unique_ptr<CanEmulateParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)>());
  void CanEmulate(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)>());

  // Clears the overridden device metrics.
  void ClearDeviceMetricsOverride(std::unique_ptr<ClearDeviceMetricsOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceMetricsOverrideResult>)>());
  void ClearDeviceMetricsOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void ClearDeviceMetricsOverride(std::unique_ptr<ClearDeviceMetricsOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Clears the overridden Geolocation Position and Error.
  void ClearGeolocationOverride(std::unique_ptr<ClearGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearGeolocationOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearGeolocationOverrideResult>)>());
  void ClearGeolocationOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void ClearGeolocationOverride(std::unique_ptr<ClearGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Sets or clears an override of the default background color of the frame. This override is used
  // if the content does not specify one.
  void SetDefaultBackgroundColorOverride(std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)>());
  void SetDefaultBackgroundColorOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetDefaultBackgroundColorOverride(std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
  // window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
  // query results).
  void SetDeviceMetricsOverride(std::unique_ptr<SetDeviceMetricsOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceMetricsOverrideResult>)>());
  void SetDeviceMetricsOverride(int width, int height, double device_scale_factor, bool mobile, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetDeviceMetricsOverride(std::unique_ptr<SetDeviceMetricsOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Emulates the given media type or media feature for CSS media queries.
  void SetEmulatedMedia(std::unique_ptr<SetEmulatedMediaParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedMediaResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedMediaResult>)>());
  void SetEmulatedMedia(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetEmulatedMedia(std::unique_ptr<SetEmulatedMediaParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
  // unavailable.
  void SetGeolocationOverride(std::unique_ptr<SetGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetGeolocationOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetGeolocationOverrideResult>)>());
  void SetGeolocationOverride(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetGeolocationOverride(std::unique_ptr<SetGeolocationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Switches script execution in the page.
  void SetScriptExecutionDisabled(std::unique_ptr<SetScriptExecutionDisabledParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScriptExecutionDisabledResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScriptExecutionDisabledResult>)>());
  void SetScriptExecutionDisabled(bool value, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetScriptExecutionDisabled(std::unique_ptr<SetScriptExecutionDisabledParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Enables touch on platforms which do not support them.
  void SetTouchEmulationEnabled(std::unique_ptr<SetTouchEmulationEnabledParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTouchEmulationEnabledResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTouchEmulationEnabledResult>)>());
  void SetTouchEmulationEnabled(bool enabled, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetTouchEmulationEnabled(std::unique_ptr<SetTouchEmulationEnabledParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Allows overriding user agent with the given string.
  void SetUserAgentOverride(std::unique_ptr<SetUserAgentOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserAgentOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserAgentOverrideResult>)>());
  void SetUserAgentOverride(const std::string& user_agent, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetUserAgentOverride(std::unique_ptr<SetUserAgentOverrideParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleCanEmulateResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CanEmulateResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleClearDeviceMetricsOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleClearGeolocationOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearGeolocationOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleResetPageScaleFactorResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPageScaleFactorResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetFocusEmulationEnabledResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFocusEmulationEnabledResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetAutoDarkModeOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoDarkModeOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetCPUThrottlingRateResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCPUThrottlingRateResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetDefaultBackgroundColorOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetDeviceMetricsOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetScrollbarsHiddenResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScrollbarsHiddenResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetDocumentCookieDisabledResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentCookieDisabledResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetEmitTouchEventsForMouseResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmitTouchEventsForMouseResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetEmulatedMediaResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedMediaResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetEmulatedVisionDeficiencyResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedVisionDeficiencyResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetGeolocationOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetGeolocationOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetIdleOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIdleOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleClearIdleOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearIdleOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetNavigatorOverridesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNavigatorOverridesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetPageScaleFactorResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPageScaleFactorResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetScriptExecutionDisabledResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScriptExecutionDisabledResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetTouchEmulationEnabledResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTouchEmulationEnabledResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetVirtualTimePolicyResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVirtualTimePolicyResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetLocaleOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocaleOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetTimezoneOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTimezoneOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetVisibleSizeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVisibleSizeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetDisabledImageTypesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDisabledImageTypesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetHardwareConcurrencyOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetHardwareConcurrencyOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetUserAgentOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserAgentOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetAutomationOverrideResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomationOverrideResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchVirtualTimeBudgetExpiredEvent(const base::Value& params);

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

  // Requests that page scale factor is reset to initial values.
  void ResetPageScaleFactor(std::unique_ptr<ResetPageScaleFactorParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPageScaleFactorResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResetPageScaleFactorResult>)>());

  // Enables or disables simulating a focused and active page.
  void SetFocusEmulationEnabled(std::unique_ptr<SetFocusEmulationEnabledParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFocusEmulationEnabledResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFocusEmulationEnabledResult>)>());

  // Automatically render all web contents using a dark theme.
  void SetAutoDarkModeOverride(std::unique_ptr<SetAutoDarkModeOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoDarkModeOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoDarkModeOverrideResult>)>());

  // Enables CPU throttling to emulate slow CPUs.
  void SetCPUThrottlingRate(std::unique_ptr<SetCPUThrottlingRateParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCPUThrottlingRateResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCPUThrottlingRateResult>)>());

  void SetScrollbarsHidden(std::unique_ptr<SetScrollbarsHiddenParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScrollbarsHiddenResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScrollbarsHiddenResult>)>());

  void SetDocumentCookieDisabled(std::unique_ptr<SetDocumentCookieDisabledParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentCookieDisabledResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDocumentCookieDisabledResult>)>());

  void SetEmitTouchEventsForMouse(std::unique_ptr<SetEmitTouchEventsForMouseParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmitTouchEventsForMouseResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmitTouchEventsForMouseResult>)>());

  // Emulates the given vision deficiency.
  void SetEmulatedVisionDeficiency(std::unique_ptr<SetEmulatedVisionDeficiencyParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedVisionDeficiencyResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEmulatedVisionDeficiencyResult>)>());

  // Overrides the Idle state.
  void SetIdleOverride(std::unique_ptr<SetIdleOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIdleOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIdleOverrideResult>)>());

  // Clears Idle state overrides.
  void ClearIdleOverride(std::unique_ptr<ClearIdleOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearIdleOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearIdleOverrideResult>)>());

  // Overrides value returned by the javascript navigator object.
  void SetNavigatorOverrides(std::unique_ptr<SetNavigatorOverridesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNavigatorOverridesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNavigatorOverridesResult>)>());

  // Sets a specified page scale factor.
  void SetPageScaleFactor(std::unique_ptr<SetPageScaleFactorParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPageScaleFactorResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetPageScaleFactorResult>)>());

  // Turns on virtual time for all frames (replacing real-time with a synthetic time source) and sets
  // the current virtual time policy.  Note this supersedes any previous time budget.
  void SetVirtualTimePolicy(std::unique_ptr<SetVirtualTimePolicyParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVirtualTimePolicyResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVirtualTimePolicyResult>)>());

  // Overrides default host system locale with the specified one.
  void SetLocaleOverride(std::unique_ptr<SetLocaleOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocaleOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocaleOverrideResult>)>());

  // Overrides default host system timezone with the specified one.
  void SetTimezoneOverride(std::unique_ptr<SetTimezoneOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTimezoneOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetTimezoneOverrideResult>)>());

  // Resizes the frame/viewport of the page. Note that this does not affect the frame's container
  // (e.g. browser window). Can be used to produce screenshots of the specified size. Not supported
  // on Android.
  void SetVisibleSize(std::unique_ptr<SetVisibleSizeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVisibleSizeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetVisibleSizeResult>)>());

  void SetDisabledImageTypes(std::unique_ptr<SetDisabledImageTypesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDisabledImageTypesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDisabledImageTypesResult>)>());

  void SetHardwareConcurrencyOverride(std::unique_ptr<SetHardwareConcurrencyOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetHardwareConcurrencyOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetHardwareConcurrencyOverrideResult>)>());

  // Allows overriding the automation flag.
  void SetAutomationOverride(std::unique_ptr<SetAutomationOverrideParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomationOverrideResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomationOverrideResult>)>());

};

}  // namespace emulation
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_EMULATION_H_
