// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/dom.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace dom {

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
      "DOM.attributeModified",
      base::BindRepeating(&Domain::DispatchAttributeModifiedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.attributeRemoved",
      base::BindRepeating(&Domain::DispatchAttributeRemovedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.characterDataModified",
      base::BindRepeating(&Domain::DispatchCharacterDataModifiedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.childNodeCountUpdated",
      base::BindRepeating(&Domain::DispatchChildNodeCountUpdatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.childNodeInserted",
      base::BindRepeating(&Domain::DispatchChildNodeInsertedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.childNodeRemoved",
      base::BindRepeating(&Domain::DispatchChildNodeRemovedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.distributedNodesUpdated",
      base::BindRepeating(&Domain::DispatchDistributedNodesUpdatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.documentUpdated",
      base::BindRepeating(&Domain::DispatchDocumentUpdatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.inlineStyleInvalidated",
      base::BindRepeating(&Domain::DispatchInlineStyleInvalidatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.pseudoElementAdded",
      base::BindRepeating(&Domain::DispatchPseudoElementAddedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.topLayerElementsUpdated",
      base::BindRepeating(&Domain::DispatchTopLayerElementsUpdatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.pseudoElementRemoved",
      base::BindRepeating(&Domain::DispatchPseudoElementRemovedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.setChildNodes",
      base::BindRepeating(&Domain::DispatchSetChildNodesEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.shadowRootPopped",
      base::BindRepeating(&Domain::DispatchShadowRootPoppedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "DOM.shadowRootPushed",
      base::BindRepeating(&Domain::DispatchShadowRootPushedEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::CollectClassNamesFromSubtree(
    std::unique_ptr<CollectClassNamesFromSubtreeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesFromSubtreeResult>)> callback) {
  dispatcher_->SendMessage("DOM.collectClassNamesFromSubtree", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCollectClassNamesFromSubtreeResponse, std::move(callback)));
}
void ExperimentalDomain::CopyTo(
    std::unique_ptr<CopyToParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CopyToResult>)> callback) {
  dispatcher_->SendMessage("DOM.copyTo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCopyToResponse, std::move(callback)));
}
void Domain::DescribeNode(
    std::unique_ptr<DescribeNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DescribeNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.describeNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDescribeNodeResponse, std::move(callback)));
}

void Domain::DescribeNode(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DescribeNodeResult>)> callback) {
  std::unique_ptr<DescribeNodeParams> params = DescribeNodeParams::Builder()
      .Build();
dispatcher_->SendMessage("DOM.describeNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDescribeNodeResponse, std::move(callback)));
}
void ExperimentalDomain::ScrollIntoViewIfNeeded(
    std::unique_ptr<ScrollIntoViewIfNeededParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ScrollIntoViewIfNeededResult>)> callback) {
  dispatcher_->SendMessage("DOM.scrollIntoViewIfNeeded", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleScrollIntoViewIfNeededResponse, std::move(callback)));
}
void Domain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("DOM.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("DOM.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::DiscardSearchResults(
    std::unique_ptr<DiscardSearchResultsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardSearchResultsResult>)> callback) {
  dispatcher_->SendMessage("DOM.discardSearchResults", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDiscardSearchResultsResponse, std::move(callback)));
}
void Domain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("DOM.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("DOM.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Focus(
    std::unique_ptr<FocusParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<FocusResult>)> callback) {
  dispatcher_->SendMessage("DOM.focus", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleFocusResponse, std::move(callback)));
}

void Domain::Focus(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<FocusParams> params = FocusParams::Builder()
      .Build();
  dispatcher_->SendMessage("DOM.focus", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Focus(std::unique_ptr<FocusParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.focus", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::GetAttributes(
    std::unique_ptr<GetAttributesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAttributesResult>)> callback) {
  dispatcher_->SendMessage("DOM.getAttributes", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetAttributesResponse, std::move(callback)));
}

void Domain::GetAttributes(int node_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAttributesResult>)> callback) {
  std::unique_ptr<GetAttributesParams> params = GetAttributesParams::Builder()
      .SetNodeId(std::move(node_id))
      .Build();
dispatcher_->SendMessage("DOM.getAttributes", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetAttributesResponse, std::move(callback)));
}
void Domain::GetBoxModel(
    std::unique_ptr<GetBoxModelParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBoxModelResult>)> callback) {
  dispatcher_->SendMessage("DOM.getBoxModel", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBoxModelResponse, std::move(callback)));
}

void Domain::GetBoxModel(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBoxModelResult>)> callback) {
  std::unique_ptr<GetBoxModelParams> params = GetBoxModelParams::Builder()
      .Build();
dispatcher_->SendMessage("DOM.getBoxModel", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBoxModelResponse, std::move(callback)));
}
void ExperimentalDomain::GetContentQuads(
    std::unique_ptr<GetContentQuadsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetContentQuadsResult>)> callback) {
  dispatcher_->SendMessage("DOM.getContentQuads", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetContentQuadsResponse, std::move(callback)));
}
void Domain::GetDocument(
    std::unique_ptr<GetDocumentParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetDocumentResult>)> callback) {
  dispatcher_->SendMessage("DOM.getDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetDocumentResponse, std::move(callback)));
}

void Domain::GetDocument(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetDocumentResult>)> callback) {
  std::unique_ptr<GetDocumentParams> params = GetDocumentParams::Builder()
      .Build();
dispatcher_->SendMessage("DOM.getDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetDocumentResponse, std::move(callback)));
}
void Domain::GetFlattenedDocument(
    std::unique_ptr<GetFlattenedDocumentParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFlattenedDocumentResult>)> callback) {
  dispatcher_->SendMessage("DOM.getFlattenedDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetFlattenedDocumentResponse, std::move(callback)));
}

void Domain::GetFlattenedDocument(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFlattenedDocumentResult>)> callback) {
  std::unique_ptr<GetFlattenedDocumentParams> params = GetFlattenedDocumentParams::Builder()
      .Build();
dispatcher_->SendMessage("DOM.getFlattenedDocument", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetFlattenedDocumentResponse, std::move(callback)));
}
void ExperimentalDomain::GetNodesForSubtreeByStyle(
    std::unique_ptr<GetNodesForSubtreeByStyleParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodesForSubtreeByStyleResult>)> callback) {
  dispatcher_->SendMessage("DOM.getNodesForSubtreeByStyle", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetNodesForSubtreeByStyleResponse, std::move(callback)));
}
void Domain::GetNodeForLocation(
    std::unique_ptr<GetNodeForLocationParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodeForLocationResult>)> callback) {
  dispatcher_->SendMessage("DOM.getNodeForLocation", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetNodeForLocationResponse, std::move(callback)));
}

