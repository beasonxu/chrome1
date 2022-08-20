// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_DEBUGGER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_DEBUGGER_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"

namespace autofill_assistant {

class ErrorReporter;

namespace debugger {

// Location in the source code.
class Location {
 public:
  static std::unique_ptr<Location> Parse(const base::Value& value, ErrorReporter* errors);
  Location(const Location&) = delete;
  Location& operator=(const Location&) = delete;
  ~Location() { }

  // Script identifier as reported in the `Debugger.scriptParsed`.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  // Line number in the script (0-based).
  int GetLineNumber() const { return line_number_; }
  void SetLineNumber(int value) { line_number_ = value; }

  // Column number in the script (0-based).
  bool HasColumnNumber() const { return !!column_number_; }
  int GetColumnNumber() const { DCHECK(HasColumnNumber()); return column_number_.value(); }
  void SetColumnNumber(int value) { column_number_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Location> Clone() const;

  template<int STATE>
  class LocationBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kLineNumberSet = 1 << 2,
      kAllRequiredFieldsSet = (kScriptIdSet | kLineNumberSet | 0)
    };

    LocationBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    LocationBuilder<STATE | kLineNumberSet>& SetLineNumber(int value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    LocationBuilder<STATE>& SetColumnNumber(int value) {
      result_->SetColumnNumber(value);
      return *this;
    }

    std::unique_ptr<Location> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Location;
    LocationBuilder() : result_(new Location()) { }

    template<int STEP> LocationBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<LocationBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Location> result_;
  };

  static LocationBuilder<0> Builder() {
    return LocationBuilder<0>();
  }

 private:
  Location() { }

  std::string script_id_;
  int line_number_;
  absl::optional<int> column_number_;
};


// Location in the source code.
class ScriptPosition {
 public:
  static std::unique_ptr<ScriptPosition> Parse(const base::Value& value, ErrorReporter* errors);
  ScriptPosition(const ScriptPosition&) = delete;
  ScriptPosition& operator=(const ScriptPosition&) = delete;
  ~ScriptPosition() { }

  int GetLineNumber() const { return line_number_; }
  void SetLineNumber(int value) { line_number_ = value; }

  int GetColumnNumber() const { return column_number_; }
  void SetColumnNumber(int value) { column_number_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ScriptPosition> Clone() const;

  template<int STATE>
  class ScriptPositionBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLineNumberSet = 1 << 1,
    kColumnNumberSet = 1 << 2,
      kAllRequiredFieldsSet = (kLineNumberSet | kColumnNumberSet | 0)
    };

    ScriptPositionBuilder<STATE | kLineNumberSet>& SetLineNumber(int value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    ScriptPositionBuilder<STATE | kColumnNumberSet>& SetColumnNumber(int value) {
      static_assert(!(STATE & kColumnNumberSet), "property columnNumber should not have already been set");
      result_->SetColumnNumber(value);
      return CastState<kColumnNumberSet>();
    }

    std::unique_ptr<ScriptPosition> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ScriptPosition;
    ScriptPositionBuilder() : result_(new ScriptPosition()) { }

    template<int STEP> ScriptPositionBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScriptPositionBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ScriptPosition> result_;
  };

  static ScriptPositionBuilder<0> Builder() {
    return ScriptPositionBuilder<0>();
  }

 private:
  ScriptPosition() { }

  int line_number_;
  int column_number_;
};


// Location range within one script.
class LocationRange {
 public:
  static std::unique_ptr<LocationRange> Parse(const base::Value& value, ErrorReporter* errors);
  LocationRange(const LocationRange&) = delete;
  LocationRange& operator=(const LocationRange&) = delete;
  ~LocationRange() { }

  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  const ::autofill_assistant::debugger::ScriptPosition* GetStart() const { return start_.get(); }
  void SetStart(std::unique_ptr<::autofill_assistant::debugger::ScriptPosition> value) { start_ = std::move(value); }

  const ::autofill_assistant::debugger::ScriptPosition* GetEnd() const { return end_.get(); }
  void SetEnd(std::unique_ptr<::autofill_assistant::debugger::ScriptPosition> value) { end_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<LocationRange> Clone() const;

  template<int STATE>
  class LocationRangeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kStartSet = 1 << 2,
    kEndSet = 1 << 3,
      kAllRequiredFieldsSet = (kScriptIdSet | kStartSet | kEndSet | 0)
    };

    LocationRangeBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    LocationRangeBuilder<STATE | kStartSet>& SetStart(std::unique_ptr<::autofill_assistant::debugger::ScriptPosition> value) {
      static_assert(!(STATE & kStartSet), "property start should not have already been set");
      result_->SetStart(std::move(value));
      return CastState<kStartSet>();
    }

    LocationRangeBuilder<STATE | kEndSet>& SetEnd(std::unique_ptr<::autofill_assistant::debugger::ScriptPosition> value) {
      static_assert(!(STATE & kEndSet), "property end should not have already been set");
      result_->SetEnd(std::move(value));
      return CastState<kEndSet>();
    }

    std::unique_ptr<LocationRange> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class LocationRange;
    LocationRangeBuilder() : result_(new LocationRange()) { }

    template<int STEP> LocationRangeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<LocationRangeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<LocationRange> result_;
  };

  static LocationRangeBuilder<0> Builder() {
    return LocationRangeBuilder<0>();
  }

 private:
  LocationRange() { }

  std::string script_id_;
  std::unique_ptr<::autofill_assistant::debugger::ScriptPosition> start_;
  std::unique_ptr<::autofill_assistant::debugger::ScriptPosition> end_;
};


// JavaScript call frame. Array of call frames form the call stack.
class CallFrame {
 public:
  static std::unique_ptr<CallFrame> Parse(const base::Value& value, ErrorReporter* errors);
  CallFrame(const CallFrame&) = delete;
  CallFrame& operator=(const CallFrame&) = delete;
  ~CallFrame() { }

  // Call frame identifier. This identifier is only valid while the virtual machine is paused.
  std::string GetCallFrameId() const { return call_frame_id_; }
  void SetCallFrameId(const std::string& value) { call_frame_id_ = value; }

  // Name of the JavaScript function called on this call frame.
  std::string GetFunctionName() const { return function_name_; }
  void SetFunctionName(const std::string& value) { function_name_ = value; }

  // Location in the source code.
  bool HasFunctionLocation() const { return !!function_location_; }
  const ::autofill_assistant::debugger::Location* GetFunctionLocation() const { DCHECK(HasFunctionLocation()); return function_location_.value().get(); }
  void SetFunctionLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { function_location_ = std::move(value); }

  // Location in the source code.
  const ::autofill_assistant::debugger::Location* GetLocation() const { return location_.get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { location_ = std::move(value); }

  // JavaScript script name or url.
  // Deprecated in favor of using the `location.scriptId` to resolve the URL via a previously
  // sent `Debugger.scriptParsed` event.
  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  // Scope chain for this call frame.
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::Scope>>* GetScopeChain() const { return &scope_chain_; }
  void SetScopeChain(std::vector<std::unique_ptr<::autofill_assistant::debugger::Scope>> value) { scope_chain_ = std::move(value); }

  // `this` object for this call frame.
  const ::autofill_assistant::runtime::RemoteObject* GetThis() const { return this_.get(); }
  void SetThis(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { this_ = std::move(value); }

  // The value being returned, if the function is at return point.
  bool HasReturnValue() const { return !!return_value_; }
  const ::autofill_assistant::runtime::RemoteObject* GetReturnValue() const { DCHECK(HasReturnValue()); return return_value_.value().get(); }
  void SetReturnValue(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { return_value_ = std::move(value); }

  // Valid only while the VM is paused and indicates whether this frame
  // can be restarted or not. Note that a `true` value here does not
  // guarantee that Debugger#restartFrame with this CallFrameId will be
  // successful, but it is very likely.
  bool HasCanBeRestarted() const { return !!can_be_restarted_; }
  bool GetCanBeRestarted() const { DCHECK(HasCanBeRestarted()); return can_be_restarted_.value(); }
  void SetCanBeRestarted(bool value) { can_be_restarted_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CallFrame> Clone() const;

  template<int STATE>
  class CallFrameBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCallFrameIdSet = 1 << 1,
    kFunctionNameSet = 1 << 2,
    kLocationSet = 1 << 3,
    kUrlSet = 1 << 4,
    kScopeChainSet = 1 << 5,
    kThisSet = 1 << 6,
      kAllRequiredFieldsSet = (kCallFrameIdSet | kFunctionNameSet | kLocationSet | kUrlSet | kScopeChainSet | kThisSet | 0)
    };

    CallFrameBuilder<STATE | kCallFrameIdSet>& SetCallFrameId(const std::string& value) {
      static_assert(!(STATE & kCallFrameIdSet), "property callFrameId should not have already been set");
      result_->SetCallFrameId(value);
      return CastState<kCallFrameIdSet>();
    }

    CallFrameBuilder<STATE | kFunctionNameSet>& SetFunctionName(const std::string& value) {
      static_assert(!(STATE & kFunctionNameSet), "property functionName should not have already been set");
      result_->SetFunctionName(value);
      return CastState<kFunctionNameSet>();
    }

    CallFrameBuilder<STATE>& SetFunctionLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      result_->SetFunctionLocation(std::move(value));
      return *this;
    }

    CallFrameBuilder<STATE | kLocationSet>& SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      static_assert(!(STATE & kLocationSet), "property location should not have already been set");
      result_->SetLocation(std::move(value));
      return CastState<kLocationSet>();
    }

    CallFrameBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    CallFrameBuilder<STATE | kScopeChainSet>& SetScopeChain(std::vector<std::unique_ptr<::autofill_assistant::debugger::Scope>> value) {
      static_assert(!(STATE & kScopeChainSet), "property scopeChain should not have already been set");
      result_->SetScopeChain(std::move(value));
      return CastState<kScopeChainSet>();
    }

    CallFrameBuilder<STATE | kThisSet>& SetThis(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kThisSet), "property this should not have already been set");
      result_->SetThis(std::move(value));
      return CastState<kThisSet>();
    }

    CallFrameBuilder<STATE>& SetReturnValue(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      result_->SetReturnValue(std::move(value));
      return *this;
    }

    CallFrameBuilder<STATE>& SetCanBeRestarted(bool value) {
      result_->SetCanBeRestarted(value);
      return *this;
    }

    std::unique_ptr<CallFrame> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CallFrame;
    CallFrameBuilder() : result_(new CallFrame()) { }

    template<int STEP> CallFrameBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CallFrameBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CallFrame> result_;
  };

  static CallFrameBuilder<0> Builder() {
    return CallFrameBuilder<0>();
  }

 private:
  CallFrame() { }

  std::string call_frame_id_;
  std::string function_name_;
  absl::optional<std::unique_ptr<::autofill_assistant::debugger::Location>> function_location_;
  std::unique_ptr<::autofill_assistant::debugger::Location> location_;
  std::string url_;
  std::vector<std::unique_ptr<::autofill_assistant::debugger::Scope>> scope_chain_;
  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> this_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::RemoteObject>> return_value_;
  absl::optional<bool> can_be_restarted_;
};


// Scope description.
class Scope {
 public:
  static std::unique_ptr<Scope> Parse(const base::Value& value, ErrorReporter* errors);
  Scope(const Scope&) = delete;
  Scope& operator=(const Scope&) = delete;
  ~Scope() { }

  // Scope type.
  ::autofill_assistant::debugger::ScopeType GetType() const { return type_; }
  void SetType(::autofill_assistant::debugger::ScopeType value) { type_ = value; }

  // Object representing the scope. For `global` and `with` scopes it represents the actual
  // object; for the rest of the scopes, it is artificial transient object enumerating scope
  // variables as its properties.
  const ::autofill_assistant::runtime::RemoteObject* GetObject() const { return object_.get(); }
  void SetObject(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { object_ = std::move(value); }

  bool HasName() const { return !!name_; }
  std::string GetName() const { DCHECK(HasName()); return name_.value(); }
  void SetName(const std::string& value) { name_ = value; }

  // Location in the source code where scope starts
  bool HasStartLocation() const { return !!start_location_; }
  const ::autofill_assistant::debugger::Location* GetStartLocation() const { DCHECK(HasStartLocation()); return start_location_.value().get(); }
  void SetStartLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { start_location_ = std::move(value); }

  // Location in the source code where scope ends
  bool HasEndLocation() const { return !!end_location_; }
  const ::autofill_assistant::debugger::Location* GetEndLocation() const { DCHECK(HasEndLocation()); return end_location_.value().get(); }
  void SetEndLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { end_location_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Scope> Clone() const;

  template<int STATE>
  class ScopeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTypeSet = 1 << 1,
    kObjectSet = 1 << 2,
      kAllRequiredFieldsSet = (kTypeSet | kObjectSet | 0)
    };

    ScopeBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::debugger::ScopeType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    ScopeBuilder<STATE | kObjectSet>& SetObject(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kObjectSet), "property object should not have already been set");
      result_->SetObject(std::move(value));
      return CastState<kObjectSet>();
    }

    ScopeBuilder<STATE>& SetName(const std::string& value) {
      result_->SetName(value);
      return *this;
    }

    ScopeBuilder<STATE>& SetStartLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      result_->SetStartLocation(std::move(value));
      return *this;
    }

    ScopeBuilder<STATE>& SetEndLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      result_->SetEndLocation(std::move(value));
      return *this;
    }

    std::unique_ptr<Scope> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Scope;
    ScopeBuilder() : result_(new Scope()) { }

    template<int STEP> ScopeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScopeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Scope> result_;
  };

  static ScopeBuilder<0> Builder() {
    return ScopeBuilder<0>();
  }

 private:
  Scope() { }

  ::autofill_assistant::debugger::ScopeType type_;
  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> object_;
  absl::optional<std::string> name_;
  absl::optional<std::unique_ptr<::autofill_assistant::debugger::Location>> start_location_;
  absl::optional<std::unique_ptr<::autofill_assistant::debugger::Location>> end_location_;
};


// Search match for resource.
class SearchMatch {
 public:
  static std::unique_ptr<SearchMatch> Parse(const base::Value& value, ErrorReporter* errors);
  SearchMatch(const SearchMatch&) = delete;
  SearchMatch& operator=(const SearchMatch&) = delete;
  ~SearchMatch() { }

  // Line number in resource content.
  double GetLineNumber() const { return line_number_; }
  void SetLineNumber(double value) { line_number_ = value; }

  // Line with match content.
  std::string GetLineContent() const { return line_content_; }
  void SetLineContent(const std::string& value) { line_content_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SearchMatch> Clone() const;

  template<int STATE>
  class SearchMatchBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLineNumberSet = 1 << 1,
    kLineContentSet = 1 << 2,
      kAllRequiredFieldsSet = (kLineNumberSet | kLineContentSet | 0)
    };

    SearchMatchBuilder<STATE | kLineNumberSet>& SetLineNumber(double value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    SearchMatchBuilder<STATE | kLineContentSet>& SetLineContent(const std::string& value) {
      static_assert(!(STATE & kLineContentSet), "property lineContent should not have already been set");
      result_->SetLineContent(value);
      return CastState<kLineContentSet>();
    }

    std::unique_ptr<SearchMatch> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SearchMatch;
    SearchMatchBuilder() : result_(new SearchMatch()) { }

    template<int STEP> SearchMatchBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SearchMatchBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SearchMatch> result_;
  };

  static SearchMatchBuilder<0> Builder() {
    return SearchMatchBuilder<0>();
  }

 private:
  SearchMatch() { }

  double line_number_;
  std::string line_content_;
};


class BreakLocation {
 public:
  static std::unique_ptr<BreakLocation> Parse(const base::Value& value, ErrorReporter* errors);
  BreakLocation(const BreakLocation&) = delete;
  BreakLocation& operator=(const BreakLocation&) = delete;
  ~BreakLocation() { }

  // Script identifier as reported in the `Debugger.scriptParsed`.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  // Line number in the script (0-based).
  int GetLineNumber() const { return line_number_; }
  void SetLineNumber(int value) { line_number_ = value; }

  // Column number in the script (0-based).
  bool HasColumnNumber() const { return !!column_number_; }
  int GetColumnNumber() const { DCHECK(HasColumnNumber()); return column_number_.value(); }
  void SetColumnNumber(int value) { column_number_ = value; }

  bool HasType() const { return !!type_; }
  ::autofill_assistant::debugger::BreakLocationType GetType() const { DCHECK(HasType()); return type_.value(); }
  void SetType(::autofill_assistant::debugger::BreakLocationType value) { type_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<BreakLocation> Clone() const;

  template<int STATE>
  class BreakLocationBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kLineNumberSet = 1 << 2,
      kAllRequiredFieldsSet = (kScriptIdSet | kLineNumberSet | 0)
    };

    BreakLocationBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    BreakLocationBuilder<STATE | kLineNumberSet>& SetLineNumber(int value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    BreakLocationBuilder<STATE>& SetColumnNumber(int value) {
      result_->SetColumnNumber(value);
      return *this;
    }

    BreakLocationBuilder<STATE>& SetType(::autofill_assistant::debugger::BreakLocationType value) {
      result_->SetType(value);
      return *this;
    }

    std::unique_ptr<BreakLocation> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class BreakLocation;
    BreakLocationBuilder() : result_(new BreakLocation()) { }

    template<int STEP> BreakLocationBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BreakLocationBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<BreakLocation> result_;
  };

  static BreakLocationBuilder<0> Builder() {
    return BreakLocationBuilder<0>();
  }

 private:
  BreakLocation() { }

  std::string script_id_;
  int line_number_;
  absl::optional<int> column_number_;
  absl::optional<::autofill_assistant::debugger::BreakLocationType> type_;
};


class WasmDisassemblyChunk {
 public:
  static std::unique_ptr<WasmDisassemblyChunk> Parse(const base::Value& value, ErrorReporter* errors);
  WasmDisassemblyChunk(const WasmDisassemblyChunk&) = delete;
  WasmDisassemblyChunk& operator=(const WasmDisassemblyChunk&) = delete;
  ~WasmDisassemblyChunk() { }

  // The next chunk of disassembled lines.
  const std::vector<std::string>* GetLines() const { return &lines_; }
  void SetLines(std::vector<std::string> value) { lines_ = std::move(value); }

  // The bytecode offsets describing the start of each line.
  const std::vector<int>* GetBytecodeOffsets() const { return &bytecode_offsets_; }
  void SetBytecodeOffsets(std::vector<int> value) { bytecode_offsets_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<WasmDisassemblyChunk> Clone() const;

  template<int STATE>
  class WasmDisassemblyChunkBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLinesSet = 1 << 1,
    kBytecodeOffsetsSet = 1 << 2,
      kAllRequiredFieldsSet = (kLinesSet | kBytecodeOffsetsSet | 0)
    };

    WasmDisassemblyChunkBuilder<STATE | kLinesSet>& SetLines(std::vector<std::string> value) {
      static_assert(!(STATE & kLinesSet), "property lines should not have already been set");
      result_->SetLines(std::move(value));
      return CastState<kLinesSet>();
    }

    WasmDisassemblyChunkBuilder<STATE | kBytecodeOffsetsSet>& SetBytecodeOffsets(std::vector<int> value) {
      static_assert(!(STATE & kBytecodeOffsetsSet), "property bytecodeOffsets should not have already been set");
      result_->SetBytecodeOffsets(std::move(value));
      return CastState<kBytecodeOffsetsSet>();
    }

