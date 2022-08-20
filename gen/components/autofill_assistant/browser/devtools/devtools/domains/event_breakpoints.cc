// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/event_breakpoints.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace event_breakpoints {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}


void ExperimentalDomain::SetInstrumentationBreakpoint(
    std::unique_ptr<SetInstrumentationBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInstrumentationBreakpointResult>)> callback) {
  dispatcher_->SendMessage("EventBreakpoints.setInstrumentationBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetInstrumentationBreakpointResponse, std::move(callback)));
}
void ExperimentalDomain::RemoveInstrumentationBreakpoint(
    std::unique_ptr<RemoveInstrumentationBreakpointParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveInstrumentationBreakpointResult>)> callback) {
  dispatcher_->SendMessage("EventBreakpoints.removeInstrumentationBreakpoint", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveInstrumentationBreakpointResponse, std::move(callback)));
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

Domain::Domain(MessageDispatcher* dispatcher)
    : dispatcher_(dispatcher) {
}

Domain::~Domain() {}

ExperimentalDomain::ExperimentalDomain(MessageDispatcher* dispatcher)
    : Domain(dispatcher) {}

ExperimentalDomain::~ExperimentalDomain() {}


}  // namespace event_breakpoints

} // namespace autofill_assistant
