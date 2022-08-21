// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CSS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CSS_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_css.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<css::StyleSheetOrigin> {
  static css::StyleSheetOrigin Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return css::StyleSheetOrigin::INJECTED;
    }
    if (value.GetString() == "injected")
      return css::StyleSheetOrigin::INJECTED;
    if (value.GetString() == "user-agent")
      return css::StyleSheetOrigin::USER_AGENT;
    if (value.GetString() == "inspector")
      return css::StyleSheetOrigin::INSPECTOR;
    if (value.GetString() == "regular")
      return css::StyleSheetOrigin::REGULAR;
    errors->AddError("invalid enum value");
    return css::StyleSheetOrigin::INJECTED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StyleSheetOrigin& value, T*) {
  switch (value) {
    case css::StyleSheetOrigin::INJECTED:
      return std::make_unique<base::Value>("injected");
    case css::StyleSheetOrigin::USER_AGENT:
      return std::make_unique<base::Value>("user-agent");
    case css::StyleSheetOrigin::INSPECTOR:
      return std::make_unique<base::Value>("inspector");
    case css::StyleSheetOrigin::REGULAR:
      return std::make_unique<base::Value>("regular");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<css::PseudoElementMatches> {
  static std::unique_ptr<css::PseudoElementMatches> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::PseudoElementMatches::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::PseudoElementMatches& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::InheritedStyleEntry> {
  static std::unique_ptr<css::InheritedStyleEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::InheritedStyleEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::InheritedStyleEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::InheritedPseudoElementMatches> {
  static std::unique_ptr<css::InheritedPseudoElementMatches> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::InheritedPseudoElementMatches::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::InheritedPseudoElementMatches& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::RuleMatch> {
  static std::unique_ptr<css::RuleMatch> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::RuleMatch::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::RuleMatch& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::Value> {
  static std::unique_ptr<css::Value> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::Value::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::Value& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SelectorList> {
  static std::unique_ptr<css::SelectorList> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SelectorList::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SelectorList& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSStyleSheetHeader> {
  static std::unique_ptr<css::CSSStyleSheetHeader> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSStyleSheetHeader::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSStyleSheetHeader& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSRule> {
  static std::unique_ptr<css::CSSRule> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSRule::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSRule& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::RuleUsage> {
  static std::unique_ptr<css::RuleUsage> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::RuleUsage::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::RuleUsage& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SourceRange> {
  static std::unique_ptr<css::SourceRange> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SourceRange::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SourceRange& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::ShorthandEntry> {
  static std::unique_ptr<css::ShorthandEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::ShorthandEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::ShorthandEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSComputedStyleProperty> {
  static std::unique_ptr<css::CSSComputedStyleProperty> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSComputedStyleProperty::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSComputedStyleProperty& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSStyle> {
  static std::unique_ptr<css::CSSStyle> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSStyle::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSStyle& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSProperty> {
  static std::unique_ptr<css::CSSProperty> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSProperty::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSProperty& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSMedia> {
  static std::unique_ptr<css::CSSMedia> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSMedia::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSMedia& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::MediaQuery> {
  static std::unique_ptr<css::MediaQuery> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::MediaQuery::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::MediaQuery& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::MediaQueryExpression> {
  static std::unique_ptr<css::MediaQueryExpression> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::MediaQueryExpression::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::MediaQueryExpression& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSContainerQuery> {
  static std::unique_ptr<css::CSSContainerQuery> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSContainerQuery::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSContainerQuery& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSSupports> {
  static std::unique_ptr<css::CSSSupports> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSSupports::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSSupports& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSScope> {
  static std::unique_ptr<css::CSSScope> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSScope::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSScope& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSLayer> {
  static std::unique_ptr<css::CSSLayer> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSLayer::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSLayer& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSLayerData> {
  static std::unique_ptr<css::CSSLayerData> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSLayerData::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSLayerData& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::PlatformFontUsage> {
  static std::unique_ptr<css::PlatformFontUsage> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::PlatformFontUsage::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::PlatformFontUsage& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::FontVariationAxis> {
  static std::unique_ptr<css::FontVariationAxis> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::FontVariationAxis::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::FontVariationAxis& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::FontFace> {
  static std::unique_ptr<css::FontFace> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::FontFace::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::FontFace& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSKeyframesRule> {
  static std::unique_ptr<css::CSSKeyframesRule> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSKeyframesRule::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSKeyframesRule& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CSSKeyframeRule> {
  static std::unique_ptr<css::CSSKeyframeRule> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CSSKeyframeRule::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSKeyframeRule& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StyleDeclarationEdit> {
  static std::unique_ptr<css::StyleDeclarationEdit> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StyleDeclarationEdit::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StyleDeclarationEdit& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<css::CSSMediaSource> {
  static css::CSSMediaSource Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return css::CSSMediaSource::MEDIA_RULE;
    }
    if (value.GetString() == "mediaRule")
      return css::CSSMediaSource::MEDIA_RULE;
    if (value.GetString() == "importRule")
      return css::CSSMediaSource::IMPORT_RULE;
    if (value.GetString() == "linkedSheet")
      return css::CSSMediaSource::LINKED_SHEET;
    if (value.GetString() == "inlineSheet")
      return css::CSSMediaSource::INLINE_SHEET;
    errors->AddError("invalid enum value");
    return css::CSSMediaSource::MEDIA_RULE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CSSMediaSource& value, T*) {
  switch (value) {
    case css::CSSMediaSource::MEDIA_RULE:
      return std::make_unique<base::Value>("mediaRule");
    case css::CSSMediaSource::IMPORT_RULE:
      return std::make_unique<base::Value>("importRule");
    case css::CSSMediaSource::LINKED_SHEET:
      return std::make_unique<base::Value>("linkedSheet");
    case css::CSSMediaSource::INLINE_SHEET:
      return std::make_unique<base::Value>("inlineSheet");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<css::AddRuleParams> {
  static std::unique_ptr<css::AddRuleParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::AddRuleParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::AddRuleParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::AddRuleResult> {
  static std::unique_ptr<css::AddRuleResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::AddRuleResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::AddRuleResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CollectClassNamesParams> {
  static std::unique_ptr<css::CollectClassNamesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CollectClassNamesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CollectClassNamesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CollectClassNamesResult> {
  static std::unique_ptr<css::CollectClassNamesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CollectClassNamesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CollectClassNamesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CreateStyleSheetParams> {
  static std::unique_ptr<css::CreateStyleSheetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CreateStyleSheetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CreateStyleSheetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::CreateStyleSheetResult> {
  static std::unique_ptr<css::CreateStyleSheetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::CreateStyleSheetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::CreateStyleSheetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::DisableParams> {
  static std::unique_ptr<css::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::DisableResult> {
  static std::unique_ptr<css::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::EnableParams> {
  static std::unique_ptr<css::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::EnableResult> {
  static std::unique_ptr<css::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::ForcePseudoStateParams> {
  static std::unique_ptr<css::ForcePseudoStateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::ForcePseudoStateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::ForcePseudoStateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::ForcePseudoStateResult> {
  static std::unique_ptr<css::ForcePseudoStateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::ForcePseudoStateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::ForcePseudoStateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetBackgroundColorsParams> {
  static std::unique_ptr<css::GetBackgroundColorsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetBackgroundColorsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetBackgroundColorsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetBackgroundColorsResult> {
  static std::unique_ptr<css::GetBackgroundColorsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetBackgroundColorsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetBackgroundColorsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetComputedStyleForNodeParams> {
  static std::unique_ptr<css::GetComputedStyleForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetComputedStyleForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetComputedStyleForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetComputedStyleForNodeResult> {
  static std::unique_ptr<css::GetComputedStyleForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetComputedStyleForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetComputedStyleForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetInlineStylesForNodeParams> {
  static std::unique_ptr<css::GetInlineStylesForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetInlineStylesForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetInlineStylesForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetInlineStylesForNodeResult> {
  static std::unique_ptr<css::GetInlineStylesForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetInlineStylesForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetInlineStylesForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetMatchedStylesForNodeParams> {
  static std::unique_ptr<css::GetMatchedStylesForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetMatchedStylesForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetMatchedStylesForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetMatchedStylesForNodeResult> {
  static std::unique_ptr<css::GetMatchedStylesForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetMatchedStylesForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetMatchedStylesForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetMediaQueriesParams> {
  static std::unique_ptr<css::GetMediaQueriesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetMediaQueriesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetMediaQueriesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetMediaQueriesResult> {
  static std::unique_ptr<css::GetMediaQueriesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetMediaQueriesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetMediaQueriesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetPlatformFontsForNodeParams> {
  static std::unique_ptr<css::GetPlatformFontsForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetPlatformFontsForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetPlatformFontsForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetPlatformFontsForNodeResult> {
  static std::unique_ptr<css::GetPlatformFontsForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetPlatformFontsForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetPlatformFontsForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetStyleSheetTextParams> {
  static std::unique_ptr<css::GetStyleSheetTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetStyleSheetTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetStyleSheetTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetStyleSheetTextResult> {
  static std::unique_ptr<css::GetStyleSheetTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetStyleSheetTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetStyleSheetTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetLayersForNodeParams> {
  static std::unique_ptr<css::GetLayersForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetLayersForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetLayersForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::GetLayersForNodeResult> {
  static std::unique_ptr<css::GetLayersForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::GetLayersForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::GetLayersForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::TrackComputedStyleUpdatesParams> {
  static std::unique_ptr<css::TrackComputedStyleUpdatesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::TrackComputedStyleUpdatesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::TrackComputedStyleUpdatesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::TrackComputedStyleUpdatesResult> {
  static std::unique_ptr<css::TrackComputedStyleUpdatesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::TrackComputedStyleUpdatesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::TrackComputedStyleUpdatesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::TakeComputedStyleUpdatesParams> {
  static std::unique_ptr<css::TakeComputedStyleUpdatesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::TakeComputedStyleUpdatesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::TakeComputedStyleUpdatesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::TakeComputedStyleUpdatesResult> {
  static std::unique_ptr<css::TakeComputedStyleUpdatesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::TakeComputedStyleUpdatesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::TakeComputedStyleUpdatesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetEffectivePropertyValueForNodeParams> {
  static std::unique_ptr<css::SetEffectivePropertyValueForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetEffectivePropertyValueForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetEffectivePropertyValueForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetEffectivePropertyValueForNodeResult> {
  static std::unique_ptr<css::SetEffectivePropertyValueForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetEffectivePropertyValueForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetEffectivePropertyValueForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetKeyframeKeyParams> {
  static std::unique_ptr<css::SetKeyframeKeyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetKeyframeKeyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetKeyframeKeyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetKeyframeKeyResult> {
  static std::unique_ptr<css::SetKeyframeKeyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetKeyframeKeyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetKeyframeKeyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetMediaTextParams> {
  static std::unique_ptr<css::SetMediaTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetMediaTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetMediaTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetMediaTextResult> {
  static std::unique_ptr<css::SetMediaTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetMediaTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetMediaTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetContainerQueryTextParams> {
  static std::unique_ptr<css::SetContainerQueryTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetContainerQueryTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetContainerQueryTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetContainerQueryTextResult> {
  static std::unique_ptr<css::SetContainerQueryTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetContainerQueryTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetContainerQueryTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetSupportsTextParams> {
  static std::unique_ptr<css::SetSupportsTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetSupportsTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetSupportsTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetSupportsTextResult> {
  static std::unique_ptr<css::SetSupportsTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetSupportsTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetSupportsTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetScopeTextParams> {
  static std::unique_ptr<css::SetScopeTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetScopeTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetScopeTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetScopeTextResult> {
  static std::unique_ptr<css::SetScopeTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetScopeTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetScopeTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetRuleSelectorParams> {
  static std::unique_ptr<css::SetRuleSelectorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetRuleSelectorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetRuleSelectorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetRuleSelectorResult> {
  static std::unique_ptr<css::SetRuleSelectorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetRuleSelectorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetRuleSelectorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetStyleSheetTextParams> {
  static std::unique_ptr<css::SetStyleSheetTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetStyleSheetTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetStyleSheetTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetStyleSheetTextResult> {
  static std::unique_ptr<css::SetStyleSheetTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetStyleSheetTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetStyleSheetTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetStyleTextsParams> {
  static std::unique_ptr<css::SetStyleTextsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetStyleTextsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetStyleTextsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetStyleTextsResult> {
  static std::unique_ptr<css::SetStyleTextsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetStyleTextsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetStyleTextsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StartRuleUsageTrackingParams> {
  static std::unique_ptr<css::StartRuleUsageTrackingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StartRuleUsageTrackingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StartRuleUsageTrackingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StartRuleUsageTrackingResult> {
  static std::unique_ptr<css::StartRuleUsageTrackingResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StartRuleUsageTrackingResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StartRuleUsageTrackingResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StopRuleUsageTrackingParams> {
  static std::unique_ptr<css::StopRuleUsageTrackingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StopRuleUsageTrackingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StopRuleUsageTrackingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StopRuleUsageTrackingResult> {
  static std::unique_ptr<css::StopRuleUsageTrackingResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StopRuleUsageTrackingResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StopRuleUsageTrackingResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::TakeCoverageDeltaParams> {
  static std::unique_ptr<css::TakeCoverageDeltaParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::TakeCoverageDeltaParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::TakeCoverageDeltaParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::TakeCoverageDeltaResult> {
  static std::unique_ptr<css::TakeCoverageDeltaResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::TakeCoverageDeltaResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::TakeCoverageDeltaResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetLocalFontsEnabledParams> {
  static std::unique_ptr<css::SetLocalFontsEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetLocalFontsEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetLocalFontsEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::SetLocalFontsEnabledResult> {
  static std::unique_ptr<css::SetLocalFontsEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::SetLocalFontsEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::SetLocalFontsEnabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::FontsUpdatedParams> {
  static std::unique_ptr<css::FontsUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::FontsUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::FontsUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::MediaQueryResultChangedParams> {
  static std::unique_ptr<css::MediaQueryResultChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::MediaQueryResultChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::MediaQueryResultChangedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StyleSheetAddedParams> {
  static std::unique_ptr<css::StyleSheetAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StyleSheetAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StyleSheetAddedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StyleSheetChangedParams> {
  static std::unique_ptr<css::StyleSheetChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StyleSheetChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StyleSheetChangedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<css::StyleSheetRemovedParams> {
  static std::unique_ptr<css::StyleSheetRemovedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return css::StyleSheetRemovedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const css::StyleSheetRemovedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CSS_H_