    std::unique_ptr<WasmDisassemblyChunk> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class WasmDisassemblyChunk;
    WasmDisassemblyChunkBuilder() : result_(new WasmDisassemblyChunk()) { }

    template<int STEP> WasmDisassemblyChunkBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<WasmDisassemblyChunkBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<WasmDisassemblyChunk> result_;
  };

  static WasmDisassemblyChunkBuilder<0> Builder() {
    return WasmDisassemblyChunkBuilder<0>();
  }

 private:
  WasmDisassemblyChunk() { }

  std::vector<std::string> lines_;
  std::vector<int> bytecode_offsets_;
};


// Debug symbols available for a wasm script.
class DebugSymbols {
 public:
  static std::unique_ptr<DebugSymbols> Parse(const base::Value& value, ErrorReporter* errors);
  DebugSymbols(const DebugSymbols&) = delete;
  DebugSymbols& operator=(const DebugSymbols&) = delete;
  ~DebugSymbols() { }

  // Type of the debug symbols.
  ::autofill_assistant::debugger::DebugSymbolsType GetType() const { return type_; }
  void SetType(::autofill_assistant::debugger::DebugSymbolsType value) { type_ = value; }

  // URL of the external symbol source.
  bool HasExternalURL() const { return !!externalurl_; }
  std::string GetExternalURL() const { DCHECK(HasExternalURL()); return externalurl_.value(); }
  void SetExternalURL(const std::string& value) { externalurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DebugSymbols> Clone() const;

  template<int STATE>
  class DebugSymbolsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTypeSet = 1 << 1,
      kAllRequiredFieldsSet = (kTypeSet | 0)
    };

    DebugSymbolsBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::debugger::DebugSymbolsType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    DebugSymbolsBuilder<STATE>& SetExternalURL(const std::string& value) {
      result_->SetExternalURL(value);
      return *this;
    }

    std::unique_ptr<DebugSymbols> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DebugSymbols;
    DebugSymbolsBuilder() : result_(new DebugSymbols()) { }

    template<int STEP> DebugSymbolsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DebugSymbolsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DebugSymbols> result_;
  };

  static DebugSymbolsBuilder<0> Builder() {
    return DebugSymbolsBuilder<0>();
  }

 private:
  DebugSymbols() { }

  ::autofill_assistant::debugger::DebugSymbolsType type_;
  absl::optional<std::string> externalurl_;
};


// Parameters for the ContinueToLocation command.
class ContinueToLocationParams {
 public:
  static std::unique_ptr<ContinueToLocationParams> Parse(const base::Value& value, ErrorReporter* errors);
  ContinueToLocationParams(const ContinueToLocationParams&) = delete;
  ContinueToLocationParams& operator=(const ContinueToLocationParams&) = delete;
  ~ContinueToLocationParams() { }

  // Location to continue to.
  const ::autofill_assistant::debugger::Location* GetLocation() const { return location_.get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { location_ = std::move(value); }

  bool HasTargetCallFrames() const { return !!target_call_frames_; }
  ::autofill_assistant::debugger::ContinueToLocationTargetCallFrames GetTargetCallFrames() const { DCHECK(HasTargetCallFrames()); return target_call_frames_.value(); }
  void SetTargetCallFrames(::autofill_assistant::debugger::ContinueToLocationTargetCallFrames value) { target_call_frames_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ContinueToLocationParams> Clone() const;

  template<int STATE>
  class ContinueToLocationParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLocationSet = 1 << 1,
      kAllRequiredFieldsSet = (kLocationSet | 0)
    };

    ContinueToLocationParamsBuilder<STATE | kLocationSet>& SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      static_assert(!(STATE & kLocationSet), "property location should not have already been set");
      result_->SetLocation(std::move(value));
      return CastState<kLocationSet>();
    }

    ContinueToLocationParamsBuilder<STATE>& SetTargetCallFrames(::autofill_assistant::debugger::ContinueToLocationTargetCallFrames value) {
      result_->SetTargetCallFrames(value);
      return *this;
    }

    std::unique_ptr<ContinueToLocationParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ContinueToLocationParams;
    ContinueToLocationParamsBuilder() : result_(new ContinueToLocationParams()) { }

    template<int STEP> ContinueToLocationParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ContinueToLocationParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ContinueToLocationParams> result_;
  };

  static ContinueToLocationParamsBuilder<0> Builder() {
    return ContinueToLocationParamsBuilder<0>();
  }

 private:
  ContinueToLocationParams() { }

  std::unique_ptr<::autofill_assistant::debugger::Location> location_;
  absl::optional<::autofill_assistant::debugger::ContinueToLocationTargetCallFrames> target_call_frames_;
};


// Result for the ContinueToLocation command.
class ContinueToLocationResult {
 public:
  static std::unique_ptr<ContinueToLocationResult> Parse(const base::Value& value, ErrorReporter* errors);
  ContinueToLocationResult(const ContinueToLocationResult&) = delete;
  ContinueToLocationResult& operator=(const ContinueToLocationResult&) = delete;
  ~ContinueToLocationResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ContinueToLocationResult> Clone() const;

  template<int STATE>
  class ContinueToLocationResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ContinueToLocationResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ContinueToLocationResult;
    ContinueToLocationResultBuilder() : result_(new ContinueToLocationResult()) { }

    template<int STEP> ContinueToLocationResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ContinueToLocationResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ContinueToLocationResult> result_;
  };

  static ContinueToLocationResultBuilder<0> Builder() {
    return ContinueToLocationResultBuilder<0>();
  }

 private:
  ContinueToLocationResult() { }

};


// Parameters for the Disable command.
class DisableParams {
 public:
  static std::unique_ptr<DisableParams> Parse(const base::Value& value, ErrorReporter* errors);
  DisableParams(const DisableParams&) = delete;
  DisableParams& operator=(const DisableParams&) = delete;
  ~DisableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableParams> Clone() const;

  template<int STATE>
  class DisableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableParams;
    DisableParamsBuilder() : result_(new DisableParams()) { }

    template<int STEP> DisableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableParams> result_;
  };

  static DisableParamsBuilder<0> Builder() {
    return DisableParamsBuilder<0>();
  }

 private:
  DisableParams() { }

};


// Result for the Disable command.
class DisableResult {
 public:
  static std::unique_ptr<DisableResult> Parse(const base::Value& value, ErrorReporter* errors);
  DisableResult(const DisableResult&) = delete;
  DisableResult& operator=(const DisableResult&) = delete;
  ~DisableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableResult> Clone() const;

  template<int STATE>
  class DisableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableResult;
    DisableResultBuilder() : result_(new DisableResult()) { }

    template<int STEP> DisableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableResult> result_;
  };

  static DisableResultBuilder<0> Builder() {
    return DisableResultBuilder<0>();
  }

 private:
  DisableResult() { }

};


// Parameters for the Enable command.
class EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  EnableParams(const EnableParams&) = delete;
  EnableParams& operator=(const EnableParams&) = delete;
  ~EnableParams() { }

  // The maximum size in bytes of collected scripts (not referenced by other heap objects)
  // the debugger can hold. Puts no limit if parameter is omitted.
  bool HasMaxScriptsCacheSize() const { return !!max_scripts_cache_size_; }
  double GetMaxScriptsCacheSize() const { DCHECK(HasMaxScriptsCacheSize()); return max_scripts_cache_size_.value(); }
  void SetMaxScriptsCacheSize(double value) { max_scripts_cache_size_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    EnableParamsBuilder<STATE>& SetMaxScriptsCacheSize(double value) {
      result_->SetMaxScriptsCacheSize(value);
      return *this;
    }

    std::unique_ptr<EnableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableParams;
    EnableParamsBuilder() : result_(new EnableParams()) { }

    template<int STEP> EnableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableParams> result_;
  };

  static EnableParamsBuilder<0> Builder() {
    return EnableParamsBuilder<0>();
  }

 private:
  EnableParams() { }

  absl::optional<double> max_scripts_cache_size_;
};


// Result for the Enable command.
class EnableResult {
 public:
  static std::unique_ptr<EnableResult> Parse(const base::Value& value, ErrorReporter* errors);
  EnableResult(const EnableResult&) = delete;
  EnableResult& operator=(const EnableResult&) = delete;
  ~EnableResult() { }

  // Unique identifier of the debugger.
  std::string GetDebuggerId() const { return debugger_id_; }
  void SetDebuggerId(const std::string& value) { debugger_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableResult> Clone() const;

  template<int STATE>
  class EnableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDebuggerIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kDebuggerIdSet | 0)
    };

    EnableResultBuilder<STATE | kDebuggerIdSet>& SetDebuggerId(const std::string& value) {
      static_assert(!(STATE & kDebuggerIdSet), "property debuggerId should not have already been set");
      result_->SetDebuggerId(value);
      return CastState<kDebuggerIdSet>();
    }

    std::unique_ptr<EnableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableResult;
    EnableResultBuilder() : result_(new EnableResult()) { }

    template<int STEP> EnableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableResult> result_;
  };

  static EnableResultBuilder<0> Builder() {
    return EnableResultBuilder<0>();
  }

 private:
  EnableResult() { }

  std::string debugger_id_;
};


// Parameters for the EvaluateOnCallFrame command.
class EvaluateOnCallFrameParams {
 public:
  static std::unique_ptr<EvaluateOnCallFrameParams> Parse(const base::Value& value, ErrorReporter* errors);
  EvaluateOnCallFrameParams(const EvaluateOnCallFrameParams&) = delete;
  EvaluateOnCallFrameParams& operator=(const EvaluateOnCallFrameParams&) = delete;
  ~EvaluateOnCallFrameParams() { }

  // Call frame identifier to evaluate on.
  std::string GetCallFrameId() const { return call_frame_id_; }
  void SetCallFrameId(const std::string& value) { call_frame_id_ = value; }

  // Expression to evaluate.
  std::string GetExpression() const { return expression_; }
  void SetExpression(const std::string& value) { expression_ = value; }

  // String object group name to put result into (allows rapid releasing resulting object handles
  // using `releaseObjectGroup`).
  bool HasObjectGroup() const { return !!object_group_; }
  std::string GetObjectGroup() const { DCHECK(HasObjectGroup()); return object_group_.value(); }
  void SetObjectGroup(const std::string& value) { object_group_ = value; }

  // Specifies whether command line API should be available to the evaluated expression, defaults
  // to false.
  bool HasIncludeCommandLineAPI() const { return !!include_command_lineapi_; }
  bool GetIncludeCommandLineAPI() const { DCHECK(HasIncludeCommandLineAPI()); return include_command_lineapi_.value(); }
  void SetIncludeCommandLineAPI(bool value) { include_command_lineapi_ = value; }

  // In silent mode exceptions thrown during evaluation are not reported and do not pause
  // execution. Overrides `setPauseOnException` state.
  bool HasSilent() const { return !!silent_; }
  bool GetSilent() const { DCHECK(HasSilent()); return silent_.value(); }
  void SetSilent(bool value) { silent_ = value; }

  // Whether the result is expected to be a JSON object that should be sent by value.
  bool HasReturnByValue() const { return !!return_by_value_; }
  bool GetReturnByValue() const { DCHECK(HasReturnByValue()); return return_by_value_.value(); }
  void SetReturnByValue(bool value) { return_by_value_ = value; }

  // Whether preview should be generated for the result.
  bool HasGeneratePreview() const { return !!generate_preview_; }
  bool GetGeneratePreview() const { DCHECK(HasGeneratePreview()); return generate_preview_.value(); }
  void SetGeneratePreview(bool value) { generate_preview_ = value; }

  // Whether to throw an exception if side effect cannot be ruled out during evaluation.
  bool HasThrowOnSideEffect() const { return !!throw_on_side_effect_; }
  bool GetThrowOnSideEffect() const { DCHECK(HasThrowOnSideEffect()); return throw_on_side_effect_.value(); }
  void SetThrowOnSideEffect(bool value) { throw_on_side_effect_ = value; }

  // Terminate execution after timing out (number of milliseconds).
  bool HasTimeout() const { return !!timeout_; }
  double GetTimeout() const { DCHECK(HasTimeout()); return timeout_.value(); }
  void SetTimeout(double value) { timeout_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EvaluateOnCallFrameParams> Clone() const;

  template<int STATE>
  class EvaluateOnCallFrameParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCallFrameIdSet = 1 << 1,
    kExpressionSet = 1 << 2,
      kAllRequiredFieldsSet = (kCallFrameIdSet | kExpressionSet | 0)
    };

    EvaluateOnCallFrameParamsBuilder<STATE | kCallFrameIdSet>& SetCallFrameId(const std::string& value) {
      static_assert(!(STATE & kCallFrameIdSet), "property callFrameId should not have already been set");
      result_->SetCallFrameId(value);
      return CastState<kCallFrameIdSet>();
    }

    EvaluateOnCallFrameParamsBuilder<STATE | kExpressionSet>& SetExpression(const std::string& value) {
      static_assert(!(STATE & kExpressionSet), "property expression should not have already been set");
      result_->SetExpression(value);
      return CastState<kExpressionSet>();
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetObjectGroup(const std::string& value) {
      result_->SetObjectGroup(value);
      return *this;
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetIncludeCommandLineAPI(bool value) {
      result_->SetIncludeCommandLineAPI(value);
      return *this;
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetSilent(bool value) {
      result_->SetSilent(value);
      return *this;
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetReturnByValue(bool value) {
      result_->SetReturnByValue(value);
      return *this;
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetGeneratePreview(bool value) {
      result_->SetGeneratePreview(value);
      return *this;
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetThrowOnSideEffect(bool value) {
      result_->SetThrowOnSideEffect(value);
      return *this;
    }

    EvaluateOnCallFrameParamsBuilder<STATE>& SetTimeout(double value) {
      result_->SetTimeout(value);
      return *this;
    }

    std::unique_ptr<EvaluateOnCallFrameParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EvaluateOnCallFrameParams;
    EvaluateOnCallFrameParamsBuilder() : result_(new EvaluateOnCallFrameParams()) { }

    template<int STEP> EvaluateOnCallFrameParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EvaluateOnCallFrameParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EvaluateOnCallFrameParams> result_;
  };

  static EvaluateOnCallFrameParamsBuilder<0> Builder() {
    return EvaluateOnCallFrameParamsBuilder<0>();
  }

 private:
  EvaluateOnCallFrameParams() { }

  std::string call_frame_id_;
  std::string expression_;
  absl::optional<std::string> object_group_;
  absl::optional<bool> include_command_lineapi_;
  absl::optional<bool> silent_;
  absl::optional<bool> return_by_value_;
  absl::optional<bool> generate_preview_;
  absl::optional<bool> throw_on_side_effect_;
  absl::optional<double> timeout_;
};


// Result for the EvaluateOnCallFrame command.
class EvaluateOnCallFrameResult {
 public:
  static std::unique_ptr<EvaluateOnCallFrameResult> Parse(const base::Value& value, ErrorReporter* errors);
  EvaluateOnCallFrameResult(const EvaluateOnCallFrameResult&) = delete;
  EvaluateOnCallFrameResult& operator=(const EvaluateOnCallFrameResult&) = delete;
  ~EvaluateOnCallFrameResult() { }

  // Object wrapper for the evaluation result.
  const ::autofill_assistant::runtime::RemoteObject* GetResult() const { return result_.get(); }
  void SetResult(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { result_ = std::move(value); }

  // Exception details.
  bool HasExceptionDetails() const { return !!exception_details_; }
  const ::autofill_assistant::runtime::ExceptionDetails* GetExceptionDetails() const { DCHECK(HasExceptionDetails()); return exception_details_.value().get(); }
  void SetExceptionDetails(std::unique_ptr<::autofill_assistant::runtime::ExceptionDetails> value) { exception_details_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EvaluateOnCallFrameResult> Clone() const;

  template<int STATE>
  class EvaluateOnCallFrameResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResultSet = 1 << 1,
      kAllRequiredFieldsSet = (kResultSet | 0)
    };

    EvaluateOnCallFrameResultBuilder<STATE | kResultSet>& SetResult(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kResultSet), "property result should not have already been set");
      result_->SetResult(std::move(value));
      return CastState<kResultSet>();
    }

    EvaluateOnCallFrameResultBuilder<STATE>& SetExceptionDetails(std::unique_ptr<::autofill_assistant::runtime::ExceptionDetails> value) {
      result_->SetExceptionDetails(std::move(value));
      return *this;
    }

    std::unique_ptr<EvaluateOnCallFrameResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EvaluateOnCallFrameResult;
    EvaluateOnCallFrameResultBuilder() : result_(new EvaluateOnCallFrameResult()) { }

    template<int STEP> EvaluateOnCallFrameResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EvaluateOnCallFrameResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EvaluateOnCallFrameResult> result_;
  };

  static EvaluateOnCallFrameResultBuilder<0> Builder() {
    return EvaluateOnCallFrameResultBuilder<0>();
  }

 private:
  EvaluateOnCallFrameResult() { }

  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> result_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::ExceptionDetails>> exception_details_;
};


// Parameters for the GetPossibleBreakpoints command.
class GetPossibleBreakpointsParams {
 public:
  static std::unique_ptr<GetPossibleBreakpointsParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetPossibleBreakpointsParams(const GetPossibleBreakpointsParams&) = delete;
  GetPossibleBreakpointsParams& operator=(const GetPossibleBreakpointsParams&) = delete;
  ~GetPossibleBreakpointsParams() { }

  // Start of range to search possible breakpoint locations in.
  const ::autofill_assistant::debugger::Location* GetStart() const { return start_.get(); }
  void SetStart(std::unique_ptr<::autofill_assistant::debugger::Location> value) { start_ = std::move(value); }

  // End of range to search possible breakpoint locations in (excluding). When not specified, end
  // of scripts is used as end of range.
  bool HasEnd() const { return !!end_; }
  const ::autofill_assistant::debugger::Location* GetEnd() const { DCHECK(HasEnd()); return end_.value().get(); }
  void SetEnd(std::unique_ptr<::autofill_assistant::debugger::Location> value) { end_ = std::move(value); }

  // Only consider locations which are in the same (non-nested) function as start.
  bool HasRestrictToFunction() const { return !!restrict_to_function_; }
  bool GetRestrictToFunction() const { DCHECK(HasRestrictToFunction()); return restrict_to_function_.value(); }
  void SetRestrictToFunction(bool value) { restrict_to_function_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetPossibleBreakpointsParams> Clone() const;

  template<int STATE>
  class GetPossibleBreakpointsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStartSet = 1 << 1,
      kAllRequiredFieldsSet = (kStartSet | 0)
    };

    GetPossibleBreakpointsParamsBuilder<STATE | kStartSet>& SetStart(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      static_assert(!(STATE & kStartSet), "property start should not have already been set");
      result_->SetStart(std::move(value));
      return CastState<kStartSet>();
    }

    GetPossibleBreakpointsParamsBuilder<STATE>& SetEnd(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      result_->SetEnd(std::move(value));
      return *this;
    }

    GetPossibleBreakpointsParamsBuilder<STATE>& SetRestrictToFunction(bool value) {
      result_->SetRestrictToFunction(value);
      return *this;
    }

    std::unique_ptr<GetPossibleBreakpointsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetPossibleBreakpointsParams;
    GetPossibleBreakpointsParamsBuilder() : result_(new GetPossibleBreakpointsParams()) { }

    template<int STEP> GetPossibleBreakpointsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetPossibleBreakpointsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetPossibleBreakpointsParams> result_;
  };

  static GetPossibleBreakpointsParamsBuilder<0> Builder() {
    return GetPossibleBreakpointsParamsBuilder<0>();
  }

 private:
  GetPossibleBreakpointsParams() { }

  std::unique_ptr<::autofill_assistant::debugger::Location> start_;
  absl::optional<std::unique_ptr<::autofill_assistant::debugger::Location>> end_;
  absl::optional<bool> restrict_to_function_;
};


// Result for the GetPossibleBreakpoints command.
class GetPossibleBreakpointsResult {
 public:
  static std::unique_ptr<GetPossibleBreakpointsResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetPossibleBreakpointsResult(const GetPossibleBreakpointsResult&) = delete;
  GetPossibleBreakpointsResult& operator=(const GetPossibleBreakpointsResult&) = delete;
  ~GetPossibleBreakpointsResult() { }

  // List of the possible breakpoint locations.
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::BreakLocation>>* GetLocations() const { return &locations_; }
  void SetLocations(std::vector<std::unique_ptr<::autofill_assistant::debugger::BreakLocation>> value) { locations_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetPossibleBreakpointsResult> Clone() const;

  template<int STATE>
  class GetPossibleBreakpointsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLocationsSet = 1 << 1,
      kAllRequiredFieldsSet = (kLocationsSet | 0)
    };

    GetPossibleBreakpointsResultBuilder<STATE | kLocationsSet>& SetLocations(std::vector<std::unique_ptr<::autofill_assistant::debugger::BreakLocation>> value) {
      static_assert(!(STATE & kLocationsSet), "property locations should not have already been set");
      result_->SetLocations(std::move(value));
      return CastState<kLocationsSet>();
    }

    std::unique_ptr<GetPossibleBreakpointsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetPossibleBreakpointsResult;
    GetPossibleBreakpointsResultBuilder() : result_(new GetPossibleBreakpointsResult()) { }

    template<int STEP> GetPossibleBreakpointsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetPossibleBreakpointsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetPossibleBreakpointsResult> result_;
  };

  static GetPossibleBreakpointsResultBuilder<0> Builder() {
    return GetPossibleBreakpointsResultBuilder<0>();
  }

 private:
  GetPossibleBreakpointsResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::debugger::BreakLocation>> locations_;
};


// Parameters for the GetScriptSource command.
class GetScriptSourceParams {
 public:
  static std::unique_ptr<GetScriptSourceParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetScriptSourceParams(const GetScriptSourceParams&) = delete;
  GetScriptSourceParams& operator=(const GetScriptSourceParams&) = delete;
  ~GetScriptSourceParams() { }