void Domain::GetNodeForLocation(int x, int y, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodeForLocationResult>)> callback) {
  std::unique_ptr<GetNodeForLocationParams> params = GetNodeForLocationParams::Builder()
      .SetX(std::move(x))
      .SetY(std::move(y))
      .Build();
dispatcher_->SendMessage("DOM.getNodeForLocation", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetNodeForLocationResponse, std::move(callback)));
}
void Domain::GetOuterHTML(
    std::unique_ptr<GetOuterHTMLParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetOuterHTMLResult>)> callback) {
  dispatcher_->SendMessage("DOM.getOuterHTML", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetOuterHTMLResponse, std::move(callback)));
}

void Domain::GetOuterHTML(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetOuterHTMLResult>)> callback) {
  std::unique_ptr<GetOuterHTMLParams> params = GetOuterHTMLParams::Builder()
      .Build();
dispatcher_->SendMessage("DOM.getOuterHTML", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetOuterHTMLResponse, std::move(callback)));
}
void ExperimentalDomain::GetRelayoutBoundary(
    std::unique_ptr<GetRelayoutBoundaryParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetRelayoutBoundaryResult>)> callback) {
  dispatcher_->SendMessage("DOM.getRelayoutBoundary", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetRelayoutBoundaryResponse, std::move(callback)));
}
void ExperimentalDomain::GetSearchResults(
    std::unique_ptr<GetSearchResultsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSearchResultsResult>)> callback) {
  dispatcher_->SendMessage("DOM.getSearchResults", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetSearchResultsResponse, std::move(callback)));
}
void Domain::HideHighlight(
    std::unique_ptr<HideHighlightParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)> callback) {
  dispatcher_->SendMessage("DOM.hideHighlight", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHideHighlightResponse, std::move(callback)));
}

