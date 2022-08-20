// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_RUNTIME_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_RUNTIME_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/message_dispatcher.h"


namespace autofill_assistant {
namespace runtime {
class ExperimentalDomain;
class ExperimentalObserver;

class ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // Notification is issued every time when binding is called.
  virtual void OnBindingCalled(const BindingCalledParams& params) {}
  // Issued when console API was called.
  virtual void OnConsoleAPICalled(const ConsoleAPICalledParams& params) {}
  // Issued when unhandled exception was revoked.
  virtual void OnExceptionRevoked(const ExceptionRevokedParams& params) {}
  // Issued when exception was thrown and unhandled.
  virtual void OnExceptionThrown(const ExceptionThrownParams& params) {}
  // Issued when new execution context is created.
  virtual void OnExecutionContextCreated(const ExecutionContextCreatedParams& params) {}
  // Issued when execution context is destroyed.
  virtual void OnExecutionContextDestroyed(const ExecutionContextDestroyedParams& params) {}
  // Issued when all executionContexts were cleared in browser
  virtual void OnExecutionContextsCleared(const ExecutionContextsClearedParams& params) {}
  // Issued when object should be inspected (for example, as a result of inspect() command line API
  // call).
  virtual void OnInspectRequested(const InspectRequestedParams& params) {}
};

class Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // Experimental: Notification is issued every time when binding is called.
  virtual void OnBindingCalled(const BindingCalledParams& params) final {}
  // Issued when console API was called.
  virtual void OnConsoleAPICalled(const ConsoleAPICalledParams& params) {}
  // Issued when unhandled exception was revoked.
  virtual void OnExceptionRevoked(const ExceptionRevokedParams& params) {}
  // Issued when exception was thrown and unhandled.
  virtual void OnExceptionThrown(const ExceptionThrownParams& params) {}
  // Issued when new execution context is created.
  virtual void OnExecutionContextCreated(const ExecutionContextCreatedParams& params) {}
  // Issued when execution context is destroyed.
  virtual void OnExecutionContextDestroyed(const ExecutionContextDestroyedParams& params) {}
  // Issued when all executionContexts were cleared in browser
  virtual void OnExecutionContextsCleared(const ExecutionContextsClearedParams& params) {}
  // Issued when object should be inspected (for example, as a result of inspect() command line API
  // call).
  virtual void OnInspectRequested(const InspectRequestedParams& params) {}
};