  // Id of the script to get source for.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetScriptSourceParams> Clone() const;

  template<int STATE>
  class GetScriptSourceParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kScriptIdSet | 0)
    };

    GetScriptSourceParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    std::unique_ptr<GetScriptSourceParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetScriptSourceParams;
    GetScriptSourceParamsBuilder() : result_(new GetScriptSourceParams()) { }

    template<int STEP> GetScriptSourceParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetScriptSourceParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetScriptSourceParams> result_;
  };

  static GetScriptSourceParamsBuilder<0> Builder() {
    return GetScriptSourceParamsBuilder<0>();
  }

 private:
  GetScriptSourceParams() { }

  std::string script_id_;
};


// Result for the GetScriptSource command.
class GetScriptSourceResult {
 public:
  static std::unique_ptr<GetScriptSourceResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetScriptSourceResult(const GetScriptSourceResult&) = delete;
  GetScriptSourceResult& operator=(const GetScriptSourceResult&) = delete;
  ~GetScriptSourceResult() { }

  // Script source (empty in case of Wasm bytecode).
  std::string GetScriptSource() const { return script_source_; }
  void SetScriptSource(const std::string& value) { script_source_ = value; }

  // Wasm bytecode.
  bool HasBytecode() const { return !!bytecode_; }
  std::string GetBytecode() const { DCHECK(HasBytecode()); return bytecode_.value(); }
  void SetBytecode(const std::string& value) { bytecode_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetScriptSourceResult> Clone() const;

  template<int STATE>
  class GetScriptSourceResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptSourceSet = 1 << 1,
      kAllRequiredFieldsSet = (kScriptSourceSet | 0)
    };

    GetScriptSourceResultBuilder<STATE | kScriptSourceSet>& SetScriptSource(const std::string& value) {
      static_assert(!(STATE & kScriptSourceSet), "property scriptSource should not have already been set");
      result_->SetScriptSource(value);
      return CastState<kScriptSourceSet>();
    }

    GetScriptSourceResultBuilder<STATE>& SetBytecode(const std::string& value) {
      result_->SetBytecode(value);
      return *this;
    }

    std::unique_ptr<GetScriptSourceResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetScriptSourceResult;
    GetScriptSourceResultBuilder() : result_(new GetScriptSourceResult()) { }

    template<int STEP> GetScriptSourceResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetScriptSourceResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetScriptSourceResult> result_;
  };

  static GetScriptSourceResultBuilder<0> Builder() {
    return GetScriptSourceResultBuilder<0>();
  }

 private:
  GetScriptSourceResult() { }

  std::string script_source_;
  absl::optional<std::string> bytecode_;
};


// Parameters for the DisassembleWasmModule command.
class DisassembleWasmModuleParams {
 public:
  static std::unique_ptr<DisassembleWasmModuleParams> Parse(const base::Value& value, ErrorReporter* errors);
  DisassembleWasmModuleParams(const DisassembleWasmModuleParams&) = delete;
  DisassembleWasmModuleParams& operator=(const DisassembleWasmModuleParams&) = delete;
  ~DisassembleWasmModuleParams() { }

  // Id of the script to disassemble
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisassembleWasmModuleParams> Clone() const;

  template<int STATE>
  class DisassembleWasmModuleParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kScriptIdSet | 0)
    };

    DisassembleWasmModuleParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    std::unique_ptr<DisassembleWasmModuleParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisassembleWasmModuleParams;
    DisassembleWasmModuleParamsBuilder() : result_(new DisassembleWasmModuleParams()) { }

    template<int STEP> DisassembleWasmModuleParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisassembleWasmModuleParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisassembleWasmModuleParams> result_;
  };

  static DisassembleWasmModuleParamsBuilder<0> Builder() {
    return DisassembleWasmModuleParamsBuilder<0>();
  }

 private:
  DisassembleWasmModuleParams() { }

  std::string script_id_;
};


// Result for the DisassembleWasmModule command.
class DisassembleWasmModuleResult {
 public:
  static std::unique_ptr<DisassembleWasmModuleResult> Parse(const base::Value& value, ErrorReporter* errors);
  DisassembleWasmModuleResult(const DisassembleWasmModuleResult&) = delete;
  DisassembleWasmModuleResult& operator=(const DisassembleWasmModuleResult&) = delete;
  ~DisassembleWasmModuleResult() { }

  // For large modules, return a stream from which additional chunks of
  // disassembly can be read successively.
  bool HasStreamId() const { return !!stream_id_; }
  std::string GetStreamId() const { DCHECK(HasStreamId()); return stream_id_.value(); }
  void SetStreamId(const std::string& value) { stream_id_ = value; }

  // The total number of lines in the disassembly text.
  int GetTotalNumberOfLines() const { return total_number_of_lines_; }
  void SetTotalNumberOfLines(int value) { total_number_of_lines_ = value; }

  // The offsets of all function bodies, in the format [start1, end1,
  // start2, end2, ...] where all ends are exclusive.
  const std::vector<int>* GetFunctionBodyOffsets() const { return &function_body_offsets_; }
  void SetFunctionBodyOffsets(std::vector<int> value) { function_body_offsets_ = std::move(value); }

  // The first chunk of disassembly.
  const ::autofill_assistant::debugger::WasmDisassemblyChunk* GetChunk() const { return chunk_.get(); }
  void SetChunk(std::unique_ptr<::autofill_assistant::debugger::WasmDisassemblyChunk> value) { chunk_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisassembleWasmModuleResult> Clone() const;

  template<int STATE>
  class DisassembleWasmModuleResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTotalNumberOfLinesSet = 1 << 1,
    kFunctionBodyOffsetsSet = 1 << 2,
    kChunkSet = 1 << 3,
      kAllRequiredFieldsSet = (kTotalNumberOfLinesSet | kFunctionBodyOffsetsSet | kChunkSet | 0)
    };

    DisassembleWasmModuleResultBuilder<STATE>& SetStreamId(const std::string& value) {
      result_->SetStreamId(value);
      return *this;
    }

    DisassembleWasmModuleResultBuilder<STATE | kTotalNumberOfLinesSet>& SetTotalNumberOfLines(int value) {
      static_assert(!(STATE & kTotalNumberOfLinesSet), "property totalNumberOfLines should not have already been set");
      result_->SetTotalNumberOfLines(value);
      return CastState<kTotalNumberOfLinesSet>();
    }

    DisassembleWasmModuleResultBuilder<STATE | kFunctionBodyOffsetsSet>& SetFunctionBodyOffsets(std::vector<int> value) {
      static_assert(!(STATE & kFunctionBodyOffsetsSet), "property functionBodyOffsets should not have already been set");
      result_->SetFunctionBodyOffsets(std::move(value));
      return CastState<kFunctionBodyOffsetsSet>();
    }

    DisassembleWasmModuleResultBuilder<STATE | kChunkSet>& SetChunk(std::unique_ptr<::autofill_assistant::debugger::WasmDisassemblyChunk> value) {
      static_assert(!(STATE & kChunkSet), "property chunk should not have already been set");
      result_->SetChunk(std::move(value));
      return CastState<kChunkSet>();
    }

    std::unique_ptr<DisassembleWasmModuleResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisassembleWasmModuleResult;
    DisassembleWasmModuleResultBuilder() : result_(new DisassembleWasmModuleResult()) { }

    template<int STEP> DisassembleWasmModuleResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisassembleWasmModuleResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisassembleWasmModuleResult> result_;
  };

  static DisassembleWasmModuleResultBuilder<0> Builder() {
    return DisassembleWasmModuleResultBuilder<0>();
  }

 private:
  DisassembleWasmModuleResult() { }

  absl::optional<std::string> stream_id_;
  int total_number_of_lines_;
  std::vector<int> function_body_offsets_;
  std::unique_ptr<::autofill_assistant::debugger::WasmDisassemblyChunk> chunk_;
};


// Parameters for the NextWasmDisassemblyChunk command.
class NextWasmDisassemblyChunkParams {
 public:
  static std::unique_ptr<NextWasmDisassemblyChunkParams> Parse(const base::Value& value, ErrorReporter* errors);
  NextWasmDisassemblyChunkParams(const NextWasmDisassemblyChunkParams&) = delete;
  NextWasmDisassemblyChunkParams& operator=(const NextWasmDisassemblyChunkParams&) = delete;
  ~NextWasmDisassemblyChunkParams() { }

  std::string GetStreamId() const { return stream_id_; }
  void SetStreamId(const std::string& value) { stream_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<NextWasmDisassemblyChunkParams> Clone() const;

  template<int STATE>
  class NextWasmDisassemblyChunkParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStreamIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStreamIdSet | 0)
    };

    NextWasmDisassemblyChunkParamsBuilder<STATE | kStreamIdSet>& SetStreamId(const std::string& value) {
      static_assert(!(STATE & kStreamIdSet), "property streamId should not have already been set");
      result_->SetStreamId(value);
      return CastState<kStreamIdSet>();
    }

    std::unique_ptr<NextWasmDisassemblyChunkParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class NextWasmDisassemblyChunkParams;
    NextWasmDisassemblyChunkParamsBuilder() : result_(new NextWasmDisassemblyChunkParams()) { }

    template<int STEP> NextWasmDisassemblyChunkParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<NextWasmDisassemblyChunkParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<NextWasmDisassemblyChunkParams> result_;
  };

  static NextWasmDisassemblyChunkParamsBuilder<0> Builder() {
    return NextWasmDisassemblyChunkParamsBuilder<0>();
  }

 private:
  NextWasmDisassemblyChunkParams() { }

  std::string stream_id_;
};


// Result for the NextWasmDisassemblyChunk command.
class NextWasmDisassemblyChunkResult {
 public:
  static std::unique_ptr<NextWasmDisassemblyChunkResult> Parse(const base::Value& value, ErrorReporter* errors);
  NextWasmDisassemblyChunkResult(const NextWasmDisassemblyChunkResult&) = delete;
  NextWasmDisassemblyChunkResult& operator=(const NextWasmDisassemblyChunkResult&) = delete;
  ~NextWasmDisassemblyChunkResult() { }

  // The next chunk of disassembly.
  const ::autofill_assistant::debugger::WasmDisassemblyChunk* GetChunk() const { return chunk_.get(); }
  void SetChunk(std::unique_ptr<::autofill_assistant::debugger::WasmDisassemblyChunk> value) { chunk_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<NextWasmDisassemblyChunkResult> Clone() const;

  template<int STATE>
  class NextWasmDisassemblyChunkResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kChunkSet = 1 << 1,
      kAllRequiredFieldsSet = (kChunkSet | 0)
    };

    NextWasmDisassemblyChunkResultBuilder<STATE | kChunkSet>& SetChunk(std::unique_ptr<::autofill_assistant::debugger::WasmDisassemblyChunk> value) {
      static_assert(!(STATE & kChunkSet), "property chunk should not have already been set");
      result_->SetChunk(std::move(value));
      return CastState<kChunkSet>();
    }

    std::unique_ptr<NextWasmDisassemblyChunkResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class NextWasmDisassemblyChunkResult;
    NextWasmDisassemblyChunkResultBuilder() : result_(new NextWasmDisassemblyChunkResult()) { }

    template<int STEP> NextWasmDisassemblyChunkResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<NextWasmDisassemblyChunkResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<NextWasmDisassemblyChunkResult> result_;
  };

  static NextWasmDisassemblyChunkResultBuilder<0> Builder() {
    return NextWasmDisassemblyChunkResultBuilder<0>();
  }

 private:
  NextWasmDisassemblyChunkResult() { }

  std::unique_ptr<::autofill_assistant::debugger::WasmDisassemblyChunk> chunk_;
};


// Parameters for the GetWasmBytecode command.
class GetWasmBytecodeParams {
 public:
  static std::unique_ptr<GetWasmBytecodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetWasmBytecodeParams(const GetWasmBytecodeParams&) = delete;
  GetWasmBytecodeParams& operator=(const GetWasmBytecodeParams&) = delete;
  ~GetWasmBytecodeParams() { }

  // Id of the Wasm script to get source for.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetWasmBytecodeParams> Clone() const;

  template<int STATE>
  class GetWasmBytecodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kScriptIdSet | 0)
    };

    GetWasmBytecodeParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    std::unique_ptr<GetWasmBytecodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetWasmBytecodeParams;
    GetWasmBytecodeParamsBuilder() : result_(new GetWasmBytecodeParams()) { }

    template<int STEP> GetWasmBytecodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetWasmBytecodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetWasmBytecodeParams> result_;
  };

  static GetWasmBytecodeParamsBuilder<0> Builder() {
    return GetWasmBytecodeParamsBuilder<0>();
  }

 private:
  GetWasmBytecodeParams() { }

  std::string script_id_;
};


// Result for the GetWasmBytecode command.
class GetWasmBytecodeResult {
 public:
  static std::unique_ptr<GetWasmBytecodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetWasmBytecodeResult(const GetWasmBytecodeResult&) = delete;
  GetWasmBytecodeResult& operator=(const GetWasmBytecodeResult&) = delete;
  ~GetWasmBytecodeResult() { }

  // Script source.
  std::string GetBytecode() const { return bytecode_; }
  void SetBytecode(const std::string& value) { bytecode_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetWasmBytecodeResult> Clone() const;

  template<int STATE>
  class GetWasmBytecodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBytecodeSet = 1 << 1,
      kAllRequiredFieldsSet = (kBytecodeSet | 0)
    };

    GetWasmBytecodeResultBuilder<STATE | kBytecodeSet>& SetBytecode(const std::string& value) {
      static_assert(!(STATE & kBytecodeSet), "property bytecode should not have already been set");
      result_->SetBytecode(value);
      return CastState<kBytecodeSet>();
    }

    std::unique_ptr<GetWasmBytecodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetWasmBytecodeResult;
    GetWasmBytecodeResultBuilder() : result_(new GetWasmBytecodeResult()) { }

    template<int STEP> GetWasmBytecodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetWasmBytecodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetWasmBytecodeResult> result_;
  };

  static GetWasmBytecodeResultBuilder<0> Builder() {
    return GetWasmBytecodeResultBuilder<0>();
  }

 private:
  GetWasmBytecodeResult() { }

  std::string bytecode_;
};


// Parameters for the GetStackTrace command.
class GetStackTraceParams {
 public:
  static std::unique_ptr<GetStackTraceParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetStackTraceParams(const GetStackTraceParams&) = delete;
  GetStackTraceParams& operator=(const GetStackTraceParams&) = delete;
  ~GetStackTraceParams() { }

  const ::autofill_assistant::runtime::StackTraceId* GetStackTraceId() const { return stack_trace_id_.get(); }
  void SetStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) { stack_trace_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetStackTraceParams> Clone() const;

  template<int STATE>
  class GetStackTraceParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStackTraceIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStackTraceIdSet | 0)
    };

    GetStackTraceParamsBuilder<STATE | kStackTraceIdSet>& SetStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) {
      static_assert(!(STATE & kStackTraceIdSet), "property stackTraceId should not have already been set");
      result_->SetStackTraceId(std::move(value));
      return CastState<kStackTraceIdSet>();
    }

    std::unique_ptr<GetStackTraceParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetStackTraceParams;
    GetStackTraceParamsBuilder() : result_(new GetStackTraceParams()) { }

    template<int STEP> GetStackTraceParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetStackTraceParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetStackTraceParams> result_;
  };

  static GetStackTraceParamsBuilder<0> Builder() {
    return GetStackTraceParamsBuilder<0>();
  }

 private:
  GetStackTraceParams() { }

  std::unique_ptr<::autofill_assistant::runtime::StackTraceId> stack_trace_id_;
};


// Result for the GetStackTrace command.
class GetStackTraceResult {
 public:
  static std::unique_ptr<GetStackTraceResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetStackTraceResult(const GetStackTraceResult&) = delete;
  GetStackTraceResult& operator=(const GetStackTraceResult&) = delete;
  ~GetStackTraceResult() { }

  const ::autofill_assistant::runtime::StackTrace* GetStackTrace() const { return stack_trace_.get(); }
  void SetStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) { stack_trace_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetStackTraceResult> Clone() const;

  template<int STATE>
  class GetStackTraceResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStackTraceSet = 1 << 1,
      kAllRequiredFieldsSet = (kStackTraceSet | 0)
    };

    GetStackTraceResultBuilder<STATE | kStackTraceSet>& SetStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) {
      static_assert(!(STATE & kStackTraceSet), "property stackTrace should not have already been set");
      result_->SetStackTrace(std::move(value));
      return CastState<kStackTraceSet>();
    }

    std::unique_ptr<GetStackTraceResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetStackTraceResult;
    GetStackTraceResultBuilder() : result_(new GetStackTraceResult()) { }

    template<int STEP> GetStackTraceResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetStackTraceResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetStackTraceResult> result_;
  };

  static GetStackTraceResultBuilder<0> Builder() {
    return GetStackTraceResultBuilder<0>();
  }

 private:
  GetStackTraceResult() { }

  std::unique_ptr<::autofill_assistant::runtime::StackTrace> stack_trace_;
};


