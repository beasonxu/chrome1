// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/web_authn.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace web_authn {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}


void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}
void ExperimentalDomain::AddVirtualAuthenticator(
    std::unique_ptr<AddVirtualAuthenticatorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddVirtualAuthenticatorResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.addVirtualAuthenticator", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddVirtualAuthenticatorResponse, std::move(callback)));
}
void ExperimentalDomain::RemoveVirtualAuthenticator(
    std::unique_ptr<RemoveVirtualAuthenticatorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveVirtualAuthenticatorResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.removeVirtualAuthenticator", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveVirtualAuthenticatorResponse, std::move(callback)));
}
void ExperimentalDomain::AddCredential(
    std::unique_ptr<AddCredentialParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddCredentialResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.addCredential", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddCredentialResponse, std::move(callback)));
}
void ExperimentalDomain::GetCredential(
    std::unique_ptr<GetCredentialParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetCredentialResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.getCredential", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetCredentialResponse, std::move(callback)));
}
void ExperimentalDomain::GetCredentials(
    std::unique_ptr<GetCredentialsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetCredentialsResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.getCredentials", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetCredentialsResponse, std::move(callback)));
}
void ExperimentalDomain::RemoveCredential(
    std::unique_ptr<RemoveCredentialParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveCredentialResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.removeCredential", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveCredentialResponse, std::move(callback)));
}
void ExperimentalDomain::ClearCredentials(
    std::unique_ptr<ClearCredentialsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearCredentialsResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.clearCredentials", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleClearCredentialsResponse, std::move(callback)));
}
void ExperimentalDomain::SetUserVerified(
    std::unique_ptr<SetUserVerifiedParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserVerifiedResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.setUserVerified", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetUserVerifiedResponse, std::move(callback)));
}
void ExperimentalDomain::SetAutomaticPresenceSimulation(
    std::unique_ptr<SetAutomaticPresenceSimulationParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomaticPresenceSimulationResult>)> callback) {
  dispatcher_->SendMessage("WebAuthn.setAutomaticPresenceSimulation", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAutomaticPresenceSimulationResponse, std::move(callback)));
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
void Domain::HandleAddVirtualAuthenticatorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddVirtualAuthenticatorResult>)> callback,
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
  std::unique_ptr<AddVirtualAuthenticatorResult> result = AddVirtualAuthenticatorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveVirtualAuthenticatorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveVirtualAuthenticatorResult>)> callback,
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
  std::unique_ptr<RemoveVirtualAuthenticatorResult> result = RemoveVirtualAuthenticatorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAddCredentialResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddCredentialResult>)> callback,
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
  std::unique_ptr<AddCredentialResult> result = AddCredentialResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetCredentialResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetCredentialResult>)> callback,
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
  std::unique_ptr<GetCredentialResult> result = GetCredentialResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetCredentialsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetCredentialsResult>)> callback,
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
  std::unique_ptr<GetCredentialsResult> result = GetCredentialsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveCredentialResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveCredentialResult>)> callback,
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
  std::unique_ptr<RemoveCredentialResult> result = RemoveCredentialResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleClearCredentialsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ClearCredentialsResult>)> callback,
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
  std::unique_ptr<ClearCredentialsResult> result = ClearCredentialsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetUserVerifiedResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetUserVerifiedResult>)> callback,
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
  std::unique_ptr<SetUserVerifiedResult> result = SetUserVerifiedResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAutomaticPresenceSimulationResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAutomaticPresenceSimulationResult>)> callback,
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
  std::unique_ptr<SetAutomaticPresenceSimulationResult> result = SetAutomaticPresenceSimulationResult::Parse(response, &errors);
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


}  // namespace web_authn

} // namespace autofill_assistant
