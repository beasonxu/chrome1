// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/css.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace css {

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
      "CSS.fontsUpdated",
      base::BindRepeating(&Domain::DispatchFontsUpdatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "CSS.mediaQueryResultChanged",
      base::BindRepeating(&Domain::DispatchMediaQueryResultChangedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "CSS.styleSheetAdded",
      base::BindRepeating(&Domain::DispatchStyleSheetAddedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "CSS.styleSheetChanged",
      base::BindRepeating(&Domain::DispatchStyleSheetChangedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "CSS.styleSheetRemoved",
      base::BindRepeating(&Domain::DispatchStyleSheetRemovedEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::AddRule(
    std::unique_ptr<AddRuleParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddRuleResult>)> callback) {
  dispatcher_->SendMessage("CSS.addRule", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddRuleResponse, std::move(callback)));
}
void ExperimentalDomain::CollectClassNames(
    std::unique_ptr<CollectClassNamesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesResult>)> callback) {
  dispatcher_->SendMessage("CSS.collectClassNames", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCollectClassNamesResponse, std::move(callback)));
}
void ExperimentalDomain::CreateStyleSheet(
    std::unique_ptr<CreateStyleSheetParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateStyleSheetResult>)> callback) {
  dispatcher_->SendMessage("CSS.createStyleSheet", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCreateStyleSheetResponse, std::move(callback)));
}
void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("CSS.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}
void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("CSS.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::ForcePseudoState(
    std::unique_ptr<ForcePseudoStateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ForcePseudoStateResult>)> callback) {
  dispatcher_->SendMessage("CSS.forcePseudoState", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleForcePseudoStateResponse, std::move(callback)));
}
void ExperimentalDomain::GetBackgroundColors(
    std::unique_ptr<GetBackgroundColorsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBackgroundColorsResult>)> callback) {
  dispatcher_->SendMessage("CSS.getBackgroundColors", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetBackgroundColorsResponse, std::move(callback)));
}
void ExperimentalDomain::GetComputedStyleForNode(
    std::unique_ptr<GetComputedStyleForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetComputedStyleForNodeResult>)> callback) {
  dispatcher_->SendMessage("CSS.getComputedStyleForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetComputedStyleForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::GetInlineStylesForNode(
    std::unique_ptr<GetInlineStylesForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInlineStylesForNodeResult>)> callback) {
  dispatcher_->SendMessage("CSS.getInlineStylesForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetInlineStylesForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::GetMatchedStylesForNode(
    std::unique_ptr<GetMatchedStylesForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMatchedStylesForNodeResult>)> callback) {
  dispatcher_->SendMessage("CSS.getMatchedStylesForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetMatchedStylesForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::GetMediaQueries(
    std::unique_ptr<GetMediaQueriesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMediaQueriesResult>)> callback) {
  dispatcher_->SendMessage("CSS.getMediaQueries", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetMediaQueriesResponse, std::move(callback)));
}
void ExperimentalDomain::GetPlatformFontsForNode(
    std::unique_ptr<GetPlatformFontsForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPlatformFontsForNodeResult>)> callback) {
  dispatcher_->SendMessage("CSS.getPlatformFontsForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetPlatformFontsForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::GetStyleSheetText(
    std::unique_ptr<GetStyleSheetTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetStyleSheetTextResult>)> callback) {
  dispatcher_->SendMessage("CSS.getStyleSheetText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetStyleSheetTextResponse, std::move(callback)));
}
void ExperimentalDomain::GetLayersForNode(
    std::unique_ptr<GetLayersForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayersForNodeResult>)> callback) {
  dispatcher_->SendMessage("CSS.getLayersForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetLayersForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::TrackComputedStyleUpdates(
    std::unique_ptr<TrackComputedStyleUpdatesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TrackComputedStyleUpdatesResult>)> callback) {
  dispatcher_->SendMessage("CSS.trackComputedStyleUpdates", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTrackComputedStyleUpdatesResponse, std::move(callback)));
}
void ExperimentalDomain::TakeComputedStyleUpdates(
    std::unique_ptr<TakeComputedStyleUpdatesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeComputedStyleUpdatesResult>)> callback) {
  dispatcher_->SendMessage("CSS.takeComputedStyleUpdates", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakeComputedStyleUpdatesResponse, std::move(callback)));
}
void ExperimentalDomain::SetEffectivePropertyValueForNode(
    std::unique_ptr<SetEffectivePropertyValueForNodeParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEffectivePropertyValueForNodeResult>)> callback) {
  dispatcher_->SendMessage("CSS.setEffectivePropertyValueForNode", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetEffectivePropertyValueForNodeResponse, std::move(callback)));
}
void ExperimentalDomain::SetKeyframeKey(
    std::unique_ptr<SetKeyframeKeyParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetKeyframeKeyResult>)> callback) {
  dispatcher_->SendMessage("CSS.setKeyframeKey", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetKeyframeKeyResponse, std::move(callback)));
}
void ExperimentalDomain::SetMediaText(
    std::unique_ptr<SetMediaTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMediaTextResult>)> callback) {
  dispatcher_->SendMessage("CSS.setMediaText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetMediaTextResponse, std::move(callback)));
}
void ExperimentalDomain::SetContainerQueryText(
    std::unique_ptr<SetContainerQueryTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetContainerQueryTextResult>)> callback) {
  dispatcher_->SendMessage("CSS.setContainerQueryText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetContainerQueryTextResponse, std::move(callback)));
}
void ExperimentalDomain::SetSupportsText(
    std::unique_ptr<SetSupportsTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSupportsTextResult>)> callback) {
  dispatcher_->SendMessage("CSS.setSupportsText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetSupportsTextResponse, std::move(callback)));
}
void ExperimentalDomain::SetScopeText(
    std::unique_ptr<SetScopeTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScopeTextResult>)> callback) {
  dispatcher_->SendMessage("CSS.setScopeText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetScopeTextResponse, std::move(callback)));
}
void ExperimentalDomain::SetRuleSelector(
    std::unique_ptr<SetRuleSelectorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRuleSelectorResult>)> callback) {
  dispatcher_->SendMessage("CSS.setRuleSelector", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetRuleSelectorResponse, std::move(callback)));
}
void ExperimentalDomain::SetStyleSheetText(
    std::unique_ptr<SetStyleSheetTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleSheetTextResult>)> callback) {
  dispatcher_->SendMessage("CSS.setStyleSheetText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetStyleSheetTextResponse, std::move(callback)));
}
void ExperimentalDomain::SetStyleTexts(
    std::unique_ptr<SetStyleTextsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleTextsResult>)> callback) {
  dispatcher_->SendMessage("CSS.setStyleTexts", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetStyleTextsResponse, std::move(callback)));
}
void ExperimentalDomain::StartRuleUsageTracking(
    std::unique_ptr<StartRuleUsageTrackingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartRuleUsageTrackingResult>)> callback) {
  dispatcher_->SendMessage("CSS.startRuleUsageTracking", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStartRuleUsageTrackingResponse, std::move(callback)));
}
void ExperimentalDomain::StopRuleUsageTracking(
    std::unique_ptr<StopRuleUsageTrackingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopRuleUsageTrackingResult>)> callback) {
  dispatcher_->SendMessage("CSS.stopRuleUsageTracking", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleStopRuleUsageTrackingResponse, std::move(callback)));
}
void ExperimentalDomain::TakeCoverageDelta(
    std::unique_ptr<TakeCoverageDeltaParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeCoverageDeltaResult>)> callback) {
  dispatcher_->SendMessage("CSS.takeCoverageDelta", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakeCoverageDeltaResponse, std::move(callback)));
}
void ExperimentalDomain::SetLocalFontsEnabled(
    std::unique_ptr<SetLocalFontsEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocalFontsEnabledResult>)> callback) {
  dispatcher_->SendMessage("CSS.setLocalFontsEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetLocalFontsEnabledResponse, std::move(callback)));
}


// static
void Domain::HandleAddRuleResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddRuleResult>)> callback,
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
  std::unique_ptr<AddRuleResult> result = AddRuleResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCollectClassNamesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesResult>)> callback,
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
  std::unique_ptr<CollectClassNamesResult> result = CollectClassNamesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCreateStyleSheetResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateStyleSheetResult>)> callback,
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
  std::unique_ptr<CreateStyleSheetResult> result = CreateStyleSheetResult::Parse(response, &errors);
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
void Domain::HandleForcePseudoStateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ForcePseudoStateResult>)> callback,
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
  std::unique_ptr<ForcePseudoStateResult> result = ForcePseudoStateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetBackgroundColorsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBackgroundColorsResult>)> callback,
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
  std::unique_ptr<GetBackgroundColorsResult> result = GetBackgroundColorsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetComputedStyleForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetComputedStyleForNodeResult>)> callback,
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
  std::unique_ptr<GetComputedStyleForNodeResult> result = GetComputedStyleForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetInlineStylesForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInlineStylesForNodeResult>)> callback,
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
  std::unique_ptr<GetInlineStylesForNodeResult> result = GetInlineStylesForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetMatchedStylesForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMatchedStylesForNodeResult>)> callback,
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
  std::unique_ptr<GetMatchedStylesForNodeResult> result = GetMatchedStylesForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetMediaQueriesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMediaQueriesResult>)> callback,
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
  std::unique_ptr<GetMediaQueriesResult> result = GetMediaQueriesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetPlatformFontsForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPlatformFontsForNodeResult>)> callback,
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
  std::unique_ptr<GetPlatformFontsForNodeResult> result = GetPlatformFontsForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetStyleSheetTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetStyleSheetTextResult>)> callback,
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
  std::unique_ptr<GetStyleSheetTextResult> result = GetStyleSheetTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetLayersForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayersForNodeResult>)> callback,
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
  std::unique_ptr<GetLayersForNodeResult> result = GetLayersForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTrackComputedStyleUpdatesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TrackComputedStyleUpdatesResult>)> callback,
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
  std::unique_ptr<TrackComputedStyleUpdatesResult> result = TrackComputedStyleUpdatesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTakeComputedStyleUpdatesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeComputedStyleUpdatesResult>)> callback,
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
  std::unique_ptr<TakeComputedStyleUpdatesResult> result = TakeComputedStyleUpdatesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetEffectivePropertyValueForNodeResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEffectivePropertyValueForNodeResult>)> callback,
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
  std::unique_ptr<SetEffectivePropertyValueForNodeResult> result = SetEffectivePropertyValueForNodeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetKeyframeKeyResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetKeyframeKeyResult>)> callback,
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
  std::unique_ptr<SetKeyframeKeyResult> result = SetKeyframeKeyResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetMediaTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMediaTextResult>)> callback,
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
  std::unique_ptr<SetMediaTextResult> result = SetMediaTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetContainerQueryTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetContainerQueryTextResult>)> callback,
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
  std::unique_ptr<SetContainerQueryTextResult> result = SetContainerQueryTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetSupportsTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSupportsTextResult>)> callback,
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
  std::unique_ptr<SetSupportsTextResult> result = SetSupportsTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetScopeTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScopeTextResult>)> callback,
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
  std::unique_ptr<SetScopeTextResult> result = SetScopeTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetRuleSelectorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRuleSelectorResult>)> callback,
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
  std::unique_ptr<SetRuleSelectorResult> result = SetRuleSelectorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetStyleSheetTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleSheetTextResult>)> callback,
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
  std::unique_ptr<SetStyleSheetTextResult> result = SetStyleSheetTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetStyleTextsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleTextsResult>)> callback,
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
  std::unique_ptr<SetStyleTextsResult> result = SetStyleTextsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStartRuleUsageTrackingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartRuleUsageTrackingResult>)> callback,
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
  std::unique_ptr<StartRuleUsageTrackingResult> result = StartRuleUsageTrackingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleStopRuleUsageTrackingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopRuleUsageTrackingResult>)> callback,
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
  std::unique_ptr<StopRuleUsageTrackingResult> result = StopRuleUsageTrackingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTakeCoverageDeltaResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeCoverageDeltaResult>)> callback,
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
  std::unique_ptr<TakeCoverageDeltaResult> result = TakeCoverageDeltaResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetLocalFontsEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocalFontsEnabledResult>)> callback,
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
  std::unique_ptr<SetLocalFontsEnabledResult> result = SetLocalFontsEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchFontsUpdatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<FontsUpdatedParams> parsed_params(FontsUpdatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnFontsUpdated(*parsed_params);
  }
}

void Domain::DispatchMediaQueryResultChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<MediaQueryResultChangedParams> parsed_params(MediaQueryResultChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnMediaQueryResultChanged(*parsed_params);
  }
}

void Domain::DispatchStyleSheetAddedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<StyleSheetAddedParams> parsed_params(StyleSheetAddedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnStyleSheetAdded(*parsed_params);
  }
}

void Domain::DispatchStyleSheetChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<StyleSheetChangedParams> parsed_params(StyleSheetChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnStyleSheetChanged(*parsed_params);
  }
}

void Domain::DispatchStyleSheetRemovedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<StyleSheetRemovedParams> parsed_params(StyleSheetRemovedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnStyleSheetRemoved(*parsed_params);
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

}  // namespace css

} // namespace autofill_assistant