// Parameters for the Pause command.
class PauseParams {
 public:
  static std::unique_ptr<PauseParams> Parse(const base::Value& value, ErrorReporter* errors);
  PauseParams(const PauseParams&) = delete;
  PauseParams& operator=(const PauseParams&) = delete;
  ~PauseParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PauseParams> Clone() const;

  template<int STATE>
  class PauseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<PauseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PauseParams;
    PauseParamsBuilder() : result_(new PauseParams()) { }

    template<int STEP> PauseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PauseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PauseParams> result_;
  };

  static PauseParamsBuilder<0> Builder() {
    return PauseParamsBuilder<0>();
  }

 private:
  PauseParams() { }

};


// Result for the Pause command.
class PauseResult {
 public:
  static std::unique_ptr<PauseResult> Parse(const base::Value& value, ErrorReporter* errors);
  PauseResult(const PauseResult&) = delete;
  PauseResult& operator=(const PauseResult&) = delete;
  ~PauseResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PauseResult> Clone() const;

  template<int STATE>
  class PauseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<PauseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PauseResult;
    PauseResultBuilder() : result_(new PauseResult()) { }

    template<int STEP> PauseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PauseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PauseResult> result_;
  };

  static PauseResultBuilder<0> Builder() {
    return PauseResultBuilder<0>();
  }

 private:
  PauseResult() { }

};


// Parameters for the PauseOnAsyncCall command.
class PauseOnAsyncCallParams {
 public:
  static std::unique_ptr<PauseOnAsyncCallParams> Parse(const base::Value& value, ErrorReporter* errors);
  PauseOnAsyncCallParams(const PauseOnAsyncCallParams&) = delete;
  PauseOnAsyncCallParams& operator=(const PauseOnAsyncCallParams&) = delete;
  ~PauseOnAsyncCallParams() { }

  // Debugger will pause when async call with given stack trace is started.
  const ::autofill_assistant::runtime::StackTraceId* GetParentStackTraceId() const { return parent_stack_trace_id_.get(); }
  void SetParentStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) { parent_stack_trace_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PauseOnAsyncCallParams> Clone() const;

  template<int STATE>
  class PauseOnAsyncCallParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kParentStackTraceIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kParentStackTraceIdSet | 0)
    };

    PauseOnAsyncCallParamsBuilder<STATE | kParentStackTraceIdSet>& SetParentStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) {
      static_assert(!(STATE & kParentStackTraceIdSet), "property parentStackTraceId should not have already been set");
      result_->SetParentStackTraceId(std::move(value));
      return CastState<kParentStackTraceIdSet>();
    }

    std::unique_ptr<PauseOnAsyncCallParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PauseOnAsyncCallParams;
    PauseOnAsyncCallParamsBuilder() : result_(new PauseOnAsyncCallParams()) { }

    template<int STEP> PauseOnAsyncCallParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PauseOnAsyncCallParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PauseOnAsyncCallParams> result_;
  };

  static PauseOnAsyncCallParamsBuilder<0> Builder() {
    return PauseOnAsyncCallParamsBuilder<0>();
  }

 private:
  PauseOnAsyncCallParams() { }

  std::unique_ptr<::autofill_assistant::runtime::StackTraceId> parent_stack_trace_id_;
};


// Result for the PauseOnAsyncCall command.
class PauseOnAsyncCallResult {
 public:
  static std::unique_ptr<PauseOnAsyncCallResult> Parse(const base::Value& value, ErrorReporter* errors);
  PauseOnAsyncCallResult(const PauseOnAsyncCallResult&) = delete;
  PauseOnAsyncCallResult& operator=(const PauseOnAsyncCallResult&) = delete;
  ~PauseOnAsyncCallResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PauseOnAsyncCallResult> Clone() const;

  template<int STATE>
  class PauseOnAsyncCallResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<PauseOnAsyncCallResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PauseOnAsyncCallResult;
    PauseOnAsyncCallResultBuilder() : result_(new PauseOnAsyncCallResult()) { }

    template<int STEP> PauseOnAsyncCallResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PauseOnAsyncCallResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PauseOnAsyncCallResult> result_;
  };

  static PauseOnAsyncCallResultBuilder<0> Builder() {
    return PauseOnAsyncCallResultBuilder<0>();
  }

 private:
  PauseOnAsyncCallResult() { }

};


// Parameters for the RemoveBreakpoint command.
class RemoveBreakpointParams {
 public:
  static std::unique_ptr<RemoveBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveBreakpointParams(const RemoveBreakpointParams&) = delete;
  RemoveBreakpointParams& operator=(const RemoveBreakpointParams&) = delete;
  ~RemoveBreakpointParams() { }

  std::string GetBreakpointId() const { return breakpoint_id_; }
  void SetBreakpointId(const std::string& value) { breakpoint_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveBreakpointParams> Clone() const;

  template<int STATE>
  class RemoveBreakpointParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBreakpointIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kBreakpointIdSet | 0)
    };

    RemoveBreakpointParamsBuilder<STATE | kBreakpointIdSet>& SetBreakpointId(const std::string& value) {
      static_assert(!(STATE & kBreakpointIdSet), "property breakpointId should not have already been set");
      result_->SetBreakpointId(value);
      return CastState<kBreakpointIdSet>();
    }

    std::unique_ptr<RemoveBreakpointParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveBreakpointParams;
    RemoveBreakpointParamsBuilder() : result_(new RemoveBreakpointParams()) { }

    template<int STEP> RemoveBreakpointParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveBreakpointParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveBreakpointParams> result_;
  };

  static RemoveBreakpointParamsBuilder<0> Builder() {
    return RemoveBreakpointParamsBuilder<0>();
  }

 private:
  RemoveBreakpointParams() { }

  std::string breakpoint_id_;
};


// Result for the RemoveBreakpoint command.
class RemoveBreakpointResult {
 public:
  static std::unique_ptr<RemoveBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveBreakpointResult(const RemoveBreakpointResult&) = delete;
  RemoveBreakpointResult& operator=(const RemoveBreakpointResult&) = delete;
  ~RemoveBreakpointResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveBreakpointResult> Clone() const;

  template<int STATE>
  class RemoveBreakpointResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<RemoveBreakpointResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveBreakpointResult;
    RemoveBreakpointResultBuilder() : result_(new RemoveBreakpointResult()) { }

    template<int STEP> RemoveBreakpointResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveBreakpointResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveBreakpointResult> result_;
  };

  static RemoveBreakpointResultBuilder<0> Builder() {
    return RemoveBreakpointResultBuilder<0>();
  }

 private:
  RemoveBreakpointResult() { }

};


// Parameters for the RestartFrame command.
class RestartFrameParams {
 public:
  static std::unique_ptr<RestartFrameParams> Parse(const base::Value& value, ErrorReporter* errors);
  RestartFrameParams(const RestartFrameParams&) = delete;
  RestartFrameParams& operator=(const RestartFrameParams&) = delete;
  ~RestartFrameParams() { }

  // Call frame identifier to evaluate on.
  std::string GetCallFrameId() const { return call_frame_id_; }
  void SetCallFrameId(const std::string& value) { call_frame_id_ = value; }

  // The `mode` parameter must be present and set to 'StepInto', otherwise
  // `restartFrame` will error out.
  bool HasMode() const { return !!mode_; }
  ::autofill_assistant::debugger::RestartFrameMode GetMode() const { DCHECK(HasMode()); return mode_.value(); }
  void SetMode(::autofill_assistant::debugger::RestartFrameMode value) { mode_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RestartFrameParams> Clone() const;

  template<int STATE>
  class RestartFrameParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCallFrameIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kCallFrameIdSet | 0)
    };

    RestartFrameParamsBuilder<STATE | kCallFrameIdSet>& SetCallFrameId(const std::string& value) {
      static_assert(!(STATE & kCallFrameIdSet), "property callFrameId should not have already been set");
      result_->SetCallFrameId(value);
      return CastState<kCallFrameIdSet>();
    }

    RestartFrameParamsBuilder<STATE>& SetMode(::autofill_assistant::debugger::RestartFrameMode value) {
      result_->SetMode(value);
      return *this;
    }

    std::unique_ptr<RestartFrameParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RestartFrameParams;
    RestartFrameParamsBuilder() : result_(new RestartFrameParams()) { }

    template<int STEP> RestartFrameParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RestartFrameParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RestartFrameParams> result_;
  };

  static RestartFrameParamsBuilder<0> Builder() {
    return RestartFrameParamsBuilder<0>();
  }

 private:
  RestartFrameParams() { }

  std::string call_frame_id_;
  absl::optional<::autofill_assistant::debugger::RestartFrameMode> mode_;
};


// Result for the RestartFrame command.
class RestartFrameResult {
 public:
  static std::unique_ptr<RestartFrameResult> Parse(const base::Value& value, ErrorReporter* errors);
  RestartFrameResult(const RestartFrameResult&) = delete;
  RestartFrameResult& operator=(const RestartFrameResult&) = delete;
  ~RestartFrameResult() { }

  // New stack trace.
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>>* GetCallFrames() const { return &call_frames_; }
  void SetCallFrames(std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> value) { call_frames_ = std::move(value); }

  // Async stack trace, if any.
  bool HasAsyncStackTrace() const { return !!async_stack_trace_; }
  const ::autofill_assistant::runtime::StackTrace* GetAsyncStackTrace() const { DCHECK(HasAsyncStackTrace()); return async_stack_trace_.value().get(); }
  void SetAsyncStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) { async_stack_trace_ = std::move(value); }

  // Async stack trace, if any.
  bool HasAsyncStackTraceId() const { return !!async_stack_trace_id_; }
  const ::autofill_assistant::runtime::StackTraceId* GetAsyncStackTraceId() const { DCHECK(HasAsyncStackTraceId()); return async_stack_trace_id_.value().get(); }
  void SetAsyncStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) { async_stack_trace_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RestartFrameResult> Clone() const;

  template<int STATE>
  class RestartFrameResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCallFramesSet = 1 << 1,
      kAllRequiredFieldsSet = (kCallFramesSet | 0)
    };

    RestartFrameResultBuilder<STATE | kCallFramesSet>& SetCallFrames(std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> value) {
      static_assert(!(STATE & kCallFramesSet), "property callFrames should not have already been set");
      result_->SetCallFrames(std::move(value));
      return CastState<kCallFramesSet>();
    }

    RestartFrameResultBuilder<STATE>& SetAsyncStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) {
      result_->SetAsyncStackTrace(std::move(value));
      return *this;
    }

    RestartFrameResultBuilder<STATE>& SetAsyncStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) {
      result_->SetAsyncStackTraceId(std::move(value));
      return *this;
    }

    std::unique_ptr<RestartFrameResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RestartFrameResult;
    RestartFrameResultBuilder() : result_(new RestartFrameResult()) { }

    template<int STEP> RestartFrameResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RestartFrameResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RestartFrameResult> result_;
  };

  static RestartFrameResultBuilder<0> Builder() {
    return RestartFrameResultBuilder<0>();
  }

 private:
  RestartFrameResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> call_frames_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTrace>> async_stack_trace_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTraceId>> async_stack_trace_id_;
};


// Parameters for the Resume command.
class ResumeParams {
 public:
  static std::unique_ptr<ResumeParams> Parse(const base::Value& value, ErrorReporter* errors);
  ResumeParams(const ResumeParams&) = delete;
  ResumeParams& operator=(const ResumeParams&) = delete;
  ~ResumeParams() { }

  // Set to true to terminate execution upon resuming execution. In contrast
  // to Runtime.terminateExecution, this will allows to execute further
  // JavaScript (i.e. via evaluation) until execution of the paused code
  // is actually resumed, at which point termination is triggered.
  // If execution is currently not paused, this parameter has no effect.
  bool HasTerminateOnResume() const { return !!terminate_on_resume_; }
  bool GetTerminateOnResume() const { DCHECK(HasTerminateOnResume()); return terminate_on_resume_.value(); }
  void SetTerminateOnResume(bool value) { terminate_on_resume_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ResumeParams> Clone() const;

  template<int STATE>
  class ResumeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    ResumeParamsBuilder<STATE>& SetTerminateOnResume(bool value) {
      result_->SetTerminateOnResume(value);
      return *this;
    }

    std::unique_ptr<ResumeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ResumeParams;
    ResumeParamsBuilder() : result_(new ResumeParams()) { }

    template<int STEP> ResumeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ResumeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ResumeParams> result_;
  };

  static ResumeParamsBuilder<0> Builder() {
    return ResumeParamsBuilder<0>();
  }

 private:
  ResumeParams() { }

  absl::optional<bool> terminate_on_resume_;
};


// Result for the Resume command.
class ResumeResult {
 public:
  static std::unique_ptr<ResumeResult> Parse(const base::Value& value, ErrorReporter* errors);
  ResumeResult(const ResumeResult&) = delete;
  ResumeResult& operator=(const ResumeResult&) = delete;
  ~ResumeResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ResumeResult> Clone() const;

  template<int STATE>
  class ResumeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ResumeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ResumeResult;
    ResumeResultBuilder() : result_(new ResumeResult()) { }

    template<int STEP> ResumeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ResumeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ResumeResult> result_;
  };

  static ResumeResultBuilder<0> Builder() {
    return ResumeResultBuilder<0>();
  }

 private:
  ResumeResult() { }

};


// Parameters for the SearchInContent command.
class SearchInContentParams {
 public:
  static std::unique_ptr<SearchInContentParams> Parse(const base::Value& value, ErrorReporter* errors);
  SearchInContentParams(const SearchInContentParams&) = delete;
  SearchInContentParams& operator=(const SearchInContentParams&) = delete;
  ~SearchInContentParams() { }

  // Id of the script to search in.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  // String to search for.
  std::string GetQuery() const { return query_; }
  void SetQuery(const std::string& value) { query_ = value; }

  // If true, search is case sensitive.
  bool HasCaseSensitive() const { return !!case_sensitive_; }
  bool GetCaseSensitive() const { DCHECK(HasCaseSensitive()); return case_sensitive_.value(); }
  void SetCaseSensitive(bool value) { case_sensitive_ = value; }

  // If true, treats string parameter as regex.
  bool HasIsRegex() const { return !!is_regex_; }
  bool GetIsRegex() const { DCHECK(HasIsRegex()); return is_regex_.value(); }
  void SetIsRegex(bool value) { is_regex_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SearchInContentParams> Clone() const;

  template<int STATE>
  class SearchInContentParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kQuerySet = 1 << 2,
      kAllRequiredFieldsSet = (kScriptIdSet | kQuerySet | 0)
    };

    SearchInContentParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    SearchInContentParamsBuilder<STATE | kQuerySet>& SetQuery(const std::string& value) {
      static_assert(!(STATE & kQuerySet), "property query should not have already been set");
      result_->SetQuery(value);
      return CastState<kQuerySet>();
    }

    SearchInContentParamsBuilder<STATE>& SetCaseSensitive(bool value) {
      result_->SetCaseSensitive(value);
      return *this;
    }

    SearchInContentParamsBuilder<STATE>& SetIsRegex(bool value) {
      result_->SetIsRegex(value);
      return *this;
    }

    std::unique_ptr<SearchInContentParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SearchInContentParams;
    SearchInContentParamsBuilder() : result_(new SearchInContentParams()) { }

    template<int STEP> SearchInContentParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SearchInContentParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SearchInContentParams> result_;
  };

  static SearchInContentParamsBuilder<0> Builder() {
    return SearchInContentParamsBuilder<0>();
  }

 private:
  SearchInContentParams() { }

  std::string script_id_;
  std::string query_;
  absl::optional<bool> case_sensitive_;
  absl::optional<bool> is_regex_;
};


// Result for the SearchInContent command.
class SearchInContentResult {
 public:
  static std::unique_ptr<SearchInContentResult> Parse(const base::Value& value, ErrorReporter* errors);
  SearchInContentResult(const SearchInContentResult&) = delete;
  SearchInContentResult& operator=(const SearchInContentResult&) = delete;
  ~SearchInContentResult() { }

  // List of search matches.
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::SearchMatch>>* GetResult() const { return &result_; }
  void SetResult(std::vector<std::unique_ptr<::autofill_assistant::debugger::SearchMatch>> value) { result_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SearchInContentResult> Clone() const;

  template<int STATE>
  class SearchInContentResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResultSet = 1 << 1,
      kAllRequiredFieldsSet = (kResultSet | 0)
    };

    SearchInContentResultBuilder<STATE | kResultSet>& SetResult(std::vector<std::unique_ptr<::autofill_assistant::debugger::SearchMatch>> value) {
      static_assert(!(STATE & kResultSet), "property result should not have already been set");
      result_->SetResult(std::move(value));
      return CastState<kResultSet>();
    }

    std::unique_ptr<SearchInContentResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SearchInContentResult;
    SearchInContentResultBuilder() : result_(new SearchInContentResult()) { }

    template<int STEP> SearchInContentResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SearchInContentResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SearchInContentResult> result_;
  };

  static SearchInContentResultBuilder<0> Builder() {
    return SearchInContentResultBuilder<0>();
  }

 private:
  SearchInContentResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::debugger::SearchMatch>> result_;
};


// Parameters for the SetAsyncCallStackDepth command.
class SetAsyncCallStackDepthParams {
 public:
  static std::unique_ptr<SetAsyncCallStackDepthParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetAsyncCallStackDepthParams(const SetAsyncCallStackDepthParams&) = delete;
  SetAsyncCallStackDepthParams& operator=(const SetAsyncCallStackDepthParams&) = delete;
  ~SetAsyncCallStackDepthParams() { }

  // Maximum depth of async call stacks. Setting to `0` will effectively disable collecting async
  // call stacks (default).
  int GetMaxDepth() const { return max_depth_; }
  void SetMaxDepth(int value) { max_depth_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAsyncCallStackDepthParams> Clone() const;

  template<int STATE>
  class SetAsyncCallStackDepthParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kMaxDepthSet = 1 << 1,
      kAllRequiredFieldsSet = (kMaxDepthSet | 0)
    };

    SetAsyncCallStackDepthParamsBuilder<STATE | kMaxDepthSet>& SetMaxDepth(int value) {
      static_assert(!(STATE & kMaxDepthSet), "property maxDepth should not have already been set");
      result_->SetMaxDepth(value);
      return CastState<kMaxDepthSet>();
    }

    std::unique_ptr<SetAsyncCallStackDepthParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAsyncCallStackDepthParams;
    SetAsyncCallStackDepthParamsBuilder() : result_(new SetAsyncCallStackDepthParams()) { }

    template<int STEP> SetAsyncCallStackDepthParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAsyncCallStackDepthParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAsyncCallStackDepthParams> result_;
  };

  static SetAsyncCallStackDepthParamsBuilder<0> Builder() {
    return SetAsyncCallStackDepthParamsBuilder<0>();
  }

 private:
  SetAsyncCallStackDepthParams() { }

  int max_depth_;
};


// Result for the SetAsyncCallStackDepth command.
class SetAsyncCallStackDepthResult {
 public:
  static std::unique_ptr<SetAsyncCallStackDepthResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetAsyncCallStackDepthResult(const SetAsyncCallStackDepthResult&) = delete;
  SetAsyncCallStackDepthResult& operator=(const SetAsyncCallStackDepthResult&) = delete;
  ~SetAsyncCallStackDepthResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAsyncCallStackDepthResult> Clone() const;

  template<int STATE>
  class SetAsyncCallStackDepthResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetAsyncCallStackDepthResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAsyncCallStackDepthResult;
    SetAsyncCallStackDepthResultBuilder() : result_(new SetAsyncCallStackDepthResult()) { }

    template<int STEP> SetAsyncCallStackDepthResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAsyncCallStackDepthResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAsyncCallStackDepthResult> result_;
  };

  static SetAsyncCallStackDepthResultBuilder<0> Builder() {
    return SetAsyncCallStackDepthResultBuilder<0>();
  }

 private:
  SetAsyncCallStackDepthResult() { }

};


// Parameters for the SetBlackboxPatterns command.
class SetBlackboxPatternsParams {
 public:
  static std::unique_ptr<SetBlackboxPatternsParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetBlackboxPatternsParams(const SetBlackboxPatternsParams&) = delete;
  SetBlackboxPatternsParams& operator=(const SetBlackboxPatternsParams&) = delete;
  ~SetBlackboxPatternsParams() { }

  // Array of regexps that will be used to check script url for blackbox state.
  const std::vector<std::string>* GetPatterns() const { return &patterns_; }
  void SetPatterns(std::vector<std::string> value) { patterns_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBlackboxPatternsParams> Clone() const;

  template<int STATE>
  class SetBlackboxPatternsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPatternsSet = 1 << 1,
      kAllRequiredFieldsSet = (kPatternsSet | 0)
    };

    SetBlackboxPatternsParamsBuilder<STATE | kPatternsSet>& SetPatterns(std::vector<std::string> value) {
      static_assert(!(STATE & kPatternsSet), "property patterns should not have already been set");
      result_->SetPatterns(std::move(value));
      return CastState<kPatternsSet>();
    }

    std::unique_ptr<SetBlackboxPatternsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBlackboxPatternsParams;
    SetBlackboxPatternsParamsBuilder() : result_(new SetBlackboxPatternsParams()) { }

    template<int STEP> SetBlackboxPatternsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBlackboxPatternsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBlackboxPatternsParams> result_;
  };

  static SetBlackboxPatternsParamsBuilder<0> Builder() {
    return SetBlackboxPatternsParamsBuilder<0>();
  }

 private:
  SetBlackboxPatternsParams() { }

  std::vector<std::string> patterns_;
};


// Result for the SetBlackboxPatterns command.
class SetBlackboxPatternsResult {
 public:
  static std::unique_ptr<SetBlackboxPatternsResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetBlackboxPatternsResult(const SetBlackboxPatternsResult&) = delete;
  SetBlackboxPatternsResult& operator=(const SetBlackboxPatternsResult&) = delete;
  ~SetBlackboxPatternsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBlackboxPatternsResult> Clone() const;

  template<int STATE>
  class SetBlackboxPatternsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetBlackboxPatternsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBlackboxPatternsResult;
    SetBlackboxPatternsResultBuilder() : result_(new SetBlackboxPatternsResult()) { }

    template<int STEP> SetBlackboxPatternsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBlackboxPatternsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBlackboxPatternsResult> result_;
  };

  static SetBlackboxPatternsResultBuilder<0> Builder() {
    return SetBlackboxPatternsResultBuilder<0>();
  }

 private:
  SetBlackboxPatternsResult() { }

};


// Parameters for the SetBlackboxedRanges command.
class SetBlackboxedRangesParams {
 public:
  static std::unique_ptr<SetBlackboxedRangesParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetBlackboxedRangesParams(const SetBlackboxedRangesParams&) = delete;
  SetBlackboxedRangesParams& operator=(const SetBlackboxedRangesParams&) = delete;
  ~SetBlackboxedRangesParams() { }

  // Id of the script.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  const std::vector<std::unique_ptr<::autofill_assistant::debugger::ScriptPosition>>* GetPositions() const { return &positions_; }
  void SetPositions(std::vector<std::unique_ptr<::autofill_assistant::debugger::ScriptPosition>> value) { positions_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBlackboxedRangesParams> Clone() const;

  template<int STATE>
  class SetBlackboxedRangesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kPositionsSet = 1 << 2,
      kAllRequiredFieldsSet = (kScriptIdSet | kPositionsSet | 0)
    };

    SetBlackboxedRangesParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    SetBlackboxedRangesParamsBuilder<STATE | kPositionsSet>& SetPositions(std::vector<std::unique_ptr<::autofill_assistant::debugger::ScriptPosition>> value) {
      static_assert(!(STATE & kPositionsSet), "property positions should not have already been set");
      result_->SetPositions(std::move(value));
      return CastState<kPositionsSet>();
    }

    std::unique_ptr<SetBlackboxedRangesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBlackboxedRangesParams;
    SetBlackboxedRangesParamsBuilder() : result_(new SetBlackboxedRangesParams()) { }

    template<int STEP> SetBlackboxedRangesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBlackboxedRangesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBlackboxedRangesParams> result_;
  };

  static SetBlackboxedRangesParamsBuilder<0> Builder() {
    return SetBlackboxedRangesParamsBuilder<0>();
  }

 private:
  SetBlackboxedRangesParams() { }

  std::string script_id_;
  std::vector<std::unique_ptr<::autofill_assistant::debugger::ScriptPosition>> positions_;
};


// Result for the SetBlackboxedRanges command.
class SetBlackboxedRangesResult {
 public:
  static std::unique_ptr<SetBlackboxedRangesResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetBlackboxedRangesResult(const SetBlackboxedRangesResult&) = delete;
  SetBlackboxedRangesResult& operator=(const SetBlackboxedRangesResult&) = delete;
  ~SetBlackboxedRangesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBlackboxedRangesResult> Clone() const;

  template<int STATE>
  class SetBlackboxedRangesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetBlackboxedRangesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBlackboxedRangesResult;
    SetBlackboxedRangesResultBuilder() : result_(new SetBlackboxedRangesResult()) { }

    template<int STEP> SetBlackboxedRangesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBlackboxedRangesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBlackboxedRangesResult> result_;
  };

  static SetBlackboxedRangesResultBuilder<0> Builder() {
    return SetBlackboxedRangesResultBuilder<0>();
  }

 private:
  SetBlackboxedRangesResult() { }

};


// Parameters for the SetBreakpoint command.
class SetBreakpointParams {
 public:
  static std::unique_ptr<SetBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointParams(const SetBreakpointParams&) = delete;
  SetBreakpointParams& operator=(const SetBreakpointParams&) = delete;
  ~SetBreakpointParams() { }

  // Location to set breakpoint in.
  const ::autofill_assistant::debugger::Location* GetLocation() const { return location_.get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { location_ = std::move(value); }

  // Expression to use as a breakpoint condition. When specified, debugger will only stop on the
  // breakpoint if this expression evaluates to true.
  bool HasCondition() const { return !!condition_; }
  std::string GetCondition() const { DCHECK(HasCondition()); return condition_.value(); }
  void SetCondition(const std::string& value) { condition_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointParams> Clone() const;

  template<int STATE>
  class SetBreakpointParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLocationSet = 1 << 1,
      kAllRequiredFieldsSet = (kLocationSet | 0)
    };

    SetBreakpointParamsBuilder<STATE | kLocationSet>& SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      static_assert(!(STATE & kLocationSet), "property location should not have already been set");
      result_->SetLocation(std::move(value));
      return CastState<kLocationSet>();
    }

    SetBreakpointParamsBuilder<STATE>& SetCondition(const std::string& value) {
      result_->SetCondition(value);
      return *this;
    }

    std::unique_ptr<SetBreakpointParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointParams;
    SetBreakpointParamsBuilder() : result_(new SetBreakpointParams()) { }

    template<int STEP> SetBreakpointParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointParams> result_;
  };

  static SetBreakpointParamsBuilder<0> Builder() {
    return SetBreakpointParamsBuilder<0>();
  }

 private:
  SetBreakpointParams() { }

  std::unique_ptr<::autofill_assistant::debugger::Location> location_;
  absl::optional<std::string> condition_;
};


// Result for the SetBreakpoint command.
class SetBreakpointResult {
 public:
  static std::unique_ptr<SetBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointResult(const SetBreakpointResult&) = delete;
  SetBreakpointResult& operator=(const SetBreakpointResult&) = delete;
  ~SetBreakpointResult() { }

  // Id of the created breakpoint for further reference.
  std::string GetBreakpointId() const { return breakpoint_id_; }
  void SetBreakpointId(const std::string& value) { breakpoint_id_ = value; }

  // Location this breakpoint resolved into.
  const ::autofill_assistant::debugger::Location* GetActualLocation() const { return actual_location_.get(); }
  void SetActualLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { actual_location_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointResult> Clone() const;

  template<int STATE>
  class SetBreakpointResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBreakpointIdSet = 1 << 1,
    kActualLocationSet = 1 << 2,
      kAllRequiredFieldsSet = (kBreakpointIdSet | kActualLocationSet | 0)
    };

    SetBreakpointResultBuilder<STATE | kBreakpointIdSet>& SetBreakpointId(const std::string& value) {
      static_assert(!(STATE & kBreakpointIdSet), "property breakpointId should not have already been set");
      result_->SetBreakpointId(value);
      return CastState<kBreakpointIdSet>();
    }

    SetBreakpointResultBuilder<STATE | kActualLocationSet>& SetActualLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      static_assert(!(STATE & kActualLocationSet), "property actualLocation should not have already been set");
      result_->SetActualLocation(std::move(value));
      return CastState<kActualLocationSet>();
    }

    std::unique_ptr<SetBreakpointResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointResult;
    SetBreakpointResultBuilder() : result_(new SetBreakpointResult()) { }

    template<int STEP> SetBreakpointResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointResult> result_;
  };

  static SetBreakpointResultBuilder<0> Builder() {
    return SetBreakpointResultBuilder<0>();
  }

 private:
  SetBreakpointResult() { }

  std::string breakpoint_id_;
  std::unique_ptr<::autofill_assistant::debugger::Location> actual_location_;
};


// Parameters for the SetInstrumentationBreakpoint command.
class SetInstrumentationBreakpointParams {
 public:
  static std::unique_ptr<SetInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetInstrumentationBreakpointParams(const SetInstrumentationBreakpointParams&) = delete;
  SetInstrumentationBreakpointParams& operator=(const SetInstrumentationBreakpointParams&) = delete;
  ~SetInstrumentationBreakpointParams() { }

  // Instrumentation name.
  ::autofill_assistant::debugger::SetInstrumentationBreakpointInstrumentation GetInstrumentation() const { return instrumentation_; }
  void SetInstrumentation(::autofill_assistant::debugger::SetInstrumentationBreakpointInstrumentation value) { instrumentation_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInstrumentationBreakpointParams> Clone() const;

  template<int STATE>
  class SetInstrumentationBreakpointParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kInstrumentationSet = 1 << 1,
      kAllRequiredFieldsSet = (kInstrumentationSet | 0)
    };

    SetInstrumentationBreakpointParamsBuilder<STATE | kInstrumentationSet>& SetInstrumentation(::autofill_assistant::debugger::SetInstrumentationBreakpointInstrumentation value) {
      static_assert(!(STATE & kInstrumentationSet), "property instrumentation should not have already been set");
      result_->SetInstrumentation(value);
      return CastState<kInstrumentationSet>();
    }

    std::unique_ptr<SetInstrumentationBreakpointParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetInstrumentationBreakpointParams;
    SetInstrumentationBreakpointParamsBuilder() : result_(new SetInstrumentationBreakpointParams()) { }

    template<int STEP> SetInstrumentationBreakpointParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetInstrumentationBreakpointParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetInstrumentationBreakpointParams> result_;
  };

  static SetInstrumentationBreakpointParamsBuilder<0> Builder() {
    return SetInstrumentationBreakpointParamsBuilder<0>();
  }

 private:
  SetInstrumentationBreakpointParams() { }

  ::autofill_assistant::debugger::SetInstrumentationBreakpointInstrumentation instrumentation_;
};


// Result for the SetInstrumentationBreakpoint command.
class SetInstrumentationBreakpointResult {
 public:
  static std::unique_ptr<SetInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetInstrumentationBreakpointResult(const SetInstrumentationBreakpointResult&) = delete;
  SetInstrumentationBreakpointResult& operator=(const SetInstrumentationBreakpointResult&) = delete;
  ~SetInstrumentationBreakpointResult() { }

  // Id of the created breakpoint for further reference.
  std::string GetBreakpointId() const { return breakpoint_id_; }
  void SetBreakpointId(const std::string& value) { breakpoint_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInstrumentationBreakpointResult> Clone() const;

  template<int STATE>
  class SetInstrumentationBreakpointResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBreakpointIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kBreakpointIdSet | 0)
    };

    SetInstrumentationBreakpointResultBuilder<STATE | kBreakpointIdSet>& SetBreakpointId(const std::string& value) {
      static_assert(!(STATE & kBreakpointIdSet), "property breakpointId should not have already been set");
      result_->SetBreakpointId(value);
      return CastState<kBreakpointIdSet>();
    }

    std::unique_ptr<SetInstrumentationBreakpointResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetInstrumentationBreakpointResult;
    SetInstrumentationBreakpointResultBuilder() : result_(new SetInstrumentationBreakpointResult()) { }

    template<int STEP> SetInstrumentationBreakpointResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetInstrumentationBreakpointResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetInstrumentationBreakpointResult> result_;
  };

  static SetInstrumentationBreakpointResultBuilder<0> Builder() {
    return SetInstrumentationBreakpointResultBuilder<0>();
  }

 private:
  SetInstrumentationBreakpointResult() { }

  std::string breakpoint_id_;
};


// Parameters for the SetBreakpointByUrl command.
class SetBreakpointByUrlParams {
 public:
  static std::unique_ptr<SetBreakpointByUrlParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointByUrlParams(const SetBreakpointByUrlParams&) = delete;
  SetBreakpointByUrlParams& operator=(const SetBreakpointByUrlParams&) = delete;
  ~SetBreakpointByUrlParams() { }

  // Line number to set breakpoint at.
  int GetLineNumber() const { return line_number_; }
  void SetLineNumber(int value) { line_number_ = value; }

  // URL of the resources to set breakpoint on.
  bool HasUrl() const { return !!url_; }
  std::string GetUrl() const { DCHECK(HasUrl()); return url_.value(); }
  void SetUrl(const std::string& value) { url_ = value; }

  // Regex pattern for the URLs of the resources to set breakpoints on. Either `url` or
  // `urlRegex` must be specified.
  bool HasUrlRegex() const { return !!url_regex_; }
  std::string GetUrlRegex() const { DCHECK(HasUrlRegex()); return url_regex_.value(); }
  void SetUrlRegex(const std::string& value) { url_regex_ = value; }

  // Script hash of the resources to set breakpoint on.
  bool HasScriptHash() const { return !!script_hash_; }
  std::string GetScriptHash() const { DCHECK(HasScriptHash()); return script_hash_.value(); }
  void SetScriptHash(const std::string& value) { script_hash_ = value; }

  // Offset in the line to set breakpoint at.
  bool HasColumnNumber() const { return !!column_number_; }
  int GetColumnNumber() const { DCHECK(HasColumnNumber()); return column_number_.value(); }
  void SetColumnNumber(int value) { column_number_ = value; }

  // Expression to use as a breakpoint condition. When specified, debugger will only stop on the
  // breakpoint if this expression evaluates to true.
  bool HasCondition() const { return !!condition_; }
  std::string GetCondition() const { DCHECK(HasCondition()); return condition_.value(); }
  void SetCondition(const std::string& value) { condition_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointByUrlParams> Clone() const;

  template<int STATE>
  class SetBreakpointByUrlParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLineNumberSet = 1 << 1,
      kAllRequiredFieldsSet = (kLineNumberSet | 0)
    };

    SetBreakpointByUrlParamsBuilder<STATE | kLineNumberSet>& SetLineNumber(int value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    SetBreakpointByUrlParamsBuilder<STATE>& SetUrl(const std::string& value) {
      result_->SetUrl(value);
      return *this;
    }

    SetBreakpointByUrlParamsBuilder<STATE>& SetUrlRegex(const std::string& value) {
      result_->SetUrlRegex(value);
      return *this;
    }

    SetBreakpointByUrlParamsBuilder<STATE>& SetScriptHash(const std::string& value) {
      result_->SetScriptHash(value);
      return *this;
    }

    SetBreakpointByUrlParamsBuilder<STATE>& SetColumnNumber(int value) {
      result_->SetColumnNumber(value);
      return *this;
    }

    SetBreakpointByUrlParamsBuilder<STATE>& SetCondition(const std::string& value) {
      result_->SetCondition(value);
      return *this;
    }

    std::unique_ptr<SetBreakpointByUrlParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointByUrlParams;
    SetBreakpointByUrlParamsBuilder() : result_(new SetBreakpointByUrlParams()) { }

    template<int STEP> SetBreakpointByUrlParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointByUrlParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointByUrlParams> result_;
  };

  static SetBreakpointByUrlParamsBuilder<0> Builder() {
    return SetBreakpointByUrlParamsBuilder<0>();
  }

 private:
  SetBreakpointByUrlParams() { }

  int line_number_;
  absl::optional<std::string> url_;
  absl::optional<std::string> url_regex_;
  absl::optional<std::string> script_hash_;
  absl::optional<int> column_number_;
  absl::optional<std::string> condition_;
};


// Result for the SetBreakpointByUrl command.
class SetBreakpointByUrlResult {
 public:
  static std::unique_ptr<SetBreakpointByUrlResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointByUrlResult(const SetBreakpointByUrlResult&) = delete;
  SetBreakpointByUrlResult& operator=(const SetBreakpointByUrlResult&) = delete;
  ~SetBreakpointByUrlResult() { }

  // Id of the created breakpoint for further reference.
  std::string GetBreakpointId() const { return breakpoint_id_; }
  void SetBreakpointId(const std::string& value) { breakpoint_id_ = value; }

  // List of the locations this breakpoint resolved into upon addition.
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::Location>>* GetLocations() const { return &locations_; }
  void SetLocations(std::vector<std::unique_ptr<::autofill_assistant::debugger::Location>> value) { locations_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointByUrlResult> Clone() const;

  template<int STATE>
  class SetBreakpointByUrlResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBreakpointIdSet = 1 << 1,
    kLocationsSet = 1 << 2,
      kAllRequiredFieldsSet = (kBreakpointIdSet | kLocationsSet | 0)
    };

    SetBreakpointByUrlResultBuilder<STATE | kBreakpointIdSet>& SetBreakpointId(const std::string& value) {
      static_assert(!(STATE & kBreakpointIdSet), "property breakpointId should not have already been set");
      result_->SetBreakpointId(value);
      return CastState<kBreakpointIdSet>();
    }

