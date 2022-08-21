// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {




template <>
struct FromValue<dom::BackendNode> {
  static std::unique_ptr<dom::BackendNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::BackendNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::BackendNode& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<dom::PseudoType> {
  static dom::PseudoType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return dom::PseudoType::FIRST_LINE;
    }
    if (value.GetString() == "first-line")
      return dom::PseudoType::FIRST_LINE;
    if (value.GetString() == "first-letter")
      return dom::PseudoType::FIRST_LETTER;
    if (value.GetString() == "before")
      return dom::PseudoType::BEFORE;
    if (value.GetString() == "after")
      return dom::PseudoType::AFTER;
    if (value.GetString() == "marker")
      return dom::PseudoType::MARKER;
    if (value.GetString() == "backdrop")
      return dom::PseudoType::BACKDROP;
    if (value.GetString() == "selection")
      return dom::PseudoType::SELECTION;
    if (value.GetString() == "target-text")
      return dom::PseudoType::TARGET_TEXT;
    if (value.GetString() == "spelling-error")
      return dom::PseudoType::SPELLING_ERROR;
    if (value.GetString() == "grammar-error")
      return dom::PseudoType::GRAMMAR_ERROR;
    if (value.GetString() == "highlight")
      return dom::PseudoType::HIGHLIGHT;
    if (value.GetString() == "first-line-inherited")
      return dom::PseudoType::FIRST_LINE_INHERITED;
    if (value.GetString() == "scrollbar")
      return dom::PseudoType::SCROLLBAR;
    if (value.GetString() == "scrollbar-thumb")
      return dom::PseudoType::SCROLLBAR_THUMB;
    if (value.GetString() == "scrollbar-button")
      return dom::PseudoType::SCROLLBAR_BUTTON;
    if (value.GetString() == "scrollbar-track")
      return dom::PseudoType::SCROLLBAR_TRACK;
    if (value.GetString() == "scrollbar-track-piece")
      return dom::PseudoType::SCROLLBAR_TRACK_PIECE;
    if (value.GetString() == "scrollbar-corner")
      return dom::PseudoType::SCROLLBAR_CORNER;
    if (value.GetString() == "resizer")
      return dom::PseudoType::RESIZER;
    if (value.GetString() == "input-list-button")
      return dom::PseudoType::INPUT_LIST_BUTTON;
    if (value.GetString() == "page-transition")
      return dom::PseudoType::PAGE_TRANSITION;
    if (value.GetString() == "page-transition-container")
      return dom::PseudoType::PAGE_TRANSITION_CONTAINER;
    if (value.GetString() == "page-transition-image-wrapper")
      return dom::PseudoType::PAGE_TRANSITION_IMAGE_WRAPPER;
    if (value.GetString() == "page-transition-outgoing-image")
      return dom::PseudoType::PAGE_TRANSITION_OUTGOING_IMAGE;
    if (value.GetString() == "page-transition-incoming-image")
      return dom::PseudoType::PAGE_TRANSITION_INCOMING_IMAGE;
    errors->AddError("invalid enum value");
    return dom::PseudoType::FIRST_LINE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PseudoType& value, T*) {
  switch (value) {
    case dom::PseudoType::FIRST_LINE:
      return std::make_unique<base::Value>("first-line");
    case dom::PseudoType::FIRST_LETTER:
      return std::make_unique<base::Value>("first-letter");
    case dom::PseudoType::BEFORE:
      return std::make_unique<base::Value>("before");
    case dom::PseudoType::AFTER:
      return std::make_unique<base::Value>("after");
    case dom::PseudoType::MARKER:
      return std::make_unique<base::Value>("marker");
    case dom::PseudoType::BACKDROP:
      return std::make_unique<base::Value>("backdrop");
    case dom::PseudoType::SELECTION:
      return std::make_unique<base::Value>("selection");
    case dom::PseudoType::TARGET_TEXT:
      return std::make_unique<base::Value>("target-text");
    case dom::PseudoType::SPELLING_ERROR:
      return std::make_unique<base::Value>("spelling-error");
    case dom::PseudoType::GRAMMAR_ERROR:
      return std::make_unique<base::Value>("grammar-error");
    case dom::PseudoType::HIGHLIGHT:
      return std::make_unique<base::Value>("highlight");
    case dom::PseudoType::FIRST_LINE_INHERITED:
      return std::make_unique<base::Value>("first-line-inherited");
    case dom::PseudoType::SCROLLBAR:
      return std::make_unique<base::Value>("scrollbar");
    case dom::PseudoType::SCROLLBAR_THUMB:
      return std::make_unique<base::Value>("scrollbar-thumb");
    case dom::PseudoType::SCROLLBAR_BUTTON:
      return std::make_unique<base::Value>("scrollbar-button");
    case dom::PseudoType::SCROLLBAR_TRACK:
      return std::make_unique<base::Value>("scrollbar-track");
    case dom::PseudoType::SCROLLBAR_TRACK_PIECE:
      return std::make_unique<base::Value>("scrollbar-track-piece");
    case dom::PseudoType::SCROLLBAR_CORNER:
      return std::make_unique<base::Value>("scrollbar-corner");
    case dom::PseudoType::RESIZER:
      return std::make_unique<base::Value>("resizer");
    case dom::PseudoType::INPUT_LIST_BUTTON:
      return std::make_unique<base::Value>("input-list-button");
    case dom::PseudoType::PAGE_TRANSITION:
      return std::make_unique<base::Value>("page-transition");
    case dom::PseudoType::PAGE_TRANSITION_CONTAINER:
      return std::make_unique<base::Value>("page-transition-container");
    case dom::PseudoType::PAGE_TRANSITION_IMAGE_WRAPPER:
      return std::make_unique<base::Value>("page-transition-image-wrapper");
    case dom::PseudoType::PAGE_TRANSITION_OUTGOING_IMAGE:
      return std::make_unique<base::Value>("page-transition-outgoing-image");
    case dom::PseudoType::PAGE_TRANSITION_INCOMING_IMAGE:
      return std::make_unique<base::Value>("page-transition-incoming-image");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<dom::ShadowRootType> {
  static dom::ShadowRootType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return dom::ShadowRootType::USER_AGENT;
    }
    if (value.GetString() == "user-agent")
      return dom::ShadowRootType::USER_AGENT;
    if (value.GetString() == "open")
      return dom::ShadowRootType::OPEN;
    if (value.GetString() == "closed")
      return dom::ShadowRootType::CLOSED;
    errors->AddError("invalid enum value");
    return dom::ShadowRootType::USER_AGENT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ShadowRootType& value, T*) {
  switch (value) {
    case dom::ShadowRootType::USER_AGENT:
      return std::make_unique<base::Value>("user-agent");
    case dom::ShadowRootType::OPEN:
      return std::make_unique<base::Value>("open");
    case dom::ShadowRootType::CLOSED:
      return std::make_unique<base::Value>("closed");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<dom::CompatibilityMode> {
  static dom::CompatibilityMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return dom::CompatibilityMode::QUIRKS_MODE;
    }
    if (value.GetString() == "QuirksMode")
      return dom::CompatibilityMode::QUIRKS_MODE;
    if (value.GetString() == "LimitedQuirksMode")
      return dom::CompatibilityMode::LIMITED_QUIRKS_MODE;
    if (value.GetString() == "NoQuirksMode")
      return dom::CompatibilityMode::NO_QUIRKS_MODE;
    errors->AddError("invalid enum value");
    return dom::CompatibilityMode::QUIRKS_MODE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CompatibilityMode& value, T*) {
  switch (value) {
    case dom::CompatibilityMode::QUIRKS_MODE:
      return std::make_unique<base::Value>("QuirksMode");
    case dom::CompatibilityMode::LIMITED_QUIRKS_MODE:
      return std::make_unique<base::Value>("LimitedQuirksMode");
    case dom::CompatibilityMode::NO_QUIRKS_MODE:
      return std::make_unique<base::Value>("NoQuirksMode");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<dom::Node> {
  static std::unique_ptr<dom::Node> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::Node::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::Node& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RGBA> {
  static std::unique_ptr<dom::RGBA> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RGBA::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RGBA& value, T*) {
  return value.Serialize();
}



template <>
struct FromValue<dom::BoxModel> {
  static std::unique_ptr<dom::BoxModel> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::BoxModel::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::BoxModel& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ShapeOutsideInfo> {
  static std::unique_ptr<dom::ShapeOutsideInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ShapeOutsideInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ShapeOutsideInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::Rect> {
  static std::unique_ptr<dom::Rect> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::Rect::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::Rect& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::CSSComputedStyleProperty> {
  static std::unique_ptr<dom::CSSComputedStyleProperty> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::CSSComputedStyleProperty::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CSSComputedStyleProperty& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::CollectClassNamesFromSubtreeParams> {
  static std::unique_ptr<dom::CollectClassNamesFromSubtreeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::CollectClassNamesFromSubtreeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CollectClassNamesFromSubtreeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::CollectClassNamesFromSubtreeResult> {
  static std::unique_ptr<dom::CollectClassNamesFromSubtreeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::CollectClassNamesFromSubtreeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CollectClassNamesFromSubtreeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::CopyToParams> {
  static std::unique_ptr<dom::CopyToParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::CopyToParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CopyToParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::CopyToResult> {
  static std::unique_ptr<dom::CopyToResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::CopyToResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CopyToResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DescribeNodeParams> {
  static std::unique_ptr<dom::DescribeNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DescribeNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DescribeNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DescribeNodeResult> {
  static std::unique_ptr<dom::DescribeNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DescribeNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DescribeNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ScrollIntoViewIfNeededParams> {
  static std::unique_ptr<dom::ScrollIntoViewIfNeededParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ScrollIntoViewIfNeededParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ScrollIntoViewIfNeededParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ScrollIntoViewIfNeededResult> {
  static std::unique_ptr<dom::ScrollIntoViewIfNeededResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ScrollIntoViewIfNeededResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ScrollIntoViewIfNeededResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DisableParams> {
  static std::unique_ptr<dom::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DisableResult> {
  static std::unique_ptr<dom::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DiscardSearchResultsParams> {
  static std::unique_ptr<dom::DiscardSearchResultsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DiscardSearchResultsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DiscardSearchResultsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DiscardSearchResultsResult> {
  static std::unique_ptr<dom::DiscardSearchResultsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DiscardSearchResultsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DiscardSearchResultsResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<dom::EnableIncludeWhitespace> {
  static dom::EnableIncludeWhitespace Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return dom::EnableIncludeWhitespace::NONE;
    }
    if (value.GetString() == "none")
      return dom::EnableIncludeWhitespace::NONE;
    if (value.GetString() == "all")
      return dom::EnableIncludeWhitespace::ALL;
    errors->AddError("invalid enum value");
    return dom::EnableIncludeWhitespace::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::EnableIncludeWhitespace& value, T*) {
  switch (value) {
    case dom::EnableIncludeWhitespace::NONE:
      return std::make_unique<base::Value>("none");
    case dom::EnableIncludeWhitespace::ALL:
      return std::make_unique<base::Value>("all");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<dom::EnableParams> {
  static std::unique_ptr<dom::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::EnableResult> {
  static std::unique_ptr<dom::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::FocusParams> {
  static std::unique_ptr<dom::FocusParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::FocusParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::FocusParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::FocusResult> {
  static std::unique_ptr<dom::FocusResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::FocusResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::FocusResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetAttributesParams> {
  static std::unique_ptr<dom::GetAttributesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetAttributesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetAttributesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetAttributesResult> {
  static std::unique_ptr<dom::GetAttributesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetAttributesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetAttributesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetBoxModelParams> {
  static std::unique_ptr<dom::GetBoxModelParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetBoxModelParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetBoxModelParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetBoxModelResult> {
  static std::unique_ptr<dom::GetBoxModelResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetBoxModelResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetBoxModelResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetContentQuadsParams> {
  static std::unique_ptr<dom::GetContentQuadsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetContentQuadsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetContentQuadsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetContentQuadsResult> {
  static std::unique_ptr<dom::GetContentQuadsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetContentQuadsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetContentQuadsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetDocumentParams> {
  static std::unique_ptr<dom::GetDocumentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetDocumentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetDocumentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetDocumentResult> {
  static std::unique_ptr<dom::GetDocumentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetDocumentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetDocumentResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetFlattenedDocumentParams> {
  static std::unique_ptr<dom::GetFlattenedDocumentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetFlattenedDocumentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetFlattenedDocumentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetFlattenedDocumentResult> {
  static std::unique_ptr<dom::GetFlattenedDocumentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetFlattenedDocumentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetFlattenedDocumentResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetNodesForSubtreeByStyleParams> {
  static std::unique_ptr<dom::GetNodesForSubtreeByStyleParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetNodesForSubtreeByStyleParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetNodesForSubtreeByStyleParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetNodesForSubtreeByStyleResult> {
  static std::unique_ptr<dom::GetNodesForSubtreeByStyleResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetNodesForSubtreeByStyleResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetNodesForSubtreeByStyleResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetNodeForLocationParams> {
  static std::unique_ptr<dom::GetNodeForLocationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetNodeForLocationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetNodeForLocationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetNodeForLocationResult> {
  static std::unique_ptr<dom::GetNodeForLocationResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetNodeForLocationResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetNodeForLocationResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetOuterHTMLParams> {
  static std::unique_ptr<dom::GetOuterHTMLParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetOuterHTMLParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetOuterHTMLParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetOuterHTMLResult> {
  static std::unique_ptr<dom::GetOuterHTMLResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetOuterHTMLResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetOuterHTMLResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetRelayoutBoundaryParams> {
  static std::unique_ptr<dom::GetRelayoutBoundaryParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetRelayoutBoundaryParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetRelayoutBoundaryParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetRelayoutBoundaryResult> {
  static std::unique_ptr<dom::GetRelayoutBoundaryResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetRelayoutBoundaryResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetRelayoutBoundaryResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetSearchResultsParams> {
  static std::unique_ptr<dom::GetSearchResultsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetSearchResultsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetSearchResultsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetSearchResultsResult> {
  static std::unique_ptr<dom::GetSearchResultsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetSearchResultsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetSearchResultsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::HideHighlightParams> {
  static std::unique_ptr<dom::HideHighlightParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::HideHighlightParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::HideHighlightParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::HideHighlightResult> {
  static std::unique_ptr<dom::HideHighlightResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::HideHighlightResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::HideHighlightResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::HighlightNodeParams> {
  static std::unique_ptr<dom::HighlightNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::HighlightNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::HighlightNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::HighlightNodeResult> {
  static std::unique_ptr<dom::HighlightNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::HighlightNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::HighlightNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::HighlightRectParams> {
  static std::unique_ptr<dom::HighlightRectParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::HighlightRectParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::HighlightRectParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::HighlightRectResult> {
  static std::unique_ptr<dom::HighlightRectResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::HighlightRectResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::HighlightRectResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::MarkUndoableStateParams> {
  static std::unique_ptr<dom::MarkUndoableStateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::MarkUndoableStateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::MarkUndoableStateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::MarkUndoableStateResult> {
  static std::unique_ptr<dom::MarkUndoableStateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::MarkUndoableStateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::MarkUndoableStateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::MoveToParams> {
  static std::unique_ptr<dom::MoveToParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::MoveToParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::MoveToParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::MoveToResult> {
  static std::unique_ptr<dom::MoveToResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::MoveToResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::MoveToResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PerformSearchParams> {
  static std::unique_ptr<dom::PerformSearchParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PerformSearchParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PerformSearchParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PerformSearchResult> {
  static std::unique_ptr<dom::PerformSearchResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PerformSearchResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PerformSearchResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PushNodeByPathToFrontendParams> {
  static std::unique_ptr<dom::PushNodeByPathToFrontendParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PushNodeByPathToFrontendParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PushNodeByPathToFrontendParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PushNodeByPathToFrontendResult> {
  static std::unique_ptr<dom::PushNodeByPathToFrontendResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PushNodeByPathToFrontendResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PushNodeByPathToFrontendResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PushNodesByBackendIdsToFrontendParams> {
  static std::unique_ptr<dom::PushNodesByBackendIdsToFrontendParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PushNodesByBackendIdsToFrontendParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PushNodesByBackendIdsToFrontendParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PushNodesByBackendIdsToFrontendResult> {
  static std::unique_ptr<dom::PushNodesByBackendIdsToFrontendResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PushNodesByBackendIdsToFrontendResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PushNodesByBackendIdsToFrontendResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::QuerySelectorParams> {
  static std::unique_ptr<dom::QuerySelectorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::QuerySelectorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::QuerySelectorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::QuerySelectorResult> {
  static std::unique_ptr<dom::QuerySelectorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::QuerySelectorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::QuerySelectorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::QuerySelectorAllParams> {
  static std::unique_ptr<dom::QuerySelectorAllParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::QuerySelectorAllParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::QuerySelectorAllParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::QuerySelectorAllResult> {
  static std::unique_ptr<dom::QuerySelectorAllResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::QuerySelectorAllResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::QuerySelectorAllResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetTopLayerElementsParams> {
  static std::unique_ptr<dom::GetTopLayerElementsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetTopLayerElementsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetTopLayerElementsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetTopLayerElementsResult> {
  static std::unique_ptr<dom::GetTopLayerElementsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetTopLayerElementsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetTopLayerElementsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RedoParams> {
  static std::unique_ptr<dom::RedoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RedoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RedoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RedoResult> {
  static std::unique_ptr<dom::RedoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RedoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RedoResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RemoveAttributeParams> {
  static std::unique_ptr<dom::RemoveAttributeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RemoveAttributeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RemoveAttributeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RemoveAttributeResult> {
  static std::unique_ptr<dom::RemoveAttributeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RemoveAttributeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RemoveAttributeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RemoveNodeParams> {
  static std::unique_ptr<dom::RemoveNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RemoveNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RemoveNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RemoveNodeResult> {
  static std::unique_ptr<dom::RemoveNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RemoveNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RemoveNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RequestChildNodesParams> {
  static std::unique_ptr<dom::RequestChildNodesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RequestChildNodesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RequestChildNodesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RequestChildNodesResult> {
  static std::unique_ptr<dom::RequestChildNodesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RequestChildNodesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RequestChildNodesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RequestNodeParams> {
  static std::unique_ptr<dom::RequestNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RequestNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RequestNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::RequestNodeResult> {
  static std::unique_ptr<dom::RequestNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::RequestNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::RequestNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ResolveNodeParams> {
  static std::unique_ptr<dom::ResolveNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ResolveNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ResolveNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ResolveNodeResult> {
  static std::unique_ptr<dom::ResolveNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ResolveNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ResolveNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetAttributeValueParams> {
  static std::unique_ptr<dom::SetAttributeValueParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetAttributeValueParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetAttributeValueParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetAttributeValueResult> {
  static std::unique_ptr<dom::SetAttributeValueResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetAttributeValueResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetAttributeValueResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetAttributesAsTextParams> {
  static std::unique_ptr<dom::SetAttributesAsTextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetAttributesAsTextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetAttributesAsTextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetAttributesAsTextResult> {
  static std::unique_ptr<dom::SetAttributesAsTextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetAttributesAsTextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetAttributesAsTextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetFileInputFilesParams> {
  static std::unique_ptr<dom::SetFileInputFilesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetFileInputFilesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetFileInputFilesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetFileInputFilesResult> {
  static std::unique_ptr<dom::SetFileInputFilesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetFileInputFilesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetFileInputFilesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetNodeStackTracesEnabledParams> {
  static std::unique_ptr<dom::SetNodeStackTracesEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetNodeStackTracesEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetNodeStackTracesEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetNodeStackTracesEnabledResult> {
  static std::unique_ptr<dom::SetNodeStackTracesEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetNodeStackTracesEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetNodeStackTracesEnabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetNodeStackTracesParams> {
  static std::unique_ptr<dom::GetNodeStackTracesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetNodeStackTracesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetNodeStackTracesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetNodeStackTracesResult> {
  static std::unique_ptr<dom::GetNodeStackTracesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetNodeStackTracesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetNodeStackTracesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetFileInfoParams> {
  static std::unique_ptr<dom::GetFileInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetFileInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetFileInfoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetFileInfoResult> {
  static std::unique_ptr<dom::GetFileInfoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetFileInfoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetFileInfoResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetInspectedNodeParams> {
  static std::unique_ptr<dom::SetInspectedNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetInspectedNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetInspectedNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetInspectedNodeResult> {
  static std::unique_ptr<dom::SetInspectedNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetInspectedNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetInspectedNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetNodeNameParams> {
  static std::unique_ptr<dom::SetNodeNameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetNodeNameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetNodeNameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetNodeNameResult> {
  static std::unique_ptr<dom::SetNodeNameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetNodeNameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetNodeNameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetNodeValueParams> {
  static std::unique_ptr<dom::SetNodeValueParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetNodeValueParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetNodeValueParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetNodeValueResult> {
  static std::unique_ptr<dom::SetNodeValueResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetNodeValueResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetNodeValueResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetOuterHTMLParams> {
  static std::unique_ptr<dom::SetOuterHTMLParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetOuterHTMLParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetOuterHTMLParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetOuterHTMLResult> {
  static std::unique_ptr<dom::SetOuterHTMLResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetOuterHTMLResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetOuterHTMLResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::UndoParams> {
  static std::unique_ptr<dom::UndoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::UndoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::UndoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::UndoResult> {
  static std::unique_ptr<dom::UndoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::UndoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::UndoResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetFrameOwnerParams> {
  static std::unique_ptr<dom::GetFrameOwnerParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetFrameOwnerParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetFrameOwnerParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetFrameOwnerResult> {
  static std::unique_ptr<dom::GetFrameOwnerResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetFrameOwnerResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetFrameOwnerResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetContainerForNodeParams> {
  static std::unique_ptr<dom::GetContainerForNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetContainerForNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetContainerForNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetContainerForNodeResult> {
  static std::unique_ptr<dom::GetContainerForNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetContainerForNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetContainerForNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetQueryingDescendantsForContainerParams> {
  static std::unique_ptr<dom::GetQueryingDescendantsForContainerParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetQueryingDescendantsForContainerParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetQueryingDescendantsForContainerParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::GetQueryingDescendantsForContainerResult> {
  static std::unique_ptr<dom::GetQueryingDescendantsForContainerResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::GetQueryingDescendantsForContainerResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::GetQueryingDescendantsForContainerResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::AttributeModifiedParams> {
  static std::unique_ptr<dom::AttributeModifiedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::AttributeModifiedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::AttributeModifiedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::AttributeRemovedParams> {
  static std::unique_ptr<dom::AttributeRemovedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::AttributeRemovedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::AttributeRemovedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::CharacterDataModifiedParams> {
  static std::unique_ptr<dom::CharacterDataModifiedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::CharacterDataModifiedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::CharacterDataModifiedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ChildNodeCountUpdatedParams> {
  static std::unique_ptr<dom::ChildNodeCountUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ChildNodeCountUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ChildNodeCountUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ChildNodeInsertedParams> {
  static std::unique_ptr<dom::ChildNodeInsertedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ChildNodeInsertedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ChildNodeInsertedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ChildNodeRemovedParams> {
  static std::unique_ptr<dom::ChildNodeRemovedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ChildNodeRemovedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ChildNodeRemovedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DistributedNodesUpdatedParams> {
  static std::unique_ptr<dom::DistributedNodesUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DistributedNodesUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DistributedNodesUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::DocumentUpdatedParams> {
  static std::unique_ptr<dom::DocumentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::DocumentUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::DocumentUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::InlineStyleInvalidatedParams> {
  static std::unique_ptr<dom::InlineStyleInvalidatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::InlineStyleInvalidatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::InlineStyleInvalidatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PseudoElementAddedParams> {
  static std::unique_ptr<dom::PseudoElementAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PseudoElementAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PseudoElementAddedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::TopLayerElementsUpdatedParams> {
  static std::unique_ptr<dom::TopLayerElementsUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::TopLayerElementsUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::TopLayerElementsUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::PseudoElementRemovedParams> {
  static std::unique_ptr<dom::PseudoElementRemovedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::PseudoElementRemovedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::PseudoElementRemovedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::SetChildNodesParams> {
  static std::unique_ptr<dom::SetChildNodesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::SetChildNodesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::SetChildNodesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ShadowRootPoppedParams> {
  static std::unique_ptr<dom::ShadowRootPoppedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ShadowRootPoppedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ShadowRootPoppedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom::ShadowRootPushedParams> {
  static std::unique_ptr<dom::ShadowRootPushedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom::ShadowRootPushedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom::ShadowRootPushedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_H_
