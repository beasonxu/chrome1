// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_RUNTIME_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_RUNTIME_H_

#include "base/values.h"

namespace autofill_assistant {

namespace runtime {
class WebDriverValue;
class RemoteObject;
class CustomPreview;
class ObjectPreview;
class PropertyPreview;
class EntryPreview;
class PropertyDescriptor;
class InternalPropertyDescriptor;
class PrivatePropertyDescriptor;
class CallArgument;
class ExecutionContextDescription;
class ExceptionDetails;
class CallFrame;
class StackTrace;
class StackTraceId;
class AwaitPromiseParams;
class AwaitPromiseResult;
class CallFunctionOnParams;
class CallFunctionOnResult;
class CompileScriptParams;
class CompileScriptResult;
class DisableParams;
class DisableResult;
class DiscardConsoleEntriesParams;
class DiscardConsoleEntriesResult;
class EnableParams;
class EnableResult;
class EvaluateParams;
class EvaluateResult;
class GetIsolateIdParams;
class GetIsolateIdResult;
class GetHeapUsageParams;
class GetHeapUsageResult;
class GetPropertiesParams;
class GetPropertiesResult;
class GlobalLexicalScopeNamesParams;
class GlobalLexicalScopeNamesResult;
class QueryObjectsParams;
class QueryObjectsResult;
class ReleaseObjectParams;
class ReleaseObjectResult;
class ReleaseObjectGroupParams;
class ReleaseObjectGroupResult;
class RunIfWaitingForDebuggerParams;
class RunIfWaitingForDebuggerResult;
class RunScriptParams;
class RunScriptResult;
class SetAsyncCallStackDepthParams;
class SetAsyncCallStackDepthResult;
class SetCustomObjectFormatterEnabledParams;
class SetCustomObjectFormatterEnabledResult;
class SetMaxCallStackSizeToCaptureParams;
class SetMaxCallStackSizeToCaptureResult;
class TerminateExecutionParams;
class TerminateExecutionResult;
class AddBindingParams;
class AddBindingResult;
class RemoveBindingParams;
class RemoveBindingResult;
class GetExceptionDetailsParams;
class GetExceptionDetailsResult;
class BindingCalledParams;
class ConsoleAPICalledParams;
class ExceptionRevokedParams;
class ExceptionThrownParams;
class ExecutionContextCreatedParams;
class ExecutionContextDestroyedParams;
class ExecutionContextsClearedParams;
class InspectRequestedParams;

enum class WebDriverValueType {
  UNDEFINED,
  NONE,
  STRING,
  NUMBER,
  BOOLEAN,
  BIGINT,
  REGEXP,
  DATE,
  SYMBOL,
  ARRAY,
  OBJECT,
  FUNCTION,
  MAP,
  SET,
  WEAKMAP,
  WEAKSET,
  ERR,
  PROXY,
  PROMISE,
  TYPEDARRAY,
  ARRAYBUFFER,
  NODE,
  WINDOW
};

enum class RemoteObjectType {
  OBJECT,
  FUNCTION,
  UNDEFINED,
  STRING,
  NUMBER,
  BOOLEAN,
  SYMBOL,
  BIGINT
};

enum class RemoteObjectSubtype {
  ARRAY,
  NONE,
  NODE,
  REGEXP,
  DATE,
  MAP,
  SET,
  WEAKMAP,
  WEAKSET,
  ITERATOR,
  GENERATOR,
  ERR,
  PROXY,
  PROMISE,
  TYPEDARRAY,
  ARRAYBUFFER,
  DATAVIEW,
  WEBASSEMBLYMEMORY,
  WASMVALUE
};

enum class ObjectPreviewType {
  OBJECT,
  FUNCTION,
  UNDEFINED,
  STRING,
  NUMBER,
  BOOLEAN,
  SYMBOL,
  BIGINT
};

enum class ObjectPreviewSubtype {
  ARRAY,
  NONE,
  NODE,
  REGEXP,
  DATE,
  MAP,
  SET,
  WEAKMAP,
  WEAKSET,
  ITERATOR,
  GENERATOR,
  ERR,
  PROXY,
  PROMISE,
  TYPEDARRAY,
  ARRAYBUFFER,
  DATAVIEW,
  WEBASSEMBLYMEMORY,
  WASMVALUE
};

enum class PropertyPreviewType {
  OBJECT,
  FUNCTION,
  UNDEFINED,
  STRING,
  NUMBER,
  BOOLEAN,
  SYMBOL,
  ACCESSOR,
  BIGINT
};

enum class PropertyPreviewSubtype {
  ARRAY,
  NONE,
  NODE,
  REGEXP,
  DATE,
  MAP,
  SET,
  WEAKMAP,
  WEAKSET,
  ITERATOR,
  GENERATOR,
  ERR,
  PROXY,
  PROMISE,
  TYPEDARRAY,
  ARRAYBUFFER,
  DATAVIEW,
  WEBASSEMBLYMEMORY,
  WASMVALUE
};

enum class ConsoleAPICalledType {
  LOG,
  DEBUG,
  INFO,
  ERR,
  WARNING,
  DIR,
  DIRXML,
  TABLE,
  TRACE,
  CLEAR,
  START_GROUP,
  START_GROUP_COLLAPSED,
  END_GROUP,
  ASSERT,
  PROFILE,
  PROFILE_END,
  COUNT,
  TIME_END
};

}  // namespace runtime

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_RUNTIME_H_