    SetBreakpointByUrlResultBuilder<STATE | kLocationsSet>& SetLocations(std::vector<std::unique_ptr<::autofill_assistant::debugger::Location>> value) {
      static_assert(!(STATE & kLocationsSet), "property locations should not have already been set");
      result_->SetLocations(std::move(value));
      return CastState<kLocationsSet>();
    }

    std::unique_ptr<SetBreakpointByUrlResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointByUrlResult;
    SetBreakpointByUrlResultBuilder() : result_(new SetBreakpointByUrlResult()) { }

    template<int STEP> SetBreakpointByUrlResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointByUrlResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointByUrlResult> result_;
  };

  static SetBreakpointByUrlResultBuilder<0> Builder() {
    return SetBreakpointByUrlResultBuilder<0>();
  }

 private:
  SetBreakpointByUrlResult() { }

  std::string breakpoint_id_;
  std::vector<std::unique_ptr<::autofill_assistant::debugger::Location>> locations_;
};


// Parameters for the SetBreakpointOnFunctionCall command.
class SetBreakpointOnFunctionCallParams {
 public:
  static std::unique_ptr<SetBreakpointOnFunctionCallParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointOnFunctionCallParams(const SetBreakpointOnFunctionCallParams&) = delete;
  SetBreakpointOnFunctionCallParams& operator=(const SetBreakpointOnFunctionCallParams&) = delete;
  ~SetBreakpointOnFunctionCallParams() { }

  // Function object id.
  std::string GetObjectId() const { return object_id_; }
  void SetObjectId(const std::string& value) { object_id_ = value; }

  // Expression to use as a breakpoint condition. When specified, debugger will
  // stop on the breakpoint if this expression evaluates to true.
  bool HasCondition() const { return !!condition_; }
  std::string GetCondition() const { DCHECK(HasCondition()); return condition_.value(); }
  void SetCondition(const std::string& value) { condition_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointOnFunctionCallParams> Clone() const;

  template<int STATE>
  class SetBreakpointOnFunctionCallParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kObjectIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kObjectIdSet | 0)
    };

    SetBreakpointOnFunctionCallParamsBuilder<STATE | kObjectIdSet>& SetObjectId(const std::string& value) {
      static_assert(!(STATE & kObjectIdSet), "property objectId should not have already been set");
      result_->SetObjectId(value);
      return CastState<kObjectIdSet>();
    }

    SetBreakpointOnFunctionCallParamsBuilder<STATE>& SetCondition(const std::string& value) {
      result_->SetCondition(value);
      return *this;
    }

    std::unique_ptr<SetBreakpointOnFunctionCallParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointOnFunctionCallParams;
    SetBreakpointOnFunctionCallParamsBuilder() : result_(new SetBreakpointOnFunctionCallParams()) { }

    template<int STEP> SetBreakpointOnFunctionCallParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointOnFunctionCallParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointOnFunctionCallParams> result_;
  };

  static SetBreakpointOnFunctionCallParamsBuilder<0> Builder() {
    return SetBreakpointOnFunctionCallParamsBuilder<0>();
  }

 private:
  SetBreakpointOnFunctionCallParams() { }

  std::string object_id_;
  absl::optional<std::string> condition_;
};


// Result for the SetBreakpointOnFunctionCall command.
class SetBreakpointOnFunctionCallResult {
 public:
  static std::unique_ptr<SetBreakpointOnFunctionCallResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointOnFunctionCallResult(const SetBreakpointOnFunctionCallResult&) = delete;
  SetBreakpointOnFunctionCallResult& operator=(const SetBreakpointOnFunctionCallResult&) = delete;
  ~SetBreakpointOnFunctionCallResult() { }

  // Id of the created breakpoint for further reference.
  std::string GetBreakpointId() const { return breakpoint_id_; }
  void SetBreakpointId(const std::string& value) { breakpoint_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointOnFunctionCallResult> Clone() const;

  template<int STATE>
  class SetBreakpointOnFunctionCallResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBreakpointIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kBreakpointIdSet | 0)
    };

    SetBreakpointOnFunctionCallResultBuilder<STATE | kBreakpointIdSet>& SetBreakpointId(const std::string& value) {
      static_assert(!(STATE & kBreakpointIdSet), "property breakpointId should not have already been set");
      result_->SetBreakpointId(value);
      return CastState<kBreakpointIdSet>();
    }

    std::unique_ptr<SetBreakpointOnFunctionCallResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointOnFunctionCallResult;
    SetBreakpointOnFunctionCallResultBuilder() : result_(new SetBreakpointOnFunctionCallResult()) { }

    template<int STEP> SetBreakpointOnFunctionCallResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointOnFunctionCallResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointOnFunctionCallResult> result_;
  };

  static SetBreakpointOnFunctionCallResultBuilder<0> Builder() {
    return SetBreakpointOnFunctionCallResultBuilder<0>();
  }

 private:
  SetBreakpointOnFunctionCallResult() { }

  std::string breakpoint_id_;
};


// Parameters for the SetBreakpointsActive command.
class SetBreakpointsActiveParams {
 public:
  static std::unique_ptr<SetBreakpointsActiveParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointsActiveParams(const SetBreakpointsActiveParams&) = delete;
  SetBreakpointsActiveParams& operator=(const SetBreakpointsActiveParams&) = delete;
  ~SetBreakpointsActiveParams() { }

  // New value for breakpoints active state.
  bool GetActive() const { return active_; }
  void SetActive(bool value) { active_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointsActiveParams> Clone() const;

  template<int STATE>
  class SetBreakpointsActiveParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kActiveSet = 1 << 1,
      kAllRequiredFieldsSet = (kActiveSet | 0)
    };

    SetBreakpointsActiveParamsBuilder<STATE | kActiveSet>& SetActive(bool value) {
      static_assert(!(STATE & kActiveSet), "property active should not have already been set");
      result_->SetActive(value);
      return CastState<kActiveSet>();
    }

    std::unique_ptr<SetBreakpointsActiveParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointsActiveParams;
    SetBreakpointsActiveParamsBuilder() : result_(new SetBreakpointsActiveParams()) { }

    template<int STEP> SetBreakpointsActiveParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointsActiveParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointsActiveParams> result_;
  };

  static SetBreakpointsActiveParamsBuilder<0> Builder() {
    return SetBreakpointsActiveParamsBuilder<0>();
  }

 private:
  SetBreakpointsActiveParams() { }

  bool active_;
};


// Result for the SetBreakpointsActive command.
class SetBreakpointsActiveResult {
 public:
  static std::unique_ptr<SetBreakpointsActiveResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetBreakpointsActiveResult(const SetBreakpointsActiveResult&) = delete;
  SetBreakpointsActiveResult& operator=(const SetBreakpointsActiveResult&) = delete;
  ~SetBreakpointsActiveResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetBreakpointsActiveResult> Clone() const;

  template<int STATE>
  class SetBreakpointsActiveResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetBreakpointsActiveResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetBreakpointsActiveResult;
    SetBreakpointsActiveResultBuilder() : result_(new SetBreakpointsActiveResult()) { }

    template<int STEP> SetBreakpointsActiveResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetBreakpointsActiveResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetBreakpointsActiveResult> result_;
  };

  static SetBreakpointsActiveResultBuilder<0> Builder() {
    return SetBreakpointsActiveResultBuilder<0>();
  }

 private:
  SetBreakpointsActiveResult() { }

};


// Parameters for the SetPauseOnExceptions command.
class SetPauseOnExceptionsParams {
 public:
  static std::unique_ptr<SetPauseOnExceptionsParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetPauseOnExceptionsParams(const SetPauseOnExceptionsParams&) = delete;
  SetPauseOnExceptionsParams& operator=(const SetPauseOnExceptionsParams&) = delete;
  ~SetPauseOnExceptionsParams() { }

  // Pause on exceptions mode.
  ::autofill_assistant::debugger::SetPauseOnExceptionsState GetState() const { return state_; }
  void SetState(::autofill_assistant::debugger::SetPauseOnExceptionsState value) { state_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetPauseOnExceptionsParams> Clone() const;

  template<int STATE>
  class SetPauseOnExceptionsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStateSet = 1 << 1,
      kAllRequiredFieldsSet = (kStateSet | 0)
    };

    SetPauseOnExceptionsParamsBuilder<STATE | kStateSet>& SetState(::autofill_assistant::debugger::SetPauseOnExceptionsState value) {
      static_assert(!(STATE & kStateSet), "property state should not have already been set");
      result_->SetState(value);
      return CastState<kStateSet>();
    }

    std::unique_ptr<SetPauseOnExceptionsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetPauseOnExceptionsParams;
    SetPauseOnExceptionsParamsBuilder() : result_(new SetPauseOnExceptionsParams()) { }

    template<int STEP> SetPauseOnExceptionsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetPauseOnExceptionsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetPauseOnExceptionsParams> result_;
  };

  static SetPauseOnExceptionsParamsBuilder<0> Builder() {
    return SetPauseOnExceptionsParamsBuilder<0>();
  }

 private:
  SetPauseOnExceptionsParams() { }

  ::autofill_assistant::debugger::SetPauseOnExceptionsState state_;
};


// Result for the SetPauseOnExceptions command.
class SetPauseOnExceptionsResult {
 public:
  static std::unique_ptr<SetPauseOnExceptionsResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetPauseOnExceptionsResult(const SetPauseOnExceptionsResult&) = delete;
  SetPauseOnExceptionsResult& operator=(const SetPauseOnExceptionsResult&) = delete;
  ~SetPauseOnExceptionsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetPauseOnExceptionsResult> Clone() const;

  template<int STATE>
  class SetPauseOnExceptionsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetPauseOnExceptionsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetPauseOnExceptionsResult;
    SetPauseOnExceptionsResultBuilder() : result_(new SetPauseOnExceptionsResult()) { }

    template<int STEP> SetPauseOnExceptionsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetPauseOnExceptionsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetPauseOnExceptionsResult> result_;
  };

  static SetPauseOnExceptionsResultBuilder<0> Builder() {
    return SetPauseOnExceptionsResultBuilder<0>();
  }

 private:
  SetPauseOnExceptionsResult() { }

};


// Parameters for the SetReturnValue command.
class SetReturnValueParams {
 public:
  static std::unique_ptr<SetReturnValueParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetReturnValueParams(const SetReturnValueParams&) = delete;
  SetReturnValueParams& operator=(const SetReturnValueParams&) = delete;
  ~SetReturnValueParams() { }

  // New return value.
  const ::autofill_assistant::runtime::CallArgument* GetNewValue() const { return new_value_.get(); }
  void SetNewValue(std::unique_ptr<::autofill_assistant::runtime::CallArgument> value) { new_value_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetReturnValueParams> Clone() const;

  template<int STATE>
  class SetReturnValueParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNewValueSet = 1 << 1,
      kAllRequiredFieldsSet = (kNewValueSet | 0)
    };

    SetReturnValueParamsBuilder<STATE | kNewValueSet>& SetNewValue(std::unique_ptr<::autofill_assistant::runtime::CallArgument> value) {
      static_assert(!(STATE & kNewValueSet), "property newValue should not have already been set");
      result_->SetNewValue(std::move(value));
      return CastState<kNewValueSet>();
    }

    std::unique_ptr<SetReturnValueParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetReturnValueParams;
    SetReturnValueParamsBuilder() : result_(new SetReturnValueParams()) { }

    template<int STEP> SetReturnValueParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetReturnValueParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetReturnValueParams> result_;
  };

  static SetReturnValueParamsBuilder<0> Builder() {
    return SetReturnValueParamsBuilder<0>();
  }

 private:
  SetReturnValueParams() { }

  std::unique_ptr<::autofill_assistant::runtime::CallArgument> new_value_;
};


// Result for the SetReturnValue command.
class SetReturnValueResult {
 public:
  static std::unique_ptr<SetReturnValueResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetReturnValueResult(const SetReturnValueResult&) = delete;
  SetReturnValueResult& operator=(const SetReturnValueResult&) = delete;
  ~SetReturnValueResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetReturnValueResult> Clone() const;

  template<int STATE>
  class SetReturnValueResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetReturnValueResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetReturnValueResult;
    SetReturnValueResultBuilder() : result_(new SetReturnValueResult()) { }

    template<int STEP> SetReturnValueResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetReturnValueResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetReturnValueResult> result_;
  };

  static SetReturnValueResultBuilder<0> Builder() {
    return SetReturnValueResultBuilder<0>();
  }

 private:
  SetReturnValueResult() { }

};


// Parameters for the SetScriptSource command.
class SetScriptSourceParams {
 public:
  static std::unique_ptr<SetScriptSourceParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetScriptSourceParams(const SetScriptSourceParams&) = delete;
  SetScriptSourceParams& operator=(const SetScriptSourceParams&) = delete;
  ~SetScriptSourceParams() { }

  // Id of the script to edit.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  // New content of the script.
  std::string GetScriptSource() const { return script_source_; }
  void SetScriptSource(const std::string& value) { script_source_ = value; }

  // If true the change will not actually be applied. Dry run may be used to get result
  // description without actually modifying the code.
  bool HasDryRun() const { return !!dry_run_; }
  bool GetDryRun() const { DCHECK(HasDryRun()); return dry_run_.value(); }
  void SetDryRun(bool value) { dry_run_ = value; }

  // If true, then `scriptSource` is allowed to change the function on top of the stack
  // as long as the top-most stack frame is the only activation of that function.
  bool HasAllowTopFrameEditing() const { return !!allow_top_frame_editing_; }
  bool GetAllowTopFrameEditing() const { DCHECK(HasAllowTopFrameEditing()); return allow_top_frame_editing_.value(); }
  void SetAllowTopFrameEditing(bool value) { allow_top_frame_editing_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScriptSourceParams> Clone() const;

  template<int STATE>
  class SetScriptSourceParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kScriptSourceSet = 1 << 2,
      kAllRequiredFieldsSet = (kScriptIdSet | kScriptSourceSet | 0)
    };

    SetScriptSourceParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    SetScriptSourceParamsBuilder<STATE | kScriptSourceSet>& SetScriptSource(const std::string& value) {
      static_assert(!(STATE & kScriptSourceSet), "property scriptSource should not have already been set");
      result_->SetScriptSource(value);
      return CastState<kScriptSourceSet>();
    }

    SetScriptSourceParamsBuilder<STATE>& SetDryRun(bool value) {
      result_->SetDryRun(value);
      return *this;
    }

    SetScriptSourceParamsBuilder<STATE>& SetAllowTopFrameEditing(bool value) {
      result_->SetAllowTopFrameEditing(value);
      return *this;
    }

    std::unique_ptr<SetScriptSourceParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScriptSourceParams;
    SetScriptSourceParamsBuilder() : result_(new SetScriptSourceParams()) { }

    template<int STEP> SetScriptSourceParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScriptSourceParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScriptSourceParams> result_;
  };

  static SetScriptSourceParamsBuilder<0> Builder() {
    return SetScriptSourceParamsBuilder<0>();
  }

 private:
  SetScriptSourceParams() { }

  std::string script_id_;
  std::string script_source_;
  absl::optional<bool> dry_run_;
  absl::optional<bool> allow_top_frame_editing_;
};


// Result for the SetScriptSource command.
class SetScriptSourceResult {
 public:
  static std::unique_ptr<SetScriptSourceResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetScriptSourceResult(const SetScriptSourceResult&) = delete;
  SetScriptSourceResult& operator=(const SetScriptSourceResult&) = delete;
  ~SetScriptSourceResult() { }

  // New stack trace in case editing has happened while VM was stopped.
  bool HasCallFrames() const { return !!call_frames_; }
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>>* GetCallFrames() const { DCHECK(HasCallFrames()); return &call_frames_.value(); }
  void SetCallFrames(std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> value) { call_frames_ = std::move(value); }

  // Whether current call stack  was modified after applying the changes.
  bool HasStackChanged() const { return !!stack_changed_; }
  bool GetStackChanged() const { DCHECK(HasStackChanged()); return stack_changed_.value(); }
  void SetStackChanged(bool value) { stack_changed_ = value; }

  // Async stack trace, if any.
  bool HasAsyncStackTrace() const { return !!async_stack_trace_; }
  const ::autofill_assistant::runtime::StackTrace* GetAsyncStackTrace() const { DCHECK(HasAsyncStackTrace()); return async_stack_trace_.value().get(); }
  void SetAsyncStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) { async_stack_trace_ = std::move(value); }

  // Async stack trace, if any.
  bool HasAsyncStackTraceId() const { return !!async_stack_trace_id_; }
  const ::autofill_assistant::runtime::StackTraceId* GetAsyncStackTraceId() const { DCHECK(HasAsyncStackTraceId()); return async_stack_trace_id_.value().get(); }
  void SetAsyncStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) { async_stack_trace_id_ = std::move(value); }

  // Whether the operation was successful or not. Only `Ok` denotes a
  // successful live edit while the other enum variants denote why
  // the live edit failed.
  ::autofill_assistant::debugger::SetScriptSourceStatus GetStatus() const { return status_; }
  void SetStatus(::autofill_assistant::debugger::SetScriptSourceStatus value) { status_ = value; }

  // Exception details if any. Only present when `status` is `CompileError`.
  bool HasExceptionDetails() const { return !!exception_details_; }
  const ::autofill_assistant::runtime::ExceptionDetails* GetExceptionDetails() const { DCHECK(HasExceptionDetails()); return exception_details_.value().get(); }
  void SetExceptionDetails(std::unique_ptr<::autofill_assistant::runtime::ExceptionDetails> value) { exception_details_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScriptSourceResult> Clone() const;

  template<int STATE>
  class SetScriptSourceResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStatusSet = 1 << 1,
      kAllRequiredFieldsSet = (kStatusSet | 0)
    };

    SetScriptSourceResultBuilder<STATE>& SetCallFrames(std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> value) {
      result_->SetCallFrames(std::move(value));
      return *this;
    }

    SetScriptSourceResultBuilder<STATE>& SetStackChanged(bool value) {
      result_->SetStackChanged(value);
      return *this;
    }

    SetScriptSourceResultBuilder<STATE>& SetAsyncStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) {
      result_->SetAsyncStackTrace(std::move(value));
      return *this;
    }

    SetScriptSourceResultBuilder<STATE>& SetAsyncStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) {
      result_->SetAsyncStackTraceId(std::move(value));
      return *this;
    }

    SetScriptSourceResultBuilder<STATE | kStatusSet>& SetStatus(::autofill_assistant::debugger::SetScriptSourceStatus value) {
      static_assert(!(STATE & kStatusSet), "property status should not have already been set");
      result_->SetStatus(value);
      return CastState<kStatusSet>();
    }

    SetScriptSourceResultBuilder<STATE>& SetExceptionDetails(std::unique_ptr<::autofill_assistant::runtime::ExceptionDetails> value) {
      result_->SetExceptionDetails(std::move(value));
      return *this;
    }

    std::unique_ptr<SetScriptSourceResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScriptSourceResult;
    SetScriptSourceResultBuilder() : result_(new SetScriptSourceResult()) { }

    template<int STEP> SetScriptSourceResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScriptSourceResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScriptSourceResult> result_;
  };

  static SetScriptSourceResultBuilder<0> Builder() {
    return SetScriptSourceResultBuilder<0>();
  }

 private:
  SetScriptSourceResult() { }

  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>>> call_frames_;
  absl::optional<bool> stack_changed_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTrace>> async_stack_trace_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTraceId>> async_stack_trace_id_;
  ::autofill_assistant::debugger::SetScriptSourceStatus status_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::ExceptionDetails>> exception_details_;
};


