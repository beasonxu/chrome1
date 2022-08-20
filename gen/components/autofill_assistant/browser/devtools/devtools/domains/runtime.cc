// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/runtime.h"

#include "base/bind.h"
#include "components/autofill_assistant/browser/devtools/error_reporter.h"

namespace autofill_assistant {

namespace runtime {

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
      "Runtime.bindingCalled",
      base::BindRepeating(&Domain::DispatchBindingCalledEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.consoleAPICalled",
      base::BindRepeating(&Domain::DispatchConsoleAPICalledEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.exceptionRevoked",
      base::BindRepeating(&Domain::DispatchExceptionRevokedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.exceptionThrown",
      base::BindRepeating(&Domain::DispatchExceptionThrownEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.executionContextCreated",
      base::BindRepeating(&Domain::DispatchExecutionContextCreatedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.executionContextDestroyed",
      base::BindRepeating(&Domain::DispatchExecutionContextDestroyedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.executionContextsCleared",
      base::BindRepeating(&Domain::DispatchExecutionContextsClearedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Runtime.inspectRequested",
      base::BindRepeating(&Domain::DispatchInspectRequestedEvent,
                          base::Unretained(this)));
}

void Domain::AwaitPromise(
    std::unique_ptr<AwaitPromiseParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)> callback) {
  dispatcher_->SendMessage("Runtime.awaitPromise", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAwaitPromiseResponse, std::move(callback)));
}

void Domain::AwaitPromise(const std::string& promise_object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)> callback) {
  std::unique_ptr<AwaitPromiseParams> params = AwaitPromiseParams::Builder()
      .SetPromiseObjectId(std::move(promise_object_id))
      .Build();
dispatcher_->SendMessage("Runtime.awaitPromise", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAwaitPromiseResponse, std::move(callback)));
}
void Domain::CallFunctionOn(
    std::unique_ptr<CallFunctionOnParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)> callback) {
  dispatcher_->SendMessage("Runtime.callFunctionOn", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCallFunctionOnResponse, std::move(callback)));
}

void Domain::CallFunctionOn(const std::string& function_declaration, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)> callback) {
  std::unique_ptr<CallFunctionOnParams> params = CallFunctionOnParams::Builder()
      .SetFunctionDeclaration(std::move(function_declaration))
      .Build();
dispatcher_->SendMessage("Runtime.callFunctionOn", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCallFunctionOnResponse, std::move(callback)));
}
void Domain::CompileScript(
    std::unique_ptr<CompileScriptParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)> callback) {
  dispatcher_->SendMessage("Runtime.compileScript", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCompileScriptResponse, std::move(callback)));
}

void Domain::CompileScript(const std::string& expression, const std::string& sourceurl, bool persist_script, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)> callback) {
  std::unique_ptr<CompileScriptParams> params = CompileScriptParams::Builder()
      .SetExpression(std::move(expression))
      .SetSourceURL(std::move(sourceurl))
      .SetPersistScript(std::move(persist_script))
      .Build();
dispatcher_->SendMessage("Runtime.compileScript", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleCompileScriptResponse, std::move(callback)));
}
void Domain::Disable(
    std::unique_ptr<DisableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback) {
  dispatcher_->SendMessage("Runtime.disable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDisableResponse, std::move(callback)));
}

void Domain::Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DisableParams> params = DisableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Runtime.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.disable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DiscardConsoleEntries(
    std::unique_ptr<DiscardConsoleEntriesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardConsoleEntriesResult>)> callback) {
  dispatcher_->SendMessage("Runtime.discardConsoleEntries", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleDiscardConsoleEntriesResponse, std::move(callback)));
}

