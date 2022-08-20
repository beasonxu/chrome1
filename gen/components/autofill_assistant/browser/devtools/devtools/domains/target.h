// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TARGET_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TARGET_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_browser.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_target.h"
#include "components/autofill_assistant/browser/devtools/message_dispatcher.h"


namespace autofill_assistant {
namespace target {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // Issued when attached to target because of auto-attach or `attachToTarget` command.
  virtual void OnAttachedToTarget(const AttachedToTargetParams& params) {}
  // Issued when detached from target for any reason (including `detachFromTarget` command). Can be
  // issued multiple times per target if multiple sessions have been attached to it.
  virtual void OnDetachedFromTarget(const DetachedFromTargetParams& params) {}
  // Notifies about a new protocol message received from the session (as reported in
  // `attachedToTarget` event).
  virtual void OnReceivedMessageFromTarget(const ReceivedMessageFromTargetParams& params) {}
  // Issued when a possible inspection target is created.
  virtual void OnTargetCreated(const TargetCreatedParams& params) {}
  // Issued when a target is destroyed.
  virtual void OnTargetDestroyed(const TargetDestroyedParams& params) {}
  // Issued when a target has crashed.
  virtual void OnTargetCrashed(const TargetCrashedParams& params) {}
  // Issued when some information about a target has changed. This only happens between
  // `targetCreated` and `targetDestroyed`.
  virtual void OnTargetInfoChanged(const TargetInfoChangedParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // Experimental: Issued when attached to target because of auto-attach or `attachToTarget` command.
  virtual void OnAttachedToTarget(const AttachedToTargetParams& params) final {}
  // Experimental: Issued when detached from target for any reason (including `detachFromTarget` command). Can be
  // issued multiple times per target if multiple sessions have been attached to it.
  virtual void OnDetachedFromTarget(const DetachedFromTargetParams& params) final {}
  // Notifies about a new protocol message received from the session (as reported in
  // `attachedToTarget` event).
  virtual void OnReceivedMessageFromTarget(const ReceivedMessageFromTargetParams& params) {}
  // Issued when a possible inspection target is created.
  virtual void OnTargetCreated(const TargetCreatedParams& params) {}
  // Issued when a target is destroyed.
  virtual void OnTargetDestroyed(const TargetDestroyedParams& params) {}
  // Issued when a target has crashed.
  virtual void OnTargetCrashed(const TargetCrashedParams& params) {}
  // Issued when some information about a target has changed. This only happens between
  // `targetCreated` and `targetDestroyed`.
  virtual void OnTargetInfoChanged(const TargetInfoChangedParams& params) {}
};

// Supports additional targets discovery and allows to attach to them.
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

  // Activates (focuses) the target.
  void ActivateTarget(std::unique_ptr<ActivateTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ActivateTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ActivateTargetResult>)>());
  void ActivateTarget(const std::string& target_id, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void ActivateTarget(std::unique_ptr<ActivateTargetParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Attaches to the target with given id.
  void AttachToTarget(std::unique_ptr<AttachToTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)>());
  void AttachToTarget(const std::string& target_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)>());

