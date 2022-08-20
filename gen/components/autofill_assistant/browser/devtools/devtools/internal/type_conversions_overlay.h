// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_OVERLAY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_OVERLAY_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_overlay.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<overlay::SourceOrderConfig> {
  static std::unique_ptr<overlay::SourceOrderConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SourceOrderConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SourceOrderConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GridHighlightConfig> {
  static std::unique_ptr<overlay::GridHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GridHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GridHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::FlexContainerHighlightConfig> {
  static std::unique_ptr<overlay::FlexContainerHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::FlexContainerHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::FlexContainerHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::FlexItemHighlightConfig> {
  static std::unique_ptr<overlay::FlexItemHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::FlexItemHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::FlexItemHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::LineStyle> {
  static std::unique_ptr<overlay::LineStyle> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::LineStyle::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::LineStyle& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::BoxStyle> {
  static std::unique_ptr<overlay::BoxStyle> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::BoxStyle::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::BoxStyle& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<overlay::ContrastAlgorithm> {
  static overlay::ContrastAlgorithm Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return overlay::ContrastAlgorithm::AA;
    }
    if (value.GetString() == "aa")
      return overlay::ContrastAlgorithm::AA;
    if (value.GetString() == "aaa")
      return overlay::ContrastAlgorithm::AAA;
    if (value.GetString() == "apca")
      return overlay::ContrastAlgorithm::APCA;
    errors->AddError("invalid enum value");
    return overlay::ContrastAlgorithm::AA;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ContrastAlgorithm& value, T*) {
  switch (value) {
    case overlay::ContrastAlgorithm::AA:
      return std::make_unique<base::Value>("aa");
    case overlay::ContrastAlgorithm::AAA:
      return std::make_unique<base::Value>("aaa");
    case overlay::ContrastAlgorithm::APCA:
      return std::make_unique<base::Value>("apca");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<overlay::HighlightConfig> {
  static std::unique_ptr<overlay::HighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightConfig& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<overlay::ColorFormat> {
  static overlay::ColorFormat Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return overlay::ColorFormat::RGB;
    }
    if (value.GetString() == "rgb")
      return overlay::ColorFormat::RGB;
    if (value.GetString() == "hsl")
      return overlay::ColorFormat::HSL;
    if (value.GetString() == "hwb")
      return overlay::ColorFormat::HWB;
    if (value.GetString() == "hex")
      return overlay::ColorFormat::HEX;
    errors->AddError("invalid enum value");
    return overlay::ColorFormat::RGB;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ColorFormat& value, T*) {
  switch (value) {
    case overlay::ColorFormat::RGB:
      return std::make_unique<base::Value>("rgb");
    case overlay::ColorFormat::HSL:
      return std::make_unique<base::Value>("hsl");
    case overlay::ColorFormat::HWB:
      return std::make_unique<base::Value>("hwb");
    case overlay::ColorFormat::HEX:
      return std::make_unique<base::Value>("hex");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<overlay::GridNodeHighlightConfig> {
  static std::unique_ptr<overlay::GridNodeHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GridNodeHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GridNodeHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::FlexNodeHighlightConfig> {
  static std::unique_ptr<overlay::FlexNodeHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::FlexNodeHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::FlexNodeHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::ScrollSnapContainerHighlightConfig> {
  static std::unique_ptr<overlay::ScrollSnapContainerHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::ScrollSnapContainerHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ScrollSnapContainerHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::ScrollSnapHighlightConfig> {
  static std::unique_ptr<overlay::ScrollSnapHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::ScrollSnapHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ScrollSnapHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HingeConfig> {
  static std::unique_ptr<overlay::HingeConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HingeConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HingeConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::ContainerQueryHighlightConfig> {
  static std::unique_ptr<overlay::ContainerQueryHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::ContainerQueryHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ContainerQueryHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::ContainerQueryContainerHighlightConfig> {
  static std::unique_ptr<overlay::ContainerQueryContainerHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::ContainerQueryContainerHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ContainerQueryContainerHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::IsolatedElementHighlightConfig> {
  static std::unique_ptr<overlay::IsolatedElementHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::IsolatedElementHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::IsolatedElementHighlightConfig& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::IsolationModeHighlightConfig> {
  static std::unique_ptr<overlay::IsolationModeHighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::IsolationModeHighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::IsolationModeHighlightConfig& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<overlay::InspectMode> {
  static overlay::InspectMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return overlay::InspectMode::SEARCH_FOR_NODE;
    }
    if (value.GetString() == "searchForNode")
      return overlay::InspectMode::SEARCH_FOR_NODE;
    if (value.GetString() == "searchForUAShadowDOM")
      return overlay::InspectMode::SEARCH_FORUA_SHADOWDOM;
    if (value.GetString() == "captureAreaScreenshot")
      return overlay::InspectMode::CAPTURE_AREA_SCREENSHOT;
    if (value.GetString() == "showDistances")
      return overlay::InspectMode::SHOW_DISTANCES;
    if (value.GetString() == "none")
      return overlay::InspectMode::NONE;
    errors->AddError("invalid enum value");
    return overlay::InspectMode::SEARCH_FOR_NODE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::InspectMode& value, T*) {
  switch (value) {
    case overlay::InspectMode::SEARCH_FOR_NODE:
      return std::make_unique<base::Value>("searchForNode");
    case overlay::InspectMode::SEARCH_FORUA_SHADOWDOM:
      return std::make_unique<base::Value>("searchForUAShadowDOM");
    case overlay::InspectMode::CAPTURE_AREA_SCREENSHOT:
      return std::make_unique<base::Value>("captureAreaScreenshot");
    case overlay::InspectMode::SHOW_DISTANCES:
      return std::make_unique<base::Value>("showDistances");
    case overlay::InspectMode::NONE:
      return std::make_unique<base::Value>("none");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<overlay::LineStylePattern> {
  static overlay::LineStylePattern Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return overlay::LineStylePattern::DASHED;
    }
    if (value.GetString() == "dashed")
      return overlay::LineStylePattern::DASHED;
    if (value.GetString() == "dotted")
      return overlay::LineStylePattern::DOTTED;
    errors->AddError("invalid enum value");
    return overlay::LineStylePattern::DASHED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::LineStylePattern& value, T*) {
  switch (value) {
    case overlay::LineStylePattern::DASHED:
      return std::make_unique<base::Value>("dashed");
    case overlay::LineStylePattern::DOTTED:
      return std::make_unique<base::Value>("dotted");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<overlay::DisableParams> {
  static std::unique_ptr<overlay::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::DisableResult> {
  static std::unique_ptr<overlay::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::EnableParams> {
  static std::unique_ptr<overlay::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::EnableResult> {
  static std::unique_ptr<overlay::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetHighlightObjectForTestParams> {
  static std::unique_ptr<overlay::GetHighlightObjectForTestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetHighlightObjectForTestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetHighlightObjectForTestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetHighlightObjectForTestResult> {
  static std::unique_ptr<overlay::GetHighlightObjectForTestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetHighlightObjectForTestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetHighlightObjectForTestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetGridHighlightObjectsForTestParams> {
  static std::unique_ptr<overlay::GetGridHighlightObjectsForTestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetGridHighlightObjectsForTestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetGridHighlightObjectsForTestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetGridHighlightObjectsForTestResult> {
  static std::unique_ptr<overlay::GetGridHighlightObjectsForTestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetGridHighlightObjectsForTestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetGridHighlightObjectsForTestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetSourceOrderHighlightObjectForTestParams> {
  static std::unique_ptr<overlay::GetSourceOrderHighlightObjectForTestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetSourceOrderHighlightObjectForTestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetSourceOrderHighlightObjectForTestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetSourceOrderHighlightObjectForTestResult> {
  static std::unique_ptr<overlay::GetSourceOrderHighlightObjectForTestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetSourceOrderHighlightObjectForTestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetSourceOrderHighlightObjectForTestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HideHighlightParams> {
  static std::unique_ptr<overlay::HideHighlightParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HideHighlightParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HideHighlightParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HideHighlightResult> {
  static std::unique_ptr<overlay::HideHighlightResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HideHighlightResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HideHighlightResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightFrameParams> {
  static std::unique_ptr<overlay::HighlightFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightFrameResult> {
  static std::unique_ptr<overlay::HighlightFrameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightFrameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightFrameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightNodeParams> {
  static std::unique_ptr<overlay::HighlightNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightNodeResult> {
  static std::unique_ptr<overlay::HighlightNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightQuadParams> {
  static std::unique_ptr<overlay::HighlightQuadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightQuadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightQuadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightQuadResult> {
  static std::unique_ptr<overlay::HighlightQuadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightQuadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightQuadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightRectParams> {
  static std::unique_ptr<overlay::HighlightRectParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightRectParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightRectParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightRectResult> {
  static std::unique_ptr<overlay::HighlightRectResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightRectResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightRectResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightSourceOrderParams> {
  static std::unique_ptr<overlay::HighlightSourceOrderParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightSourceOrderParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightSourceOrderParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightSourceOrderResult> {
  static std::unique_ptr<overlay::HighlightSourceOrderResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightSourceOrderResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightSourceOrderResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetInspectModeParams> {
  static std::unique_ptr<overlay::SetInspectModeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetInspectModeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetInspectModeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetInspectModeResult> {
  static std::unique_ptr<overlay::SetInspectModeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetInspectModeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetInspectModeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowAdHighlightsParams> {
  static std::unique_ptr<overlay::SetShowAdHighlightsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowAdHighlightsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowAdHighlightsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowAdHighlightsResult> {
  static std::unique_ptr<overlay::SetShowAdHighlightsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowAdHighlightsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowAdHighlightsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetPausedInDebuggerMessageParams> {
  static std::unique_ptr<overlay::SetPausedInDebuggerMessageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetPausedInDebuggerMessageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetPausedInDebuggerMessageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetPausedInDebuggerMessageResult> {
  static std::unique_ptr<overlay::SetPausedInDebuggerMessageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetPausedInDebuggerMessageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetPausedInDebuggerMessageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowDebugBordersParams> {
  static std::unique_ptr<overlay::SetShowDebugBordersParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowDebugBordersParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowDebugBordersParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowDebugBordersResult> {
  static std::unique_ptr<overlay::SetShowDebugBordersResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowDebugBordersResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowDebugBordersResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowFPSCounterParams> {
  static std::unique_ptr<overlay::SetShowFPSCounterParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowFPSCounterParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowFPSCounterParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowFPSCounterResult> {
  static std::unique_ptr<overlay::SetShowFPSCounterResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowFPSCounterResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowFPSCounterResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowGridOverlaysParams> {
  static std::unique_ptr<overlay::SetShowGridOverlaysParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowGridOverlaysParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowGridOverlaysParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowGridOverlaysResult> {
  static std::unique_ptr<overlay::SetShowGridOverlaysResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowGridOverlaysResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowGridOverlaysResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowFlexOverlaysParams> {
  static std::unique_ptr<overlay::SetShowFlexOverlaysParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowFlexOverlaysParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowFlexOverlaysParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowFlexOverlaysResult> {
  static std::unique_ptr<overlay::SetShowFlexOverlaysResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowFlexOverlaysResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowFlexOverlaysResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowScrollSnapOverlaysParams> {
  static std::unique_ptr<overlay::SetShowScrollSnapOverlaysParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowScrollSnapOverlaysParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowScrollSnapOverlaysParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowScrollSnapOverlaysResult> {
  static std::unique_ptr<overlay::SetShowScrollSnapOverlaysResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowScrollSnapOverlaysResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowScrollSnapOverlaysResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowContainerQueryOverlaysParams> {
  static std::unique_ptr<overlay::SetShowContainerQueryOverlaysParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowContainerQueryOverlaysParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowContainerQueryOverlaysParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowContainerQueryOverlaysResult> {
  static std::unique_ptr<overlay::SetShowContainerQueryOverlaysResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowContainerQueryOverlaysResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowContainerQueryOverlaysResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowPaintRectsParams> {
  static std::unique_ptr<overlay::SetShowPaintRectsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowPaintRectsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowPaintRectsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowPaintRectsResult> {
  static std::unique_ptr<overlay::SetShowPaintRectsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowPaintRectsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowPaintRectsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowLayoutShiftRegionsParams> {
  static std::unique_ptr<overlay::SetShowLayoutShiftRegionsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowLayoutShiftRegionsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowLayoutShiftRegionsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowLayoutShiftRegionsResult> {
  static std::unique_ptr<overlay::SetShowLayoutShiftRegionsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowLayoutShiftRegionsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowLayoutShiftRegionsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowScrollBottleneckRectsParams> {
  static std::unique_ptr<overlay::SetShowScrollBottleneckRectsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowScrollBottleneckRectsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowScrollBottleneckRectsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowScrollBottleneckRectsResult> {
  static std::unique_ptr<overlay::SetShowScrollBottleneckRectsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowScrollBottleneckRectsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowScrollBottleneckRectsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowHitTestBordersParams> {
  static std::unique_ptr<overlay::SetShowHitTestBordersParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowHitTestBordersParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowHitTestBordersParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowHitTestBordersResult> {
  static std::unique_ptr<overlay::SetShowHitTestBordersResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowHitTestBordersResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowHitTestBordersResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowWebVitalsParams> {
  static std::unique_ptr<overlay::SetShowWebVitalsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowWebVitalsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowWebVitalsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowWebVitalsResult> {
  static std::unique_ptr<overlay::SetShowWebVitalsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowWebVitalsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowWebVitalsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowViewportSizeOnResizeParams> {
  static std::unique_ptr<overlay::SetShowViewportSizeOnResizeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowViewportSizeOnResizeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowViewportSizeOnResizeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowViewportSizeOnResizeResult> {
  static std::unique_ptr<overlay::SetShowViewportSizeOnResizeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowViewportSizeOnResizeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowViewportSizeOnResizeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowHingeParams> {
  static std::unique_ptr<overlay::SetShowHingeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowHingeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowHingeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowHingeResult> {
  static std::unique_ptr<overlay::SetShowHingeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowHingeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowHingeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowIsolatedElementsParams> {
  static std::unique_ptr<overlay::SetShowIsolatedElementsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowIsolatedElementsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowIsolatedElementsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowIsolatedElementsResult> {
  static std::unique_ptr<overlay::SetShowIsolatedElementsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowIsolatedElementsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowIsolatedElementsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::InspectNodeRequestedParams> {
  static std::unique_ptr<overlay::InspectNodeRequestedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::InspectNodeRequestedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::InspectNodeRequestedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::NodeHighlightRequestedParams> {
  static std::unique_ptr<overlay::NodeHighlightRequestedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::NodeHighlightRequestedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::NodeHighlightRequestedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::ScreenshotRequestedParams> {
  static std::unique_ptr<overlay::ScreenshotRequestedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::ScreenshotRequestedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ScreenshotRequestedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::InspectModeCanceledParams> {
  static std::unique_ptr<overlay::InspectModeCanceledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::InspectModeCanceledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::InspectModeCanceledParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_OVERLAY_H_