void Domain::DiscardConsoleEntries(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<DiscardConsoleEntriesParams> params = DiscardConsoleEntriesParams::Builder()
      .Build();
  dispatcher_->SendMessage("Runtime.discardConsoleEntries", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::DiscardConsoleEntries(std::unique_ptr<DiscardConsoleEntriesParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.discardConsoleEntries", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(
    std::unique_ptr<EnableParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback) {
  dispatcher_->SendMessage("Runtime.enable", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEnableResponse, std::move(callback)));
}

void Domain::Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<EnableParams> params = EnableParams::Builder()
      .Build();
  dispatcher_->SendMessage("Runtime.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.enable", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::Evaluate(
    std::unique_ptr<EvaluateParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)> callback) {
  dispatcher_->SendMessage("Runtime.evaluate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEvaluateResponse, std::move(callback)));
}

void Domain::Evaluate(const std::string& expression, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)> callback) {
  std::unique_ptr<EvaluateParams> params = EvaluateParams::Builder()
      .SetExpression(std::move(expression))
      .Build();
dispatcher_->SendMessage("Runtime.evaluate", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleEvaluateResponse, std::move(callback)));
}
void ExperimentalDomain::GetIsolateId(
    std::unique_ptr<GetIsolateIdParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetIsolateIdResult>)> callback) {
  dispatcher_->SendMessage("Runtime.getIsolateId", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetIsolateIdResponse, std::move(callback)));
}
void ExperimentalDomain::GetHeapUsage(
    std::unique_ptr<GetHeapUsageParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapUsageResult>)> callback) {
  dispatcher_->SendMessage("Runtime.getHeapUsage", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetHeapUsageResponse, std::move(callback)));
}
void Domain::GetProperties(
    std::unique_ptr<GetPropertiesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)> callback) {
  dispatcher_->SendMessage("Runtime.getProperties", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetPropertiesResponse, std::move(callback)));
}

void Domain::GetProperties(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)> callback) {
  std::unique_ptr<GetPropertiesParams> params = GetPropertiesParams::Builder()
      .SetObjectId(std::move(object_id))
      .Build();
dispatcher_->SendMessage("Runtime.getProperties", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetPropertiesResponse, std::move(callback)));
}
void Domain::GlobalLexicalScopeNames(
    std::unique_ptr<GlobalLexicalScopeNamesParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)> callback) {
  dispatcher_->SendMessage("Runtime.globalLexicalScopeNames", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGlobalLexicalScopeNamesResponse, std::move(callback)));
}

void Domain::GlobalLexicalScopeNames(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)> callback) {
  std::unique_ptr<GlobalLexicalScopeNamesParams> params = GlobalLexicalScopeNamesParams::Builder()
      .Build();
dispatcher_->SendMessage("Runtime.globalLexicalScopeNames", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGlobalLexicalScopeNamesResponse, std::move(callback)));
}
void Domain::QueryObjects(
    std::unique_ptr<QueryObjectsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)> callback) {
  dispatcher_->SendMessage("Runtime.queryObjects", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleQueryObjectsResponse, std::move(callback)));
}

void Domain::QueryObjects(const std::string& prototype_object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)> callback) {
  std::unique_ptr<QueryObjectsParams> params = QueryObjectsParams::Builder()
      .SetPrototypeObjectId(std::move(prototype_object_id))
      .Build();
dispatcher_->SendMessage("Runtime.queryObjects", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleQueryObjectsResponse, std::move(callback)));
}
void Domain::ReleaseObject(
    std::unique_ptr<ReleaseObjectParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectResult>)> callback) {
  dispatcher_->SendMessage("Runtime.releaseObject", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleReleaseObjectResponse, std::move(callback)));
}

void Domain::ReleaseObject(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ReleaseObjectParams> params = ReleaseObjectParams::Builder()
      .SetObjectId(std::move(object_id))
      .Build();
  dispatcher_->SendMessage("Runtime.releaseObject", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ReleaseObject(std::unique_ptr<ReleaseObjectParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.releaseObject", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ReleaseObjectGroup(
    std::unique_ptr<ReleaseObjectGroupParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectGroupResult>)> callback) {
  dispatcher_->SendMessage("Runtime.releaseObjectGroup", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleReleaseObjectGroupResponse, std::move(callback)));
}

void Domain::ReleaseObjectGroup(const std::string& object_group, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<ReleaseObjectGroupParams> params = ReleaseObjectGroupParams::Builder()
      .SetObjectGroup(std::move(object_group))
      .Build();
  dispatcher_->SendMessage("Runtime.releaseObjectGroup", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::ReleaseObjectGroup(std::unique_ptr<ReleaseObjectGroupParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.releaseObjectGroup", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RunIfWaitingForDebugger(
    std::unique_ptr<RunIfWaitingForDebuggerParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunIfWaitingForDebuggerResult>)> callback) {
  dispatcher_->SendMessage("Runtime.runIfWaitingForDebugger", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRunIfWaitingForDebuggerResponse, std::move(callback)));
}