// Parameters for the SetSkipAllPauses command.
class SetSkipAllPausesParams {
 public:
  static std::unique_ptr<SetSkipAllPausesParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetSkipAllPausesParams(const SetSkipAllPausesParams&) = delete;
  SetSkipAllPausesParams& operator=(const SetSkipAllPausesParams&) = delete;
  ~SetSkipAllPausesParams() { }

  // New value for skip pauses state.
  bool GetSkip() const { return skip_; }
  void SetSkip(bool value) { skip_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSkipAllPausesParams> Clone() const;

  template<int STATE>
  class SetSkipAllPausesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSkipSet = 1 << 1,
      kAllRequiredFieldsSet = (kSkipSet | 0)
    };

    SetSkipAllPausesParamsBuilder<STATE | kSkipSet>& SetSkip(bool value) {
      static_assert(!(STATE & kSkipSet), "property skip should not have already been set");
      result_->SetSkip(value);
      return CastState<kSkipSet>();
    }

    std::unique_ptr<SetSkipAllPausesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSkipAllPausesParams;
    SetSkipAllPausesParamsBuilder() : result_(new SetSkipAllPausesParams()) { }

    template<int STEP> SetSkipAllPausesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSkipAllPausesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSkipAllPausesParams> result_;
  };

  static SetSkipAllPausesParamsBuilder<0> Builder() {
    return SetSkipAllPausesParamsBuilder<0>();
  }

 private:
  SetSkipAllPausesParams() { }

  bool skip_;
};


// Result for the SetSkipAllPauses command.
class SetSkipAllPausesResult {
 public:
  static std::unique_ptr<SetSkipAllPausesResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetSkipAllPausesResult(const SetSkipAllPausesResult&) = delete;
  SetSkipAllPausesResult& operator=(const SetSkipAllPausesResult&) = delete;
  ~SetSkipAllPausesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSkipAllPausesResult> Clone() const;

  template<int STATE>
  class SetSkipAllPausesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetSkipAllPausesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSkipAllPausesResult;
    SetSkipAllPausesResultBuilder() : result_(new SetSkipAllPausesResult()) { }

    template<int STEP> SetSkipAllPausesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSkipAllPausesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSkipAllPausesResult> result_;
  };

  static SetSkipAllPausesResultBuilder<0> Builder() {
    return SetSkipAllPausesResultBuilder<0>();
  }

 private:
  SetSkipAllPausesResult() { }

};


// Parameters for the SetVariableValue command.
class SetVariableValueParams {
 public:
  static std::unique_ptr<SetVariableValueParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetVariableValueParams(const SetVariableValueParams&) = delete;
  SetVariableValueParams& operator=(const SetVariableValueParams&) = delete;
  ~SetVariableValueParams() { }

  // 0-based number of scope as was listed in scope chain. Only 'local', 'closure' and 'catch'
  // scope types are allowed. Other scopes could be manipulated manually.
  int GetScopeNumber() const { return scope_number_; }
  void SetScopeNumber(int value) { scope_number_ = value; }

  // Variable name.
  std::string GetVariableName() const { return variable_name_; }
  void SetVariableName(const std::string& value) { variable_name_ = value; }

  // New variable value.
  const ::autofill_assistant::runtime::CallArgument* GetNewValue() const { return new_value_.get(); }
  void SetNewValue(std::unique_ptr<::autofill_assistant::runtime::CallArgument> value) { new_value_ = std::move(value); }

  // Id of callframe that holds variable.
  std::string GetCallFrameId() const { return call_frame_id_; }
  void SetCallFrameId(const std::string& value) { call_frame_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetVariableValueParams> Clone() const;

  template<int STATE>
  class SetVariableValueParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScopeNumberSet = 1 << 1,
    kVariableNameSet = 1 << 2,
    kNewValueSet = 1 << 3,
    kCallFrameIdSet = 1 << 4,
      kAllRequiredFieldsSet = (kScopeNumberSet | kVariableNameSet | kNewValueSet | kCallFrameIdSet | 0)
    };

    SetVariableValueParamsBuilder<STATE | kScopeNumberSet>& SetScopeNumber(int value) {
      static_assert(!(STATE & kScopeNumberSet), "property scopeNumber should not have already been set");
      result_->SetScopeNumber(value);
      return CastState<kScopeNumberSet>();
    }

    SetVariableValueParamsBuilder<STATE | kVariableNameSet>& SetVariableName(const std::string& value) {
      static_assert(!(STATE & kVariableNameSet), "property variableName should not have already been set");
      result_->SetVariableName(value);
      return CastState<kVariableNameSet>();
    }

    SetVariableValueParamsBuilder<STATE | kNewValueSet>& SetNewValue(std::unique_ptr<::autofill_assistant::runtime::CallArgument> value) {
      static_assert(!(STATE & kNewValueSet), "property newValue should not have already been set");
      result_->SetNewValue(std::move(value));
      return CastState<kNewValueSet>();
    }

    SetVariableValueParamsBuilder<STATE | kCallFrameIdSet>& SetCallFrameId(const std::string& value) {
      static_assert(!(STATE & kCallFrameIdSet), "property callFrameId should not have already been set");
      result_->SetCallFrameId(value);
      return CastState<kCallFrameIdSet>();
    }

    std::unique_ptr<SetVariableValueParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetVariableValueParams;
    SetVariableValueParamsBuilder() : result_(new SetVariableValueParams()) { }

    template<int STEP> SetVariableValueParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetVariableValueParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetVariableValueParams> result_;
  };

  static SetVariableValueParamsBuilder<0> Builder() {
    return SetVariableValueParamsBuilder<0>();
  }

 private:
  SetVariableValueParams() { }

  int scope_number_;
  std::string variable_name_;
  std::unique_ptr<::autofill_assistant::runtime::CallArgument> new_value_;
  std::string call_frame_id_;
};


// Result for the SetVariableValue command.
class SetVariableValueResult {
 public:
  static std::unique_ptr<SetVariableValueResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetVariableValueResult(const SetVariableValueResult&) = delete;
  SetVariableValueResult& operator=(const SetVariableValueResult&) = delete;
  ~SetVariableValueResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetVariableValueResult> Clone() const;

  template<int STATE>
  class SetVariableValueResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetVariableValueResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetVariableValueResult;
    SetVariableValueResultBuilder() : result_(new SetVariableValueResult()) { }

    template<int STEP> SetVariableValueResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetVariableValueResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetVariableValueResult> result_;
  };

  static SetVariableValueResultBuilder<0> Builder() {
    return SetVariableValueResultBuilder<0>();
  }

 private:
  SetVariableValueResult() { }

};


// Parameters for the StepInto command.
class StepIntoParams {
 public:
  static std::unique_ptr<StepIntoParams> Parse(const base::Value& value, ErrorReporter* errors);
  StepIntoParams(const StepIntoParams&) = delete;
  StepIntoParams& operator=(const StepIntoParams&) = delete;
  ~StepIntoParams() { }

  // Debugger will pause on the execution of the first async task which was scheduled
  // before next pause.
  bool HasBreakOnAsyncCall() const { return !!break_on_async_call_; }
  bool GetBreakOnAsyncCall() const { DCHECK(HasBreakOnAsyncCall()); return break_on_async_call_.value(); }
  void SetBreakOnAsyncCall(bool value) { break_on_async_call_ = value; }

  // The skipList specifies location ranges that should be skipped on step into.
  bool HasSkipList() const { return !!skip_list_; }
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>>* GetSkipList() const { DCHECK(HasSkipList()); return &skip_list_.value(); }
  void SetSkipList(std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>> value) { skip_list_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StepIntoParams> Clone() const;

  template<int STATE>
  class StepIntoParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    StepIntoParamsBuilder<STATE>& SetBreakOnAsyncCall(bool value) {
      result_->SetBreakOnAsyncCall(value);
      return *this;
    }

    StepIntoParamsBuilder<STATE>& SetSkipList(std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>> value) {
      result_->SetSkipList(std::move(value));
      return *this;
    }

    std::unique_ptr<StepIntoParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StepIntoParams;
    StepIntoParamsBuilder() : result_(new StepIntoParams()) { }

    template<int STEP> StepIntoParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StepIntoParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StepIntoParams> result_;
  };

  static StepIntoParamsBuilder<0> Builder() {
    return StepIntoParamsBuilder<0>();
  }

 private:
  StepIntoParams() { }

  absl::optional<bool> break_on_async_call_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>>> skip_list_;
};


// Result for the StepInto command.
class StepIntoResult {
 public:
  static std::unique_ptr<StepIntoResult> Parse(const base::Value& value, ErrorReporter* errors);
  StepIntoResult(const StepIntoResult&) = delete;
  StepIntoResult& operator=(const StepIntoResult&) = delete;
  ~StepIntoResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StepIntoResult> Clone() const;

  template<int STATE>
  class StepIntoResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StepIntoResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StepIntoResult;
    StepIntoResultBuilder() : result_(new StepIntoResult()) { }

    template<int STEP> StepIntoResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StepIntoResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StepIntoResult> result_;
  };

  static StepIntoResultBuilder<0> Builder() {
    return StepIntoResultBuilder<0>();
  }

 private:
  StepIntoResult() { }

};


// Parameters for the StepOut command.
class StepOutParams {
 public:
  static std::unique_ptr<StepOutParams> Parse(const base::Value& value, ErrorReporter* errors);
  StepOutParams(const StepOutParams&) = delete;
  StepOutParams& operator=(const StepOutParams&) = delete;
  ~StepOutParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StepOutParams> Clone() const;

  template<int STATE>
  class StepOutParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StepOutParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StepOutParams;
    StepOutParamsBuilder() : result_(new StepOutParams()) { }

    template<int STEP> StepOutParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StepOutParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StepOutParams> result_;
  };

  static StepOutParamsBuilder<0> Builder() {
    return StepOutParamsBuilder<0>();
  }

 private:
  StepOutParams() { }

};


// Result for the StepOut command.
class StepOutResult {
 public:
  static std::unique_ptr<StepOutResult> Parse(const base::Value& value, ErrorReporter* errors);
  StepOutResult(const StepOutResult&) = delete;
  StepOutResult& operator=(const StepOutResult&) = delete;
  ~StepOutResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StepOutResult> Clone() const;

  template<int STATE>
  class StepOutResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StepOutResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StepOutResult;
    StepOutResultBuilder() : result_(new StepOutResult()) { }

    template<int STEP> StepOutResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StepOutResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StepOutResult> result_;
  };

  static StepOutResultBuilder<0> Builder() {
    return StepOutResultBuilder<0>();
  }

 private:
  StepOutResult() { }

};


// Parameters for the StepOver command.
class StepOverParams {
 public:
  static std::unique_ptr<StepOverParams> Parse(const base::Value& value, ErrorReporter* errors);
  StepOverParams(const StepOverParams&) = delete;
  StepOverParams& operator=(const StepOverParams&) = delete;
  ~StepOverParams() { }

  // The skipList specifies location ranges that should be skipped on step over.
  bool HasSkipList() const { return !!skip_list_; }
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>>* GetSkipList() const { DCHECK(HasSkipList()); return &skip_list_.value(); }
  void SetSkipList(std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>> value) { skip_list_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StepOverParams> Clone() const;

  template<int STATE>
  class StepOverParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    StepOverParamsBuilder<STATE>& SetSkipList(std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>> value) {
      result_->SetSkipList(std::move(value));
      return *this;
    }

    std::unique_ptr<StepOverParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StepOverParams;
    StepOverParamsBuilder() : result_(new StepOverParams()) { }

    template<int STEP> StepOverParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StepOverParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StepOverParams> result_;
  };

  static StepOverParamsBuilder<0> Builder() {
    return StepOverParamsBuilder<0>();
  }

 private:
  StepOverParams() { }

  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::debugger::LocationRange>>> skip_list_;
};


// Result for the StepOver command.
class StepOverResult {
 public:
  static std::unique_ptr<StepOverResult> Parse(const base::Value& value, ErrorReporter* errors);
  StepOverResult(const StepOverResult&) = delete;
  StepOverResult& operator=(const StepOverResult&) = delete;
  ~StepOverResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StepOverResult> Clone() const;

  template<int STATE>
  class StepOverResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StepOverResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StepOverResult;
    StepOverResultBuilder() : result_(new StepOverResult()) { }

    template<int STEP> StepOverResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StepOverResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StepOverResult> result_;
  };

  static StepOverResultBuilder<0> Builder() {
    return StepOverResultBuilder<0>();
  }

 private:
  StepOverResult() { }

};


// Parameters for the BreakpointResolved event.
class BreakpointResolvedParams {
 public:
  static std::unique_ptr<BreakpointResolvedParams> Parse(const base::Value& value, ErrorReporter* errors);
  BreakpointResolvedParams(const BreakpointResolvedParams&) = delete;
  BreakpointResolvedParams& operator=(const BreakpointResolvedParams&) = delete;
  ~BreakpointResolvedParams() { }

  // Breakpoint unique identifier.
  std::string GetBreakpointId() const { return breakpoint_id_; }
  void SetBreakpointId(const std::string& value) { breakpoint_id_ = value; }

  // Actual breakpoint location.
  const ::autofill_assistant::debugger::Location* GetLocation() const { return location_.get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) { location_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<BreakpointResolvedParams> Clone() const;

  template<int STATE>
  class BreakpointResolvedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBreakpointIdSet = 1 << 1,
    kLocationSet = 1 << 2,
      kAllRequiredFieldsSet = (kBreakpointIdSet | kLocationSet | 0)
    };

    BreakpointResolvedParamsBuilder<STATE | kBreakpointIdSet>& SetBreakpointId(const std::string& value) {
      static_assert(!(STATE & kBreakpointIdSet), "property breakpointId should not have already been set");
      result_->SetBreakpointId(value);
      return CastState<kBreakpointIdSet>();
    }

    BreakpointResolvedParamsBuilder<STATE | kLocationSet>& SetLocation(std::unique_ptr<::autofill_assistant::debugger::Location> value) {
      static_assert(!(STATE & kLocationSet), "property location should not have already been set");
      result_->SetLocation(std::move(value));
      return CastState<kLocationSet>();
    }

    std::unique_ptr<BreakpointResolvedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class BreakpointResolvedParams;
    BreakpointResolvedParamsBuilder() : result_(new BreakpointResolvedParams()) { }

    template<int STEP> BreakpointResolvedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BreakpointResolvedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<BreakpointResolvedParams> result_;
  };

  static BreakpointResolvedParamsBuilder<0> Builder() {
    return BreakpointResolvedParamsBuilder<0>();
  }

 private:
  BreakpointResolvedParams() { }

  std::string breakpoint_id_;
  std::unique_ptr<::autofill_assistant::debugger::Location> location_;
};


// Parameters for the Paused event.
class PausedParams {
 public:
  static std::unique_ptr<PausedParams> Parse(const base::Value& value, ErrorReporter* errors);
  PausedParams(const PausedParams&) = delete;
  PausedParams& operator=(const PausedParams&) = delete;
  ~PausedParams() { }

  // Call stack the virtual machine stopped on.
  const std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>>* GetCallFrames() const { return &call_frames_; }
  void SetCallFrames(std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> value) { call_frames_ = std::move(value); }

  // Pause reason.
  ::autofill_assistant::debugger::PausedReason GetReason() const { return reason_; }
  void SetReason(::autofill_assistant::debugger::PausedReason value) { reason_ = value; }

  // Object containing break-specific auxiliary properties.
  bool HasData() const { return !!data_; }
  const base::Value* GetData() const { DCHECK(HasData()); return data_.value().get(); }
  void SetData(std::unique_ptr<base::Value> value) { data_ = std::move(value); }

  // Hit breakpoints IDs
  bool HasHitBreakpoints() const { return !!hit_breakpoints_; }
  const std::vector<std::string>* GetHitBreakpoints() const { DCHECK(HasHitBreakpoints()); return &hit_breakpoints_.value(); }
  void SetHitBreakpoints(std::vector<std::string> value) { hit_breakpoints_ = std::move(value); }

  // Async stack trace, if any.
  bool HasAsyncStackTrace() const { return !!async_stack_trace_; }
  const ::autofill_assistant::runtime::StackTrace* GetAsyncStackTrace() const { DCHECK(HasAsyncStackTrace()); return async_stack_trace_.value().get(); }
  void SetAsyncStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) { async_stack_trace_ = std::move(value); }

  // Async stack trace, if any.
  bool HasAsyncStackTraceId() const { return !!async_stack_trace_id_; }
  const ::autofill_assistant::runtime::StackTraceId* GetAsyncStackTraceId() const { DCHECK(HasAsyncStackTraceId()); return async_stack_trace_id_.value().get(); }
  void SetAsyncStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) { async_stack_trace_id_ = std::move(value); }

  // Never present, will be removed.
  bool HasAsyncCallStackTraceId() const { return !!async_call_stack_trace_id_; }
  const ::autofill_assistant::runtime::StackTraceId* GetAsyncCallStackTraceId() const { DCHECK(HasAsyncCallStackTraceId()); return async_call_stack_trace_id_.value().get(); }
  void SetAsyncCallStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) { async_call_stack_trace_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PausedParams> Clone() const;

  template<int STATE>
  class PausedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCallFramesSet = 1 << 1,
    kReasonSet = 1 << 2,
      kAllRequiredFieldsSet = (kCallFramesSet | kReasonSet | 0)
    };

    PausedParamsBuilder<STATE | kCallFramesSet>& SetCallFrames(std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> value) {
      static_assert(!(STATE & kCallFramesSet), "property callFrames should not have already been set");
      result_->SetCallFrames(std::move(value));
      return CastState<kCallFramesSet>();
    }

    PausedParamsBuilder<STATE | kReasonSet>& SetReason(::autofill_assistant::debugger::PausedReason value) {
      static_assert(!(STATE & kReasonSet), "property reason should not have already been set");
      result_->SetReason(value);
      return CastState<kReasonSet>();
    }

    PausedParamsBuilder<STATE>& SetData(std::unique_ptr<base::Value> value) {
      result_->SetData(std::move(value));
      return *this;
    }

    PausedParamsBuilder<STATE>& SetHitBreakpoints(std::vector<std::string> value) {
      result_->SetHitBreakpoints(std::move(value));
      return *this;
    }

    PausedParamsBuilder<STATE>& SetAsyncStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) {
      result_->SetAsyncStackTrace(std::move(value));
      return *this;
    }

    PausedParamsBuilder<STATE>& SetAsyncStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) {
      result_->SetAsyncStackTraceId(std::move(value));
      return *this;
    }

    PausedParamsBuilder<STATE>& SetAsyncCallStackTraceId(std::unique_ptr<::autofill_assistant::runtime::StackTraceId> value) {
      result_->SetAsyncCallStackTraceId(std::move(value));
      return *this;
    }

    std::unique_ptr<PausedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PausedParams;
    PausedParamsBuilder() : result_(new PausedParams()) { }

    template<int STEP> PausedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PausedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PausedParams> result_;
  };

  static PausedParamsBuilder<0> Builder() {
    return PausedParamsBuilder<0>();
  }

 private:
  PausedParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::debugger::CallFrame>> call_frames_;
  ::autofill_assistant::debugger::PausedReason reason_;
  absl::optional<std::unique_ptr<base::Value>> data_;
  absl::optional<std::vector<std::string>> hit_breakpoints_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTrace>> async_stack_trace_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTraceId>> async_stack_trace_id_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTraceId>> async_call_stack_trace_id_;
};