  // Closes the target. If the target is a page that gets closed too.
  void CloseTarget(std::unique_ptr<CloseTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)>());
  void CloseTarget(const std::string& target_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)>());

  // Creates a new page.
  void CreateTarget(std::unique_ptr<CreateTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)>());
  void CreateTarget(const std::string& url, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)>());

  // Detaches session with given id.
  void DetachFromTarget(std::unique_ptr<DetachFromTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DetachFromTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DetachFromTargetResult>)>());
  void DetachFromTarget(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void DetachFromTarget(std::unique_ptr<DetachFromTargetParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Retrieves a list of available targets.
  void GetTargets(std::unique_ptr<GetTargetsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)>());
  void GetTargets(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)>());

  // Sends protocol message over session with given id.
  // Consider using flat mode instead; see commands attachToTarget, setAutoAttach,
  // and crbug.com/991325.
  void SendMessageToTarget(std::unique_ptr<SendMessageToTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SendMessageToTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SendMessageToTargetResult>)>());
  void SendMessageToTarget(const std::string& message, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SendMessageToTarget(std::unique_ptr<SendMessageToTargetParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Controls whether to discover available targets and notify via
  // `targetCreated/targetInfoChanged/targetDestroyed` events.
  void SetDiscoverTargets(std::unique_ptr<SetDiscoverTargetsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDiscoverTargetsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDiscoverTargetsResult>)>());
  void SetDiscoverTargets(bool discover, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetDiscoverTargets(std::unique_ptr<SetDiscoverTargetsParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleActivateTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ActivateTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleAttachToTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleAttachToBrowserTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToBrowserTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCloseTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleExposeDevToolsProtocolResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExposeDevToolsProtocolResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCreateBrowserContextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateBrowserContextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetBrowserContextsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserContextsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCreateTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleDetachFromTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DetachFromTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleDisposeBrowserContextResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisposeBrowserContextResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetTargetInfoResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetInfoResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetTargetsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSendMessageToTargetResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SendMessageToTargetResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetAutoAttachResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoAttachResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleAutoAttachRelatedResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AutoAttachRelatedResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetDiscoverTargetsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDiscoverTargetsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetRemoteLocationsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRemoteLocationsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchAttachedToTargetEvent(const base::Value& params);
  void DispatchDetachedFromTargetEvent(const base::Value& params);
  void DispatchReceivedMessageFromTargetEvent(const base::Value& params);
  void DispatchTargetCreatedEvent(const base::Value& params);
  void DispatchTargetDestroyedEvent(const base::Value& params);
  void DispatchTargetCrashedEvent(const base::Value& params);
  void DispatchTargetInfoChangedEvent(const base::Value& params);

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

  // Attaches to the browser target, only uses flat sessionId mode.
  void AttachToBrowserTarget(std::unique_ptr<AttachToBrowserTargetParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToBrowserTargetResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AttachToBrowserTargetResult>)>());

  // Inject object to the target's main frame that provides a communication
  // channel with browser target.
  // 
  // Injected object will be available as `window[bindingName]`.
  // 
  // The object has the follwing API:
  // - `binding.send(json)` - a method to send messages over the remote debugging protocol
  // - `binding.onmessage = json => handleMessage(json)` - a callback that will be called for the protocol notifications and command responses.
  void ExposeDevToolsProtocol(std::unique_ptr<ExposeDevToolsProtocolParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExposeDevToolsProtocolResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ExposeDevToolsProtocolResult>)>());

  // Creates a new empty BrowserContext. Similar to an incognito profile but you can have more than
  // one.
  void CreateBrowserContext(std::unique_ptr<CreateBrowserContextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateBrowserContextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CreateBrowserContextResult>)>());

  // Returns all browser contexts created with `Target.createBrowserContext` method.
  void GetBrowserContexts(std::unique_ptr<GetBrowserContextsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserContextsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetBrowserContextsResult>)>());

  // Deletes a BrowserContext. All the belonging pages will be closed without calling their
  // beforeunload hooks.
  void DisposeBrowserContext(std::unique_ptr<DisposeBrowserContextParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisposeBrowserContextResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisposeBrowserContextResult>)>());

  // Returns information about a target.
  void GetTargetInfo(std::unique_ptr<GetTargetInfoParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetInfoResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetTargetInfoResult>)>());

  // Controls whether to automatically attach to new targets which are considered to be related to
  // this one. When turned on, attaches to all existing related targets as well. When turned off,
  // automatically detaches from all currently attached targets.
  // This also clears all targets added by `autoAttachRelated` from the list of targets to watch
  // for creation of related targets.
  void SetAutoAttach(std::unique_ptr<SetAutoAttachParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoAttachResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutoAttachResult>)>());

  // Adds the specified target to the list of targets that will be monitored for any related target
  // creation (such as child frames, child workers and new versions of service worker) and reported
  // through `attachedToTarget`. The specified target is also auto-attached.
  // This cancels the effect of any previous `setAutoAttach` and is also cancelled by subsequent
  // `setAutoAttach`. Only available at the Browser target.
  void AutoAttachRelated(std::unique_ptr<AutoAttachRelatedParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AutoAttachRelatedResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AutoAttachRelatedResult>)>());

  // Enables target discovery for the specified locations, when `setDiscoverTargets` was set to
  // `true`.
  void SetRemoteLocations(std::unique_ptr<SetRemoteLocationsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRemoteLocationsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetRemoteLocationsResult>)>());

};

}  // namespace target
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TARGET_H_