void Domain::RunIfWaitingForDebugger(const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<RunIfWaitingForDebuggerParams> params = RunIfWaitingForDebuggerParams::Builder()
      .Build();
  dispatcher_->SendMessage("Runtime.runIfWaitingForDebugger", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RunIfWaitingForDebugger(std::unique_ptr<RunIfWaitingForDebuggerParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.runIfWaitingForDebugger", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::RunScript(
    std::unique_ptr<RunScriptParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)> callback) {
  dispatcher_->SendMessage("Runtime.runScript", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRunScriptResponse, std::move(callback)));
}

void Domain::RunScript(const std::string& script_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)> callback) {
  std::unique_ptr<RunScriptParams> params = RunScriptParams::Builder()
      .SetScriptId(std::move(script_id))
      .Build();
dispatcher_->SendMessage("Runtime.runScript", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRunScriptResponse, std::move(callback)));
}
void Domain::SetAsyncCallStackDepth(
    std::unique_ptr<SetAsyncCallStackDepthParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAsyncCallStackDepthResult>)> callback) {
  dispatcher_->SendMessage("Runtime.setAsyncCallStackDepth", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetAsyncCallStackDepthResponse, std::move(callback)));
}

void Domain::SetAsyncCallStackDepth(int max_depth, const std::string& optional_node_frame_id,
base::OnceClosure callback) {
  std::unique_ptr<SetAsyncCallStackDepthParams> params = SetAsyncCallStackDepthParams::Builder()
      .SetMaxDepth(std::move(max_depth))
      .Build();
  dispatcher_->SendMessage("Runtime.setAsyncCallStackDepth", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void Domain::SetAsyncCallStackDepth(std::unique_ptr<SetAsyncCallStackDepthParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback) {
  dispatcher_->SendMessage("Runtime.setAsyncCallStackDepth", params->Serialize(), optional_node_frame_id, std::move(callback));
}
void ExperimentalDomain::SetCustomObjectFormatterEnabled(
    std::unique_ptr<SetCustomObjectFormatterEnabledParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCustomObjectFormatterEnabledResult>)> callback) {
  dispatcher_->SendMessage("Runtime.setCustomObjectFormatterEnabled", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetCustomObjectFormatterEnabledResponse, std::move(callback)));
}
void ExperimentalDomain::SetMaxCallStackSizeToCapture(
    std::unique_ptr<SetMaxCallStackSizeToCaptureParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMaxCallStackSizeToCaptureResult>)> callback) {
  dispatcher_->SendMessage("Runtime.setMaxCallStackSizeToCapture", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleSetMaxCallStackSizeToCaptureResponse, std::move(callback)));
}
void ExperimentalDomain::TerminateExecution(
    std::unique_ptr<TerminateExecutionParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TerminateExecutionResult>)> callback) {
  dispatcher_->SendMessage("Runtime.terminateExecution", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleTerminateExecutionResponse, std::move(callback)));
}
void ExperimentalDomain::AddBinding(
    std::unique_ptr<AddBindingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddBindingResult>)> callback) {
  dispatcher_->SendMessage("Runtime.addBinding", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleAddBindingResponse, std::move(callback)));
}
void ExperimentalDomain::RemoveBinding(
    std::unique_ptr<RemoveBindingParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveBindingResult>)> callback) {
  dispatcher_->SendMessage("Runtime.removeBinding", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleRemoveBindingResponse, std::move(callback)));
}
void ExperimentalDomain::GetExceptionDetails(
    std::unique_ptr<GetExceptionDetailsParams> params,
    const std::string& optional_node_frame_id,
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetExceptionDetailsResult>)> callback) {
  dispatcher_->SendMessage("Runtime.getExceptionDetails", params->Serialize(), optional_node_frame_id, base::BindOnce(&Domain::HandleGetExceptionDetailsResponse, std::move(callback)));
}