void Domain::HideHighlight(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<HideHighlightParams> params = HideHighlightParams::Builder()
      .Build();
  dispatcher_->SendMessage("DOM.hideHighlight", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HideHighlight(std::unique_ptr<HideHighlightParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.hideHighlight", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HighlightNode(
    std::unique_ptr<HighlightNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.highlightNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightNodeResponse, std::move(callback)));
}

void Domain::HighlightNode(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<HighlightNodeParams> params = HighlightNodeParams::Builder()
      .Build();
  dispatcher_->SendMessage("DOM.highlightNode", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HighlightNode(std::unique_ptr<HighlightNodeParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.highlightNode", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HighlightRect(
    std::unique_ptr<HighlightRectParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)> callback) {
  dispatcher_->SendMessage("DOM.highlightRect", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHighlightRectResponse, std::move(callback)));
}

void Domain::HighlightRect(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<HighlightRectParams> params = HighlightRectParams::Builder()
      .Build();
  dispatcher_->SendMessage("DOM.highlightRect", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HighlightRect(std::unique_ptr<HighlightRectParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.highlightRect", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::MarkUndoableState(
    std::unique_ptr<MarkUndoableStateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<MarkUndoableStateResult>)> callback) {
  dispatcher_->SendMessage("DOM.markUndoableState", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleMarkUndoableStateResponse, std::move(callback)));
}
void Domain::MoveTo(
    std::unique_ptr<MoveToParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<MoveToResult>)> callback) {
  dispatcher_->SendMessage("DOM.moveTo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleMoveToResponse, std::move(callback)));
}

void Domain::MoveTo(int node_id, int target_node_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<MoveToResult>)> callback) {
  std::unique_ptr<MoveToParams> params = MoveToParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetTargetNodeId(std::move(target_node_id))
      .Build();
dispatcher_->SendMessage("DOM.moveTo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleMoveToResponse, std::move(callback)));
}
void ExperimentalDomain::PerformSearch(
    std::unique_ptr<PerformSearchParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PerformSearchResult>)> callback) {
  dispatcher_->SendMessage("DOM.performSearch", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandlePerformSearchResponse, std::move(callback)));
}
void ExperimentalDomain::PushNodeByPathToFrontend(
    std::unique_ptr<PushNodeByPathToFrontendParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PushNodeByPathToFrontendResult>)> callback) {
  dispatcher_->SendMessage("DOM.pushNodeByPathToFrontend", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandlePushNodeByPathToFrontendResponse, std::move(callback)));
}
void ExperimentalDomain::PushNodesByBackendIdsToFrontend(
    std::unique_ptr<PushNodesByBackendIdsToFrontendParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PushNodesByBackendIdsToFrontendResult>)> callback) {
  dispatcher_->SendMessage("DOM.pushNodesByBackendIdsToFrontend", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandlePushNodesByBackendIdsToFrontendResponse, std::move(callback)));
}
void Domain::QuerySelector(
    std::unique_ptr<QuerySelectorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QuerySelectorResult>)> callback) {
  dispatcher_->SendMessage("DOM.querySelector", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleQuerySelectorResponse, std::move(callback)));
}

