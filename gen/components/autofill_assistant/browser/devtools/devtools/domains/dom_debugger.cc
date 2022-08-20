// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/dom_debugger.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace dom_debugger {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}


void Domain::GetEventListeners(
    std::unique_ptr<GetEventListenersParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.getEventListeners", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetEventListenersResponse, std::move(callback)));
}

void Domain::GetEventListeners(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)> callback) {
  std::unique_ptr<GetEventListenersParams> params = GetEventListenersParams::Builder()
      .SetObjectId(std::move(object_id))
      .Build();
dispatcher_->SendMessage("DOMDebugger.getEventListeners", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetEventListenersResponse, std::move(callback)));
}
void Domain::RemoveDOMBreakpoint(
    std::unique_ptr<RemoveDOMBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveDOMBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.removeDOMBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveDOMBreakpointResponse, std::move(callback)));
}

void Domain::RemoveDOMBreakpoint(int node_id, ::autofill_assistant::dom_debugger::DOMBreakpointType type, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RemoveDOMBreakpointParams> params = RemoveDOMBreakpointParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetType(std::move(type))
      .Build();
  dispatcher_->SendMessage("DOMDebugger.removeDOMBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveDOMBreakpoint(std::unique_ptr<RemoveDOMBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOMDebugger.removeDOMBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveEventListenerBreakpoint(
    std::unique_ptr<RemoveEventListenerBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveEventListenerBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.removeEventListenerBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveEventListenerBreakpointResponse, std::move(callback)));
}

void Domain::RemoveEventListenerBreakpoint(const std::string& event_name, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RemoveEventListenerBreakpointParams> params = RemoveEventListenerBreakpointParams::Builder()
      .SetEventName(std::move(event_name))
      .Build();
  dispatcher_->SendMessage("DOMDebugger.removeEventListenerBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveEventListenerBreakpoint(std::unique_ptr<RemoveEventListenerBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOMDebugger.removeEventListenerBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::RemoveInstrumentationBreakpoint(
    std::unique_ptr<RemoveInstrumentationBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveInstrumentationBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.removeInstrumentationBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveInstrumentationBreakpointResponse, std::move(callback)));
}
void Domain::RemoveXHRBreakpoint(
    std::unique_ptr<RemoveXHRBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveXHRBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.removeXHRBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveXHRBreakpointResponse, std::move(callback)));
}

void Domain::RemoveXHRBreakpoint(const std::string& url, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RemoveXHRBreakpointParams> params = RemoveXHRBreakpointParams::Builder()
      .SetUrl(std::move(url))
      .Build();
  dispatcher_->SendMessage("DOMDebugger.removeXHRBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RemoveXHRBreakpoint(std::unique_ptr<RemoveXHRBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOMDebugger.removeXHRBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetBreakOnCSPViolation(
    std::unique_ptr<SetBreakOnCSPViolationParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBreakOnCSPViolationResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.setBreakOnCSPViolation", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetBreakOnCSPViolationResponse, std::move(callback)));
}
void Domain::SetDOMBreakpoint(
    std::unique_ptr<SetDOMBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDOMBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.setDOMBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetDOMBreakpointResponse, std::move(callback)));
}

void Domain::SetDOMBreakpoint(int node_id, ::autofill_assistant::dom_debugger::DOMBreakpointType type, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetDOMBreakpointParams> params = SetDOMBreakpointParams::Builder()
      .SetNodeId(std::move(node_id))
      .SetType(std::move(type))
      .Build();
  dispatcher_->SendMessage("DOMDebugger.setDOMBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetDOMBreakpoint(std::unique_ptr<SetDOMBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOMDebugger.setDOMBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetEventListenerBreakpoint(
    std::unique_ptr<SetEventListenerBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEventListenerBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.setEventListenerBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetEventListenerBreakpointResponse, std::move(callback)));
}

void Domain::SetEventListenerBreakpoint(const std::string& event_name, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetEventListenerBreakpointParams> params = SetEventListenerBreakpointParams::Builder()
      .SetEventName(std::move(event_name))
      .Build();
  dispatcher_->SendMessage("DOMDebugger.setEventListenerBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetEventListenerBreakpoint(std::unique_ptr<SetEventListenerBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOMDebugger.setEventListenerBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetInstrumentationBreakpoint(
    std::unique_ptr<SetInstrumentationBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInstrumentationBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.setInstrumentationBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetInstrumentationBreakpointResponse, std::move(callback)));
}
void Domain::SetXHRBreakpoint(
    std::unique_ptr<SetXHRBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetXHRBreakpointResult>)> callback) {
  dispatcher_->SendMessage("DOMDebugger.setXHRBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetXHRBreakpointResponse, std::move(callback)));
}

void Domain::SetXHRBreakpoint(const std::string& url, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetXHRBreakpointParams> params = SetXHRBreakpointParams::Builder()
      .SetUrl(std::move(url))
      .Build();
  dispatcher_->SendMessage("DOMDebugger.setXHRBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetXHRBreakpoint(std::unique_ptr<SetXHRBreakpointParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("DOMDebugger.setXHRBreakpoint", params->Serialize(), optional_node_frame_id, std::move(callback));
}


// static
void Domain::HandleGetEventListenersResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEventListenersResult>)> callback,
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
  std::unique_ptr<GetEventListenersResult> result = GetEventListenersResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveDOMBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveDOMBreakpointResult>)> callback,
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
  std::unique_ptr<RemoveDOMBreakpointResult> result = RemoveDOMBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveEventListenerBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveEventListenerBreakpointResult>)> callback,
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
  std::unique_ptr<RemoveEventListenerBreakpointResult> result = RemoveEventListenerBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveInstrumentationBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveInstrumentationBreakpointResult>)> callback,
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
  std::unique_ptr<RemoveInstrumentationBreakpointResult> result = RemoveInstrumentationBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveXHRBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveXHRBreakpointResult>)> callback,
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
  std::unique_ptr<RemoveXHRBreakpointResult> result = RemoveXHRBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetBreakOnCSPViolationResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetBreakOnCSPViolationResult>)> callback,
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
  std::unique_ptr<SetBreakOnCSPViolationResult> result = SetBreakOnCSPViolationResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetDOMBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetDOMBreakpointResult>)> callback,
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
  std::unique_ptr<SetDOMBreakpointResult> result = SetDOMBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetEventListenerBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetEventListenerBreakpointResult>)> callback,
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
  std::unique_ptr<SetEventListenerBreakpointResult> result = SetEventListenerBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetInstrumentationBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInstrumentationBreakpointResult>)> callback,
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
  std::unique_ptr<SetInstrumentationBreakpointResult> result = SetInstrumentationBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetXHRBreakpointResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetXHRBreakpointResult>)> callback,
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
  std::unique_ptr<SetXHRBreakpointResult> result = SetXHRBreakpointResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

Domain::Domain(MessageDispatcher* dispatcher)
    : dispatcher_(dispatcher) {
}

Domain::~Domain() {}

ExperimentalDomain::ExperimentalDomain(MessageDispatcher* dispatcher)
    : Domain(dispatcher) {}

ExperimentalDomain::~ExperimentalDomain() {}


}  // namespace dom_debugger

} // namespace autofill_assistant
