// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CAST_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CAST_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_cast.h"

namespace autofill_assistant {

class ErrorReporter;

namespace cast {

class Sink {
 public:
  static std::unique_ptr<Sink> Parse(const base::Value& value, ErrorReporter* errors);
  Sink(const Sink&) = delete;
  Sink& operator=(const Sink&) = delete;
  ~Sink() { }

  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  std::string GetId() const { return id_; }
  void SetId(const std::string& value) { id_ = value; }

  // Text describing the current session. Present only if there is an active
  // session on the sink.
  bool HasSession() const { return !!session_; }
  std::string GetSession() const { DCHECK(HasSession()); return session_.value(); }
  void SetSession(const std::string& value) { session_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Sink> Clone() const;

  template<int STATE>
  class SinkBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kIdSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kIdSet | 0)
    };

    SinkBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    SinkBuilder<STATE | kIdSet>& SetId(const std::string& value) {
      static_assert(!(STATE & kIdSet), "property id should not have already been set");
      result_->SetId(value);
      return CastState<kIdSet>();
    }

    SinkBuilder<STATE>& SetSession(const std::string& value) {
      result_->SetSession(value);
      return *this;
    }

    std::unique_ptr<Sink> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Sink;
    SinkBuilder() : result_(new Sink()) { }

    template<int STEP> SinkBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SinkBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Sink> result_;
  };

  static SinkBuilder<0> Builder() {
    return SinkBuilder<0>();
  }

 private:
  Sink() { }

  std::string name_;
  std::string id_;
  absl::optional<std::string> session_;
};


// Parameters for the Enable command.
class EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  EnableParams(const EnableParams&) = delete;
  EnableParams& operator=(const EnableParams&) = delete;
  ~EnableParams() { }

  bool HasPresentationUrl() const { return !!presentation_url_; }
  std::string GetPresentationUrl() const { DCHECK(HasPresentationUrl()); return presentation_url_.value(); }
  void SetPresentationUrl(const std::string& value) { presentation_url_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    EnableParamsBuilder<STATE>& SetPresentationUrl(const std::string& value) {
      result_->SetPresentationUrl(value);
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

  absl::optional<std::string> presentation_url_;
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


// Parameters for the SetSinkToUse command.
class SetSinkToUseParams {
 public:
  static std::unique_ptr<SetSinkToUseParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetSinkToUseParams(const SetSinkToUseParams&) = delete;
  SetSinkToUseParams& operator=(const SetSinkToUseParams&) = delete;
  ~SetSinkToUseParams() { }

  std::string GetSinkName() const { return sink_name_; }
  void SetSinkName(const std::string& value) { sink_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSinkToUseParams> Clone() const;

  template<int STATE>
  class SetSinkToUseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSinkNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kSinkNameSet | 0)
    };

    SetSinkToUseParamsBuilder<STATE | kSinkNameSet>& SetSinkName(const std::string& value) {
      static_assert(!(STATE & kSinkNameSet), "property sinkName should not have already been set");
      result_->SetSinkName(value);
      return CastState<kSinkNameSet>();
    }

    std::unique_ptr<SetSinkToUseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSinkToUseParams;
    SetSinkToUseParamsBuilder() : result_(new SetSinkToUseParams()) { }

    template<int STEP> SetSinkToUseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSinkToUseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSinkToUseParams> result_;
  };

  static SetSinkToUseParamsBuilder<0> Builder() {
    return SetSinkToUseParamsBuilder<0>();
  }

 private:
  SetSinkToUseParams() { }

  std::string sink_name_;
};


// Result for the SetSinkToUse command.
class SetSinkToUseResult {
 public:
  static std::unique_ptr<SetSinkToUseResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetSinkToUseResult(const SetSinkToUseResult&) = delete;
  SetSinkToUseResult& operator=(const SetSinkToUseResult&) = delete;
  ~SetSinkToUseResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSinkToUseResult> Clone() const;

  template<int STATE>
  class SetSinkToUseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetSinkToUseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSinkToUseResult;
    SetSinkToUseResultBuilder() : result_(new SetSinkToUseResult()) { }

    template<int STEP> SetSinkToUseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSinkToUseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSinkToUseResult> result_;
  };

  static SetSinkToUseResultBuilder<0> Builder() {
    return SetSinkToUseResultBuilder<0>();
  }

 private:
  SetSinkToUseResult() { }

};


// Parameters for the StartDesktopMirroring command.
class StartDesktopMirroringParams {
 public:
  static std::unique_ptr<StartDesktopMirroringParams> Parse(const base::Value& value, ErrorReporter* errors);
  StartDesktopMirroringParams(const StartDesktopMirroringParams&) = delete;
  StartDesktopMirroringParams& operator=(const StartDesktopMirroringParams&) = delete;
  ~StartDesktopMirroringParams() { }