void Domain::QuerySelector(int node_id, const std::string& selector, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QuerySelectorResult>)> callback) {
  std::unique_ptr<QuerySelectorParams> params = QuerySelectorParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetSelector(std::move(selector))
      .Build();
dispatcher_->SendMessage("DOM.querySelector", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleQuerySelectorResponse, std::move(callback)));
}
void Domain::QuerySelectorAll(
    std::unique_ptr<QuerySelectorAllParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QuerySelectorAllResult>)> callback) {
  dispatcher_->SendMessage("DOM.querySelectorAll", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleQuerySelectorAllResponse, std::move(callback)));
}

void Domain::QuerySelectorAll(int node_id, const std::string& selector, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QuerySelectorAllResult>)> callback) {
  std::unique_ptr<QuerySelectorAllParams> params = QuerySelectorAllParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetSelector(std::move(selector))
      .Build();
dispatcher_->SendMessage("DOM.querySelectorAll", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleQuerySelectorAllResponse, std::move(callback)));
}
void ExperimentalDomain::GetTopLayerElements(
    std::unique_ptr<GetTopLayerElementsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTopLayerElementsResult>)> callback) {
  dispatcher_->SendMessage("DOM.getTopLayerElements", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetTopLayerElementsResponse, std::move(callback)));
}
void ExperimentalDomain::Redo(
    std::unique_ptr<RedoParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RedoResult>)> callback) {
  dispatcher_->SendMessage("DOM.redo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRedoResponse, std::move(callback)));
}
void Domain::RemoveAttribute(
    std::unique_ptr<RemoveAttributeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveAttributeResult>)> callback) {
  dispatcher_->SendMessage("DOM.removeAttribute", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveAttributeResponse, std::move(callback)));
}

void Domain::RemoveAttribute(int node_id, const std::string& name, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RemoveAttributeParams> params = RemoveAttributeParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetName(std::move(name))
      .Build();
  dispatcher_->SendMessage("DOM.removeAttribute", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveAttribute(std::unique_ptr<RemoveAttributeParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.removeAttribute", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveNode(
    std::unique_ptr<RemoveNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.removeNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveNodeResponse, std::move(callback)));
}

void Domain::RemoveNode(int node_id, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RemoveNodeParams> params = RemoveNodeParams::Builder()
      .SetNodeId(std::move(node_id))
      .Build();
  dispatcher_->SendMessage("DOM.removeNode", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveNode(std::unique_ptr<RemoveNodeParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.removeNode", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RequestChildNodes(
    std::unique_ptr<RequestChildNodesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RequestChildNodesResult>)> callback) {
  dispatcher_->SendMessage("DOM.requestChildNodes", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRequestChildNodesResponse, std::move(callback)));
}

void Domain::RequestChildNodes(int node_id, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RequestChildNodesParams> params = RequestChildNodesParams::Builder()
      .SetNodeId(std::move(node_id))
      .Build();
  dispatcher_->SendMessage("DOM.requestChildNodes", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RequestChildNodes(std::unique_ptr<RequestChildNodesParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.requestChildNodes", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RequestNode(
    std::unique_ptr<RequestNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RequestNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.requestNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRequestNodeResponse, std::move(callback)));
}

void Domain::RequestNode(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RequestNodeResult>)> callback) {
  std::unique_ptr<RequestNodeParams> params = RequestNodeParams::Builder()
      .SetObjectId(std::move(object_id))
      .Build();
dispatcher_->SendMessage("DOM.requestNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRequestNodeResponse, std::move(callback)));
}
void Domain::ResolveNode(
    std::unique_ptr<ResolveNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResolveNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.resolveNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResolveNodeResponse, std::move(callback)));
}

void Domain::ResolveNode(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResolveNodeResult>)> callback) {
  std::unique_ptr<ResolveNodeParams> params = ResolveNodeParams::Builder()
      .Build();
dispatcher_->SendMessage("DOM.resolveNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResolveNodeResponse, std::move(callback)));
}
void Domain::SetAttributeValue(
    std::unique_ptr<SetAttributeValueParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAttributeValueResult>)> callback) {
  dispatcher_->SendMessage("DOM.setAttributeValue", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAttributeValueResponse, std::move(callback)));
}

