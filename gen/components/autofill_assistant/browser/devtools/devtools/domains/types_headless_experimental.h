// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_HEADLESS_EXPERIMENTAL_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_HEADLESS_EXPERIMENTAL_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_headless_experimental.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_security.h"

namespace autofill_assistant {

class ErrorReporter;

namespace headless_experimental {

// Encoding options for a screenshot.
class ScreenshotParams {
 public:
  static std::unique_ptr<ScreenshotParams> Parse(const base::Value& value, ErrorReporter* errors);
  ScreenshotParams(const ScreenshotParams&) = delete;
  ScreenshotParams& operator=(const ScreenshotParams&) = delete;
  ~ScreenshotParams() { }

  // Image compression format (defaults to png).
  bool HasFormat() const { return !!format_; }
  ::autofill_assistant::headless_experimental::ScreenshotParamsFormat GetFormat() const { DCHECK(HasFormat()); return format_.value(); }
  void SetFormat(::autofill_assistant::headless_experimental::ScreenshotParamsFormat value) { format_ = value; }

  // Compression quality from range [0..100] (jpeg only).
  bool HasQuality() const { return !!quality_; }
  int GetQuality() const { DCHECK(HasQuality()); return quality_.value(); }
  void SetQuality(int value) { quality_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ScreenshotParams> Clone() const;

  template<int STATE>
  class ScreenshotParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    ScreenshotParamsBuilder<STATE>& SetFormat(::autofill_assistant::headless_experimental::ScreenshotParamsFormat value) {
      result_->SetFormat(value);
      return *this;
    }

    ScreenshotParamsBuilder<STATE>& SetQuality(int value) {
      result_->SetQuality(value);
      return *this;
    }

    std::unique_ptr<ScreenshotParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ScreenshotParams;
    ScreenshotParamsBuilder() : result_(new ScreenshotParams()) { }

    template<int STEP> ScreenshotParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScreenshotParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ScreenshotParams> result_;
  };

  static ScreenshotParamsBuilder<0> Builder() {
    return ScreenshotParamsBuilder<0>();
  }

 private:
  ScreenshotParams() { }

  absl::optional<::autofill_assistant::headless_experimental::ScreenshotParamsFormat> format_;
  absl::optional<int> quality_;
};


// Parameters for the BeginFrame command.
class BeginFrameParams {
 public:
  static std::unique_ptr<BeginFrameParams> Parse(const base::Value& value, ErrorReporter* errors);
  BeginFrameParams(const BeginFrameParams&) = delete;
  BeginFrameParams& operator=(const BeginFrameParams&) = delete;
  ~BeginFrameParams() { }

  // Timestamp of this BeginFrame in Renderer TimeTicks (milliseconds of uptime). If not set,
  // the current time will be used.
  bool HasFrameTimeTicks() const { return !!frame_time_ticks_; }
  double GetFrameTimeTicks() const { DCHECK(HasFrameTimeTicks()); return frame_time_ticks_.value(); }
  void SetFrameTimeTicks(double value) { frame_time_ticks_ = value; }

  // The interval between BeginFrames that is reported to the compositor, in milliseconds.
  // Defaults to a 60 frames/second interval, i.e. about 16.666 milliseconds.
  bool HasInterval() const { return !!interval_; }
  double GetInterval() const { DCHECK(HasInterval()); return interval_.value(); }
  void SetInterval(double value) { interval_ = value; }

  // Whether updates should not be committed and drawn onto the display. False by default. If
  // true, only side effects of the BeginFrame will be run, such as layout and animations, but
  // any visual updates may not be visible on the display or in screenshots.
  bool HasNoDisplayUpdates() const { return !!no_display_updates_; }
  bool GetNoDisplayUpdates() const { DCHECK(HasNoDisplayUpdates()); return no_display_updates_.value(); }
  void SetNoDisplayUpdates(bool value) { no_display_updates_ = value; }

  // If set, a screenshot of the frame will be captured and returned in the response. Otherwise,
  // no screenshot will be captured. Note that capturing a screenshot can fail, for example,
  // during renderer initialization. In such a case, no screenshot data will be returned.
  bool HasScreenshot() const { return !!screenshot_; }
  const ::autofill_assistant::headless_experimental::ScreenshotParams* GetScreenshot() const { DCHECK(HasScreenshot()); return screenshot_.value().get(); }
  void SetScreenshot(std::unique_ptr<::autofill_assistant::headless_experimental::ScreenshotParams> value) { screenshot_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<BeginFrameParams> Clone() const;

  template<int STATE>
  class BeginFrameParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    BeginFrameParamsBuilder<STATE>& SetFrameTimeTicks(double value) {
      result_->SetFrameTimeTicks(value);
      return *this;
    }

    BeginFrameParamsBuilder<STATE>& SetInterval(double value) {
      result_->SetInterval(value);
      return *this;
    }

    BeginFrameParamsBuilder<STATE>& SetNoDisplayUpdates(bool value) {
      result_->SetNoDisplayUpdates(value);
      return *this;
    }

    BeginFrameParamsBuilder<STATE>& SetScreenshot(std::unique_ptr<::autofill_assistant::headless_experimental::ScreenshotParams> value) {
      result_->SetScreenshot(std::move(value));
      return *this;
    }

    std::unique_ptr<BeginFrameParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class BeginFrameParams;
    BeginFrameParamsBuilder() : result_(new BeginFrameParams()) { }

    template<int STEP> BeginFrameParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BeginFrameParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<BeginFrameParams> result_;
  };

