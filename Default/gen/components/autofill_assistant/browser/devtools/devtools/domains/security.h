// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_SECURITY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_SECURITY_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
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
namespace security {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // There is a certificate error. If overriding certificate errors is enabled, then it should be
  // handled with the `handleCertificateError` command. Note: this event does not fire if the
  // certificate error has been allowed internally. Only one client per target should override
  // certificate errors at the same time.
  virtual void OnCertificateError(const CertificateErrorParams& params) {}
  // The security state of the page changed.
  virtual void OnVisibleSecurityStateChanged(const VisibleSecurityStateChangedParams& params) {}
  // The security state of the page changed. No longer being sent.
  virtual void OnSecurityStateChanged(const SecurityStateChangedParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // There is a certificate error. If overriding certificate errors is enabled, then it should be
  // handled with the `handleCertificateError` command. Note: this event does not fire if the
  // certificate error has been allowed internally. Only one client per target should override
  // certificate errors at the same time.
  virtual void OnCertificateError(const CertificateErrorParams& params) {}
  // Experimental: The security state of the page changed.
  virtual void OnVisibleSecurityStateChanged(const VisibleSecurityStateChangedParams& params) final {}
  // The security state of the page changed. No longer being sent.
  virtual void OnSecurityStateChanged(const SecurityStateChangedParams& params) {}
};

// Security
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

  // Disables tracking security state changes.
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)>());
  void Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Enables tracking security state changes.
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)>());
  void Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Handles a certificate error that fired a certificateError event.
  void HandleCertificateError(std::unique_ptr<HandleCertificateErrorParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleCertificateErrorResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleCertificateErrorResult>)>());
  void HandleCertificateError(int event_id, ::autofill_assistant::security::CertificateErrorAction action, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void HandleCertificateError(std::unique_ptr<HandleCertificateErrorParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Enable/disable overriding certificate errors. If enabled, all certificate error events need to
  // be handled by the DevTools client and should be answered with `handleCertificateError` commands.
  void SetOverrideCertificateErrors(std::unique_ptr<SetOverrideCertificateErrorsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOverrideCertificateErrorsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOverrideCertificateErrorsResult>)>());
  void SetOverrideCertificateErrors(bool override, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetOverrideCertificateErrors(std::unique_ptr<SetOverrideCertificateErrorsParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleDisableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleEnableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetIgnoreCertificateErrorsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreCertificateErrorsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleHandleCertificateErrorResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<HandleCertificateErrorResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetOverrideCertificateErrorsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetOverrideCertificateErrorsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchCertificateErrorEvent(const base::Value& params);
  void DispatchVisibleSecurityStateChangedEvent(const base::Value& params);
  void DispatchSecurityStateChangedEvent(const base::Value& params);

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

  // Enable/disable whether all certificate errors should be ignored.
  void SetIgnoreCertificateErrors(std::unique_ptr<SetIgnoreCertificateErrorsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreCertificateErrorsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreCertificateErrorsResult>)>());

};

}  // namespace security
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_SECURITY_H_