void Domain::SetAttributeValue(int node_id, const std::string& name, const std::string& value, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetAttributeValueParams> params = SetAttributeValueParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetName(std::move(name))
      .SetValue(std::move(value))
      .Build();
  dispatcher_->SendMessage("DOM.setAttributeValue", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetAttributeValue(std::unique_ptr<SetAttributeValueParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.setAttributeValue", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetAttributesAsText(
    std::unique_ptr<SetAttributesAsTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAttributesAsTextResult>)> callback) {
  dispatcher_->SendMessage("DOM.setAttributesAsText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAttributesAsTextResponse, std::move(callback)));
}

void Domain::SetAttributesAsText(int node_id, const std::string& text, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetAttributesAsTextParams> params = SetAttributesAsTextParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetText(std::move(text))
      .Build();
  dispatcher_->SendMessage("DOM.setAttributesAsText", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetAttributesAsText(std::unique_ptr<SetAttributesAsTextParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.setAttributesAsText", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetFileInputFiles(
    std::unique_ptr<SetFileInputFilesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFileInputFilesResult>)> callback) {
  dispatcher_->SendMessage("DOM.setFileInputFiles", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetFileInputFilesResponse, std::move(callback)));
}

void Domain::SetFileInputFiles(std::vector<std::string> files, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetFileInputFilesParams> params = SetFileInputFilesParams::Builder()
      .SetFiles(std::move(files))
      .Build();
  dispatcher_->SendMessage("DOM.setFileInputFiles", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetFileInputFiles(std::unique_ptr<SetFileInputFilesParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.setFileInputFiles", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetNodeStackTracesEnabled(
    std::unique_ptr<SetNodeStackTracesEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeStackTracesEnabledResult>)> callback) {
  dispatcher_->SendMessage("DOM.setNodeStackTracesEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetNodeStackTracesEnabledResponse, std::move(callback)));
}
void ExperimentalDomain::GetNodeStackTraces(
    std::unique_ptr<GetNodeStackTracesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodeStackTracesResult>)> callback) {
  dispatcher_->SendMessage("DOM.getNodeStackTraces", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetNodeStackTracesResponse, std::move(callback)));
}
void ExperimentalDomain::GetFileInfo(
    std::unique_ptr<GetFileInfoParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFileInfoResult>)> callback) {
  dispatcher_->SendMessage("DOM.getFileInfo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetFileInfoResponse, std::move(callback)));
}
void ExperimentalDomain::SetInspectedNode(
    std::unique_ptr<SetInspectedNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectedNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.setInspectedNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetInspectedNodeResponse, std::move(callback)));
}
void Domain::SetNodeName(
    std::unique_ptr<SetNodeNameParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeNameResult>)> callback) {
  dispatcher_->SendMessage("DOM.setNodeName", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetNodeNameResponse, std::move(callback)));
}

void Domain::SetNodeName(int node_id, const std::string& name, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeNameResult>)> callback) {
  std::unique_ptr<SetNodeNameParams> params = SetNodeNameParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetName(std::move(name))
      .Build();
dispatcher_->SendMessage("DOM.setNodeName", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetNodeNameResponse, std::move(callback)));
}
void Domain::SetNodeValue(
    std::unique_ptr<SetNodeValueParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeValueResult>)> callback) {
  dispatcher_->SendMessage("DOM.setNodeValue", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetNodeValueResponse, std::move(callback)));
}

void Domain::SetNodeValue(int node_id, const std::string& value, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetNodeValueParams> params = SetNodeValueParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetValue(std::move(value))
      .Build();
  dispatcher_->SendMessage("DOM.setNodeValue", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetNodeValue(std::unique_ptr<SetNodeValueParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.setNodeValue", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetOuterHTML(
    std::unique_ptr<SetOuterHTMLParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOuterHTMLResult>)> callback) {
  dispatcher_->SendMessage("DOM.setOuterHTML", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetOuterHTMLResponse, std::move(callback)));
}