  static BeginFrameParamsBuilder<0> Builder() {
    return BeginFrameParamsBuilder<0>();
  }

 private:
  BeginFrameParams() { }

  absl::optional<double> frame_time_ticks_;
  absl::optional<double> interval_;
  absl::optional<bool> no_display_updates_;
  absl::optional<std::unique_ptr<::autofill_assistant::headless_experimental::ScreenshotParams>> screenshot_;
};


// Result for the BeginFrame command.
class BeginFrameResult {
 public:
  static std::unique_ptr<BeginFrameResult> Parse(const base::Value& value, ErrorReporter* errors);
  BeginFrameResult(const BeginFrameResult&) = delete;
  BeginFrameResult& operator=(const BeginFrameResult&) = delete;
  ~BeginFrameResult() { }

  // Whether the BeginFrame resulted in damage and, thus, a new frame was committed to the
  // display. Reported for diagnostic uses, may be removed in the future.
  bool GetHasDamage() const { return has_damage_; }
  void SetHasDamage(bool value) { has_damage_ = value; }

  // Base64-encoded image data of the screenshot, if one was requested and successfully taken.
  bool HasScreenshotData() const { return !!screenshot_data_; }
  std::string GetScreenshotData() const { DCHECK(HasScreenshotData()); return screenshot_data_.value(); }
  void SetScreenshotData(const std::string& value) { screenshot_data_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<BeginFrameResult> Clone() const;

  template<int STATE>
  class BeginFrameResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHasDamageSet = 1 << 1,
      kAllRequiredFieldsSet = (kHasDamageSet | 0)
    };

    BeginFrameResultBuilder<STATE | kHasDamageSet>& SetHasDamage(bool value) {
      static_assert(!(STATE & kHasDamageSet), "property hasDamage should not have already been set");
      result_->SetHasDamage(value);
      return CastState<kHasDamageSet>();
    }

    BeginFrameResultBuilder<STATE>& SetScreenshotData(const std::string& value) {
      result_->SetScreenshotData(value);
      return *this;
    }

    std::unique_ptr<BeginFrameResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class BeginFrameResult;
    BeginFrameResultBuilder() : result_(new BeginFrameResult()) { }

    template<int STEP> BeginFrameResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BeginFrameResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<BeginFrameResult> result_;
  };

  static BeginFrameResultBuilder<0> Builder() {
    return BeginFrameResultBuilder<0>();
  }

 private:
  BeginFrameResult() { }

  bool has_damage_;
  absl::optional<std::string> screenshot_data_;
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


// Parameters for the NeedsBeginFramesChanged event.
class NeedsBeginFramesChangedParams {
 public:
  static std::unique_ptr<NeedsBeginFramesChangedParams> Parse(const base::Value& value, ErrorReporter* errors);
  NeedsBeginFramesChangedParams(const NeedsBeginFramesChangedParams&) = delete;
  NeedsBeginFramesChangedParams& operator=(const NeedsBeginFramesChangedParams&) = delete;
  ~NeedsBeginFramesChangedParams() { }

  // True if BeginFrames are needed, false otherwise.
  bool GetNeedsBeginFrames() const { return needs_begin_frames_; }
  void SetNeedsBeginFrames(bool value) { needs_begin_frames_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<NeedsBeginFramesChangedParams> Clone() const;

  template<int STATE>
  class NeedsBeginFramesChangedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNeedsBeginFramesSet = 1 << 1,
      kAllRequiredFieldsSet = (kNeedsBeginFramesSet | 0)
    };

    NeedsBeginFramesChangedParamsBuilder<STATE | kNeedsBeginFramesSet>& SetNeedsBeginFrames(bool value) {
      static_assert(!(STATE & kNeedsBeginFramesSet), "property needsBeginFrames should not have already been set");
      result_->SetNeedsBeginFrames(value);
      return CastState<kNeedsBeginFramesSet>();
    }

    std::unique_ptr<NeedsBeginFramesChangedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class NeedsBeginFramesChangedParams;
    NeedsBeginFramesChangedParamsBuilder() : result_(new NeedsBeginFramesChangedParams()) { }

    template<int STEP> NeedsBeginFramesChangedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<NeedsBeginFramesChangedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<NeedsBeginFramesChangedParams> result_;
  };

  static NeedsBeginFramesChangedParamsBuilder<0> Builder() {
    return NeedsBeginFramesChangedParamsBuilder<0>();
  }

 private:
  NeedsBeginFramesChangedParams() { }

  bool needs_begin_frames_;
};


}  // namespace headless_experimental

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_HEADLESS_EXPERIMENTAL_H_