// Runtime domain exposes JavaScript runtime by means of remote evaluation and mirror objects.
// Evaluation results are returned as mirror object that expose object type, string representation
// and unique identifier that can be used for further object reference. Original objects are
// maintained in memory unless they are either explicitly released or are released along with the
// other objects in their object group.
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

  // Add handler to promise with given promise object id.
  void AwaitPromise(std::unique_ptr<AwaitPromiseParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)>());
  void AwaitPromise(const std::string& promise_object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)>());

  // Calls function with given declaration on the given object. Object group of the result is
  // inherited from the target object.
  void CallFunctionOn(std::unique_ptr<CallFunctionOnParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)>());
  void CallFunctionOn(const std::string& function_declaration, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)>());

  // Compiles expression.
  void CompileScript(std::unique_ptr<CompileScriptParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)>());
  void CompileScript(const std::string& expression, const std::string& sourceurl, bool persist_script, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)>());

  // Disables reporting of execution contexts creation.
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)>());
  void Disable(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void Disable(std::unique_ptr<DisableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Discards collected exceptions and console API calls.
  void DiscardConsoleEntries(std::unique_ptr<DiscardConsoleEntriesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardConsoleEntriesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardConsoleEntriesResult>)>());
  void DiscardConsoleEntries(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void DiscardConsoleEntries(std::unique_ptr<DiscardConsoleEntriesParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Enables reporting of execution contexts creation by means of `executionContextCreated` event.
  // When the reporting gets enabled the event will be sent immediately for each existing execution
  // context.
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)>());
  void Enable(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void Enable(std::unique_ptr<EnableParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Evaluates expression on global object.
  void Evaluate(std::unique_ptr<EvaluateParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)>());
  void Evaluate(const std::string& expression, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)>());

  // Returns properties of a given object. Object group of the result is inherited from the target
  // object.
  void GetProperties(std::unique_ptr<GetPropertiesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)>());
  void GetProperties(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)>());

  // Returns all let, const and class variables from global scope.
  void GlobalLexicalScopeNames(std::unique_ptr<GlobalLexicalScopeNamesParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)>());
  void GlobalLexicalScopeNames(const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)>());

  void QueryObjects(std::unique_ptr<QueryObjectsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)>());
  void QueryObjects(const std::string& prototype_object_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)>());

  // Releases remote object with given id.
  void ReleaseObject(std::unique_ptr<ReleaseObjectParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectResult>)>());
  void ReleaseObject(const std::string& object_id, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void ReleaseObject(std::unique_ptr<ReleaseObjectParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Releases all remote objects that belong to a given group.
  void ReleaseObjectGroup(std::unique_ptr<ReleaseObjectGroupParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectGroupResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectGroupResult>)>());
  void ReleaseObjectGroup(const std::string& object_group, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void ReleaseObjectGroup(std::unique_ptr<ReleaseObjectGroupParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Tells inspected instance to run if it was waiting for debugger to attach.
  void RunIfWaitingForDebugger(std::unique_ptr<RunIfWaitingForDebuggerParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunIfWaitingForDebuggerResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunIfWaitingForDebuggerResult>)>());
  void RunIfWaitingForDebugger(const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void RunIfWaitingForDebugger(std::unique_ptr<RunIfWaitingForDebuggerParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

  // Runs script with given id in a given context.
  void RunScript(std::unique_ptr<RunScriptParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)>());
  void RunScript(const std::string& script_id, const std::string& optional_node_frame_id,
base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)>());

  // Enables or disables async call stacks tracking.
  void SetAsyncCallStackDepth(std::unique_ptr<SetAsyncCallStackDepthParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAsyncCallStackDepthResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAsyncCallStackDepthResult>)>());
  void SetAsyncCallStackDepth(int max_depth, const std::string& optional_node_frame_id,
base::OnceClosure callback = base::OnceClosure());
  void SetAsyncCallStackDepth(std::unique_ptr<SetAsyncCallStackDepthParams> params, const std::string& optional_node_frame_id, base::OnceClosure callback);

 protected:
  Domain(MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleAwaitPromiseResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AwaitPromiseResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCallFunctionOnResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CallFunctionOnResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleCompileScriptResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<CompileScriptResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleDisableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DisableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleDiscardConsoleEntriesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<DiscardConsoleEntriesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleEnableResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EnableResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleEvaluateResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<EvaluateResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetIsolateIdResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetIsolateIdResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetHeapUsageResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapUsageResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetPropertiesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetPropertiesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGlobalLexicalScopeNamesResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GlobalLexicalScopeNamesResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleQueryObjectsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<QueryObjectsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleReleaseObjectResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleReleaseObjectGroupResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<ReleaseObjectGroupResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRunIfWaitingForDebuggerResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunIfWaitingForDebuggerResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRunScriptResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RunScriptResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetAsyncCallStackDepthResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetAsyncCallStackDepthResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetCustomObjectFormatterEnabledResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCustomObjectFormatterEnabledResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleSetMaxCallStackSizeToCaptureResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMaxCallStackSizeToCaptureResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleTerminateExecutionResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TerminateExecutionResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleAddBindingResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddBindingResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleRemoveBindingResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveBindingResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);
  static void HandleGetExceptionDetailsResponse(
      base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetExceptionDetailsResult>)> callback,
      const MessageDispatcher::ReplyStatus& reply_status,
      const base::Value& response);

  void DispatchBindingCalledEvent(const base::Value& params);
  void DispatchConsoleAPICalledEvent(const base::Value& params);
  void DispatchExceptionRevokedEvent(const base::Value& params);
  void DispatchExceptionThrownEvent(const base::Value& params);
  void DispatchExecutionContextCreatedEvent(const base::Value& params);
  void DispatchExecutionContextDestroyedEvent(const base::Value& params);
  void DispatchExecutionContextsClearedEvent(const base::Value& params);
  void DispatchInspectRequestedEvent(const base::Value& params);

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

  // Returns the isolate id.
  void GetIsolateId(std::unique_ptr<GetIsolateIdParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetIsolateIdResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetIsolateIdResult>)>());

  // Returns the JavaScript heap usage.
  // It is the total usage of the corresponding isolate not scoped to a particular Runtime.
  void GetHeapUsage(std::unique_ptr<GetHeapUsageParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapUsageResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetHeapUsageResult>)>());

  void SetCustomObjectFormatterEnabled(std::unique_ptr<SetCustomObjectFormatterEnabledParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCustomObjectFormatterEnabledResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetCustomObjectFormatterEnabledResult>)>());

  void SetMaxCallStackSizeToCapture(std::unique_ptr<SetMaxCallStackSizeToCaptureParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMaxCallStackSizeToCaptureResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<SetMaxCallStackSizeToCaptureResult>)>());

  // Terminate current or next JavaScript execution.
  // Will cancel the termination when the outer-most script execution ends.
  void TerminateExecution(std::unique_ptr<TerminateExecutionParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TerminateExecutionResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<TerminateExecutionResult>)>());

  // If executionContextId is empty, adds binding with the given name on the
  // global objects of all inspected contexts, including those created later,
  // bindings survive reloads.
  // Binding function takes exactly one argument, this argument should be string,
  // in case of any other input, function throws an exception.
  // Each binding function call produces Runtime.bindingCalled notification.
  void AddBinding(std::unique_ptr<AddBindingParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddBindingResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<AddBindingResult>)>());

  // This method does not remove binding function from global object but
  // unsubscribes current runtime agent from Runtime.bindingCalled notifications.
  void RemoveBinding(std::unique_ptr<RemoveBindingParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveBindingResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<RemoveBindingResult>)>());

  // This method tries to lookup and populate exception details for a
  // JavaScript Error object.
  // Note that the stackTrace portion of the resulting exceptionDetails will
  // only be populated if the Runtime domain was enabled at the time when the
  // Error was thrown.
  void GetExceptionDetails(std::unique_ptr<GetExceptionDetailsParams> params, const std::string& optional_node_frame_id, base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetExceptionDetailsResult>)> callback = base::OnceCallback<void(const MessageDispatcher::ReplyStatus&, std::unique_ptr<GetExceptionDetailsResult>)>());

};

}  // namespace runtime
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_RUNTIME_H_
