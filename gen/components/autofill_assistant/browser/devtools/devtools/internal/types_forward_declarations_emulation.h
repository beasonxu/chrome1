// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_EMULATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_EMULATION_H_

#include "base/values.h"

namespace autofill_assistant {

namespace emulation {
class ScreenOrientation;
class DisplayFeature;
class MediaFeature;
class UserAgentBrandVersion;
class UserAgentMetadata;
class CanEmulateParams;
class CanEmulateResult;
class ClearDeviceMetricsOverrideParams;
class ClearDeviceMetricsOverrideResult;
class ClearGeolocationOverrideParams;
class ClearGeolocationOverrideResult;
class ResetPageScaleFactorParams;
class ResetPageScaleFactorResult;
class SetFocusEmulationEnabledParams;
class SetFocusEmulationEnabledResult;
class SetAutoDarkModeOverrideParams;
class SetAutoDarkModeOverrideResult;
class SetCPUThrottlingRateParams;
class SetCPUThrottlingRateResult;
class SetDefaultBackgroundColorOverrideParams;
class SetDefaultBackgroundColorOverrideResult;
class SetDeviceMetricsOverrideParams;
class SetDeviceMetricsOverrideResult;
class SetScrollbarsHiddenParams;
class SetScrollbarsHiddenResult;
class SetDocumentCookieDisabledParams;
class SetDocumentCookieDisabledResult;
class SetEmitTouchEventsForMouseParams;
class SetEmitTouchEventsForMouseResult;
class SetEmulatedMediaParams;
class SetEmulatedMediaResult;
class SetEmulatedVisionDeficiencyParams;
class SetEmulatedVisionDeficiencyResult;
class SetGeolocationOverrideParams;
class SetGeolocationOverrideResult;
class SetIdleOverrideParams;
class SetIdleOverrideResult;
class ClearIdleOverrideParams;
class ClearIdleOverrideResult;
class SetNavigatorOverridesParams;
class SetNavigatorOverridesResult;
class SetPageScaleFactorParams;
class SetPageScaleFactorResult;
class SetScriptExecutionDisabledParams;
class SetScriptExecutionDisabledResult;
class SetTouchEmulationEnabledParams;
class SetTouchEmulationEnabledResult;
class SetVirtualTimePolicyParams;
class SetVirtualTimePolicyResult;
class SetLocaleOverrideParams;
class SetLocaleOverrideResult;
class SetTimezoneOverrideParams;
class SetTimezoneOverrideResult;
class SetVisibleSizeParams;
class SetVisibleSizeResult;
class SetDisabledImageTypesParams;
class SetDisabledImageTypesResult;
class SetHardwareConcurrencyOverrideParams;
class SetHardwareConcurrencyOverrideResult;
class SetUserAgentOverrideParams;
class SetUserAgentOverrideResult;
class SetAutomationOverrideParams;
class SetAutomationOverrideResult;
class VirtualTimeBudgetExpiredParams;

enum class VirtualTimePolicy {
  ADVANCE,
  PAUSE,
  PAUSE_IF_NETWORK_FETCHES_PENDING
};

enum class DisabledImageType {
  AVIF,
  JXL,
  WEBP
};

enum class ScreenOrientationType {
  PORTRAIT_PRIMARY,
  PORTRAIT_SECONDARY,
  LANDSCAPE_PRIMARY,
  LANDSCAPE_SECONDARY
};

enum class DisplayFeatureOrientation {
  VERTICAL,
  HORIZONTAL
};

enum class SetEmitTouchEventsForMouseConfiguration {
  MOBILE,
  DESKTOP
};

enum class SetEmulatedVisionDeficiencyType {
  NONE,
  ACHROMATOPSIA,
  BLURRED_VISION,
  DEUTERANOPIA,
  PROTANOPIA,
  TRITANOPIA
};

}  // namespace emulation

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_EMULATION_H_
