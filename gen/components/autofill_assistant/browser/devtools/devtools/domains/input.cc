// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/input.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace input {

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
      "Input.dragIntercepted",
      base::BindRepeating(&Domain::DispatchDragInterceptedEvent,
                          base::Unretained(this)));
}

void ExperimentalDomain::DispatchDragEvent(
    std::unique_ptr<DispatchDragEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchDragEventResult>)> callback) {
  dispatcher_->SendMessage("Input.dispatchDragEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDispatchDragEventResponse, std::move(callback)));
}
void Domain::DispatchKeyEvent(
    std::unique_ptr<DispatchKeyEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchKeyEventResult>)> callback) {
  dispatcher_->SendMessage("Input.dispatchKeyEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDispatchKeyEventResponse, std::move(callback)));
}

void Domain::DispatchKeyEvent(::autofill_assistant::input::DispatchKeyEventType type, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DispatchKeyEventParams> params = DispatchKeyEventParams::Builder()
      .SetType(std::move(type))
      .Build();
  dispatcher_->SendMessage("Input.dispatchKeyEvent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DispatchKeyEvent(std::unique_ptr<DispatchKeyEventParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Input.dispatchKeyEvent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::InsertText(
    std::unique_ptr<InsertTextParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<InsertTextResult>)> callback) {
  dispatcher_->SendMessage("Input.insertText", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleInsertTextResponse, std::move(callback)));
}
void ExperimentalDomain::ImeSetComposition(
    std::unique_ptr<ImeSetCompositionParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ImeSetCompositionResult>)> callback) {
  dispatcher_->SendMessage("Input.imeSetComposition", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleImeSetCompositionResponse, std::move(callback)));
}
void Domain::DispatchMouseEvent(
    std::unique_ptr<DispatchMouseEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchMouseEventResult>)> callback) {
  dispatcher_->SendMessage("Input.dispatchMouseEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDispatchMouseEventResponse, std::move(callback)));
}

void Domain::DispatchMouseEvent(::autofill_assistant::input::DispatchMouseEventType type, double x, double y, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DispatchMouseEventParams> params = DispatchMouseEventParams::Builder()
      .SetType(std::move(type))
      .SetX(std::move(x))
      .SetY(std::move(y))
      .Build();
  dispatcher_->SendMessage("Input.dispatchMouseEvent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DispatchMouseEvent(std::unique_ptr<DispatchMouseEventParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Input.dispatchMouseEvent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DispatchTouchEvent(
    std::unique_ptr<DispatchTouchEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchTouchEventResult>)> callback) {
  dispatcher_->SendMessage("Input.dispatchTouchEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDispatchTouchEventResponse, std::move(callback)));
}

void Domain::DispatchTouchEvent(::autofill_assistant::input::DispatchTouchEventType type, std::vector<std::unique_ptr<::autofill_assistant::input::TouchPoint>> touch_points, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DispatchTouchEventParams> params = DispatchTouchEventParams::Builder()
      .SetType(std::move(type))
      .SetTouchPoints(std::move(touch_points))
      .Build();
  dispatcher_->SendMessage("Input.dispatchTouchEvent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DispatchTouchEvent(std::unique_ptr<DispatchTouchEventParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Input.dispatchTouchEvent", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::EmulateTouchFromMouseEvent(
    std::unique_ptr<EmulateTouchFromMouseEventParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EmulateTouchFromMouseEventResult>)> callback) {
  dispatcher_->SendMessage("Input.emulateTouchFromMouseEvent", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEmulateTouchFromMouseEventResponse, std::move(callback)));
}
void Domain::SetIgnoreInputEvents(
    std::unique_ptr<SetIgnoreInputEventsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreInputEventsResult>)> callback) {
  dispatcher_->SendMessage("Input.setIgnoreInputEvents", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetIgnoreInputEventsResponse, std::move(callback)));
}

void Domain::SetIgnoreInputEvents(bool ignore, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetIgnoreInputEventsParams> params = SetIgnoreInputEventsParams::Builder()
      .SetIgnore(std::move(ignore))
      .Build();
  dispatcher_->SendMessage("Input.setIgnoreInputEvents", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetIgnoreInputEvents(std::unique_ptr<SetIgnoreInputEventsParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Input.setIgnoreInputEvents", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetInterceptDrags(
    std::unique_ptr<SetInterceptDragsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInterceptDragsResult>)> callback) {
  dispatcher_->SendMessage("Input.setInterceptDrags", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetInterceptDragsResponse, std::move(callback)));
}
void ExperimentalDomain::SynthesizePinchGesture(
    std::unique_ptr<SynthesizePinchGestureParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SynthesizePinchGestureResult>)> callback) {
  dispatcher_->SendMessage("Input.synthesizePinchGesture", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSynthesizePinchGestureResponse, std::move(callback)));
}
void ExperimentalDomain::SynthesizeScrollGesture(
    std::unique_ptr<SynthesizeScrollGestureParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SynthesizeScrollGestureResult>)> callback) {
  dispatcher_->SendMessage("Input.synthesizeScrollGesture", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSynthesizeScrollGestureResponse, std::move(callback)));
}
void ExperimentalDomain::SynthesizeTapGesture(
    std::unique_ptr<SynthesizeTapGestureParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SynthesizeTapGestureResult>)> callback) {
  dispatcher_->SendMessage("Input.synthesizeTapGesture", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSynthesizeTapGestureResponse, std::move(callback)));
}


// static
void Domain::HandleDispatchDragEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchDragEventResult>)> callback,
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
  std::unique_ptr<DispatchDragEventResult> result = DispatchDragEventResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDispatchKeyEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchKeyEventResult>)> callback,
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
  std::unique_ptr<DispatchKeyEventResult> result = DispatchKeyEventResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleInsertTextResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<InsertTextResult>)> callback,
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
  std::unique_ptr<InsertTextResult> result = InsertTextResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleImeSetCompositionResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ImeSetCompositionResult>)> callback,
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
  std::unique_ptr<ImeSetCompositionResult> result = ImeSetCompositionResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDispatchMouseEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchMouseEventResult>)> callback,
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
  std::unique_ptr<DispatchMouseEventResult> result = DispatchMouseEventResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleDispatchTouchEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DispatchTouchEventResult>)> callback,
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
  std::unique_ptr<DispatchTouchEventResult> result = DispatchTouchEventResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleEmulateTouchFromMouseEventResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EmulateTouchFromMouseEventResult>)> callback,
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
  std::unique_ptr<EmulateTouchFromMouseEventResult> result = EmulateTouchFromMouseEventResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetIgnoreInputEventsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetIgnoreInputEventsResult>)> callback,
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
  std::unique_ptr<SetIgnoreInputEventsResult> result = SetIgnoreInputEventsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetInterceptDragsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetInterceptDragsResult>)> callback,
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
  std::unique_ptr<SetInterceptDragsResult> result = SetInterceptDragsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSynthesizePinchGestureResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SynthesizePinchGestureResult>)> callback,
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
  std::unique_ptr<SynthesizePinchGestureResult> result = SynthesizePinchGestureResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSynthesizeScrollGestureResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SynthesizeScrollGestureResult>)> callback,
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
  std::unique_ptr<SynthesizeScrollGestureResult> result = SynthesizeScrollGestureResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSynthesizeTapGestureResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SynthesizeTapGestureResult>)> callback,
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
  std::unique_ptr<SynthesizeTapGestureResult> result = SynthesizeTapGestureResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchDragInterceptedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<DragInterceptedParams> parsed_params(DragInterceptedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnDragIntercepted(*parsed_params);
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

}  // namespace input

} // namespace autofill_assistant
