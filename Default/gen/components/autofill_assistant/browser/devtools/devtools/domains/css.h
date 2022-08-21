// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_CSS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_CSS_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_css.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/message_dispatcher.h"


namespace autofill_assistant {
namespace css {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // Fires whenever a web font is updated.  A non-empty font parameter indicates a successfully loaded
  // web font
  virtual void OnFontsUpdated(const FontsUpdatedParams& params) {}
  // Fires whenever a MediaQuery result changes (for example, after a browser window has been
  // resized.) The current implementation considers only viewport-dependent media features.
  virtual void OnMediaQueryResultChanged(const MediaQueryResultChangedParams& params) {}
  // Fired whenever an active document stylesheet is added.
  virtual void OnStyleSheetAdded(const StyleSheetAddedParams& params) {}
  // Fired whenever a stylesheet is changed as a result of the client operation.
  virtual void OnStyleSheetChanged(const StyleSheetChangedParams& params) {}
  // Fired whenever an active document stylesheet is removed.
  virtual void OnStyleSheetRemoved(const StyleSheetRemovedParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // Experimental: Fires whenever a web font is updated.  A non-empty font parameter indicates a successfully loaded
  // web font
  virtual void OnFontsUpdated(const FontsUpdatedParams& params) final {}
  // Experimental: Fires whenever a MediaQuery result changes (for example, after a browser window has been
  // resized.) The current implementation considers only viewport-dependent media features.
  virtual void OnMediaQueryResultChanged(const MediaQueryResultChangedParams& params) final {}
  // Experimental: Fired whenever an active document stylesheet is added.
  virtual void OnStyleSheetAdded(const StyleSheetAddedParams& params) final {}
  // Experimental: Fired whenever a stylesheet is changed as a result of the client operation.
  virtual void OnStyleSheetChanged(const StyleSheetChangedParams& params) final {}
  // Experimental: Fired whenever an active document stylesheet is removed.
  virtual void OnStyleSheetRemoved(const StyleSheetRemovedParams& params) final {}
};

// This domain exposes CSS read/write operations. All CSS objects (stylesheets, rules, and styles)
// have an associated `id` used in subsequent operations on the related object. Each object type has
// a specific `id` structure, and those are not interchangeable between objects of different kinds.
// CSS objects can be loaded using the `get*ForNode()` calls (which accept a DOM node id). A client
// can also keep track of stylesheets via the `styleSheetAdded`/`styleSheetRemoved` events and
// subsequently load the required stylesheet contents using the `getStyleSheet[Text]()` methods.
class Domain {
 public:
  Domain(const Domain&) = delete;
  Domain& operator=(const Domain&) = delete;

  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(Observer* observer);
  void RemoveObserver(Observer* observer);

  // Return the experimental interface for this domain. Note that experimental
  // commands may be changed or removed at any time.
  ExperimentalDomain* GetExperimental();

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleAddRuleResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddRuleResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCollectClassNamesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCreateStyleSheetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateStyleSheetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleDisableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleEnableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleForcePseudoStateResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ForcePseudoStateResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetBackgroundColorsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBackgroundColorsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetComputedStyleForNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetComputedStyleForNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetInlineStylesForNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInlineStylesForNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetMatchedStylesForNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMatchedStylesForNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetMediaQueriesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMediaQueriesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetPlatformFontsForNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPlatformFontsForNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetStyleSheetTextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetStyleSheetTextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetLayersForNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayersForNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleTrackComputedStyleUpdatesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TrackComputedStyleUpdatesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleTakeComputedStyleUpdatesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeComputedStyleUpdatesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetEffectivePropertyValueForNodeResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEffectivePropertyValueForNodeResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetKeyframeKeyResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetKeyframeKeyResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetMediaTextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMediaTextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetContainerQueryTextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetContainerQueryTextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetSupportsTextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSupportsTextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetScopeTextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScopeTextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetRuleSelectorResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRuleSelectorResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetStyleSheetTextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleSheetTextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetStyleTextsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleTextsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleStartRuleUsageTrackingResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartRuleUsageTrackingResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleStopRuleUsageTrackingResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopRuleUsageTrackingResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleTakeCoverageDeltaResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeCoverageDeltaResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetLocalFontsEnabledResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocalFontsEnabledResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchFontsUpdatedEvent(const base::Value& params);
  void DispatchMediaQueryResultChangedEvent(const base::Value& params);
  void DispatchStyleSheetAddedEvent(const base::Value& params);
  void DispatchStyleSheetChangedEvent(const base::Value& params);
  void DispatchStyleSheetRemovedEvent(const base::Value& params);

