// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/media.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace media {

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
      "Media.playerPropertiesChanged",
      base::BindRepeating(&Domain::DispatchPlayerPropertiesChangedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Media.playerEventsAdded",
      base::BindRepeating(&Domain::DispatchPlayerEventsAddedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Media.playerMessagesLogged",
      base::BindRepeating(&Domain::DispatchPlayerMessagesLoggedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Media.playerErrorsRaised",
      base::BindRepeating(&Domain::DispatchPlayerErrorsRaisedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Media.playersCreated",
      base::BindRepeating(&Domain::DispatchPlayersCreatedEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Media.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}
void ExperimentalDomain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Media.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
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

void Domain::DispatchPlayerPropertiesChangedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PlayerPropertiesChangedParams> parsed_params(PlayerPropertiesChangedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPlayerPropertiesChanged(*parsed_params);
  }
}

void Domain::DispatchPlayerEventsAddedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PlayerEventsAddedParams> parsed_params(PlayerEventsAddedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPlayerEventsAdded(*parsed_params);
  }
}

void Domain::DispatchPlayerMessagesLoggedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PlayerMessagesLoggedParams> parsed_params(PlayerMessagesLoggedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPlayerMessagesLogged(*parsed_params);
  }
}

void Domain::DispatchPlayerErrorsRaisedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PlayerErrorsRaisedParams> parsed_params(PlayerErrorsRaisedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPlayerErrorsRaised(*parsed_params);
  }
}

void Domain::DispatchPlayersCreatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<PlayersCreatedParams> parsed_params(PlayersCreatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnPlayersCreated(*parsed_params);
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

}  // namespace media

} // namespace autofill_assistant
