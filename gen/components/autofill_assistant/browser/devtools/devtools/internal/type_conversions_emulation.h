// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EMULATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EMULATION_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<emulation::ScreenOrientation> {
  static std::unique_ptr<emulation::ScreenOrientation> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ScreenOrientation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ScreenOrientation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::DisplayFeature> {
  static std::unique_ptr<emulation::DisplayFeature> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::DisplayFeature::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::DisplayFeature& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::MediaFeature> {
  static std::unique_ptr<emulation::MediaFeature> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::MediaFeature::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::MediaFeature& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<emulation::VirtualTimePolicy> {
  static emulation::VirtualTimePolicy Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::VirtualTimePolicy::ADVANCE;
    }
    if (value.GetString() == "advance")
      return emulation::VirtualTimePolicy::ADVANCE;
    if (value.GetString() == "pause")
      return emulation::VirtualTimePolicy::PAUSE;
    if (value.GetString() == "pauseIfNetworkFetchesPending")
      return emulation::VirtualTimePolicy::PAUSE_IF_NETWORK_FETCHES_PENDING;
    errors->AddError("invalid enum value");
    return emulation::VirtualTimePolicy::ADVANCE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::VirtualTimePolicy& value, T*) {
  switch (value) {
    case emulation::VirtualTimePolicy::ADVANCE:
      return std::make_unique<base::Value>("advance");
    case emulation::VirtualTimePolicy::PAUSE:
      return std::make_unique<base::Value>("pause");
    case emulation::VirtualTimePolicy::PAUSE_IF_NETWORK_FETCHES_PENDING:
      return std::make_unique<base::Value>("pauseIfNetworkFetchesPending");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<emulation::UserAgentBrandVersion> {
  static std::unique_ptr<emulation::UserAgentBrandVersion> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::UserAgentBrandVersion::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::UserAgentBrandVersion& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::UserAgentMetadata> {
  static std::unique_ptr<emulation::UserAgentMetadata> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::UserAgentMetadata::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::UserAgentMetadata& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<emulation::DisabledImageType> {
  static emulation::DisabledImageType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::DisabledImageType::AVIF;
    }
    if (value.GetString() == "avif")
      return emulation::DisabledImageType::AVIF;
    if (value.GetString() == "jxl")
      return emulation::DisabledImageType::JXL;
    if (value.GetString() == "webp")
      return emulation::DisabledImageType::WEBP;
    errors->AddError("invalid enum value");
    return emulation::DisabledImageType::AVIF;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::DisabledImageType& value, T*) {
  switch (value) {
    case emulation::DisabledImageType::AVIF:
      return std::make_unique<base::Value>("avif");
    case emulation::DisabledImageType::JXL:
      return std::make_unique<base::Value>("jxl");
    case emulation::DisabledImageType::WEBP:
      return std::make_unique<base::Value>("webp");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<emulation::ScreenOrientationType> {
  static emulation::ScreenOrientationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::ScreenOrientationType::PORTRAIT_PRIMARY;
    }
    if (value.GetString() == "portraitPrimary")
      return emulation::ScreenOrientationType::PORTRAIT_PRIMARY;
    if (value.GetString() == "portraitSecondary")
      return emulation::ScreenOrientationType::PORTRAIT_SECONDARY;
    if (value.GetString() == "landscapePrimary")
      return emulation::ScreenOrientationType::LANDSCAPE_PRIMARY;
    if (value.GetString() == "landscapeSecondary")
      return emulation::ScreenOrientationType::LANDSCAPE_SECONDARY;
    errors->AddError("invalid enum value");
    return emulation::ScreenOrientationType::PORTRAIT_PRIMARY;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ScreenOrientationType& value, T*) {
  switch (value) {
    case emulation::ScreenOrientationType::PORTRAIT_PRIMARY:
      return std::make_unique<base::Value>("portraitPrimary");
    case emulation::ScreenOrientationType::PORTRAIT_SECONDARY:
      return std::make_unique<base::Value>("portraitSecondary");
    case emulation::ScreenOrientationType::LANDSCAPE_PRIMARY:
      return std::make_unique<base::Value>("landscapePrimary");
    case emulation::ScreenOrientationType::LANDSCAPE_SECONDARY:
      return std::make_unique<base::Value>("landscapeSecondary");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<emulation::DisplayFeatureOrientation> {
  static emulation::DisplayFeatureOrientation Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::DisplayFeatureOrientation::VERTICAL;
    }
    if (value.GetString() == "vertical")
      return emulation::DisplayFeatureOrientation::VERTICAL;
    if (value.GetString() == "horizontal")
      return emulation::DisplayFeatureOrientation::HORIZONTAL;
    errors->AddError("invalid enum value");
    return emulation::DisplayFeatureOrientation::VERTICAL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::DisplayFeatureOrientation& value, T*) {
  switch (value) {
    case emulation::DisplayFeatureOrientation::VERTICAL:
      return std::make_unique<base::Value>("vertical");
    case emulation::DisplayFeatureOrientation::HORIZONTAL:
      return std::make_unique<base::Value>("horizontal");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<emulation::CanEmulateParams> {
  static std::unique_ptr<emulation::CanEmulateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::CanEmulateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::CanEmulateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::CanEmulateResult> {
  static std::unique_ptr<emulation::CanEmulateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::CanEmulateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::CanEmulateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearDeviceMetricsOverrideParams> {
  static std::unique_ptr<emulation::ClearDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearDeviceMetricsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearDeviceMetricsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearDeviceMetricsOverrideResult> {
  static std::unique_ptr<emulation::ClearDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearDeviceMetricsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearDeviceMetricsOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearGeolocationOverrideParams> {
  static std::unique_ptr<emulation::ClearGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearGeolocationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearGeolocationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearGeolocationOverrideResult> {
  static std::unique_ptr<emulation::ClearGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearGeolocationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearGeolocationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ResetPageScaleFactorParams> {
  static std::unique_ptr<emulation::ResetPageScaleFactorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ResetPageScaleFactorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ResetPageScaleFactorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ResetPageScaleFactorResult> {
  static std::unique_ptr<emulation::ResetPageScaleFactorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ResetPageScaleFactorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ResetPageScaleFactorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetFocusEmulationEnabledParams> {
  static std::unique_ptr<emulation::SetFocusEmulationEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetFocusEmulationEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetFocusEmulationEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetFocusEmulationEnabledResult> {
  static std::unique_ptr<emulation::SetFocusEmulationEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetFocusEmulationEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetFocusEmulationEnabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetAutoDarkModeOverrideParams> {
  static std::unique_ptr<emulation::SetAutoDarkModeOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetAutoDarkModeOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetAutoDarkModeOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetAutoDarkModeOverrideResult> {
  static std::unique_ptr<emulation::SetAutoDarkModeOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetAutoDarkModeOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetAutoDarkModeOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetCPUThrottlingRateParams> {
  static std::unique_ptr<emulation::SetCPUThrottlingRateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetCPUThrottlingRateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetCPUThrottlingRateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetCPUThrottlingRateResult> {
  static std::unique_ptr<emulation::SetCPUThrottlingRateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetCPUThrottlingRateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetCPUThrottlingRateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDefaultBackgroundColorOverrideParams> {
  static std::unique_ptr<emulation::SetDefaultBackgroundColorOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDefaultBackgroundColorOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDefaultBackgroundColorOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDefaultBackgroundColorOverrideResult> {
  static std::unique_ptr<emulation::SetDefaultBackgroundColorOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDefaultBackgroundColorOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDefaultBackgroundColorOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDeviceMetricsOverrideParams> {
  static std::unique_ptr<emulation::SetDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDeviceMetricsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDeviceMetricsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDeviceMetricsOverrideResult> {
  static std::unique_ptr<emulation::SetDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDeviceMetricsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDeviceMetricsOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetScrollbarsHiddenParams> {
  static std::unique_ptr<emulation::SetScrollbarsHiddenParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetScrollbarsHiddenParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetScrollbarsHiddenParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetScrollbarsHiddenResult> {
  static std::unique_ptr<emulation::SetScrollbarsHiddenResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetScrollbarsHiddenResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetScrollbarsHiddenResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDocumentCookieDisabledParams> {
  static std::unique_ptr<emulation::SetDocumentCookieDisabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDocumentCookieDisabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDocumentCookieDisabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDocumentCookieDisabledResult> {
  static std::unique_ptr<emulation::SetDocumentCookieDisabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDocumentCookieDisabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDocumentCookieDisabledResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<emulation::SetEmitTouchEventsForMouseConfiguration> {
  static emulation::SetEmitTouchEventsForMouseConfiguration Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE;
    }
    if (value.GetString() == "mobile")
      return emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE;
    if (value.GetString() == "desktop")
      return emulation::SetEmitTouchEventsForMouseConfiguration::DESKTOP;
    errors->AddError("invalid enum value");
    return emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmitTouchEventsForMouseConfiguration& value, T*) {
  switch (value) {
    case emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE:
      return std::make_unique<base::Value>("mobile");
    case emulation::SetEmitTouchEventsForMouseConfiguration::DESKTOP:
      return std::make_unique<base::Value>("desktop");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<emulation::SetEmitTouchEventsForMouseParams> {
  static std::unique_ptr<emulation::SetEmitTouchEventsForMouseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmitTouchEventsForMouseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmitTouchEventsForMouseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmitTouchEventsForMouseResult> {
  static std::unique_ptr<emulation::SetEmitTouchEventsForMouseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmitTouchEventsForMouseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmitTouchEventsForMouseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmulatedMediaParams> {
  static std::unique_ptr<emulation::SetEmulatedMediaParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmulatedMediaParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedMediaParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmulatedMediaResult> {
  static std::unique_ptr<emulation::SetEmulatedMediaResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmulatedMediaResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedMediaResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<emulation::SetEmulatedVisionDeficiencyType> {
  static emulation::SetEmulatedVisionDeficiencyType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::SetEmulatedVisionDeficiencyType::NONE;
    }
    if (value.GetString() == "none")
      return emulation::SetEmulatedVisionDeficiencyType::NONE;
    if (value.GetString() == "achromatopsia")
      return emulation::SetEmulatedVisionDeficiencyType::ACHROMATOPSIA;
    if (value.GetString() == "blurredVision")
      return emulation::SetEmulatedVisionDeficiencyType::BLURRED_VISION;
    if (value.GetString() == "deuteranopia")
      return emulation::SetEmulatedVisionDeficiencyType::DEUTERANOPIA;
    if (value.GetString() == "protanopia")
      return emulation::SetEmulatedVisionDeficiencyType::PROTANOPIA;
    if (value.GetString() == "tritanopia")
      return emulation::SetEmulatedVisionDeficiencyType::TRITANOPIA;
    errors->AddError("invalid enum value");
    return emulation::SetEmulatedVisionDeficiencyType::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedVisionDeficiencyType& value, T*) {
  switch (value) {
    case emulation::SetEmulatedVisionDeficiencyType::NONE:
      return std::make_unique<base::Value>("none");
    case emulation::SetEmulatedVisionDeficiencyType::ACHROMATOPSIA:
      return std::make_unique<base::Value>("achromatopsia");
    case emulation::SetEmulatedVisionDeficiencyType::BLURRED_VISION:
      return std::make_unique<base::Value>("blurredVision");
    case emulation::SetEmulatedVisionDeficiencyType::DEUTERANOPIA:
      return std::make_unique<base::Value>("deuteranopia");
    case emulation::SetEmulatedVisionDeficiencyType::PROTANOPIA:
      return std::make_unique<base::Value>("protanopia");
    case emulation::SetEmulatedVisionDeficiencyType::TRITANOPIA:
      return std::make_unique<base::Value>("tritanopia");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<emulation::SetEmulatedVisionDeficiencyParams> {
  static std::unique_ptr<emulation::SetEmulatedVisionDeficiencyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmulatedVisionDeficiencyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedVisionDeficiencyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmulatedVisionDeficiencyResult> {
  static std::unique_ptr<emulation::SetEmulatedVisionDeficiencyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmulatedVisionDeficiencyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedVisionDeficiencyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetGeolocationOverrideParams> {
  static std::unique_ptr<emulation::SetGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetGeolocationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetGeolocationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetGeolocationOverrideResult> {
  static std::unique_ptr<emulation::SetGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetGeolocationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetGeolocationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetIdleOverrideParams> {
  static std::unique_ptr<emulation::SetIdleOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetIdleOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetIdleOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetIdleOverrideResult> {
  static std::unique_ptr<emulation::SetIdleOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetIdleOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetIdleOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearIdleOverrideParams> {
  static std::unique_ptr<emulation::ClearIdleOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearIdleOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearIdleOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearIdleOverrideResult> {
  static std::unique_ptr<emulation::ClearIdleOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearIdleOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearIdleOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetNavigatorOverridesParams> {
  static std::unique_ptr<emulation::SetNavigatorOverridesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetNavigatorOverridesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetNavigatorOverridesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetNavigatorOverridesResult> {
  static std::unique_ptr<emulation::SetNavigatorOverridesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetNavigatorOverridesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetNavigatorOverridesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetPageScaleFactorParams> {
  static std::unique_ptr<emulation::SetPageScaleFactorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetPageScaleFactorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetPageScaleFactorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetPageScaleFactorResult> {
  static std::unique_ptr<emulation::SetPageScaleFactorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetPageScaleFactorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetPageScaleFactorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetScriptExecutionDisabledParams> {
  static std::unique_ptr<emulation::SetScriptExecutionDisabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetScriptExecutionDisabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetScriptExecutionDisabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetScriptExecutionDisabledResult> {
  static std::unique_ptr<emulation::SetScriptExecutionDisabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetScriptExecutionDisabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetScriptExecutionDisabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetTouchEmulationEnabledParams> {
  static std::unique_ptr<emulation::SetTouchEmulationEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetTouchEmulationEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetTouchEmulationEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetTouchEmulationEnabledResult> {
  static std::unique_ptr<emulation::SetTouchEmulationEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetTouchEmulationEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetTouchEmulationEnabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVirtualTimePolicyParams> {
  static std::unique_ptr<emulation::SetVirtualTimePolicyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVirtualTimePolicyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVirtualTimePolicyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVirtualTimePolicyResult> {
  static std::unique_ptr<emulation::SetVirtualTimePolicyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVirtualTimePolicyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVirtualTimePolicyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetLocaleOverrideParams> {
  static std::unique_ptr<emulation::SetLocaleOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetLocaleOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetLocaleOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetLocaleOverrideResult> {
  static std::unique_ptr<emulation::SetLocaleOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetLocaleOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetLocaleOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetTimezoneOverrideParams> {
  static std::unique_ptr<emulation::SetTimezoneOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetTimezoneOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetTimezoneOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetTimezoneOverrideResult> {
  static std::unique_ptr<emulation::SetTimezoneOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetTimezoneOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetTimezoneOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVisibleSizeParams> {
  static std::unique_ptr<emulation::SetVisibleSizeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVisibleSizeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVisibleSizeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVisibleSizeResult> {
  static std::unique_ptr<emulation::SetVisibleSizeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVisibleSizeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVisibleSizeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDisabledImageTypesParams> {
  static std::unique_ptr<emulation::SetDisabledImageTypesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDisabledImageTypesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDisabledImageTypesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDisabledImageTypesResult> {
  static std::unique_ptr<emulation::SetDisabledImageTypesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDisabledImageTypesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDisabledImageTypesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetHardwareConcurrencyOverrideParams> {
  static std::unique_ptr<emulation::SetHardwareConcurrencyOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetHardwareConcurrencyOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetHardwareConcurrencyOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetHardwareConcurrencyOverrideResult> {
  static std::unique_ptr<emulation::SetHardwareConcurrencyOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetHardwareConcurrencyOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetHardwareConcurrencyOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetUserAgentOverrideParams> {
  static std::unique_ptr<emulation::SetUserAgentOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetUserAgentOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetUserAgentOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetUserAgentOverrideResult> {
  static std::unique_ptr<emulation::SetUserAgentOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetUserAgentOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetUserAgentOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetAutomationOverrideParams> {
  static std::unique_ptr<emulation::SetAutomationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetAutomationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetAutomationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetAutomationOverrideResult> {
  static std::unique_ptr<emulation::SetAutomationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetAutomationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetAutomationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::VirtualTimeBudgetExpiredParams> {
  static std::unique_ptr<emulation::VirtualTimeBudgetExpiredParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::VirtualTimeBudgetExpiredParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::VirtualTimeBudgetExpiredParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EMULATION_H_
