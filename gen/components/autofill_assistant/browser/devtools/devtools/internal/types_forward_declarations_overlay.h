// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_OVERLAY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_OVERLAY_H_

#include "base/values.h"

namespace autofill_assistant {

namespace overlay {
class SourceOrderConfig;
class GridHighlightConfig;
class FlexContainerHighlightConfig;
class FlexItemHighlightConfig;
class LineStyle;
class BoxStyle;
class HighlightConfig;
class GridNodeHighlightConfig;
class FlexNodeHighlightConfig;
class ScrollSnapContainerHighlightConfig;
class ScrollSnapHighlightConfig;
class HingeConfig;
class ContainerQueryHighlightConfig;
class ContainerQueryContainerHighlightConfig;
class IsolatedElementHighlightConfig;
class IsolationModeHighlightConfig;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetHighlightObjectForTestParams;
class GetHighlightObjectForTestResult;
class GetGridHighlightObjectsForTestParams;
class GetGridHighlightObjectsForTestResult;
class GetSourceOrderHighlightObjectForTestParams;
class GetSourceOrderHighlightObjectForTestResult;
class HideHighlightParams;
class HideHighlightResult;
class HighlightFrameParams;
class HighlightFrameResult;
class HighlightNodeParams;
class HighlightNodeResult;
class HighlightQuadParams;
class HighlightQuadResult;
class HighlightRectParams;
class HighlightRectResult;
class HighlightSourceOrderParams;
class HighlightSourceOrderResult;
class SetInspectModeParams;
class SetInspectModeResult;
class SetShowAdHighlightsParams;
class SetShowAdHighlightsResult;
class SetPausedInDebuggerMessageParams;
class SetPausedInDebuggerMessageResult;
class SetShowDebugBordersParams;
class SetShowDebugBordersResult;
class SetShowFPSCounterParams;
class SetShowFPSCounterResult;
class SetShowGridOverlaysParams;
class SetShowGridOverlaysResult;
class SetShowFlexOverlaysParams;
class SetShowFlexOverlaysResult;
class SetShowScrollSnapOverlaysParams;
class SetShowScrollSnapOverlaysResult;
class SetShowContainerQueryOverlaysParams;
class SetShowContainerQueryOverlaysResult;
class SetShowPaintRectsParams;
class SetShowPaintRectsResult;
class SetShowLayoutShiftRegionsParams;
class SetShowLayoutShiftRegionsResult;
class SetShowScrollBottleneckRectsParams;
class SetShowScrollBottleneckRectsResult;
class SetShowHitTestBordersParams;
class SetShowHitTestBordersResult;
class SetShowWebVitalsParams;
class SetShowWebVitalsResult;
class SetShowViewportSizeOnResizeParams;
class SetShowViewportSizeOnResizeResult;
class SetShowHingeParams;
class SetShowHingeResult;
class SetShowIsolatedElementsParams;
class SetShowIsolatedElementsResult;
class InspectNodeRequestedParams;
class NodeHighlightRequestedParams;
class ScreenshotRequestedParams;
class InspectModeCanceledParams;

enum class ContrastAlgorithm {
  AA,
  AAA,
  APCA
};

enum class ColorFormat {
  RGB,
  HSL,
  HWB,
  HEX
};

enum class InspectMode {
  SEARCH_FOR_NODE,
  SEARCH_FORUA_SHADOWDOM,
  CAPTURE_AREA_SCREENSHOT,
  SHOW_DISTANCES,
  NONE
};

enum class LineStylePattern {
  DASHED,
  DOTTED
};

}  // namespace overlay

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_OVERLAY_H_