// Parameters for the Resumed event.
class ResumedParams {
 public:
  static std::unique_ptr<ResumedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ResumedParams(const ResumedParams&) = delete;
  ResumedParams& operator=(const ResumedParams&) = delete;
  ~ResumedParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ResumedParams> Clone() const;

  template<int STATE>
  class ResumedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ResumedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ResumedParams;
    ResumedParamsBuilder() : result_(new ResumedParams()) { }

    template<int STEP> ResumedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ResumedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ResumedParams> result_;
  };

  static ResumedParamsBuilder<0> Builder() {
    return ResumedParamsBuilder<0>();
  }

 private:
  ResumedParams() { }

};


// Parameters for the ScriptFailedToParse event.
class ScriptFailedToParseParams {
 public:
  static std::unique_ptr<ScriptFailedToParseParams> Parse(const base::Value& value, ErrorReporter* errors);
  ScriptFailedToParseParams(const ScriptFailedToParseParams&) = delete;
  ScriptFailedToParseParams& operator=(const ScriptFailedToParseParams&) = delete;
  ~ScriptFailedToParseParams() { }

  // Identifier of the script parsed.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  // URL or name of the script parsed (if any).
  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  // Line offset of the script within the resource with given URL (for script tags).
  int GetStartLine() const { return start_line_; }
  void SetStartLine(int value) { start_line_ = value; }

  // Column offset of the script within the resource with given URL.
  int GetStartColumn() const { return start_column_; }
  void SetStartColumn(int value) { start_column_ = value; }

  // Last line of the script.
  int GetEndLine() const { return end_line_; }
  void SetEndLine(int value) { end_line_ = value; }

  // Length of the last line of the script.
  int GetEndColumn() const { return end_column_; }
  void SetEndColumn(int value) { end_column_ = value; }

  // Specifies script creation context.
  int GetExecutionContextId() const { return execution_context_id_; }
  void SetExecutionContextId(int value) { execution_context_id_ = value; }

  // Content hash of the script, SHA-256.
  std::string GetHash() const { return hash_; }
  void SetHash(const std::string& value) { hash_ = value; }

  // Embedder-specific auxiliary data.
  bool HasExecutionContextAuxData() const { return !!execution_context_aux_data_; }
  const base::Value* GetExecutionContextAuxData() const { DCHECK(HasExecutionContextAuxData()); return execution_context_aux_data_.value().get(); }
  void SetExecutionContextAuxData(std::unique_ptr<base::Value> value) { execution_context_aux_data_ = std::move(value); }

  // URL of source map associated with script (if any).
  bool HasSourceMapURL() const { return !!source_mapurl_; }
  std::string GetSourceMapURL() const { DCHECK(HasSourceMapURL()); return source_mapurl_.value(); }
  void SetSourceMapURL(const std::string& value) { source_mapurl_ = value; }

  // True, if this script has sourceURL.
  bool HasHasSourceURL() const { return !!has_sourceurl_; }
  bool GetHasSourceURL() const { DCHECK(HasHasSourceURL()); return has_sourceurl_.value(); }
  void SetHasSourceURL(bool value) { has_sourceurl_ = value; }

  // True, if this script is ES6 module.
  bool HasIsModule() const { return !!is_module_; }
  bool GetIsModule() const { DCHECK(HasIsModule()); return is_module_.value(); }
  void SetIsModule(bool value) { is_module_ = value; }

  // This script length.
  bool HasLength() const { return !!length_; }
  int GetLength() const { DCHECK(HasLength()); return length_.value(); }
  void SetLength(int value) { length_ = value; }

  // JavaScript top stack frame of where the script parsed event was triggered if available.
  bool HasStackTrace() const { return !!stack_trace_; }
  const ::autofill_assistant::runtime::StackTrace* GetStackTrace() const { DCHECK(HasStackTrace()); return stack_trace_.value().get(); }
  void SetStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) { stack_trace_ = std::move(value); }

  // If the scriptLanguage is WebAssembly, the code section offset in the module.
  bool HasCodeOffset() const { return !!code_offset_; }
  int GetCodeOffset() const { DCHECK(HasCodeOffset()); return code_offset_.value(); }
  void SetCodeOffset(int value) { code_offset_ = value; }

  // The language of the script.
  bool HasScriptLanguage() const { return !!script_language_; }
  ::autofill_assistant::debugger::ScriptLanguage GetScriptLanguage() const { DCHECK(HasScriptLanguage()); return script_language_.value(); }
  void SetScriptLanguage(::autofill_assistant::debugger::ScriptLanguage value) { script_language_ = value; }

  // The name the embedder supplied for this script.
  bool HasEmbedderName() const { return !!embedder_name_; }
  std::string GetEmbedderName() const { DCHECK(HasEmbedderName()); return embedder_name_.value(); }
  void SetEmbedderName(const std::string& value) { embedder_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ScriptFailedToParseParams> Clone() const;

  template<int STATE>
  class ScriptFailedToParseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kUrlSet = 1 << 2,
    kStartLineSet = 1 << 3,
    kStartColumnSet = 1 << 4,
    kEndLineSet = 1 << 5,
    kEndColumnSet = 1 << 6,
    kExecutionContextIdSet = 1 << 7,
    kHashSet = 1 << 8,
      kAllRequiredFieldsSet = (kScriptIdSet | kUrlSet | kStartLineSet | kStartColumnSet | kEndLineSet | kEndColumnSet | kExecutionContextIdSet | kHashSet | 0)
    };

    ScriptFailedToParseParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kStartLineSet>& SetStartLine(int value) {
      static_assert(!(STATE & kStartLineSet), "property startLine should not have already been set");
      result_->SetStartLine(value);
      return CastState<kStartLineSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kStartColumnSet>& SetStartColumn(int value) {
      static_assert(!(STATE & kStartColumnSet), "property startColumn should not have already been set");
      result_->SetStartColumn(value);
      return CastState<kStartColumnSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kEndLineSet>& SetEndLine(int value) {
      static_assert(!(STATE & kEndLineSet), "property endLine should not have already been set");
      result_->SetEndLine(value);
      return CastState<kEndLineSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kEndColumnSet>& SetEndColumn(int value) {
      static_assert(!(STATE & kEndColumnSet), "property endColumn should not have already been set");
      result_->SetEndColumn(value);
      return CastState<kEndColumnSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kExecutionContextIdSet>& SetExecutionContextId(int value) {
      static_assert(!(STATE & kExecutionContextIdSet), "property executionContextId should not have already been set");
      result_->SetExecutionContextId(value);
      return CastState<kExecutionContextIdSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE | kHashSet>& SetHash(const std::string& value) {
      static_assert(!(STATE & kHashSet), "property hash should not have already been set");
      result_->SetHash(value);
      return CastState<kHashSet>();
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetExecutionContextAuxData(std::unique_ptr<base::Value> value) {
      result_->SetExecutionContextAuxData(std::move(value));
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetSourceMapURL(const std::string& value) {
      result_->SetSourceMapURL(value);
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetHasSourceURL(bool value) {
      result_->SetHasSourceURL(value);
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetIsModule(bool value) {
      result_->SetIsModule(value);
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetLength(int value) {
      result_->SetLength(value);
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) {
      result_->SetStackTrace(std::move(value));
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetCodeOffset(int value) {
      result_->SetCodeOffset(value);
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetScriptLanguage(::autofill_assistant::debugger::ScriptLanguage value) {
      result_->SetScriptLanguage(value);
      return *this;
    }

    ScriptFailedToParseParamsBuilder<STATE>& SetEmbedderName(const std::string& value) {
      result_->SetEmbedderName(value);
      return *this;
    }

    std::unique_ptr<ScriptFailedToParseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ScriptFailedToParseParams;
    ScriptFailedToParseParamsBuilder() : result_(new ScriptFailedToParseParams()) { }

    template<int STEP> ScriptFailedToParseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScriptFailedToParseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ScriptFailedToParseParams> result_;
  };

  static ScriptFailedToParseParamsBuilder<0> Builder() {
    return ScriptFailedToParseParamsBuilder<0>();
  }

 private:
  ScriptFailedToParseParams() { }

  std::string script_id_;
  std::string url_;
  int start_line_;
  int start_column_;
  int end_line_;
  int end_column_;
  int execution_context_id_;
  std::string hash_;
  absl::optional<std::unique_ptr<base::Value>> execution_context_aux_data_;
  absl::optional<std::string> source_mapurl_;
  absl::optional<bool> has_sourceurl_;
  absl::optional<bool> is_module_;
  absl::optional<int> length_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTrace>> stack_trace_;
  absl::optional<int> code_offset_;
  absl::optional<::autofill_assistant::debugger::ScriptLanguage> script_language_;
  absl::optional<std::string> embedder_name_;
};


// Parameters for the ScriptParsed event.
class ScriptParsedParams {
 public:
  static std::unique_ptr<ScriptParsedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ScriptParsedParams(const ScriptParsedParams&) = delete;
  ScriptParsedParams& operator=(const ScriptParsedParams&) = delete;
  ~ScriptParsedParams() { }

  // Identifier of the script parsed.
  std::string GetScriptId() const { return script_id_; }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  // URL or name of the script parsed (if any).
  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  // Line offset of the script within the resource with given URL (for script tags).
  int GetStartLine() const { return start_line_; }
  void SetStartLine(int value) { start_line_ = value; }

  // Column offset of the script within the resource with given URL.
  int GetStartColumn() const { return start_column_; }
  void SetStartColumn(int value) { start_column_ = value; }

  // Last line of the script.
  int GetEndLine() const { return end_line_; }
  void SetEndLine(int value) { end_line_ = value; }

  // Length of the last line of the script.
  int GetEndColumn() const { return end_column_; }
  void SetEndColumn(int value) { end_column_ = value; }

  // Specifies script creation context.
  int GetExecutionContextId() const { return execution_context_id_; }
  void SetExecutionContextId(int value) { execution_context_id_ = value; }

  // Content hash of the script, SHA-256.
  std::string GetHash() const { return hash_; }
  void SetHash(const std::string& value) { hash_ = value; }

  // Embedder-specific auxiliary data.
  bool HasExecutionContextAuxData() const { return !!execution_context_aux_data_; }
  const base::Value* GetExecutionContextAuxData() const { DCHECK(HasExecutionContextAuxData()); return execution_context_aux_data_.value().get(); }
  void SetExecutionContextAuxData(std::unique_ptr<base::Value> value) { execution_context_aux_data_ = std::move(value); }

  // True, if this script is generated as a result of the live edit operation.
  bool HasIsLiveEdit() const { return !!is_live_edit_; }
  bool GetIsLiveEdit() const { DCHECK(HasIsLiveEdit()); return is_live_edit_.value(); }
  void SetIsLiveEdit(bool value) { is_live_edit_ = value; }

  // URL of source map associated with script (if any).
  bool HasSourceMapURL() const { return !!source_mapurl_; }
  std::string GetSourceMapURL() const { DCHECK(HasSourceMapURL()); return source_mapurl_.value(); }
  void SetSourceMapURL(const std::string& value) { source_mapurl_ = value; }

  // True, if this script has sourceURL.
  bool HasHasSourceURL() const { return !!has_sourceurl_; }
  bool GetHasSourceURL() const { DCHECK(HasHasSourceURL()); return has_sourceurl_.value(); }
  void SetHasSourceURL(bool value) { has_sourceurl_ = value; }

  // True, if this script is ES6 module.
  bool HasIsModule() const { return !!is_module_; }
  bool GetIsModule() const { DCHECK(HasIsModule()); return is_module_.value(); }
  void SetIsModule(bool value) { is_module_ = value; }

  // This script length.
  bool HasLength() const { return !!length_; }
  int GetLength() const { DCHECK(HasLength()); return length_.value(); }
  void SetLength(int value) { length_ = value; }

  // JavaScript top stack frame of where the script parsed event was triggered if available.
  bool HasStackTrace() const { return !!stack_trace_; }
  const ::autofill_assistant::runtime::StackTrace* GetStackTrace() const { DCHECK(HasStackTrace()); return stack_trace_.value().get(); }
  void SetStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) { stack_trace_ = std::move(value); }

  // If the scriptLanguage is WebAssembly, the code section offset in the module.
  bool HasCodeOffset() const { return !!code_offset_; }
  int GetCodeOffset() const { DCHECK(HasCodeOffset()); return code_offset_.value(); }
  void SetCodeOffset(int value) { code_offset_ = value; }

  // The language of the script.
  bool HasScriptLanguage() const { return !!script_language_; }
  ::autofill_assistant::debugger::ScriptLanguage GetScriptLanguage() const { DCHECK(HasScriptLanguage()); return script_language_.value(); }
  void SetScriptLanguage(::autofill_assistant::debugger::ScriptLanguage value) { script_language_ = value; }

  // If the scriptLanguage is WebASsembly, the source of debug symbols for the module.
  bool HasDebugSymbols() const { return !!debug_symbols_; }
  const ::autofill_assistant::debugger::DebugSymbols* GetDebugSymbols() const { DCHECK(HasDebugSymbols()); return debug_symbols_.value().get(); }
  void SetDebugSymbols(std::unique_ptr<::autofill_assistant::debugger::DebugSymbols> value) { debug_symbols_ = std::move(value); }

  // The name the embedder supplied for this script.
  bool HasEmbedderName() const { return !!embedder_name_; }
  std::string GetEmbedderName() const { DCHECK(HasEmbedderName()); return embedder_name_.value(); }
  void SetEmbedderName(const std::string& value) { embedder_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ScriptParsedParams> Clone() const;

  template<int STATE>
  class ScriptParsedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScriptIdSet = 1 << 1,
    kUrlSet = 1 << 2,
    kStartLineSet = 1 << 3,
    kStartColumnSet = 1 << 4,
    kEndLineSet = 1 << 5,
    kEndColumnSet = 1 << 6,
    kExecutionContextIdSet = 1 << 7,
    kHashSet = 1 << 8,
      kAllRequiredFieldsSet = (kScriptIdSet | kUrlSet | kStartLineSet | kStartColumnSet | kEndLineSet | kEndColumnSet | kExecutionContextIdSet | kHashSet | 0)
    };

    ScriptParsedParamsBuilder<STATE | kScriptIdSet>& SetScriptId(const std::string& value) {
      static_assert(!(STATE & kScriptIdSet), "property scriptId should not have already been set");
      result_->SetScriptId(value);
      return CastState<kScriptIdSet>();
    }

    ScriptParsedParamsBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    ScriptParsedParamsBuilder<STATE | kStartLineSet>& SetStartLine(int value) {
      static_assert(!(STATE & kStartLineSet), "property startLine should not have already been set");
      result_->SetStartLine(value);
      return CastState<kStartLineSet>();
    }

    ScriptParsedParamsBuilder<STATE | kStartColumnSet>& SetStartColumn(int value) {
      static_assert(!(STATE & kStartColumnSet), "property startColumn should not have already been set");
      result_->SetStartColumn(value);
      return CastState<kStartColumnSet>();
    }

    ScriptParsedParamsBuilder<STATE | kEndLineSet>& SetEndLine(int value) {
      static_assert(!(STATE & kEndLineSet), "property endLine should not have already been set");
      result_->SetEndLine(value);
      return CastState<kEndLineSet>();
    }

    ScriptParsedParamsBuilder<STATE | kEndColumnSet>& SetEndColumn(int value) {
      static_assert(!(STATE & kEndColumnSet), "property endColumn should not have already been set");
      result_->SetEndColumn(value);
      return CastState<kEndColumnSet>();
    }

    ScriptParsedParamsBuilder<STATE | kExecutionContextIdSet>& SetExecutionContextId(int value) {
      static_assert(!(STATE & kExecutionContextIdSet), "property executionContextId should not have already been set");
      result_->SetExecutionContextId(value);
      return CastState<kExecutionContextIdSet>();
    }

    ScriptParsedParamsBuilder<STATE | kHashSet>& SetHash(const std::string& value) {
      static_assert(!(STATE & kHashSet), "property hash should not have already been set");
      result_->SetHash(value);
      return CastState<kHashSet>();
    }

    ScriptParsedParamsBuilder<STATE>& SetExecutionContextAuxData(std::unique_ptr<base::Value> value) {
      result_->SetExecutionContextAuxData(std::move(value));
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetIsLiveEdit(bool value) {
      result_->SetIsLiveEdit(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetSourceMapURL(const std::string& value) {
      result_->SetSourceMapURL(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetHasSourceURL(bool value) {
      result_->SetHasSourceURL(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetIsModule(bool value) {
      result_->SetIsModule(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetLength(int value) {
      result_->SetLength(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetStackTrace(std::unique_ptr<::autofill_assistant::runtime::StackTrace> value) {
      result_->SetStackTrace(std::move(value));
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetCodeOffset(int value) {
      result_->SetCodeOffset(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetScriptLanguage(::autofill_assistant::debugger::ScriptLanguage value) {
      result_->SetScriptLanguage(value);
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetDebugSymbols(std::unique_ptr<::autofill_assistant::debugger::DebugSymbols> value) {
      result_->SetDebugSymbols(std::move(value));
      return *this;
    }

    ScriptParsedParamsBuilder<STATE>& SetEmbedderName(const std::string& value) {
      result_->SetEmbedderName(value);
      return *this;
    }

    std::unique_ptr<ScriptParsedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ScriptParsedParams;
    ScriptParsedParamsBuilder() : result_(new ScriptParsedParams()) { }

    template<int STEP> ScriptParsedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScriptParsedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ScriptParsedParams> result_;
  };

  static ScriptParsedParamsBuilder<0> Builder() {
    return ScriptParsedParamsBuilder<0>();
  }

 private:
  ScriptParsedParams() { }

  std::string script_id_;
  std::string url_;
  int start_line_;
  int start_column_;
  int end_line_;
  int end_column_;
  int execution_context_id_;
  std::string hash_;
  absl::optional<std::unique_ptr<base::Value>> execution_context_aux_data_;
  absl::optional<bool> is_live_edit_;
  absl::optional<std::string> source_mapurl_;
  absl::optional<bool> has_sourceurl_;
  absl::optional<bool> is_module_;
  absl::optional<int> length_;
  absl::optional<std::unique_ptr<::autofill_assistant::runtime::StackTrace>> stack_trace_;
  absl::optional<int> code_offset_;
  absl::optional<::autofill_assistant::debugger::ScriptLanguage> script_language_;
  absl::optional<std::unique_ptr<::autofill_assistant::debugger::DebugSymbols>> debug_symbols_;
  absl::optional<std::string> embedder_name_;
};


}  // namespace debugger

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_DEBUGGER_H_
