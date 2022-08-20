// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/dom_snapshot.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace dom_snapshot {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}


void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("DOMSnapshot.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}
void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("DOMSnapshot.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::GetSnapshot(
    std::unique_ptr<GetSnapshotParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSnapshotResult>)> callback) {
  dispatcher_->SendMessage("DOMSnapshot.getSnapshot", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetSnapshotResponse, std::move(callback)));
}
void ExperimentalDomain::CaptureSnapshot(
    std::unique_ptr<CaptureSnapshotParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureSnapshotResult>)> callback) {
  dispatcher_->SendMessage("DOMSnapshot.captureSnapshot", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCaptureSnapshotResponse, std::move(callback)));
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
void Domain::HandleGetSnapshotResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetSnapshotResult>)> callback,
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
  std::unique_ptr<GetSnapshotResult> result = GetSnapshotResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCaptureSnapshotResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CaptureSnapshotResult>)> callback,
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
  std::unique_ptr<CaptureSnapshotResult> result = CaptureSnapshotResult::Parse(response, &errors);
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


}  // namespace dom_snapshot

} // namespace autofill_assistant
