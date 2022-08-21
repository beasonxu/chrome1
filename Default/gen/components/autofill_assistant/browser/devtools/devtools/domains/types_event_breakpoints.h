// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_EVENT_BREAKPOINTS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_EVENT_BREAKPOINTS_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_event_breakpoints.h"

namespace autofill_assistant {

class ErrorReporter;

namespace event_breakpoints {

// Parameters for the SetInstrumentationBreakpoint command.
class SetInstrumentationBreakpointParams {
 public:
  static std::unique_ptr<SetInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetInstrumentationBreakpointParams(const SetInstrumentationBreakpointParams&) = delete;
  SetInstrumentationBreakpointParams& operator=(const SetInstrumentationBreakpointParams&) = delete;
  ~SetInstrumentationBreakpointParams() { }

  // Instrumentation name to stop on.
  std::string GetEventName() const { return event_name_; }
  void SetEventName(const std::string& value) { event_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInstrumentationBreakpointParams> Clone() const;

  template<int STATE>
  class SetInstrumentationBreakpointParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEventNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kEventNameSet | 0)
    };

    SetInstrumentationBreakpointParamsBuilder<STATE | kEventNameSet>& SetEventName(const std::string& value) {
      static_assert(!(STATE & kEventNameSet), "property eventName should not have already been set");
      result_->SetEventName(value);
      return CastState<kEventNameSet>();
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

  std::string event_name_;
};


// Result for the SetInstrumentationBreakpoint command.
class SetInstrumentationBreakpointResult {
 public:
  static std::unique_ptr<SetInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetInstrumentationBreakpointResult(const SetInstrumentationBreakpointResult&) = delete;
  SetInstrumentationBreakpointResult& operator=(const SetInstrumentationBreakpointResult&) = delete;
  ~SetInstrumentationBreakpointResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInstrumentationBreakpointResult> Clone() const;

  template<int STATE>
  class SetInstrumentationBreakpointResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

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

};


// Parameters for the RemoveInstrumentationBreakpoint command.
class RemoveInstrumentationBreakpointParams {
 public:
  static std::unique_ptr<RemoveInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveInstrumentationBreakpointParams(const RemoveInstrumentationBreakpointParams&) = delete;
  RemoveInstrumentationBreakpointParams& operator=(const RemoveInstrumentationBreakpointParams&) = delete;
  ~RemoveInstrumentationBreakpointParams() { }

  // Instrumentation name to stop on.
  std::string GetEventName() const { return event_name_; }
  void SetEventName(const std::string& value) { event_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveInstrumentationBreakpointParams> Clone() const;

  template<int STATE>
  class RemoveInstrumentationBreakpointParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEventNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kEventNameSet | 0)
    };

    RemoveInstrumentationBreakpointParamsBuilder<STATE | kEventNameSet>& SetEventName(const std::string& value) {
      static_assert(!(STATE & kEventNameSet), "property eventName should not have already been set");
      result_->SetEventName(value);
      return CastState<kEventNameSet>();
    }

    std::unique_ptr<RemoveInstrumentationBreakpointParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveInstrumentationBreakpointParams;
    RemoveInstrumentationBreakpointParamsBuilder() : result_(new RemoveInstrumentationBreakpointParams()) { }

    template<int STEP> RemoveInstrumentationBreakpointParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveInstrumentationBreakpointParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveInstrumentationBreakpointParams> result_;
  };

  static RemoveInstrumentationBreakpointParamsBuilder<0> Builder() {
    return RemoveInstrumentationBreakpointParamsBuilder<0>();
  }

 private:
  RemoveInstrumentationBreakpointParams() { }

  std::string event_name_;
};


// Result for the RemoveInstrumentationBreakpoint command.
class RemoveInstrumentationBreakpointResult {
 public:
  static std::unique_ptr<RemoveInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveInstrumentationBreakpointResult(const RemoveInstrumentationBreakpointResult&) = delete;
  RemoveInstrumentationBreakpointResult& operator=(const RemoveInstrumentationBreakpointResult&) = delete;
  ~RemoveInstrumentationBreakpointResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveInstrumentationBreakpointResult> Clone() const;

  template<int STATE>
  class RemoveInstrumentationBreakpointResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<RemoveInstrumentationBreakpointResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveInstrumentationBreakpointResult;
    RemoveInstrumentationBreakpointResultBuilder() : result_(new RemoveInstrumentationBreakpointResult()) { }

    template<int STEP> RemoveInstrumentationBreakpointResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveInstrumentationBreakpointResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveInstrumentationBreakpointResult> result_;
  };

  static RemoveInstrumentationBreakpointResultBuilder<0> Builder() {
    return RemoveInstrumentationBreakpointResultBuilder<0>();
  }

 private:
  RemoveInstrumentationBreakpointResult() { }

};


}  // namespace event_breakpoints

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_EVENT_BREAKPOINTS_H_
