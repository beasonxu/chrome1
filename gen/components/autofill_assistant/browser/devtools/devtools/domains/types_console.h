// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CONSOLE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CONSOLE_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_console.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"

namespace autofill_assistant {

class ErrorReporter;

namespace console {

// Console message.
class ConsoleMessage {
 public:
  static std::unique_ptr<ConsoleMessage> Parse(const base::Value& value, ErrorReporter* errors);
  ConsoleMessage(const ConsoleMessage&) = delete;
  ConsoleMessage& operator=(const ConsoleMessage&) = delete;
  ~ConsoleMessage() { }

  // Message source.
  ::autofill_assistant::console::ConsoleMessageSource GetSource() const { return source_; }
  void SetSource(::autofill_assistant::console::ConsoleMessageSource value) { source_ = value; }

  // Message severity.
  ::autofill_assistant::console::ConsoleMessageLevel GetLevel() const { return level_; }
  void SetLevel(::autofill_assistant::console::ConsoleMessageLevel value) { level_ = value; }

  // Message text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // URL of the message origin.
  bool HasUrl() const { return !!url_; }
  std::string GetUrl() const { DCHECK(HasUrl()); return url_.value(); }
  void SetUrl(const std::string& value) { url_ = value; }

  // Line number in the resource that generated this message (1-based).
  bool HasLine() const { return !!line_; }
  int GetLine() const { DCHECK(HasLine()); return line_.value(); }
  void SetLine(int value) { line_ = value; }

  // Column number in the resource that generated this message (1-based).
  bool HasColumn() const { return !!column_; }
  int GetColumn() const { DCHECK(HasColumn()); return column_.value(); }
  void SetColumn(int value) { column_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ConsoleMessage> Clone() const;

  template<int STATE>
  class ConsoleMessageBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSourceSet = 1 << 1,
    kLevelSet = 1 << 2,
    kTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kSourceSet | kLevelSet | kTextSet | 0)
    };

    ConsoleMessageBuilder<STATE | kSourceSet>& SetSource(::autofill_assistant::console::ConsoleMessageSource value) {
      static_assert(!(STATE & kSourceSet), "property source should not have already been set");
      result_->SetSource(value);
      return CastState<kSourceSet>();
    }

    ConsoleMessageBuilder<STATE | kLevelSet>& SetLevel(::autofill_assistant::console::ConsoleMessageLevel value) {
      static_assert(!(STATE & kLevelSet), "property level should not have already been set");
      result_->SetLevel(value);
      return CastState<kLevelSet>();
    }

    ConsoleMessageBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    ConsoleMessageBuilder<STATE>& SetUrl(const std::string& value) {
      result_->SetUrl(value);
      return *this;
    }

    ConsoleMessageBuilder<STATE>& SetLine(int value) {
      result_->SetLine(value);
      return *this;
    }

    ConsoleMessageBuilder<STATE>& SetColumn(int value) {
      result_->SetColumn(value);
      return *this;
    }

    std::unique_ptr<ConsoleMessage> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ConsoleMessage;
    ConsoleMessageBuilder() : result_(new ConsoleMessage()) { }

    template<int STEP> ConsoleMessageBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ConsoleMessageBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ConsoleMessage> result_;
  };

  static ConsoleMessageBuilder<0> Builder() {
    return ConsoleMessageBuilder<0>();
  }

 private:
  ConsoleMessage() { }

  ::autofill_assistant::console::ConsoleMessageSource source_;
  ::autofill_assistant::console::ConsoleMessageLevel level_;
  std::string text_;
  absl::optional<std::string> url_;
  absl::optional<int> line_;
  absl::optional<int> column_;
};


// Parameters for the ClearMessages command.
class ClearMessagesParams {
 public:
  static std::unique_ptr<ClearMessagesParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearMessagesParams(const ClearMessagesParams&) = delete;
  ClearMessagesParams& operator=(const ClearMessagesParams&) = delete;
  ~ClearMessagesParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearMessagesParams> Clone() const;

  template<int STATE>
  class ClearMessagesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearMessagesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearMessagesParams;
    ClearMessagesParamsBuilder() : result_(new ClearMessagesParams()) { }

    template<int STEP> ClearMessagesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearMessagesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearMessagesParams> result_;
  };

  static ClearMessagesParamsBuilder<0> Builder() {
    return ClearMessagesParamsBuilder<0>();
  }

 private:
  ClearMessagesParams() { }

};


// Result for the ClearMessages command.
class ClearMessagesResult {
 public:
  static std::unique_ptr<ClearMessagesResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearMessagesResult(const ClearMessagesResult&) = delete;
  ClearMessagesResult& operator=(const ClearMessagesResult&) = delete;
  ~ClearMessagesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearMessagesResult> Clone() const;

  template<int STATE>
  class ClearMessagesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearMessagesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearMessagesResult;
    ClearMessagesResultBuilder() : result_(new ClearMessagesResult()) { }

    template<int STEP> ClearMessagesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearMessagesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearMessagesResult> result_;
  };

  static ClearMessagesResultBuilder<0> Builder() {
    return ClearMessagesResultBuilder<0>();
  }

 private:
  ClearMessagesResult() { }

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


// Parameters for the MessageAdded event.
class MessageAddedParams {
 public:
  static std::unique_ptr<MessageAddedParams> Parse(const base::Value& value, ErrorReporter* errors);
  MessageAddedParams(const MessageAddedParams&) = delete;
  MessageAddedParams& operator=(const MessageAddedParams&) = delete;
  ~MessageAddedParams() { }

  // Console message that has been added.
  const ::autofill_assistant::console::ConsoleMessage* GetMessage() const { return message_.get(); }
  void SetMessage(std::unique_ptr<::autofill_assistant::console::ConsoleMessage> value) { message_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<MessageAddedParams> Clone() const;

  template<int STATE>
  class MessageAddedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kMessageSet = 1 << 1,
      kAllRequiredFieldsSet = (kMessageSet | 0)
    };

    MessageAddedParamsBuilder<STATE | kMessageSet>& SetMessage(std::unique_ptr<::autofill_assistant::console::ConsoleMessage> value) {
      static_assert(!(STATE & kMessageSet), "property message should not have already been set");
      result_->SetMessage(std::move(value));
      return CastState<kMessageSet>();
    }

    std::unique_ptr<MessageAddedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class MessageAddedParams;
    MessageAddedParamsBuilder() : result_(new MessageAddedParams()) { }

    template<int STEP> MessageAddedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<MessageAddedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<MessageAddedParams> result_;
  };

  static MessageAddedParamsBuilder<0> Builder() {
    return MessageAddedParamsBuilder<0>();
  }

 private:
  MessageAddedParams() { }

  std::unique_ptr<::autofill_assistant::console::ConsoleMessage> message_;
};


}  // namespace console

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CONSOLE_H_