// static
void Domain::HandleAwaitPromiseResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)> callback,
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
  std::unique_ptr<AwaitPromiseResult> result = AwaitPromiseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCallFunctionOnResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)> callback,
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
  std::unique_ptr<CallFunctionOnResult> result = CallFunctionOnResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleCompileScriptResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)> callback,
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
  std::unique_ptr<CompileScriptResult> result = CompileScriptResult::Parse(response, &errors);
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
void Domain::HandleDiscardConsoleEntriesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardConsoleEntriesResult>)> callback,
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
  std::unique_ptr<DiscardConsoleEntriesResult> result = DiscardConsoleEntriesResult::Parse(response, &errors);
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
void Domain::HandleEvaluateResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)> callback,
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
  std::unique_ptr<EvaluateResult> result = EvaluateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetIsolateIdResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetIsolateIdResult>)> callback,
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
  std::unique_ptr<GetIsolateIdResult> result = GetIsolateIdResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetHeapUsageResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapUsageResult>)> callback,
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
  std::unique_ptr<GetHeapUsageResult> result = GetHeapUsageResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetPropertiesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)> callback,
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
  std::unique_ptr<GetPropertiesResult> result = GetPropertiesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGlobalLexicalScopeNamesResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)> callback,
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
  std::unique_ptr<GlobalLexicalScopeNamesResult> result = GlobalLexicalScopeNamesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleQueryObjectsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)> callback,
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
  std::unique_ptr<QueryObjectsResult> result = QueryObjectsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleReleaseObjectResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectResult>)> callback,
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
  std::unique_ptr<ReleaseObjectResult> result = ReleaseObjectResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleReleaseObjectGroupResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectGroupResult>)> callback,
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
  std::unique_ptr<ReleaseObjectGroupResult> result = ReleaseObjectGroupResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRunIfWaitingForDebuggerResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunIfWaitingForDebuggerResult>)> callback,
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
  std::unique_ptr<RunIfWaitingForDebuggerResult> result = RunIfWaitingForDebuggerResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRunScriptResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)> callback,
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
  std::unique_ptr<RunScriptResult> result = RunScriptResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetAsyncCallStackDepthResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAsyncCallStackDepthResult>)> callback,
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
  std::unique_ptr<SetAsyncCallStackDepthResult> result = SetAsyncCallStackDepthResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetCustomObjectFormatterEnabledResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCustomObjectFormatterEnabledResult>)> callback,
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
  std::unique_ptr<SetCustomObjectFormatterEnabledResult> result = SetCustomObjectFormatterEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleSetMaxCallStackSizeToCaptureResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMaxCallStackSizeToCaptureResult>)> callback,
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
  std::unique_ptr<SetMaxCallStackSizeToCaptureResult> result = SetMaxCallStackSizeToCaptureResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleTerminateExecutionResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TerminateExecutionResult>)> callback,
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
  std::unique_ptr<TerminateExecutionResult> result = TerminateExecutionResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleAddBindingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddBindingResult>)> callback,
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
  std::unique_ptr<AddBindingResult> result = AddBindingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleRemoveBindingResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveBindingResult>)> callback,
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
  std::unique_ptr<RemoveBindingResult> result = RemoveBindingResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

// static
void Domain::HandleGetExceptionDetailsResponse(
    base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetExceptionDetailsResult>)> callback,
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
  std::unique_ptr<GetExceptionDetailsResult> result = GetExceptionDetailsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(reply_status, std::move(result));
}

void Domain::DispatchBindingCalledEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<BindingCalledParams> parsed_params(BindingCalledParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnBindingCalled(*parsed_params);
  }
}

void Domain::DispatchConsoleAPICalledEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ConsoleAPICalledParams> parsed_params(ConsoleAPICalledParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnConsoleAPICalled(*parsed_params);
  }
}

void Domain::DispatchExceptionRevokedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ExceptionRevokedParams> parsed_params(ExceptionRevokedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnExceptionRevoked(*parsed_params);
  }
}

void Domain::DispatchExceptionThrownEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ExceptionThrownParams> parsed_params(ExceptionThrownParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnExceptionThrown(*parsed_params);
  }
}

void Domain::DispatchExecutionContextCreatedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ExecutionContextCreatedParams> parsed_params(ExecutionContextCreatedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnExecutionContextCreated(*parsed_params);
  }
}

void Domain::DispatchExecutionContextDestroyedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ExecutionContextDestroyedParams> parsed_params(ExecutionContextDestroyedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnExecutionContextDestroyed(*parsed_params);
  }
}

void Domain::DispatchExecutionContextsClearedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<ExecutionContextsClearedParams> parsed_params(ExecutionContextsClearedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnExecutionContextsCleared(*parsed_params);
  }
}

void Domain::DispatchInspectRequestedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<InspectRequestedParams> parsed_params(InspectRequestedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnInspectRequested(*parsed_params);
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

}  // namespace runtime

} // namespace autofill_assistant
