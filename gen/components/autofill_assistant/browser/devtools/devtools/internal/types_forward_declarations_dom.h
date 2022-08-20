// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_H_

#include "base/values.h"

namespace autofill_assistant {

namespace dom {
class BackendNode;
class Node;
class RGBA;
class BoxModel;
class ShapeOutsideInfo;
class Rect;
class CSSComputedStyleProperty;
class CollectClassNamesFromSubtreeParams;
class CollectClassNamesFromSubtreeResult;
class CopyToParams;
class CopyToResult;
class DescribeNodeParams;
class DescribeNodeResult;
class ScrollIntoViewIfNeededParams;
class ScrollIntoViewIfNeededResult;
class DisableParams;
class DisableResult;
class DiscardSearchResultsParams;
class DiscardSearchResultsResult;
class EnableParams;
class EnableResult;
class FocusParams;
class FocusResult;
class GetAttributesParams;
class GetAttributesResult;
class GetBoxModelParams;
class GetBoxModelResult;
class GetContentQuadsParams;
class GetContentQuadsResult;
class GetDocumentParams;
class GetDocumentResult;
class GetFlattenedDocumentParams;
class GetFlattenedDocumentResult;
class GetNodesForSubtreeByStyleParams;
class GetNodesForSubtreeByStyleResult;
class GetNodeForLocationParams;
class GetNodeForLocationResult;
class GetOuterHTMLParams;
class GetOuterHTMLResult;
class GetRelayoutBoundaryParams;
class GetRelayoutBoundaryResult;
class GetSearchResultsParams;
class GetSearchResultsResult;
class HideHighlightParams;
class HideHighlightResult;
class HighlightNodeParams;
class HighlightNodeResult;
class HighlightRectParams;
class HighlightRectResult;
class MarkUndoableStateParams;
class MarkUndoableStateResult;
class MoveToParams;
class MoveToResult;
class PerformSearchParams;
class PerformSearchResult;
class PushNodeByPathToFrontendParams;
class PushNodeByPathToFrontendResult;
class PushNodesByBackendIdsToFrontendParams;
class PushNodesByBackendIdsToFrontendResult;
class QuerySelectorParams;
class QuerySelectorResult;
class QuerySelectorAllParams;
class QuerySelectorAllResult;
class GetTopLayerElementsParams;
class GetTopLayerElementsResult;
class RedoParams;
class RedoResult;
class RemoveAttributeParams;
class RemoveAttributeResult;
class RemoveNodeParams;
class RemoveNodeResult;
class RequestChildNodesParams;
class RequestChildNodesResult;
class RequestNodeParams;
class RequestNodeResult;
class ResolveNodeParams;
class ResolveNodeResult;
class SetAttributeValueParams;
class SetAttributeValueResult;
class SetAttributesAsTextParams;
class SetAttributesAsTextResult;
class SetFileInputFilesParams;
class SetFileInputFilesResult;
class SetNodeStackTracesEnabledParams;
class SetNodeStackTracesEnabledResult;
class GetNodeStackTracesParams;
class GetNodeStackTracesResult;
class GetFileInfoParams;
class GetFileInfoResult;
class SetInspectedNodeParams;
class SetInspectedNodeResult;
class SetNodeNameParams;
class SetNodeNameResult;
class SetNodeValueParams;
class SetNodeValueResult;
class SetOuterHTMLParams;
class SetOuterHTMLResult;
class UndoParams;
class UndoResult;
class GetFrameOwnerParams;
class GetFrameOwnerResult;
class GetContainerForNodeParams;
class GetContainerForNodeResult;
class GetQueryingDescendantsForContainerParams;
class GetQueryingDescendantsForContainerResult;
class AttributeModifiedParams;
class AttributeRemovedParams;
class CharacterDataModifiedParams;
class ChildNodeCountUpdatedParams;
class ChildNodeInsertedParams;
class ChildNodeRemovedParams;
class DistributedNodesUpdatedParams;
class DocumentUpdatedParams;
class InlineStyleInvalidatedParams;
class PseudoElementAddedParams;
class TopLayerElementsUpdatedParams;
class PseudoElementRemovedParams;
class SetChildNodesParams;
class ShadowRootPoppedParams;
class ShadowRootPushedParams;

enum class PseudoType {
  FIRST_LINE,
  FIRST_LETTER,
  BEFORE,
  AFTER,
  MARKER,
  BACKDROP,
  SELECTION,
  TARGET_TEXT,
  SPELLING_ERROR,
  GRAMMAR_ERROR,
  HIGHLIGHT,
  FIRST_LINE_INHERITED,
  SCROLLBAR,
  SCROLLBAR_THUMB,
  SCROLLBAR_BUTTON,
  SCROLLBAR_TRACK,
  SCROLLBAR_TRACK_PIECE,
  SCROLLBAR_CORNER,
  RESIZER,
  INPUT_LIST_BUTTON,
  PAGE_TRANSITION,
  PAGE_TRANSITION_CONTAINER,
  PAGE_TRANSITION_IMAGE_WRAPPER,
  PAGE_TRANSITION_OUTGOING_IMAGE,
  PAGE_TRANSITION_INCOMING_IMAGE
};

enum class ShadowRootType {
  USER_AGENT,
  OPEN,
  CLOSED
};

enum class CompatibilityMode {
  QUIRKS_MODE,
  LIMITED_QUIRKS_MODE,
  NO_QUIRKS_MODE
};

enum class EnableIncludeWhitespace {
  NONE,
  ALL
};

}  // namespace dom

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_H_