void Domain::SetOuterHTML(int node_id, const std::string& outerhtml, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetOuterHTMLParams> params = SetOuterHTMLParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetOuterHTML(std::move(outerhtml))
      .Build();
  dispatcher_->SendMessage("DOM.setOuterHTML", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetOuterHTML(std::unique_ptr<SetOuterHTMLParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOM.setOuterHTML", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::Undo(
    std::unique_ptr<UndoParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<UndoResult>)> callback) {
  dispatcher_->SendMessage("DOM.undo", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleUndoResponse, std::move(callback)));
}
void ExperimentalDomain::GetFrameOwner(
    std::unique_ptr<GetFrameOwnerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFrameOwnerResult>)> callback) {
  dispatcher_->SendMessage("DOM.getFrameOwner", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetFrameOwnerResponse, std::move(callback)));
}
void ExperimentalDomain::GetContainerForNode(
    std::unique_ptr<GetContainerForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetContainerForNodeResult>)> callback) {
  dispatcher_->SendMessage("DOM.getContainerForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetContainerForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::GetQueryingDescendantsForContainer(
    std::unique_ptr<GetQueryingDescendantsForContainerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetQueryingDescendantsForContainerResult>)> callback) {
  dispatcher_->SendMessage("DOM.getQueryingDescendantsForContainer", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetQueryingDescendantsForContainerResponse, std::move(callback)));
}


