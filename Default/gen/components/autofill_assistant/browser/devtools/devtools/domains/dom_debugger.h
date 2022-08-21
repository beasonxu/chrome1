// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_DOM_DEBUGGER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_DOM_DEBUGGER_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/message_dispatcher.h"


namespace autofill_assistant {
namespace dom_debugger {
class ExperimentalDomain;
class ExperimentalObserver;

// DOM debugging allows setting breakpoints on particular DOM operations and events. JavaScript
// execution will stop on these operations as if there was a regular breakpoint set.
class Domain {
 public:
  Domain(const Domain&) = delete;
  Domain& operator=(const Domain&) = delete;


  // Return the experimental interface for this domain. Note that experimental
  // commands may be changed or removed at any time.
  ExperimentalDomain* GetExperimental();

  // Returns event listeners of the given object.
  void GetEventListeners(std::unique_ptr<GetEventListenersParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)>());
  void GetEventListeners(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)>());

  // Removes DOM breakpoint that was set using `setDOMBreakpoint`.
  void RemoveDOMBreakpoint(std::unique_ptr<RemoveDOMBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveDOMBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveDOMBreakpointResult>)>());
  void RemoveDOMBreakpoint(int node_id, ::autofill_assistant::dom_debugger::DOMBreakpointType type, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void RemoveDOMBreakpoint(std::unique_ptr<RemoveDOMBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Removes breakpoint on particular DOM event.
  void RemoveEventListenerBreakpoint(std::unique_ptr<RemoveEventListenerBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveEventListenerBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveEventListenerBreakpointResult>)>());
  void RemoveEventListenerBreakpoint(const std::string& event_name, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void RemoveEventListenerBreakpoint(std::unique_ptr<RemoveEventListenerBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Removes breakpoint from XMLHttpRequest.
  void RemoveXHRBreakpoint(std::unique_ptr<RemoveXHRBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveXHRBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveXHRBreakpointResult>)>());
  void RemoveXHRBreakpoint(const std::string& url, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void RemoveXHRBreakpoint(std::unique_ptr<RemoveXHRBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Sets breakpoint on particular operation with DOM.
  void SetDOMBreakpoint(std::unique_ptr<SetDOMBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDOMBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDOMBreakpointResult>)>());
  void SetDOMBreakpoint(int node_id, ::autofill_assistant::dom_debugger::DOMBreakpointType type, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetDOMBreakpoint(std::unique_ptr<SetDOMBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Sets breakpoint on particular DOM event.
  void SetEventListenerBreakpoint(std::unique_ptr<SetEventListenerBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEventListenerBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEventListenerBreakpointResult>)>());
  void SetEventListenerBreakpoint(const std::string& event_name, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetEventListenerBreakpoint(std::unique_ptr<SetEventListenerBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Sets breakpoint on XMLHttpRequest.
  void SetXHRBreakpoint(std::unique_ptr<SetXHRBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetXHRBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetXHRBreakpointResult>)>());
  void SetXHRBreakpoint(const std::string& url, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetXHRBreakpoint(std::unique_ptr<SetXHRBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleGetEventListenersResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRemoveDOMBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveDOMBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRemoveEventListenerBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveEventListenerBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRemoveInstrumentationBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveInstrumentationBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRemoveXHRBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveXHRBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetBreakOnCSPViolationResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBreakOnCSPViolationResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetDOMBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDOMBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetEventListenerBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEventListenerBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetInstrumentationBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInstrumentationBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetXHRBreakpointResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetXHRBreakpointResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);


  MessageDispatcher* dispatcher_;  // Not owned.

 private:
};

class ExperimentalDomain : public Domain {
 public:
  ExperimentalDomain(MessageDispatcher* dispatcher);

  ExperimentalDomain(const ExperimentalDomain&) = delete;
  ExperimentalDomain& operator=(const ExperimentalDomain&) = delete;

  ~ExperimentalDomain();


  // Removes breakpoint on particular native event.
  void RemoveInstrumentationBreakpoint(std::unique_ptr<RemoveInstrumentationBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveInstrumentationBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveInstrumentationBreakpointResult>)>());

  // Sets breakpoint on particular CSP violations.
  void SetBreakOnCSPViolation(std::unique_ptr<SetBreakOnCSPViolationParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBreakOnCSPViolationResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBreakOnCSPViolationResult>)>());

  // Sets breakpoint on particular native event.
  void SetInstrumentationBreakpoint(std::unique_ptr<SetInstrumentationBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInstrumentationBreakpointResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInstrumentationBreakpointResult>)>());

};

}  // namespace dom_debugger
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_DOM_DEBUGGER_H_
