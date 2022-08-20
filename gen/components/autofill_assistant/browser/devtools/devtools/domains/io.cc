// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/io.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace io {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}


void Domain::Close(
    std::unique_ptr<CloseParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseResult>)> callback) {
  dispatcher_->SendMessage("IO.close", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCloseResponse, std::move(callback)));
}

void Domain::Close(const std::string& handle, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<CloseParams> params = CloseParams::Builder()
      .SetHandle(std::move(handle))
      .Build();
  dispatcher_->SendMessage("IO.close", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Close(std::unique_ptr<CloseParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("IO.close", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Read(
    std::unique_ptr<ReadParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReadResult>)> callback) {
  dispatcher_->SendMessage("IO.read", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleReadResponse, std::move(callback)));
}

void Domain::Read(const std::string& handle, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReadResult>)> callback) {
  std::unique_ptr<ReadParams> params = ReadParams::Builder()
      .SetHandle(std::move(handle))
      .Build();
dispatcher_->SendMessage("IO.read", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleReadResponse, std::move(callback)));
}
void Domain::ResolveBlob(
    std::unique_ptr<ResolveBlobParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResolveBlobResult>)> callback) {
  dispatcher_->SendMessage("IO.resolveBlob", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResolveBlobResponse, std::move(callback)));
}

void Domain::ResolveBlob(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResolveBlobResult>)> callback) {
  std::unique_ptr<ResolveBlobParams> params = ResolveBlobParams::Builder()
      .SetObjectId(std::move(object_id))
      .Build();
dispatcher_->SendMessage("IO.resolveBlob", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleResolveBlobResponse, std::move(callback)));
}


// static
void Domain::HandleCloseResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CloseResult>)> callback,
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
  std::unique_ptr<CloseResult> result = CloseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleReadResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReadResult>)> callback,
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
  std::unique_ptr<ReadResult> result = ReadResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleResolveBlobResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ResolveBlobResult>)> callback,
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
  std::unique_ptr<ResolveBlobResult> result = ResolveBlobResult::Parse(response, &errors);
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


}  // namespace io

} // namespace autofill_assistant
