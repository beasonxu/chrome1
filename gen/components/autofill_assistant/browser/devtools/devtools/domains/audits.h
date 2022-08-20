// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_AUDITS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_AUDITS_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_audits.h"
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
namespace audits {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  virtual void OnIssueAdded(const IssueAddedParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  virtual void OnIssueAdded(const IssueAddedParams& params) final {}
};

// Audits domain allows investigation of page violations and possible improvements.
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

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleGetEncodedResponseResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEncodedResponseResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleDisableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleEnableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCheckContrastResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CheckContrastResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchIssueAddedEvent(const base::Value& params);

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

  // Returns the response body and size if it were re-encoded with the specified settings. Only
  // applies to images.
  void GetEncodedResponse(std::unique_ptr<GetEncodedResponseParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEncodedResponseResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetEncodedResponseResult>)>());

  // Disables issues domain, prevents further issues from being reported to the client.
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)>());

  // Enables issues domain, sends the issues collected so far to the client by means of the
  // `issueAdded` event.
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)>());

  // Runs the contrast check for the target page. Found issues are reported
  // using Audits.issueAdded event.
  void CheckContrast(std::unique_ptr<CheckContrastParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CheckContrastResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CheckContrastResult>)>());

};

}  // namespace audits
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_AUDITS_H_