  std::string GetSinkName() const { return sink_name_; }
  void SetSinkName(const std::string& value) { sink_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartDesktopMirroringParams> Clone() const;

  template<int STATE>
  class StartDesktopMirroringParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSinkNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kSinkNameSet | 0)
    };

    StartDesktopMirroringParamsBuilder<STATE | kSinkNameSet>& SetSinkName(const std::string& value) {
      static_assert(!(STATE & kSinkNameSet), "property sinkName should not have already been set");
      result_->SetSinkName(value);
      return CastState<kSinkNameSet>();
    }

    std::unique_ptr<StartDesktopMirroringParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartDesktopMirroringParams;
    StartDesktopMirroringParamsBuilder() : result_(new StartDesktopMirroringParams()) { }

    template<int STEP> StartDesktopMirroringParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartDesktopMirroringParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartDesktopMirroringParams> result_;
  };

  static StartDesktopMirroringParamsBuilder<0> Builder() {
    return StartDesktopMirroringParamsBuilder<0>();
  }

 private:
  StartDesktopMirroringParams() { }

  std::string sink_name_;
};


// Result for the StartDesktopMirroring command.
class StartDesktopMirroringResult {
 public:
  static std::unique_ptr<StartDesktopMirroringResult> Parse(const base::Value& value, ErrorReporter* errors);
  StartDesktopMirroringResult(const StartDesktopMirroringResult&) = delete;
  StartDesktopMirroringResult& operator=(const StartDesktopMirroringResult&) = delete;
  ~StartDesktopMirroringResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartDesktopMirroringResult> Clone() const;

  template<int STATE>
  class StartDesktopMirroringResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartDesktopMirroringResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartDesktopMirroringResult;
    StartDesktopMirroringResultBuilder() : result_(new StartDesktopMirroringResult()) { }

    template<int STEP> StartDesktopMirroringResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartDesktopMirroringResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartDesktopMirroringResult> result_;
  };

  static StartDesktopMirroringResultBuilder<0> Builder() {
    return StartDesktopMirroringResultBuilder<0>();
  }

 private:
  StartDesktopMirroringResult() { }

};


// Parameters for the StartTabMirroring command.
class StartTabMirroringParams {
 public:
  static std::unique_ptr<StartTabMirroringParams> Parse(const base::Value& value, ErrorReporter* errors);
  StartTabMirroringParams(const StartTabMirroringParams&) = delete;
  StartTabMirroringParams& operator=(const StartTabMirroringParams&) = delete;
  ~StartTabMirroringParams() { }

  std::string GetSinkName() const { return sink_name_; }
  void SetSinkName(const std::string& value) { sink_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartTabMirroringParams> Clone() const;

  template<int STATE>
  class StartTabMirroringParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSinkNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kSinkNameSet | 0)
    };

    StartTabMirroringParamsBuilder<STATE | kSinkNameSet>& SetSinkName(const std::string& value) {
      static_assert(!(STATE & kSinkNameSet), "property sinkName should not have already been set");
      result_->SetSinkName(value);
      return CastState<kSinkNameSet>();
    }

    std::unique_ptr<StartTabMirroringParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartTabMirroringParams;
    StartTabMirroringParamsBuilder() : result_(new StartTabMirroringParams()) { }

    template<int STEP> StartTabMirroringParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartTabMirroringParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartTabMirroringParams> result_;
  };

  static StartTabMirroringParamsBuilder<0> Builder() {
    return StartTabMirroringParamsBuilder<0>();
  }

 private:
  StartTabMirroringParams() { }

  std::string sink_name_;
};


// Result for the StartTabMirroring command.
class StartTabMirroringResult {
 public:
  static std::unique_ptr<StartTabMirroringResult> Parse(const base::Value& value, ErrorReporter* errors);
  StartTabMirroringResult(const StartTabMirroringResult&) = delete;
  StartTabMirroringResult& operator=(const StartTabMirroringResult&) = delete;
  ~StartTabMirroringResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartTabMirroringResult> Clone() const;

  template<int STATE>
  class StartTabMirroringResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartTabMirroringResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartTabMirroringResult;
    StartTabMirroringResultBuilder() : result_(new StartTabMirroringResult()) { }

    template<int STEP> StartTabMirroringResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartTabMirroringResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartTabMirroringResult> result_;
  };

  static StartTabMirroringResultBuilder<0> Builder() {
    return StartTabMirroringResultBuilder<0>();
  }

 private:
  StartTabMirroringResult() { }

};


// Parameters for the StopCasting command.
class StopCastingParams {
 public:
  static std::unique_ptr<StopCastingParams> Parse(const base::Value& value, ErrorReporter* errors);
  StopCastingParams(const StopCastingParams&) = delete;
  StopCastingParams& operator=(const StopCastingParams&) = delete;
  ~StopCastingParams() { }