  MessageDispatcher* dispatcher_;  // Not owned.
  base::ObserverList<ExperimentalObserver>::Unchecked observers_;

 protected:
  void RegisterEventHandlersIfNeeded();

 private:
  bool event_handlers_registered_ = false;

};

class ExperimentalDomain : public Domain {
 public:
  ExperimentalDomain(MessageDispatcher* dispatcher);

  ExperimentalDomain(const ExperimentalDomain&) = delete;
  ExperimentalDomain& operator=(const ExperimentalDomain&) = delete;

  ~ExperimentalDomain();

  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(ExperimentalObserver* observer);
  void RemoveObserver(ExperimentalObserver* observer);

  // Inserts a new rule with the given `ruleText` in a stylesheet with given `styleSheetId`, at the
  // position specified by `location`.
  void AddRule(std::unique_ptr<AddRuleParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddRuleResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddRuleResult>)>());

  // Returns all class names from specified stylesheet.
  void CollectClassNames(std::unique_ptr<CollectClassNamesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CollectClassNamesResult>)>());

  // Creates a new special "via-inspector" stylesheet in the frame with given `frameId`.
  void CreateStyleSheet(std::unique_ptr<CreateStyleSheetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateStyleSheetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateStyleSheetResult>)>());

  // Disables the CSS agent for the given page.
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)>());

  // Enables the CSS agent for the given page. Clients should not assume that the CSS agent has been
  // enabled until the result of this command is received.
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)>());

  // Ensures that the given node will have specified pseudo-classes whenever its style is computed by
  // the browser.
  void ForcePseudoState(std::unique_ptr<ForcePseudoStateParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ForcePseudoStateResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ForcePseudoStateResult>)>());

  void GetBackgroundColors(std::unique_ptr<GetBackgroundColorsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBackgroundColorsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBackgroundColorsResult>)>());

  // Returns the computed style for a DOM node identified by `nodeId`.
  void GetComputedStyleForNode(std::unique_ptr<GetComputedStyleForNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetComputedStyleForNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetComputedStyleForNodeResult>)>());

  // Returns the styles defined inline (explicitly in the "style" attribute and implicitly, using DOM
  // attributes) for a DOM node identified by `nodeId`.
  void GetInlineStylesForNode(std::unique_ptr<GetInlineStylesForNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInlineStylesForNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetInlineStylesForNodeResult>)>());

  // Returns requested styles for a DOM node identified by `nodeId`.
  void GetMatchedStylesForNode(std::unique_ptr<GetMatchedStylesForNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMatchedStylesForNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMatchedStylesForNodeResult>)>());

  // Returns all media queries parsed by the rendering engine.
  void GetMediaQueries(std::unique_ptr<GetMediaQueriesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMediaQueriesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetMediaQueriesResult>)>());

  // Requests information about platform fonts which we used to render child TextNodes in the given
  // node.
  void GetPlatformFontsForNode(std::unique_ptr<GetPlatformFontsForNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPlatformFontsForNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPlatformFontsForNodeResult>)>());

  // Returns the current textual content for a stylesheet.
  void GetStyleSheetText(std::unique_ptr<GetStyleSheetTextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetStyleSheetTextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetStyleSheetTextResult>)>());

  // Returns all layers parsed by the rendering engine for the tree scope of a node.
  // Given a DOM element identified by nodeId, getLayersForNode returns the root
  // layer for the nearest ancestor document or shadow root. The layer root contains
  // the full layer tree for the tree scope and their ordering.
  void GetLayersForNode(std::unique_ptr<GetLayersForNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayersForNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetLayersForNodeResult>)>());

  // Starts tracking the given computed styles for updates. The specified array of properties
  // replaces the one previously specified. Pass empty array to disable tracking.
  // Use takeComputedStyleUpdates to retrieve the list of nodes that had properties modified.
  // The changes to computed style properties are only tracked for nodes pushed to the front-end
  // by the DOM agent. If no changes to the tracked properties occur after the node has been pushed
  // to the front-end, no updates will be issued for the node.
  void TrackComputedStyleUpdates(std::unique_ptr<TrackComputedStyleUpdatesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TrackComputedStyleUpdatesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TrackComputedStyleUpdatesResult>)>());

  // Polls the next batch of computed style updates.
  void TakeComputedStyleUpdates(std::unique_ptr<TakeComputedStyleUpdatesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeComputedStyleUpdatesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeComputedStyleUpdatesResult>)>());

  // Find a rule with the given active property for the given node and set the new value for this
  // property
  void SetEffectivePropertyValueForNode(std::unique_ptr<SetEffectivePropertyValueForNodeParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEffectivePropertyValueForNodeResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEffectivePropertyValueForNodeResult>)>());

  // Modifies the keyframe rule key text.
  void SetKeyframeKey(std::unique_ptr<SetKeyframeKeyParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetKeyframeKeyResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetKeyframeKeyResult>)>());

  // Modifies the rule selector.
  void SetMediaText(std::unique_ptr<SetMediaTextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMediaTextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMediaTextResult>)>());

  // Modifies the expression of a container query.
  void SetContainerQueryText(std::unique_ptr<SetContainerQueryTextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetContainerQueryTextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetContainerQueryTextResult>)>());

  // Modifies the expression of a supports at-rule.
  void SetSupportsText(std::unique_ptr<SetSupportsTextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSupportsTextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetSupportsTextResult>)>());

  // Modifies the expression of a scope at-rule.
  void SetScopeText(std::unique_ptr<SetScopeTextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScopeTextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetScopeTextResult>)>());

  // Modifies the rule selector.
  void SetRuleSelector(std::unique_ptr<SetRuleSelectorParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRuleSelectorResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRuleSelectorResult>)>());

  // Sets the new stylesheet text.
  void SetStyleSheetText(std::unique_ptr<SetStyleSheetTextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleSheetTextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleSheetTextResult>)>());

  // Applies specified style edits one after another in the given order.
  void SetStyleTexts(std::unique_ptr<SetStyleTextsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleTextsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetStyleTextsResult>)>());

  // Enables the selector recording.
  void StartRuleUsageTracking(std::unique_ptr<StartRuleUsageTrackingParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartRuleUsageTrackingResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StartRuleUsageTrackingResult>)>());

  // Stop tracking rule usage and return the list of rules that were used since last call to
  // `takeCoverageDelta` (or since start of coverage instrumentation)
  void StopRuleUsageTracking(std::unique_ptr<StopRuleUsageTrackingParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopRuleUsageTrackingResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<StopRuleUsageTrackingResult>)>());

  // Obtain list of rules that became used since last call to this method (or since start of coverage
  // instrumentation)
  void TakeCoverageDelta(std::unique_ptr<TakeCoverageDeltaParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeCoverageDeltaResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeCoverageDeltaResult>)>());

  // Enables/disables rendering of local CSS fonts (enabled by default).
  void SetLocalFontsEnabled(std::unique_ptr<SetLocalFontsEnabledParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocalFontsEnabledResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetLocalFontsEnabledResult>)>());

};

}  // namespace css
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_CSS_H_
