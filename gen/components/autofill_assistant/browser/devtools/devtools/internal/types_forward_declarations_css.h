// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_CSS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_CSS_H_

#include "base/values.h"

namespace autofill_assistant {

namespace css {
class PseudoElementMatches;
class InheritedStyleEntry;
class InheritedPseudoElementMatches;
class RuleMatch;
class Value;
class SelectorList;
class CSSStyleSheetHeader;
class CSSRule;
class RuleUsage;
class SourceRange;
class ShorthandEntry;
class CSSComputedStyleProperty;
class CSSStyle;
class CSSProperty;
class CSSMedia;
class MediaQuery;
class MediaQueryExpression;
class CSSContainerQuery;
class CSSSupports;
class CSSScope;
class CSSLayer;
class CSSLayerData;
class PlatformFontUsage;
class FontVariationAxis;
class FontFace;
class CSSKeyframesRule;
class CSSKeyframeRule;
class StyleDeclarationEdit;
class AddRuleParams;
class AddRuleResult;
class CollectClassNamesParams;
class CollectClassNamesResult;
class CreateStyleSheetParams;
class CreateStyleSheetResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class ForcePseudoStateParams;
class ForcePseudoStateResult;
class GetBackgroundColorsParams;
class GetBackgroundColorsResult;
class GetComputedStyleForNodeParams;
class GetComputedStyleForNodeResult;
class GetInlineStylesForNodeParams;
class GetInlineStylesForNodeResult;
class GetMatchedStylesForNodeParams;
class GetMatchedStylesForNodeResult;
class GetMediaQueriesParams;
class GetMediaQueriesResult;
class GetPlatformFontsForNodeParams;
class GetPlatformFontsForNodeResult;
class GetStyleSheetTextParams;
class GetStyleSheetTextResult;
class GetLayersForNodeParams;
class GetLayersForNodeResult;
class TrackComputedStyleUpdatesParams;
class TrackComputedStyleUpdatesResult;
class TakeComputedStyleUpdatesParams;
class TakeComputedStyleUpdatesResult;
class SetEffectivePropertyValueForNodeParams;
class SetEffectivePropertyValueForNodeResult;
class SetKeyframeKeyParams;
class SetKeyframeKeyResult;
class SetMediaTextParams;
class SetMediaTextResult;
class SetContainerQueryTextParams;
class SetContainerQueryTextResult;
class SetSupportsTextParams;
class SetSupportsTextResult;
class SetScopeTextParams;
class SetScopeTextResult;
class SetRuleSelectorParams;
class SetRuleSelectorResult;
class SetStyleSheetTextParams;
class SetStyleSheetTextResult;
class SetStyleTextsParams;
class SetStyleTextsResult;
class StartRuleUsageTrackingParams;
class StartRuleUsageTrackingResult;
class StopRuleUsageTrackingParams;
class StopRuleUsageTrackingResult;
class TakeCoverageDeltaParams;
class TakeCoverageDeltaResult;
class SetLocalFontsEnabledParams;
class SetLocalFontsEnabledResult;
class FontsUpdatedParams;
class MediaQueryResultChangedParams;
class StyleSheetAddedParams;
class StyleSheetChangedParams;
class StyleSheetRemovedParams;

enum class StyleSheetOrigin {
  INJECTED,
  USER_AGENT,
  INSPECTOR,
  REGULAR
};

enum class CSSMediaSource {
  MEDIA_RULE,
  IMPORT_RULE,
  LINKED_SHEET,
  INLINE_SHEET
};

}  // namespace css

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_CSS_H_
