// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/security.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace security {

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
      "Security.certificateError",
      base::BindRepeating(&Domain::DispatchCertificateErrorEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Security.visibleSecurityStateChanged",
      base::BindRepeating(&Domain::DispatchVisibleSecurityStateChangedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Security.securityStateChanged",
      base::BindRepeating(&Domain::DispatchSecurityStateChangedEvent,
                          base::Unretained(this)));
}

void Domain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Security.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Security.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Security.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Security.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Security.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Security.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetIgnoreCertificateErrors(
    std::unique_ptr<SetIgnoreCertificateErrorsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreCertificateErrorsResult>)> callback) {
  dispatcher_->SendMessage("Security.setIgnoreCertificateErrors", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetIgnoreCertificateErrorsResponse, std::move(callback)));
}
void Domain::HandleCertificateError(
    std::unique_ptr<HandleCertificateErrorParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleCertificateErrorResult>)> callback) {
  dispatcher_->SendMessage("Security.handleCertificateError", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleHandleCertificateErrorResponse, std::move(callback)));
}

void Domain::HandleCertificateError(int event_id, ::autofill_assistant::security::CertificateErrorAction action, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<HandleCertificateErrorParams> params = HandleCertificateErrorParams::Builder()
      .SetEventId(std::move(event_id))
      .SetAction(std::move(action))
      .Build();
  dispatcher_->SendMessage("Security.handleCertificateError", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::HandleCertificateError(std::unique_ptr<HandleCertificateErrorParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Security.handleCertificateError", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetOverrideCertificateErrors(
    std::unique_ptr<SetOverrideCertificateErrorsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOverrideCertificateErrorsResult>)> callback) {
  dispatcher_->SendMessage("Security.setOverrideCertificateErrors", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetOverrideCertificateErrorsResponse, std::move(callback)));
}

void Domain::SetOverrideCertificateErrors(bool override, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetOverrideCertificateErrorsParams> params = SetOverrideCertificateErrorsParams::Builder()
      .SetOverride(std::move(override))
      .Build();
  dispatcher_->SendMessage("Security.setOverrideCertificateErrors", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetOverrideCertificateErrors(std::unique_ptr<SetOverrideCertificateErrorsParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Security.setOverrideCertificateErrors", params->Serialize(), optional_node_frame_id, std::move(callback));
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
void Domain::HandleSetIgnoreCertificateErrorsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreCertificateErrorsResult>)> callback,
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
  std::unique_ptr<SetIgnoreCertificateErrorsResult> result = SetIgnoreCertificateErrorsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleHandleCertificateErrorResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleCertificateErrorResult>)> callback,
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
  std::unique_ptr<HandleCertificateErrorResult> result = HandleCertificateErrorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetOverrideCertificateErrorsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOverrideCertificateErrorsResult>)> callback,
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
  std::unique_ptr<SetOverrideCertificateErrorsResult> result = SetOverrideCertificateErrorsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchCertificateErrorEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<CertificateErrorParams> parsed_params(CertificateErrorParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnCertificateError(*parsed_params);
  }
}

void Domain::DispatchVisibleSecurityStateChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<VisibleSecurityStateChangedParams> parsed_params(VisibleSecurityStateChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnVisibleSecurityStateChanged(*parsed_params);
  }
}

void Domain::DispatchSecurityStateChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<SecurityStateChangedParams> parsed_params(SecurityStateChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnSecurityStateChanged(*parsed_params);
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

}  // namespace security

} // namespace autofill_assistant