// static
void Domain::HandleCollectClassNamesFromSubtreeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesFromSubtreeResult>)> callback,
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
  std::unique_ptr<CollectClassNamesFromSubtreeResult> result = CollectClassNamesFromSubtreeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCopyToResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CopyToResult>)> callback,
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
  std::unique_ptr<CopyToResult> result = CopyToResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDescribeNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DescribeNodeResult>)> callback,
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
  std::unique_ptr<DescribeNodeResult> result = DescribeNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleScrollIntoViewIfNeededResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ScrollIntoViewIfNeededResult>)> callback,
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
  std::unique_ptr<ScrollIntoViewIfNeededResult> result = ScrollIntoViewIfNeededResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDisableResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
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
  std::unique_ptr<DisableResult> result = DisableResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDiscardSearchResultsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardSearchResultsResult>)> callback,
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
  std::unique_ptr<DiscardSearchResultsResult> result = DiscardSearchResultsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleEnableResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
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
  std::unique_ptr<EnableResult> result = EnableResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleFocusResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<FocusResult>)> callback,
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
  std::unique_ptr<FocusResult> result = FocusResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetAttributesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetAttributesResult>)> callback,
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
  std::unique_ptr<GetAttributesResult> result = GetAttributesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetBoxModelResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBoxModelResult>)> callback,
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
  std::unique_ptr<GetBoxModelResult> result = GetBoxModelResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetContentQuadsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetContentQuadsResult>)> callback,
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
  std::unique_ptr<GetContentQuadsResult> result = GetContentQuadsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetDocumentResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetDocumentResult>)> callback,
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
  std::unique_ptr<GetDocumentResult> result = GetDocumentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetFlattenedDocumentResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFlattenedDocumentResult>)> callback,
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
  std::unique_ptr<GetFlattenedDocumentResult> result = GetFlattenedDocumentResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetNodesForSubtreeByStyleResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodesForSubtreeByStyleResult>)> callback,
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
  std::unique_ptr<GetNodesForSubtreeByStyleResult> result = GetNodesForSubtreeByStyleResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetNodeForLocationResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodeForLocationResult>)> callback,
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
  std::unique_ptr<GetNodeForLocationResult> result = GetNodeForLocationResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetOuterHTMLResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetOuterHTMLResult>)> callback,
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
  std::unique_ptr<GetOuterHTMLResult> result = GetOuterHTMLResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetRelayoutBoundaryResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetRelayoutBoundaryResult>)> callback,
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
  std::unique_ptr<GetRelayoutBoundaryResult> result = GetRelayoutBoundaryResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetSearchResultsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSearchResultsResult>)> callback,
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
  std::unique_ptr<GetSearchResultsResult> result = GetSearchResultsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHideHighlightResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HideHighlightResult>)> callback,
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
  std::unique_ptr<HideHighlightResult> result = HideHighlightResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightNodeResult>)> callback,
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
  std::unique_ptr<HighlightNodeResult> result = HighlightNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHighlightRectResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HighlightRectResult>)> callback,
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
  std::unique_ptr<HighlightRectResult> result = HighlightRectResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleMarkUndoableStateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<MarkUndoableStateResult>)> callback,
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
  std::unique_ptr<MarkUndoableStateResult> result = MarkUndoableStateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleMoveToResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<MoveToResult>)> callback,
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
  std::unique_ptr<MoveToResult> result = MoveToResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandlePerformSearchResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PerformSearchResult>)> callback,
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
  std::unique_ptr<PerformSearchResult> result = PerformSearchResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandlePushNodeByPathToFrontendResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PushNodeByPathToFrontendResult>)> callback,
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
  std::unique_ptr<PushNodeByPathToFrontendResult> result = PushNodeByPathToFrontendResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandlePushNodesByBackendIdsToFrontendResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<PushNodesByBackendIdsToFrontendResult>)> callback,
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
  std::unique_ptr<PushNodesByBackendIdsToFrontendResult> result = PushNodesByBackendIdsToFrontendResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleQuerySelectorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QuerySelectorResult>)> callback,
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
  std::unique_ptr<QuerySelectorResult> result = QuerySelectorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleQuerySelectorAllResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QuerySelectorAllResult>)> callback,
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
  std::unique_ptr<QuerySelectorAllResult> result = QuerySelectorAllResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetTopLayerElementsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTopLayerElementsResult>)> callback,
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
  std::unique_ptr<GetTopLayerElementsResult> result = GetTopLayerElementsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRedoResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RedoResult>)> callback,
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
  std::unique_ptr<RedoResult> result = RedoResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveAttributeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveAttributeResult>)> callback,
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
  std::unique_ptr<RemoveAttributeResult> result = RemoveAttributeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveNodeResult>)> callback,
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
  std::unique_ptr<RemoveNodeResult> result = RemoveNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRequestChildNodesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RequestChildNodesResult>)> callback,
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
  std::unique_ptr<RequestChildNodesResult> result = RequestChildNodesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRequestNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RequestNodeResult>)> callback,
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
  std::unique_ptr<RequestNodeResult> result = RequestNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleResolveNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResolveNodeResult>)> callback,
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
  std::unique_ptr<ResolveNodeResult> result = ResolveNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAttributeValueResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAttributeValueResult>)> callback,
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
  std::unique_ptr<SetAttributeValueResult> result = SetAttributeValueResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAttributesAsTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAttributesAsTextResult>)> callback,
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
  std::unique_ptr<SetAttributesAsTextResult> result = SetAttributesAsTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetFileInputFilesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetFileInputFilesResult>)> callback,
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
  std::unique_ptr<SetFileInputFilesResult> result = SetFileInputFilesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetNodeStackTracesEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeStackTracesEnabledResult>)> callback,
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
  std::unique_ptr<SetNodeStackTracesEnabledResult> result = SetNodeStackTracesEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetNodeStackTracesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetNodeStackTracesResult>)> callback,
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
  std::unique_ptr<GetNodeStackTracesResult> result = GetNodeStackTracesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetFileInfoResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFileInfoResult>)> callback,
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
  std::unique_ptr<GetFileInfoResult> result = GetFileInfoResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetInspectedNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInspectedNodeResult>)> callback,
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
  std::unique_ptr<SetInspectedNodeResult> result = SetInspectedNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetNodeNameResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeNameResult>)> callback,
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
  std::unique_ptr<SetNodeNameResult> result = SetNodeNameResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetNodeValueResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetNodeValueResult>)> callback,
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
  std::unique_ptr<SetNodeValueResult> result = SetNodeValueResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetOuterHTMLResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOuterHTMLResult>)> callback,
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
  std::unique_ptr<SetOuterHTMLResult> result = SetOuterHTMLResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleUndoResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<UndoResult>)> callback,
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
  std::unique_ptr<UndoResult> result = UndoResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetFrameOwnerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetFrameOwnerResult>)> callback,
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
  std::unique_ptr<GetFrameOwnerResult> result = GetFrameOwnerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetContainerForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetContainerForNodeResult>)> callback,
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
  std::unique_ptr<GetContainerForNodeResult> result = GetContainerForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetQueryingDescendantsForContainerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetQueryingDescendantsForContainerResult>)> callback,
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
  std::unique_ptr<GetQueryingDescendantsForContainerResult> result = GetQueryingDescendantsForContainerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchAttributeModifiedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<AttributeModifiedParams> parsed_params(AttributeModifiedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnAttributeModified(*parsed_params);
  }
}

