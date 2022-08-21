// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_INSPECTOR_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_INSPECTOR_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_inspector.h"

namespace autofill_assistant {

class ErrorReporter;

namespace inspector {

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

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

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

};


// Result for the Enable command.
class EnableResult {
 public:
  static std::unique_ptr<EnableResult> Parse(const base::Value& value, ErrorReporter* errors);
  EnableResult(const EnableResult&) = delete;
  EnableResult& operator=(const EnableResult&) = delete;
  ~EnableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableResult> Clone() const;

  template<int STATE>
  class EnableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

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

};


// Parameters for the Detached event.
class DetachedParams {
 public:
  static std::unique_ptr<DetachedParams> Parse(const base::Value& value, ErrorReporter* errors);
  DetachedParams(const DetachedParams&) = delete;
  DetachedParams& operator=(const DetachedParams&) = delete;
  ~DetachedParams() { }

  // The reason why connection has been terminated.
  std::string GetReason() const { return reason_; }
  void SetReason(const std::string& value) { reason_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DetachedParams> Clone() const;

  template<int STATE>
  class DetachedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kReasonSet = 1 << 1,
      kAllRequiredFieldsSet = (kReasonSet | 0)
    };

    DetachedParamsBuilder<STATE | kReasonSet>& SetReason(const std::string& value) {
      static_assert(!(STATE & kReasonSet), "property reason should not have already been set");
      result_->SetReason(value);
      return CastState<kReasonSet>();
    }

    std::unique_ptr<DetachedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DetachedParams;
    DetachedParamsBuilder() : result_(new DetachedParams()) { }

    template<int STEP> DetachedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DetachedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DetachedParams> result_;
  };

  static DetachedParamsBuilder<0> Builder() {
    return DetachedParamsBuilder<0>();
  }

 private:
  DetachedParams() { }

  std::string reason_;
};


// Parameters for the TargetCrashed event.
class TargetCrashedParams {
 public:
  static std::unique_ptr<TargetCrashedParams> Parse(const base::Value& value, ErrorReporter* errors);
  TargetCrashedParams(const TargetCrashedParams&) = delete;
  TargetCrashedParams& operator=(const TargetCrashedParams&) = delete;
  ~TargetCrashedParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TargetCrashedParams> Clone() const;

  template<int STATE>
  class TargetCrashedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TargetCrashedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TargetCrashedParams;
    TargetCrashedParamsBuilder() : result_(new TargetCrashedParams()) { }

    template<int STEP> TargetCrashedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TargetCrashedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TargetCrashedParams> result_;
  };

  static TargetCrashedParamsBuilder<0> Builder() {
    return TargetCrashedParamsBuilder<0>();
  }

 private:
  TargetCrashedParams() { }

};


// Parameters for the TargetReloadedAfterCrash event.
class TargetReloadedAfterCrashParams {
 public:
  static std::unique_ptr<TargetReloadedAfterCrashParams> Parse(const base::Value& value, ErrorReporter* errors);
  TargetReloadedAfterCrashParams(const TargetReloadedAfterCrashParams&) = delete;
  TargetReloadedAfterCrashParams& operator=(const TargetReloadedAfterCrashParams&) = delete;
  ~TargetReloadedAfterCrashParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TargetReloadedAfterCrashParams> Clone() const;

  template<int STATE>
  class TargetReloadedAfterCrashParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TargetReloadedAfterCrashParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TargetReloadedAfterCrashParams;
    TargetReloadedAfterCrashParamsBuilder() : result_(new TargetReloadedAfterCrashParams()) { }

    template<int STEP> TargetReloadedAfterCrashParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TargetReloadedAfterCrashParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TargetReloadedAfterCrashParams> result_;
  };

  static TargetReloadedAfterCrashParamsBuilder<0> Builder() {
    return TargetReloadedAfterCrashParamsBuilder<0>();
  }

 private:
  TargetReloadedAfterCrashParams() { }

};


}  // namespace inspector

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_INSPECTOR_H_
