// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/fetch.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace fetch {

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
      "Fetch.requestPaused",
      base::BindRepeating(&Domain::DispatchRequestPausedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Fetch.authRequired",
      base::BindRepeating(&Domain::DispatchAuthRequiredEvent,
                          base::Unretained(this)));
}

void Domain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Fetch.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Fetch.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Fetch.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Fetch.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Fetch.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Fetch.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::FailRequest(
    std::unique_ptr<FailRequestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<FailRequestResult>)> callback) {
  dispatcher_->SendMessage("Fetch.failRequest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleFailRequestResponse, std::move(callback)));
}

void Domain::FailRequest(const std::string& request_id, ::autofill_assistant::network::ErrorReason error_reason, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<FailRequestParams> params = FailRequestParams::Builder()
      .SetRequestId(std::move(request_id))
      .SetErrorReason(std::move(error_reason))
      .Build();
  dispatcher_->SendMessage("Fetch.failRequest", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::FailRequest(std::unique_ptr<FailRequestParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Fetch.failRequest", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::FulfillRequest(
    std::unique_ptr<FulfillRequestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<FulfillRequestResult>)> callback) {
  dispatcher_->SendMessage("Fetch.fulfillRequest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleFulfillRequestResponse, std::move(callback)));
}

void Domain::FulfillRequest(const std::string& request_id, int response_code, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<FulfillRequestParams> params = FulfillRequestParams::Builder()
      .SetRequestId(std::move(request_id))
      .SetResponseCode(std::move(response_code))
      .Build();
  dispatcher_->SendMessage("Fetch.fulfillRequest", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::FulfillRequest(std::unique_ptr<FulfillRequestParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Fetch.fulfillRequest", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ContinueRequest(
    std::unique_ptr<ContinueRequestParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ContinueRequestResult>)> callback) {
  dispatcher_->SendMessage("Fetch.continueRequest", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleContinueRequestResponse, std::move(callback)));
}

void Domain::ContinueRequest(const std::string& request_id, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ContinueRequestParams> params = ContinueRequestParams::Builder()
      .SetRequestId(std::move(request_id))
      .Build();
  dispatcher_->SendMessage("Fetch.continueRequest", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ContinueRequest(std::unique_ptr<ContinueRequestParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Fetch.continueRequest", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ContinueWithAuth(
    std::unique_ptr<ContinueWithAuthParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ContinueWithAuthResult>)> callback) {
  dispatcher_->SendMessage("Fetch.continueWithAuth", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleContinueWithAuthResponse, std::move(callback)));
}

void Domain::ContinueWithAuth(const std::string& request_id, std::unique_ptr<::autofill_assistant::fetch::AuthChallengeResponse> auth_challenge_response, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ContinueWithAuthParams> params = ContinueWithAuthParams::Builder()
      .SetRequestId(std::move(request_id))
      .SetAuthChallengeResponse(std::move(auth_challenge_response))
      .Build();
  dispatcher_->SendMessage("Fetch.continueWithAuth", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ContinueWithAuth(std::unique_ptr<ContinueWithAuthParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Fetch.continueWithAuth", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::ContinueResponse(
    std::unique_ptr<ContinueResponseParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ContinueResponseResult>)> callback) {
  dispatcher_->SendMessage("Fetch.continueResponse", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleContinueResponseResponse, std::move(callback)));
}
void Domain::GetResponseBody(
    std::unique_ptr<GetResponseBodyParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResponseBodyResult>)> callback) {
  dispatcher_->SendMessage("Fetch.getResponseBody", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetResponseBodyResponse, std::move(callback)));
}

void Domain::GetResponseBody(const std::string& request_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResponseBodyResult>)> callback) {
  std::unique_ptr<GetResponseBodyParams> params = GetResponseBodyParams::Builder()
      .SetRequestId(std::move(request_id))
      .Build();
dispatcher_->SendMessage("Fetch.getResponseBody", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetResponseBodyResponse, std::move(callback)));
}
void Domain::TakeResponseBodyAsStream(
    std::unique_ptr<TakeResponseBodyAsStreamParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeResponseBodyAsStreamResult>)> callback) {
  dispatcher_->SendMessage("Fetch.takeResponseBodyAsStream", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakeResponseBodyAsStreamResponse, std::move(callback)));
}

void Domain::TakeResponseBodyAsStream(const std::string& request_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeResponseBodyAsStreamResult>)> callback) {
  std::unique_ptr<TakeResponseBodyAsStreamParams> params = TakeResponseBodyAsStreamParams::Builder()
      .SetRequestId(std::move(request_id))
      .Build();
dispatcher_->SendMessage("Fetch.takeResponseBodyAsStream", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTakeResponseBodyAsStreamResponse, std::move(callback)));
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
void Domain::HandleFailRequestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<FailRequestResult>)> callback,
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
  std::unique_ptr<FailRequestResult> result = FailRequestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleFulfillRequestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<FulfillRequestResult>)> callback,
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
  std::unique_ptr<FulfillRequestResult> result = FulfillRequestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleContinueRequestResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ContinueRequestResult>)> callback,
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
  std::unique_ptr<ContinueRequestResult> result = ContinueRequestResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleContinueWithAuthResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ContinueWithAuthResult>)> callback,
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
  std::unique_ptr<ContinueWithAuthResult> result = ContinueWithAuthResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleContinueResponseResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ContinueResponseResult>)> callback,
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
  std::unique_ptr<ContinueResponseResult> result = ContinueResponseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetResponseBodyResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetResponseBodyResult>)> callback,
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
  std::unique_ptr<GetResponseBodyResult> result = GetResponseBodyResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTakeResponseBodyAsStreamResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TakeResponseBodyAsStreamResult>)> callback,
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
  std::unique_ptr<TakeResponseBodyAsStreamResult> result = TakeResponseBodyAsStreamResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchRequestPausedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<RequestPausedParams> parsed_params(RequestPausedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnRequestPaused(*parsed_params);
  }
}

void Domain::DispatchAuthRequiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<AuthRequiredParams> parsed_params(AuthRequiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnAuthRequired(*parsed_params);
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

}  // namespace fetch

} // namespace autofill_assistant
