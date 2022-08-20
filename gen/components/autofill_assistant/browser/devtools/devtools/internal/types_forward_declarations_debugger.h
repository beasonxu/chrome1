// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DEBUGGER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DEBUGGER_H_

#include "base/values.h"

namespace autofill_assistant {

namespace debugger {
class Location;
class ScriptPosition;
class LocationRange;
class CallFrame;
class Scope;
class SearchMatch;
class BreakLocation;
class WasmDisassemblyChunk;
class DebugSymbols;
class ContinueToLocationParams;
class ContinueToLocationResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class EvaluateOnCallFrameParams;
class EvaluateOnCallFrameResult;
class GetPossibleBreakpointsParams;
class GetPossibleBreakpointsResult;
class GetScriptSourceParams;
class GetScriptSourceResult;
class DisassembleWasmModuleParams;
class DisassembleWasmModuleResult;
class NextWasmDisassemblyChunkParams;
class NextWasmDisassemblyChunkResult;
class GetWasmBytecodeParams;
class GetWasmBytecodeResult;
class GetStackTraceParams;
class GetStackTraceResult;
class PauseParams;
class PauseResult;
class PauseOnAsyncCallParams;
class PauseOnAsyncCallResult;
class RemoveBreakpointParams;
class RemoveBreakpointResult;
class RestartFrameParams;
class RestartFrameResult;
class ResumeParams;
class ResumeResult;
class SearchInContentParams;
class SearchInContentResult;
class SetAsyncCallStackDepthParams;
class SetAsyncCallStackDepthResult;
class SetBlackboxPatternsParams;
class SetBlackboxPatternsResult;
class SetBlackboxedRangesParams;
class SetBlackboxedRangesResult;
class SetBreakpointParams;
class SetBreakpointResult;
class SetInstrumentationBreakpointParams;
class SetInstrumentationBreakpointResult;
class SetBreakpointByUrlParams;
class SetBreakpointByUrlResult;
class SetBreakpointOnFunctionCallParams;
class SetBreakpointOnFunctionCallResult;
class SetBreakpointsActiveParams;
class SetBreakpointsActiveResult;
class SetPauseOnExceptionsParams;
class SetPauseOnExceptionsResult;
class SetReturnValueParams;
class SetReturnValueResult;
class SetScriptSourceParams;
class SetScriptSourceResult;
class SetSkipAllPausesParams;
class SetSkipAllPausesResult;
class SetVariableValueParams;
class SetVariableValueResult;
class StepIntoParams;
class StepIntoResult;
class StepOutParams;
class StepOutResult;
class StepOverParams;
class StepOverResult;
class BreakpointResolvedParams;
class PausedParams;
class ResumedParams;
class ScriptFailedToParseParams;
class ScriptParsedParams;

enum class ScriptLanguage {
  JAVA_SCRIPT,
  WEB_ASSEMBLY
};

enum class ScopeType {
  GLOBAL,
  LOCAL,
  WITH,
  CLOSURE,
  CATCH,
  BLOCK,
  SCRIPT,
  EVAL,
  MODULE,
  WASM_EXPRESSION_STACK
};

enum class BreakLocationType {
  DEBUGGER_STATEMENT,
  CALL,
  RETURN
};

enum class DebugSymbolsType {
  NONE,
  SOURCE_MAP,
  EMBEDDEDDWARF,
  EXTERNALDWARF
};

enum class ContinueToLocationTargetCallFrames {
  ANY,
  CURRENT
};

enum class RestartFrameMode {
  STEP_INTO
};

enum class SetInstrumentationBreakpointInstrumentation {
  BEFORE_SCRIPT_EXECUTION,
  BEFORE_SCRIPT_WITH_SOURCE_MAP_EXECUTION
};

enum class SetPauseOnExceptionsState {
  NONE,
  UNCAUGHT,
  ALL
};

enum class SetScriptSourceStatus {
  OK,
  COMPILE_ERROR,
  BLOCKED_BY_ACTIVE_GENERATOR,
  BLOCKED_BY_ACTIVE_FUNCTION
};

enum class PausedReason {
  AMBIGUOUS,
  ASSERT,
  CSP_VIOLATION,
  DEBUG_COMMAND,
  DOM,
  EVENT_LISTENER,
  EXCEPTION,
  INSTRUMENTATION,
  OOM,
  OTHER,
  PROMISE_REJECTION,
  XHR
};

}  // namespace debugger

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DEBUGGER_H_