void Domain::DispatchAttributeRemovedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<AttributeRemovedParams> parsed_params(AttributeRemovedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnAttributeRemoved(*parsed_params);
  }
}

void Domain::DispatchCharacterDataModifiedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<CharacterDataModifiedParams> parsed_params(CharacterDataModifiedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnCharacterDataModified(*parsed_params);
  }
}

void Domain::DispatchChildNodeCountUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ChildNodeCountUpdatedParams> parsed_params(ChildNodeCountUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnChildNodeCountUpdated(*parsed_params);
  }
}

void Domain::DispatchChildNodeInsertedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ChildNodeInsertedParams> parsed_params(ChildNodeInsertedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnChildNodeInserted(*parsed_params);
  }
}

void Domain::DispatchChildNodeRemovedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ChildNodeRemovedParams> parsed_params(ChildNodeRemovedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnChildNodeRemoved(*parsed_params);
  }
}

void Domain::DispatchDistributedNodesUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DistributedNodesUpdatedParams> parsed_params(DistributedNodesUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDistributedNodesUpdated(*parsed_params);
  }
}

void Domain::DispatchDocumentUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DocumentUpdatedParams> parsed_params(DocumentUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDocumentUpdated(*parsed_params);
  }
}

void Domain::DispatchInlineStyleInvalidatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InlineStyleInvalidatedParams> parsed_params(InlineStyleInvalidatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInlineStyleInvalidated(*parsed_params);
  }
}

void Domain::DispatchPseudoElementAddedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PseudoElementAddedParams> parsed_params(PseudoElementAddedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPseudoElementAdded(*parsed_params);
  }
}

void Domain::DispatchTopLayerElementsUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<TopLayerElementsUpdatedParams> parsed_params(TopLayerElementsUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnTopLayerElementsUpdated(*parsed_params);
  }
}

void Domain::DispatchPseudoElementRemovedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PseudoElementRemovedParams> parsed_params(PseudoElementRemovedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPseudoElementRemoved(*parsed_params);
  }
}

void Domain::DispatchSetChildNodesEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<SetChildNodesParams> parsed_params(SetChildNodesParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnSetChildNodes(*parsed_params);
  }
}

void Domain::DispatchShadowRootPoppedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ShadowRootPoppedParams> parsed_params(ShadowRootPoppedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnShadowRootPopped(*parsed_params);
  }
}

void Domain::DispatchShadowRootPushedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ShadowRootPushedParams> parsed_params(ShadowRootPushedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnShadowRootPushed(*parsed_params);
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

}  // namespace dom

} // namespace autofill_assistant
