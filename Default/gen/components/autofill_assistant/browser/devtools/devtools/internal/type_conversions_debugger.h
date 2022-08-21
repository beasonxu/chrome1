// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DEBUGGER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DEBUGGER_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {




template <>
struct FromValue<debugger::Location> {
  static std::unique_ptr<debugger::Location> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::Location::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::Location& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ScriptPosition> {
  static std::unique_ptr<debugger::ScriptPosition> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ScriptPosition::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ScriptPosition& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::LocationRange> {
  static std::unique_ptr<debugger::LocationRange> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::LocationRange::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::LocationRange& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::CallFrame> {
  static std::unique_ptr<debugger::CallFrame> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::CallFrame::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::CallFrame& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::Scope> {
  static std::unique_ptr<debugger::Scope> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::Scope::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::Scope& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SearchMatch> {
  static std::unique_ptr<debugger::SearchMatch> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SearchMatch::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SearchMatch& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::BreakLocation> {
  static std::unique_ptr<debugger::BreakLocation> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::BreakLocation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::BreakLocation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::WasmDisassemblyChunk> {
  static std::unique_ptr<debugger::WasmDisassemblyChunk> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::WasmDisassemblyChunk::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::WasmDisassemblyChunk& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::ScriptLanguage> {
  static debugger::ScriptLanguage Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::ScriptLanguage::JAVA_SCRIPT;
    }
    if (value.GetString() == "JavaScript")
      return debugger::ScriptLanguage::JAVA_SCRIPT;
    if (value.GetString() == "WebAssembly")
      return debugger::ScriptLanguage::WEB_ASSEMBLY;
    errors->AddError("invalid enum value");
    return debugger::ScriptLanguage::JAVA_SCRIPT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ScriptLanguage& value, T*) {
  switch (value) {
    case debugger::ScriptLanguage::JAVA_SCRIPT:
      return std::make_unique<base::Value>("JavaScript");
    case debugger::ScriptLanguage::WEB_ASSEMBLY:
      return std::make_unique<base::Value>("WebAssembly");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::DebugSymbols> {
  static std::unique_ptr<debugger::DebugSymbols> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::DebugSymbols::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::DebugSymbols& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::ScopeType> {
  static debugger::ScopeType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::ScopeType::GLOBAL;
    }
    if (value.GetString() == "global")
      return debugger::ScopeType::GLOBAL;
    if (value.GetString() == "local")
      return debugger::ScopeType::LOCAL;
    if (value.GetString() == "with")
      return debugger::ScopeType::WITH;
    if (value.GetString() == "closure")
      return debugger::ScopeType::CLOSURE;
    if (value.GetString() == "catch")
      return debugger::ScopeType::CATCH;
    if (value.GetString() == "block")
      return debugger::ScopeType::BLOCK;
    if (value.GetString() == "script")
      return debugger::ScopeType::SCRIPT;
    if (value.GetString() == "eval")
      return debugger::ScopeType::EVAL;
    if (value.GetString() == "module")
      return debugger::ScopeType::MODULE;
    if (value.GetString() == "wasm-expression-stack")
      return debugger::ScopeType::WASM_EXPRESSION_STACK;
    errors->AddError("invalid enum value");
    return debugger::ScopeType::GLOBAL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ScopeType& value, T*) {
  switch (value) {
    case debugger::ScopeType::GLOBAL:
      return std::make_unique<base::Value>("global");
    case debugger::ScopeType::LOCAL:
      return std::make_unique<base::Value>("local");
    case debugger::ScopeType::WITH:
      return std::make_unique<base::Value>("with");
    case debugger::ScopeType::CLOSURE:
      return std::make_unique<base::Value>("closure");
    case debugger::ScopeType::CATCH:
      return std::make_unique<base::Value>("catch");
    case debugger::ScopeType::BLOCK:
      return std::make_unique<base::Value>("block");
    case debugger::ScopeType::SCRIPT:
      return std::make_unique<base::Value>("script");
    case debugger::ScopeType::EVAL:
      return std::make_unique<base::Value>("eval");
    case debugger::ScopeType::MODULE:
      return std::make_unique<base::Value>("module");
    case debugger::ScopeType::WASM_EXPRESSION_STACK:
      return std::make_unique<base::Value>("wasm-expression-stack");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<debugger::BreakLocationType> {
  static debugger::BreakLocationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::BreakLocationType::DEBUGGER_STATEMENT;
    }
    if (value.GetString() == "debuggerStatement")
      return debugger::BreakLocationType::DEBUGGER_STATEMENT;
    if (value.GetString() == "call")
      return debugger::BreakLocationType::CALL;
    if (value.GetString() == "return")
      return debugger::BreakLocationType::RETURN;
    errors->AddError("invalid enum value");
    return debugger::BreakLocationType::DEBUGGER_STATEMENT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::BreakLocationType& value, T*) {
  switch (value) {
    case debugger::BreakLocationType::DEBUGGER_STATEMENT:
      return std::make_unique<base::Value>("debuggerStatement");
    case debugger::BreakLocationType::CALL:
      return std::make_unique<base::Value>("call");
    case debugger::BreakLocationType::RETURN:
      return std::make_unique<base::Value>("return");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<debugger::DebugSymbolsType> {
  static debugger::DebugSymbolsType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::DebugSymbolsType::NONE;
    }
    if (value.GetString() == "None")
      return debugger::DebugSymbolsType::NONE;
    if (value.GetString() == "SourceMap")
      return debugger::DebugSymbolsType::SOURCE_MAP;
    if (value.GetString() == "EmbeddedDWARF")
      return debugger::DebugSymbolsType::EMBEDDEDDWARF;
    if (value.GetString() == "ExternalDWARF")
      return debugger::DebugSymbolsType::EXTERNALDWARF;
    errors->AddError("invalid enum value");
    return debugger::DebugSymbolsType::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::DebugSymbolsType& value, T*) {
  switch (value) {
    case debugger::DebugSymbolsType::NONE:
      return std::make_unique<base::Value>("None");
    case debugger::DebugSymbolsType::SOURCE_MAP:
      return std::make_unique<base::Value>("SourceMap");
    case debugger::DebugSymbolsType::EMBEDDEDDWARF:
      return std::make_unique<base::Value>("EmbeddedDWARF");
    case debugger::DebugSymbolsType::EXTERNALDWARF:
      return std::make_unique<base::Value>("ExternalDWARF");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<debugger::ContinueToLocationTargetCallFrames> {
  static debugger::ContinueToLocationTargetCallFrames Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::ContinueToLocationTargetCallFrames::ANY;
    }
    if (value.GetString() == "any")
      return debugger::ContinueToLocationTargetCallFrames::ANY;
    if (value.GetString() == "current")
      return debugger::ContinueToLocationTargetCallFrames::CURRENT;
    errors->AddError("invalid enum value");
    return debugger::ContinueToLocationTargetCallFrames::ANY;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ContinueToLocationTargetCallFrames& value, T*) {
  switch (value) {
    case debugger::ContinueToLocationTargetCallFrames::ANY:
      return std::make_unique<base::Value>("any");
    case debugger::ContinueToLocationTargetCallFrames::CURRENT:
      return std::make_unique<base::Value>("current");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::ContinueToLocationParams> {
  static std::unique_ptr<debugger::ContinueToLocationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ContinueToLocationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ContinueToLocationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ContinueToLocationResult> {
  static std::unique_ptr<debugger::ContinueToLocationResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ContinueToLocationResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ContinueToLocationResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::DisableParams> {
  static std::unique_ptr<debugger::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::DisableResult> {
  static std::unique_ptr<debugger::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::EnableParams> {
  static std::unique_ptr<debugger::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::EnableResult> {
  static std::unique_ptr<debugger::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::EvaluateOnCallFrameParams> {
  static std::unique_ptr<debugger::EvaluateOnCallFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::EvaluateOnCallFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::EvaluateOnCallFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::EvaluateOnCallFrameResult> {
  static std::unique_ptr<debugger::EvaluateOnCallFrameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::EvaluateOnCallFrameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::EvaluateOnCallFrameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetPossibleBreakpointsParams> {
  static std::unique_ptr<debugger::GetPossibleBreakpointsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetPossibleBreakpointsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetPossibleBreakpointsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetPossibleBreakpointsResult> {
  static std::unique_ptr<debugger::GetPossibleBreakpointsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetPossibleBreakpointsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetPossibleBreakpointsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetScriptSourceParams> {
  static std::unique_ptr<debugger::GetScriptSourceParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetScriptSourceParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetScriptSourceParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetScriptSourceResult> {
  static std::unique_ptr<debugger::GetScriptSourceResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetScriptSourceResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetScriptSourceResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::DisassembleWasmModuleParams> {
  static std::unique_ptr<debugger::DisassembleWasmModuleParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::DisassembleWasmModuleParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::DisassembleWasmModuleParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::DisassembleWasmModuleResult> {
  static std::unique_ptr<debugger::DisassembleWasmModuleResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::DisassembleWasmModuleResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::DisassembleWasmModuleResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::NextWasmDisassemblyChunkParams> {
  static std::unique_ptr<debugger::NextWasmDisassemblyChunkParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::NextWasmDisassemblyChunkParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::NextWasmDisassemblyChunkParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::NextWasmDisassemblyChunkResult> {
  static std::unique_ptr<debugger::NextWasmDisassemblyChunkResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::NextWasmDisassemblyChunkResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::NextWasmDisassemblyChunkResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetWasmBytecodeParams> {
  static std::unique_ptr<debugger::GetWasmBytecodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetWasmBytecodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetWasmBytecodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetWasmBytecodeResult> {
  static std::unique_ptr<debugger::GetWasmBytecodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetWasmBytecodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetWasmBytecodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetStackTraceParams> {
  static std::unique_ptr<debugger::GetStackTraceParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetStackTraceParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetStackTraceParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::GetStackTraceResult> {
  static std::unique_ptr<debugger::GetStackTraceResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::GetStackTraceResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::GetStackTraceResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::PauseParams> {
  static std::unique_ptr<debugger::PauseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::PauseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::PauseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::PauseResult> {
  static std::unique_ptr<debugger::PauseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::PauseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::PauseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::PauseOnAsyncCallParams> {
  static std::unique_ptr<debugger::PauseOnAsyncCallParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::PauseOnAsyncCallParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::PauseOnAsyncCallParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::PauseOnAsyncCallResult> {
  static std::unique_ptr<debugger::PauseOnAsyncCallResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::PauseOnAsyncCallResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::PauseOnAsyncCallResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::RemoveBreakpointParams> {
  static std::unique_ptr<debugger::RemoveBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::RemoveBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::RemoveBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::RemoveBreakpointResult> {
  static std::unique_ptr<debugger::RemoveBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::RemoveBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::RemoveBreakpointResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::RestartFrameMode> {
  static debugger::RestartFrameMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::RestartFrameMode::STEP_INTO;
    }
    if (value.GetString() == "StepInto")
      return debugger::RestartFrameMode::STEP_INTO;
    errors->AddError("invalid enum value");
    return debugger::RestartFrameMode::STEP_INTO;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::RestartFrameMode& value, T*) {
  switch (value) {
    case debugger::RestartFrameMode::STEP_INTO:
      return std::make_unique<base::Value>("StepInto");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::RestartFrameParams> {
  static std::unique_ptr<debugger::RestartFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::RestartFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::RestartFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::RestartFrameResult> {
  static std::unique_ptr<debugger::RestartFrameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::RestartFrameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::RestartFrameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ResumeParams> {
  static std::unique_ptr<debugger::ResumeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ResumeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ResumeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ResumeResult> {
  static std::unique_ptr<debugger::ResumeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ResumeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ResumeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SearchInContentParams> {
  static std::unique_ptr<debugger::SearchInContentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SearchInContentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SearchInContentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SearchInContentResult> {
  static std::unique_ptr<debugger::SearchInContentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SearchInContentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SearchInContentResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetAsyncCallStackDepthParams> {
  static std::unique_ptr<debugger::SetAsyncCallStackDepthParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetAsyncCallStackDepthParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetAsyncCallStackDepthParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetAsyncCallStackDepthResult> {
  static std::unique_ptr<debugger::SetAsyncCallStackDepthResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetAsyncCallStackDepthResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetAsyncCallStackDepthResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBlackboxPatternsParams> {
  static std::unique_ptr<debugger::SetBlackboxPatternsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBlackboxPatternsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBlackboxPatternsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBlackboxPatternsResult> {
  static std::unique_ptr<debugger::SetBlackboxPatternsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBlackboxPatternsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBlackboxPatternsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBlackboxedRangesParams> {
  static std::unique_ptr<debugger::SetBlackboxedRangesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBlackboxedRangesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBlackboxedRangesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBlackboxedRangesResult> {
  static std::unique_ptr<debugger::SetBlackboxedRangesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBlackboxedRangesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBlackboxedRangesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointParams> {
  static std::unique_ptr<debugger::SetBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointResult> {
  static std::unique_ptr<debugger::SetBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::SetInstrumentationBreakpointInstrumentation> {
  static debugger::SetInstrumentationBreakpointInstrumentation Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::SetInstrumentationBreakpointInstrumentation::BEFORE_SCRIPT_EXECUTION;
    }
    if (value.GetString() == "beforeScriptExecution")
      return debugger::SetInstrumentationBreakpointInstrumentation::BEFORE_SCRIPT_EXECUTION;
    if (value.GetString() == "beforeScriptWithSourceMapExecution")
      return debugger::SetInstrumentationBreakpointInstrumentation::BEFORE_SCRIPT_WITH_SOURCE_MAP_EXECUTION;
    errors->AddError("invalid enum value");
    return debugger::SetInstrumentationBreakpointInstrumentation::BEFORE_SCRIPT_EXECUTION;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetInstrumentationBreakpointInstrumentation& value, T*) {
  switch (value) {
    case debugger::SetInstrumentationBreakpointInstrumentation::BEFORE_SCRIPT_EXECUTION:
      return std::make_unique<base::Value>("beforeScriptExecution");
    case debugger::SetInstrumentationBreakpointInstrumentation::BEFORE_SCRIPT_WITH_SOURCE_MAP_EXECUTION:
      return std::make_unique<base::Value>("beforeScriptWithSourceMapExecution");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::SetInstrumentationBreakpointParams> {
  static std::unique_ptr<debugger::SetInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetInstrumentationBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetInstrumentationBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetInstrumentationBreakpointResult> {
  static std::unique_ptr<debugger::SetInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetInstrumentationBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetInstrumentationBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointByUrlParams> {
  static std::unique_ptr<debugger::SetBreakpointByUrlParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointByUrlParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointByUrlParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointByUrlResult> {
  static std::unique_ptr<debugger::SetBreakpointByUrlResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointByUrlResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointByUrlResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointOnFunctionCallParams> {
  static std::unique_ptr<debugger::SetBreakpointOnFunctionCallParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointOnFunctionCallParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointOnFunctionCallParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointOnFunctionCallResult> {
  static std::unique_ptr<debugger::SetBreakpointOnFunctionCallResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointOnFunctionCallResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointOnFunctionCallResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointsActiveParams> {
  static std::unique_ptr<debugger::SetBreakpointsActiveParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointsActiveParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointsActiveParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetBreakpointsActiveResult> {
  static std::unique_ptr<debugger::SetBreakpointsActiveResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetBreakpointsActiveResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetBreakpointsActiveResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::SetPauseOnExceptionsState> {
  static debugger::SetPauseOnExceptionsState Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::SetPauseOnExceptionsState::NONE;
    }
    if (value.GetString() == "none")
      return debugger::SetPauseOnExceptionsState::NONE;
    if (value.GetString() == "uncaught")
      return debugger::SetPauseOnExceptionsState::UNCAUGHT;
    if (value.GetString() == "all")
      return debugger::SetPauseOnExceptionsState::ALL;
    errors->AddError("invalid enum value");
    return debugger::SetPauseOnExceptionsState::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetPauseOnExceptionsState& value, T*) {
  switch (value) {
    case debugger::SetPauseOnExceptionsState::NONE:
      return std::make_unique<base::Value>("none");
    case debugger::SetPauseOnExceptionsState::UNCAUGHT:
      return std::make_unique<base::Value>("uncaught");
    case debugger::SetPauseOnExceptionsState::ALL:
      return std::make_unique<base::Value>("all");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::SetPauseOnExceptionsParams> {
  static std::unique_ptr<debugger::SetPauseOnExceptionsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetPauseOnExceptionsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetPauseOnExceptionsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetPauseOnExceptionsResult> {
  static std::unique_ptr<debugger::SetPauseOnExceptionsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetPauseOnExceptionsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetPauseOnExceptionsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetReturnValueParams> {
  static std::unique_ptr<debugger::SetReturnValueParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetReturnValueParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetReturnValueParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetReturnValueResult> {
  static std::unique_ptr<debugger::SetReturnValueResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetReturnValueResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetReturnValueResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetScriptSourceParams> {
  static std::unique_ptr<debugger::SetScriptSourceParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetScriptSourceParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetScriptSourceParams& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::SetScriptSourceStatus> {
  static debugger::SetScriptSourceStatus Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::SetScriptSourceStatus::OK;
    }
    if (value.GetString() == "Ok")
      return debugger::SetScriptSourceStatus::OK;
    if (value.GetString() == "CompileError")
      return debugger::SetScriptSourceStatus::COMPILE_ERROR;
    if (value.GetString() == "BlockedByActiveGenerator")
      return debugger::SetScriptSourceStatus::BLOCKED_BY_ACTIVE_GENERATOR;
    if (value.GetString() == "BlockedByActiveFunction")
      return debugger::SetScriptSourceStatus::BLOCKED_BY_ACTIVE_FUNCTION;
    errors->AddError("invalid enum value");
    return debugger::SetScriptSourceStatus::OK;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetScriptSourceStatus& value, T*) {
  switch (value) {
    case debugger::SetScriptSourceStatus::OK:
      return std::make_unique<base::Value>("Ok");
    case debugger::SetScriptSourceStatus::COMPILE_ERROR:
      return std::make_unique<base::Value>("CompileError");
    case debugger::SetScriptSourceStatus::BLOCKED_BY_ACTIVE_GENERATOR:
      return std::make_unique<base::Value>("BlockedByActiveGenerator");
    case debugger::SetScriptSourceStatus::BLOCKED_BY_ACTIVE_FUNCTION:
      return std::make_unique<base::Value>("BlockedByActiveFunction");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::SetScriptSourceResult> {
  static std::unique_ptr<debugger::SetScriptSourceResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetScriptSourceResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetScriptSourceResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetSkipAllPausesParams> {
  static std::unique_ptr<debugger::SetSkipAllPausesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetSkipAllPausesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetSkipAllPausesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetSkipAllPausesResult> {
  static std::unique_ptr<debugger::SetSkipAllPausesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetSkipAllPausesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetSkipAllPausesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetVariableValueParams> {
  static std::unique_ptr<debugger::SetVariableValueParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetVariableValueParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetVariableValueParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::SetVariableValueResult> {
  static std::unique_ptr<debugger::SetVariableValueResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::SetVariableValueResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::SetVariableValueResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::StepIntoParams> {
  static std::unique_ptr<debugger::StepIntoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::StepIntoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::StepIntoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::StepIntoResult> {
  static std::unique_ptr<debugger::StepIntoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::StepIntoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::StepIntoResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::StepOutParams> {
  static std::unique_ptr<debugger::StepOutParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::StepOutParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::StepOutParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::StepOutResult> {
  static std::unique_ptr<debugger::StepOutResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::StepOutResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::StepOutResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::StepOverParams> {
  static std::unique_ptr<debugger::StepOverParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::StepOverParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::StepOverParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::StepOverResult> {
  static std::unique_ptr<debugger::StepOverResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::StepOverResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::StepOverResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::BreakpointResolvedParams> {
  static std::unique_ptr<debugger::BreakpointResolvedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::BreakpointResolvedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::BreakpointResolvedParams& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<debugger::PausedReason> {
  static debugger::PausedReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return debugger::PausedReason::AMBIGUOUS;
    }
    if (value.GetString() == "ambiguous")
      return debugger::PausedReason::AMBIGUOUS;
    if (value.GetString() == "assert")
      return debugger::PausedReason::ASSERT;
    if (value.GetString() == "CSPViolation")
      return debugger::PausedReason::CSP_VIOLATION;
    if (value.GetString() == "debugCommand")
      return debugger::PausedReason::DEBUG_COMMAND;
    if (value.GetString() == "DOM")
      return debugger::PausedReason::DOM;
    if (value.GetString() == "EventListener")
      return debugger::PausedReason::EVENT_LISTENER;
    if (value.GetString() == "exception")
      return debugger::PausedReason::EXCEPTION;
    if (value.GetString() == "instrumentation")
      return debugger::PausedReason::INSTRUMENTATION;
    if (value.GetString() == "OOM")
      return debugger::PausedReason::OOM;
    if (value.GetString() == "other")
      return debugger::PausedReason::OTHER;
    if (value.GetString() == "promiseRejection")
      return debugger::PausedReason::PROMISE_REJECTION;
    if (value.GetString() == "XHR")
      return debugger::PausedReason::XHR;
    errors->AddError("invalid enum value");
    return debugger::PausedReason::AMBIGUOUS;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::PausedReason& value, T*) {
  switch (value) {
    case debugger::PausedReason::AMBIGUOUS:
      return std::make_unique<base::Value>("ambiguous");
    case debugger::PausedReason::ASSERT:
      return std::make_unique<base::Value>("assert");
    case debugger::PausedReason::CSP_VIOLATION:
      return std::make_unique<base::Value>("CSPViolation");
    case debugger::PausedReason::DEBUG_COMMAND:
      return std::make_unique<base::Value>("debugCommand");
    case debugger::PausedReason::DOM:
      return std::make_unique<base::Value>("DOM");
    case debugger::PausedReason::EVENT_LISTENER:
      return std::make_unique<base::Value>("EventListener");
    case debugger::PausedReason::EXCEPTION:
      return std::make_unique<base::Value>("exception");
    case debugger::PausedReason::INSTRUMENTATION:
      return std::make_unique<base::Value>("instrumentation");
    case debugger::PausedReason::OOM:
      return std::make_unique<base::Value>("OOM");
    case debugger::PausedReason::OTHER:
      return std::make_unique<base::Value>("other");
    case debugger::PausedReason::PROMISE_REJECTION:
      return std::make_unique<base::Value>("promiseRejection");
    case debugger::PausedReason::XHR:
      return std::make_unique<base::Value>("XHR");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<debugger::PausedParams> {
  static std::unique_ptr<debugger::PausedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::PausedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::PausedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ResumedParams> {
  static std::unique_ptr<debugger::ResumedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ResumedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ResumedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ScriptFailedToParseParams> {
  static std::unique_ptr<debugger::ScriptFailedToParseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ScriptFailedToParseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ScriptFailedToParseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<debugger::ScriptParsedParams> {
  static std::unique_ptr<debugger::ScriptParsedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return debugger::ScriptParsedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const debugger::ScriptParsedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DEBUGGER_H_