  std::string GetSinkName() const { return sink_name_; }
  void SetSinkName(const std::string& value) { sink_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopCastingParams> Clone() const;

  template<int STATE>
  class StopCastingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSinkNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kSinkNameSet | 0)
    };

    StopCastingParamsBuilder<STATE | kSinkNameSet>& SetSinkName(const std::string& value) {
      static_assert(!(STATE & kSinkNameSet), "property sinkName should not have already been set");
      result_->SetSinkName(value);
      return CastState<kSinkNameSet>();
    }

    std::unique_ptr<StopCastingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopCastingParams;
    StopCastingParamsBuilder() : result_(new StopCastingParams()) { }

    template<int STEP> StopCastingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopCastingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopCastingParams> result_;
  };

  static StopCastingParamsBuilder<0> Builder() {
    return StopCastingParamsBuilder<0>();
  }

 private:
  StopCastingParams() { }

  std::string sink_name_;
};


// Result for the StopCasting command.
class StopCastingResult {
 public:
  static std::unique_ptr<StopCastingResult> Parse(const base::Value& value, ErrorReporter* errors);
  StopCastingResult(const StopCastingResult&) = delete;
  StopCastingResult& operator=(const StopCastingResult&) = delete;
  ~StopCastingResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopCastingResult> Clone() const;

  template<int STATE>
  class StopCastingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopCastingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopCastingResult;
    StopCastingResultBuilder() : result_(new StopCastingResult()) { }

    template<int STEP> StopCastingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopCastingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopCastingResult> result_;
  };

  static StopCastingResultBuilder<0> Builder() {
    return StopCastingResultBuilder<0>();
  }

 private:
  StopCastingResult() { }

};


// Parameters for the SinksUpdated event.
class SinksUpdatedParams {
 public:
  static std::unique_ptr<SinksUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  SinksUpdatedParams(const SinksUpdatedParams&) = delete;
  SinksUpdatedParams& operator=(const SinksUpdatedParams&) = delete;
  ~SinksUpdatedParams() { }

  const std::vector<std::unique_ptr<::autofill_assistant::cast::Sink>>* GetSinks() const { return &sinks_; }
  void SetSinks(std::vector<std::unique_ptr<::autofill_assistant::cast::Sink>> value) { sinks_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SinksUpdatedParams> Clone() const;

  template<int STATE>
  class SinksUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSinksSet = 1 << 1,
      kAllRequiredFieldsSet = (kSinksSet | 0)
    };

    SinksUpdatedParamsBuilder<STATE | kSinksSet>& SetSinks(std::vector<std::unique_ptr<::autofill_assistant::cast::Sink>> value) {
      static_assert(!(STATE & kSinksSet), "property sinks should not have already been set");
      result_->SetSinks(std::move(value));
      return CastState<kSinksSet>();
    }

    std::unique_ptr<SinksUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SinksUpdatedParams;
    SinksUpdatedParamsBuilder() : result_(new SinksUpdatedParams()) { }

    template<int STEP> SinksUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SinksUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SinksUpdatedParams> result_;
  };

  static SinksUpdatedParamsBuilder<0> Builder() {
    return SinksUpdatedParamsBuilder<0>();
  }

 private:
  SinksUpdatedParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::cast::Sink>> sinks_;
};


// Parameters for the IssueUpdated event.
class IssueUpdatedParams {
 public:
  static std::unique_ptr<IssueUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  IssueUpdatedParams(const IssueUpdatedParams&) = delete;
  IssueUpdatedParams& operator=(const IssueUpdatedParams&) = delete;
  ~IssueUpdatedParams() { }

  std::string GetIssueMessage() const { return issue_message_; }
  void SetIssueMessage(const std::string& value) { issue_message_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<IssueUpdatedParams> Clone() const;

  template<int STATE>
  class IssueUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIssueMessageSet = 1 << 1,
      kAllRequiredFieldsSet = (kIssueMessageSet | 0)
    };

    IssueUpdatedParamsBuilder<STATE | kIssueMessageSet>& SetIssueMessage(const std::string& value) {
      static_assert(!(STATE & kIssueMessageSet), "property issueMessage should not have already been set");
      result_->SetIssueMessage(value);
      return CastState<kIssueMessageSet>();
    }

    std::unique_ptr<IssueUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class IssueUpdatedParams;
    IssueUpdatedParamsBuilder() : result_(new IssueUpdatedParams()) { }

    template<int STEP> IssueUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<IssueUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<IssueUpdatedParams> result_;
  };

  static IssueUpdatedParamsBuilder<0> Builder() {
    return IssueUpdatedParamsBuilder<0>();
  }

 private:
  IssueUpdatedParams() { }

  std::string issue_message_;
};


}  // namespace cast

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CAST_H_
