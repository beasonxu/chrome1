// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_EMULATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_EMULATION_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_security.h"

namespace autofill_assistant {

class ErrorReporter;

namespace emulation {

// Screen orientation.
class ScreenOrientation {
 public:
  static std::unique_ptr<ScreenOrientation> Parse(const base::Value& value, ErrorReporter* errors);
  ScreenOrientation(const ScreenOrientation&) = delete;
  ScreenOrientation& operator=(const ScreenOrientation&) = delete;
  ~ScreenOrientation() { }

  // Orientation type.
  ::autofill_assistant::emulation::ScreenOrientationType GetType() const { return type_; }
  void SetType(::autofill_assistant::emulation::ScreenOrientationType value) { type_ = value; }

  // Orientation angle.
  int GetAngle() const { return angle_; }
  void SetAngle(int value) { angle_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ScreenOrientation> Clone() const;

  template<int STATE>
  class ScreenOrientationBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTypeSet = 1 << 1,
    kAngleSet = 1 << 2,
      kAllRequiredFieldsSet = (kTypeSet | kAngleSet | 0)
    };

    ScreenOrientationBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::emulation::ScreenOrientationType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    ScreenOrientationBuilder<STATE | kAngleSet>& SetAngle(int value) {
      static_assert(!(STATE & kAngleSet), "property angle should not have already been set");
      result_->SetAngle(value);
      return CastState<kAngleSet>();
    }

    std::unique_ptr<ScreenOrientation> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ScreenOrientation;
    ScreenOrientationBuilder() : result_(new ScreenOrientation()) { }

    template<int STEP> ScreenOrientationBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScreenOrientationBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ScreenOrientation> result_;
  };

  static ScreenOrientationBuilder<0> Builder() {
    return ScreenOrientationBuilder<0>();
  }

 private:
  ScreenOrientation() { }

  ::autofill_assistant::emulation::ScreenOrientationType type_;
  int angle_;
};


class DisplayFeature {
 public:
  static std::unique_ptr<DisplayFeature> Parse(const base::Value& value, ErrorReporter* errors);
  DisplayFeature(const DisplayFeature&) = delete;
  DisplayFeature& operator=(const DisplayFeature&) = delete;
  ~DisplayFeature() { }

  // Orientation of a display feature in relation to screen
  ::autofill_assistant::emulation::DisplayFeatureOrientation GetOrientation() const { return orientation_; }
  void SetOrientation(::autofill_assistant::emulation::DisplayFeatureOrientation value) { orientation_ = value; }

  // The offset from the screen origin in either the x (for vertical
  // orientation) or y (for horizontal orientation) direction.
  int GetOffset() const { return offset_; }
  void SetOffset(int value) { offset_ = value; }

  // A display feature may mask content such that it is not physically
  // displayed - this length along with the offset describes this area.
  // A display feature that only splits content will have a 0 mask_length.
  int GetMaskLength() const { return mask_length_; }
  void SetMaskLength(int value) { mask_length_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisplayFeature> Clone() const;

  template<int STATE>
  class DisplayFeatureBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOrientationSet = 1 << 1,
    kOffsetSet = 1 << 2,
    kMaskLengthSet = 1 << 3,
      kAllRequiredFieldsSet = (kOrientationSet | kOffsetSet | kMaskLengthSet | 0)
    };

    DisplayFeatureBuilder<STATE | kOrientationSet>& SetOrientation(::autofill_assistant::emulation::DisplayFeatureOrientation value) {
      static_assert(!(STATE & kOrientationSet), "property orientation should not have already been set");
      result_->SetOrientation(value);
      return CastState<kOrientationSet>();
    }

    DisplayFeatureBuilder<STATE | kOffsetSet>& SetOffset(int value) {
      static_assert(!(STATE & kOffsetSet), "property offset should not have already been set");
      result_->SetOffset(value);
      return CastState<kOffsetSet>();
    }

    DisplayFeatureBuilder<STATE | kMaskLengthSet>& SetMaskLength(int value) {
      static_assert(!(STATE & kMaskLengthSet), "property maskLength should not have already been set");
      result_->SetMaskLength(value);
      return CastState<kMaskLengthSet>();
    }

    std::unique_ptr<DisplayFeature> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisplayFeature;
    DisplayFeatureBuilder() : result_(new DisplayFeature()) { }

    template<int STEP> DisplayFeatureBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisplayFeatureBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisplayFeature> result_;
  };

  static DisplayFeatureBuilder<0> Builder() {
    return DisplayFeatureBuilder<0>();
  }

 private:
  DisplayFeature() { }

  ::autofill_assistant::emulation::DisplayFeatureOrientation orientation_;
  int offset_;
  int mask_length_;
};


class MediaFeature {
 public:
  static std::unique_ptr<MediaFeature> Parse(const base::Value& value, ErrorReporter* errors);
  MediaFeature(const MediaFeature&) = delete;
  MediaFeature& operator=(const MediaFeature&) = delete;
  ~MediaFeature() { }

  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<MediaFeature> Clone() const;

  template<int STATE>
  class MediaFeatureBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kValueSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kValueSet | 0)
    };

    MediaFeatureBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    MediaFeatureBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    std::unique_ptr<MediaFeature> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class MediaFeature;
    MediaFeatureBuilder() : result_(new MediaFeature()) { }

    template<int STEP> MediaFeatureBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<MediaFeatureBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<MediaFeature> result_;
  };

  static MediaFeatureBuilder<0> Builder() {
    return MediaFeatureBuilder<0>();
  }

 private:
  MediaFeature() { }

  std::string name_;
  std::string value_;
};


// Used to specify User Agent Cient Hints to emulate. See https://wicg.github.io/ua-client-hints
class UserAgentBrandVersion {
 public:
  static std::unique_ptr<UserAgentBrandVersion> Parse(const base::Value& value, ErrorReporter* errors);
  UserAgentBrandVersion(const UserAgentBrandVersion&) = delete;
  UserAgentBrandVersion& operator=(const UserAgentBrandVersion&) = delete;
  ~UserAgentBrandVersion() { }

  std::string GetBrand() const { return brand_; }
  void SetBrand(const std::string& value) { brand_ = value; }

  std::string GetVersion() const { return version_; }
  void SetVersion(const std::string& value) { version_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UserAgentBrandVersion> Clone() const;

  template<int STATE>
  class UserAgentBrandVersionBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBrandSet = 1 << 1,
    kVersionSet = 1 << 2,
      kAllRequiredFieldsSet = (kBrandSet | kVersionSet | 0)
    };

    UserAgentBrandVersionBuilder<STATE | kBrandSet>& SetBrand(const std::string& value) {
      static_assert(!(STATE & kBrandSet), "property brand should not have already been set");
      result_->SetBrand(value);
      return CastState<kBrandSet>();
    }

    UserAgentBrandVersionBuilder<STATE | kVersionSet>& SetVersion(const std::string& value) {
      static_assert(!(STATE & kVersionSet), "property version should not have already been set");
      result_->SetVersion(value);
      return CastState<kVersionSet>();
    }

    std::unique_ptr<UserAgentBrandVersion> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UserAgentBrandVersion;
    UserAgentBrandVersionBuilder() : result_(new UserAgentBrandVersion()) { }

    template<int STEP> UserAgentBrandVersionBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UserAgentBrandVersionBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UserAgentBrandVersion> result_;
  };

  static UserAgentBrandVersionBuilder<0> Builder() {
    return UserAgentBrandVersionBuilder<0>();
  }

 private:
  UserAgentBrandVersion() { }

  std::string brand_;
  std::string version_;
};


// Used to specify User Agent Cient Hints to emulate. See https://wicg.github.io/ua-client-hints
// Missing optional values will be filled in by the target with what it would normally use.
class UserAgentMetadata {
 public:
  static std::unique_ptr<UserAgentMetadata> Parse(const base::Value& value, ErrorReporter* errors);
  UserAgentMetadata(const UserAgentMetadata&) = delete;
  UserAgentMetadata& operator=(const UserAgentMetadata&) = delete;
  ~UserAgentMetadata() { }

  bool HasBrands() const { return !!brands_; }
  const std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>>* GetBrands() const { DCHECK(HasBrands()); return &brands_.value(); }
  void SetBrands(std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>> value) { brands_ = std::move(value); }

  bool HasFullVersionList() const { return !!full_version_list_; }
  const std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>>* GetFullVersionList() const { DCHECK(HasFullVersionList()); return &full_version_list_.value(); }
  void SetFullVersionList(std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>> value) { full_version_list_ = std::move(value); }

  bool HasFullVersion() const { return !!full_version_; }
  std::string GetFullVersion() const { DCHECK(HasFullVersion()); return full_version_.value(); }
  void SetFullVersion(const std::string& value) { full_version_ = value; }

  std::string GetPlatform() const { return platform_; }
  void SetPlatform(const std::string& value) { platform_ = value; }

  std::string GetPlatformVersion() const { return platform_version_; }
  void SetPlatformVersion(const std::string& value) { platform_version_ = value; }

  std::string GetArchitecture() const { return architecture_; }
  void SetArchitecture(const std::string& value) { architecture_ = value; }

  std::string GetModel() const { return model_; }
  void SetModel(const std::string& value) { model_ = value; }

  bool GetMobile() const { return mobile_; }
  void SetMobile(bool value) { mobile_ = value; }

  bool HasBitness() const { return !!bitness_; }
  std::string GetBitness() const { DCHECK(HasBitness()); return bitness_.value(); }
  void SetBitness(const std::string& value) { bitness_ = value; }

  bool HasWow64() const { return !!wow64_; }
  bool GetWow64() const { DCHECK(HasWow64()); return wow64_.value(); }
  void SetWow64(bool value) { wow64_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UserAgentMetadata> Clone() const;

  template<int STATE>
  class UserAgentMetadataBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPlatformSet = 1 << 1,
    kPlatformVersionSet = 1 << 2,
    kArchitectureSet = 1 << 3,
    kModelSet = 1 << 4,
    kMobileSet = 1 << 5,
      kAllRequiredFieldsSet = (kPlatformSet | kPlatformVersionSet | kArchitectureSet | kModelSet | kMobileSet | 0)
    };

    UserAgentMetadataBuilder<STATE>& SetBrands(std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>> value) {
      result_->SetBrands(std::move(value));
      return *this;
    }

    UserAgentMetadataBuilder<STATE>& SetFullVersionList(std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>> value) {
      result_->SetFullVersionList(std::move(value));
      return *this;
    }

    UserAgentMetadataBuilder<STATE>& SetFullVersion(const std::string& value) {
      result_->SetFullVersion(value);
      return *this;
    }

    UserAgentMetadataBuilder<STATE | kPlatformSet>& SetPlatform(const std::string& value) {
      static_assert(!(STATE & kPlatformSet), "property platform should not have already been set");
      result_->SetPlatform(value);
      return CastState<kPlatformSet>();
    }

    UserAgentMetadataBuilder<STATE | kPlatformVersionSet>& SetPlatformVersion(const std::string& value) {
      static_assert(!(STATE & kPlatformVersionSet), "property platformVersion should not have already been set");
      result_->SetPlatformVersion(value);
      return CastState<kPlatformVersionSet>();
    }

    UserAgentMetadataBuilder<STATE | kArchitectureSet>& SetArchitecture(const std::string& value) {
      static_assert(!(STATE & kArchitectureSet), "property architecture should not have already been set");
      result_->SetArchitecture(value);
      return CastState<kArchitectureSet>();
    }

    UserAgentMetadataBuilder<STATE | kModelSet>& SetModel(const std::string& value) {
      static_assert(!(STATE & kModelSet), "property model should not have already been set");
      result_->SetModel(value);
      return CastState<kModelSet>();
    }

    UserAgentMetadataBuilder<STATE | kMobileSet>& SetMobile(bool value) {
      static_assert(!(STATE & kMobileSet), "property mobile should not have already been set");
      result_->SetMobile(value);
      return CastState<kMobileSet>();
    }

    UserAgentMetadataBuilder<STATE>& SetBitness(const std::string& value) {
      result_->SetBitness(value);
      return *this;
    }

    UserAgentMetadataBuilder<STATE>& SetWow64(bool value) {
      result_->SetWow64(value);
      return *this;
    }

    std::unique_ptr<UserAgentMetadata> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UserAgentMetadata;
    UserAgentMetadataBuilder() : result_(new UserAgentMetadata()) { }

    template<int STEP> UserAgentMetadataBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UserAgentMetadataBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UserAgentMetadata> result_;
  };

  static UserAgentMetadataBuilder<0> Builder() {
    return UserAgentMetadataBuilder<0>();
  }

 private:
  UserAgentMetadata() { }

  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>>> brands_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::emulation::UserAgentBrandVersion>>> full_version_list_;
  absl::optional<std::string> full_version_;
  std::string platform_;
  std::string platform_version_;
  std::string architecture_;
  std::string model_;
  bool mobile_;
  absl::optional<std::string> bitness_;
  absl::optional<bool> wow64_;
};


// Parameters for the CanEmulate command.
class CanEmulateParams {
 public:
  static std::unique_ptr<CanEmulateParams> Parse(const base::Value& value, ErrorReporter* errors);
  CanEmulateParams(const CanEmulateParams&) = delete;
  CanEmulateParams& operator=(const CanEmulateParams&) = delete;
  ~CanEmulateParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CanEmulateParams> Clone() const;

  template<int STATE>
  class CanEmulateParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<CanEmulateParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CanEmulateParams;
    CanEmulateParamsBuilder() : result_(new CanEmulateParams()) { }

    template<int STEP> CanEmulateParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CanEmulateParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CanEmulateParams> result_;
  };

  static CanEmulateParamsBuilder<0> Builder() {
    return CanEmulateParamsBuilder<0>();
  }

 private:
  CanEmulateParams() { }

};


// Result for the CanEmulate command.
class CanEmulateResult {
 public:
  static std::unique_ptr<CanEmulateResult> Parse(const base::Value& value, ErrorReporter* errors);
  CanEmulateResult(const CanEmulateResult&) = delete;
  CanEmulateResult& operator=(const CanEmulateResult&) = delete;
  ~CanEmulateResult() { }

  // True if emulation is supported.
  bool GetResult() const { return result_; }
  void SetResult(bool value) { result_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CanEmulateResult> Clone() const;

  template<int STATE>
  class CanEmulateResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResultSet = 1 << 1,
      kAllRequiredFieldsSet = (kResultSet | 0)
    };

    CanEmulateResultBuilder<STATE | kResultSet>& SetResult(bool value) {
      static_assert(!(STATE & kResultSet), "property result should not have already been set");
      result_->SetResult(value);
      return CastState<kResultSet>();
    }

    std::unique_ptr<CanEmulateResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CanEmulateResult;
    CanEmulateResultBuilder() : result_(new CanEmulateResult()) { }

    template<int STEP> CanEmulateResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CanEmulateResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CanEmulateResult> result_;
  };

  static CanEmulateResultBuilder<0> Builder() {
    return CanEmulateResultBuilder<0>();
  }

 private:
  CanEmulateResult() { }

  bool result_;
};


// Parameters for the ClearDeviceMetricsOverride command.
class ClearDeviceMetricsOverrideParams {
 public:
  static std::unique_ptr<ClearDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearDeviceMetricsOverrideParams(const ClearDeviceMetricsOverrideParams&) = delete;
  ClearDeviceMetricsOverrideParams& operator=(const ClearDeviceMetricsOverrideParams&) = delete;
  ~ClearDeviceMetricsOverrideParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearDeviceMetricsOverrideParams> Clone() const;

  template<int STATE>
  class ClearDeviceMetricsOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearDeviceMetricsOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearDeviceMetricsOverrideParams;
    ClearDeviceMetricsOverrideParamsBuilder() : result_(new ClearDeviceMetricsOverrideParams()) { }

    template<int STEP> ClearDeviceMetricsOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearDeviceMetricsOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearDeviceMetricsOverrideParams> result_;
  };

  static ClearDeviceMetricsOverrideParamsBuilder<0> Builder() {
    return ClearDeviceMetricsOverrideParamsBuilder<0>();
  }

 private:
  ClearDeviceMetricsOverrideParams() { }

};


// Result for the ClearDeviceMetricsOverride command.
class ClearDeviceMetricsOverrideResult {
 public:
  static std::unique_ptr<ClearDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearDeviceMetricsOverrideResult(const ClearDeviceMetricsOverrideResult&) = delete;
  ClearDeviceMetricsOverrideResult& operator=(const ClearDeviceMetricsOverrideResult&) = delete;
  ~ClearDeviceMetricsOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearDeviceMetricsOverrideResult> Clone() const;

  template<int STATE>
  class ClearDeviceMetricsOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearDeviceMetricsOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearDeviceMetricsOverrideResult;
    ClearDeviceMetricsOverrideResultBuilder() : result_(new ClearDeviceMetricsOverrideResult()) { }

    template<int STEP> ClearDeviceMetricsOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearDeviceMetricsOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearDeviceMetricsOverrideResult> result_;
  };

  static ClearDeviceMetricsOverrideResultBuilder<0> Builder() {
    return ClearDeviceMetricsOverrideResultBuilder<0>();
  }

 private:
  ClearDeviceMetricsOverrideResult() { }

};


// Parameters for the ClearGeolocationOverride command.
class ClearGeolocationOverrideParams {
 public:
  static std::unique_ptr<ClearGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearGeolocationOverrideParams(const ClearGeolocationOverrideParams&) = delete;
  ClearGeolocationOverrideParams& operator=(const ClearGeolocationOverrideParams&) = delete;
  ~ClearGeolocationOverrideParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearGeolocationOverrideParams> Clone() const;

  template<int STATE>
  class ClearGeolocationOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearGeolocationOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearGeolocationOverrideParams;
    ClearGeolocationOverrideParamsBuilder() : result_(new ClearGeolocationOverrideParams()) { }

    template<int STEP> ClearGeolocationOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearGeolocationOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearGeolocationOverrideParams> result_;
  };

  static ClearGeolocationOverrideParamsBuilder<0> Builder() {
    return ClearGeolocationOverrideParamsBuilder<0>();
  }

 private:
  ClearGeolocationOverrideParams() { }

};


// Result for the ClearGeolocationOverride command.
class ClearGeolocationOverrideResult {
 public:
  static std::unique_ptr<ClearGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearGeolocationOverrideResult(const ClearGeolocationOverrideResult&) = delete;
  ClearGeolocationOverrideResult& operator=(const ClearGeolocationOverrideResult&) = delete;
  ~ClearGeolocationOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearGeolocationOverrideResult> Clone() const;

  template<int STATE>
  class ClearGeolocationOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearGeolocationOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearGeolocationOverrideResult;
    ClearGeolocationOverrideResultBuilder() : result_(new ClearGeolocationOverrideResult()) { }

    template<int STEP> ClearGeolocationOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearGeolocationOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearGeolocationOverrideResult> result_;
  };

  static ClearGeolocationOverrideResultBuilder<0> Builder() {
    return ClearGeolocationOverrideResultBuilder<0>();
  }

 private:
  ClearGeolocationOverrideResult() { }

};


// Parameters for the ResetPageScaleFactor command.
class ResetPageScaleFactorParams {
 public:
  static std::unique_ptr<ResetPageScaleFactorParams> Parse(const base::Value& value, ErrorReporter* errors);
  ResetPageScaleFactorParams(const ResetPageScaleFactorParams&) = delete;
  ResetPageScaleFactorParams& operator=(const ResetPageScaleFactorParams&) = delete;
  ~ResetPageScaleFactorParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ResetPageScaleFactorParams> Clone() const;

  template<int STATE>
  class ResetPageScaleFactorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ResetPageScaleFactorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ResetPageScaleFactorParams;
    ResetPageScaleFactorParamsBuilder() : result_(new ResetPageScaleFactorParams()) { }

    template<int STEP> ResetPageScaleFactorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ResetPageScaleFactorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ResetPageScaleFactorParams> result_;
  };

  static ResetPageScaleFactorParamsBuilder<0> Builder() {
    return ResetPageScaleFactorParamsBuilder<0>();
  }

 private:
  ResetPageScaleFactorParams() { }

};


// Result for the ResetPageScaleFactor command.
class ResetPageScaleFactorResult {
 public:
  static std::unique_ptr<ResetPageScaleFactorResult> Parse(const base::Value& value, ErrorReporter* errors);
  ResetPageScaleFactorResult(const ResetPageScaleFactorResult&) = delete;
  ResetPageScaleFactorResult& operator=(const ResetPageScaleFactorResult&) = delete;
  ~ResetPageScaleFactorResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ResetPageScaleFactorResult> Clone() const;

  template<int STATE>
  class ResetPageScaleFactorResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ResetPageScaleFactorResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ResetPageScaleFactorResult;
    ResetPageScaleFactorResultBuilder() : result_(new ResetPageScaleFactorResult()) { }

    template<int STEP> ResetPageScaleFactorResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ResetPageScaleFactorResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ResetPageScaleFactorResult> result_;
  };

  static ResetPageScaleFactorResultBuilder<0> Builder() {
    return ResetPageScaleFactorResultBuilder<0>();
  }

 private:
  ResetPageScaleFactorResult() { }

};


// Parameters for the SetFocusEmulationEnabled command.
class SetFocusEmulationEnabledParams {
 public:
  static std::unique_ptr<SetFocusEmulationEnabledParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetFocusEmulationEnabledParams(const SetFocusEmulationEnabledParams&) = delete;
  SetFocusEmulationEnabledParams& operator=(const SetFocusEmulationEnabledParams&) = delete;
  ~SetFocusEmulationEnabledParams() { }

  // Whether to enable to disable focus emulation.
  bool GetEnabled() const { return enabled_; }
  void SetEnabled(bool value) { enabled_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetFocusEmulationEnabledParams> Clone() const;

  template<int STATE>
  class SetFocusEmulationEnabledParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEnabledSet = 1 << 1,
      kAllRequiredFieldsSet = (kEnabledSet | 0)
    };

    SetFocusEmulationEnabledParamsBuilder<STATE | kEnabledSet>& SetEnabled(bool value) {
      static_assert(!(STATE & kEnabledSet), "property enabled should not have already been set");
      result_->SetEnabled(value);
      return CastState<kEnabledSet>();
    }

    std::unique_ptr<SetFocusEmulationEnabledParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetFocusEmulationEnabledParams;
    SetFocusEmulationEnabledParamsBuilder() : result_(new SetFocusEmulationEnabledParams()) { }

    template<int STEP> SetFocusEmulationEnabledParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetFocusEmulationEnabledParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetFocusEmulationEnabledParams> result_;
  };

  static SetFocusEmulationEnabledParamsBuilder<0> Builder() {
    return SetFocusEmulationEnabledParamsBuilder<0>();
  }

 private:
  SetFocusEmulationEnabledParams() { }

  bool enabled_;
};


// Result for the SetFocusEmulationEnabled command.
class SetFocusEmulationEnabledResult {
 public:
  static std::unique_ptr<SetFocusEmulationEnabledResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetFocusEmulationEnabledResult(const SetFocusEmulationEnabledResult&) = delete;
  SetFocusEmulationEnabledResult& operator=(const SetFocusEmulationEnabledResult&) = delete;
  ~SetFocusEmulationEnabledResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetFocusEmulationEnabledResult> Clone() const;

  template<int STATE>
  class SetFocusEmulationEnabledResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetFocusEmulationEnabledResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetFocusEmulationEnabledResult;
    SetFocusEmulationEnabledResultBuilder() : result_(new SetFocusEmulationEnabledResult()) { }

    template<int STEP> SetFocusEmulationEnabledResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetFocusEmulationEnabledResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetFocusEmulationEnabledResult> result_;
  };

  static SetFocusEmulationEnabledResultBuilder<0> Builder() {
    return SetFocusEmulationEnabledResultBuilder<0>();
  }

 private:
  SetFocusEmulationEnabledResult() { }

};


// Parameters for the SetAutoDarkModeOverride command.
class SetAutoDarkModeOverrideParams {
 public:
  static std::unique_ptr<SetAutoDarkModeOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetAutoDarkModeOverrideParams(const SetAutoDarkModeOverrideParams&) = delete;
  SetAutoDarkModeOverrideParams& operator=(const SetAutoDarkModeOverrideParams&) = delete;
  ~SetAutoDarkModeOverrideParams() { }

  // Whether to enable or disable automatic dark mode.
  // If not specified, any existing override will be cleared.
  bool HasEnabled() const { return !!enabled_; }
  bool GetEnabled() const { DCHECK(HasEnabled()); return enabled_.value(); }
  void SetEnabled(bool value) { enabled_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAutoDarkModeOverrideParams> Clone() const;

  template<int STATE>
  class SetAutoDarkModeOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetAutoDarkModeOverrideParamsBuilder<STATE>& SetEnabled(bool value) {
      result_->SetEnabled(value);
      return *this;
    }

    std::unique_ptr<SetAutoDarkModeOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAutoDarkModeOverrideParams;
    SetAutoDarkModeOverrideParamsBuilder() : result_(new SetAutoDarkModeOverrideParams()) { }

    template<int STEP> SetAutoDarkModeOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAutoDarkModeOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAutoDarkModeOverrideParams> result_;
  };

  static SetAutoDarkModeOverrideParamsBuilder<0> Builder() {
    return SetAutoDarkModeOverrideParamsBuilder<0>();
  }

 private:
  SetAutoDarkModeOverrideParams() { }

  absl::optional<bool> enabled_;
};


// Result for the SetAutoDarkModeOverride command.
class SetAutoDarkModeOverrideResult {
 public:
  static std::unique_ptr<SetAutoDarkModeOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetAutoDarkModeOverrideResult(const SetAutoDarkModeOverrideResult&) = delete;
  SetAutoDarkModeOverrideResult& operator=(const SetAutoDarkModeOverrideResult&) = delete;
  ~SetAutoDarkModeOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAutoDarkModeOverrideResult> Clone() const;

  template<int STATE>
  class SetAutoDarkModeOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetAutoDarkModeOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAutoDarkModeOverrideResult;
    SetAutoDarkModeOverrideResultBuilder() : result_(new SetAutoDarkModeOverrideResult()) { }

    template<int STEP> SetAutoDarkModeOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAutoDarkModeOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAutoDarkModeOverrideResult> result_;
  };

  static SetAutoDarkModeOverrideResultBuilder<0> Builder() {
    return SetAutoDarkModeOverrideResultBuilder<0>();
  }

 private:
  SetAutoDarkModeOverrideResult() { }

};


// Parameters for the SetCPUThrottlingRate command.
class SetCPUThrottlingRateParams {
 public:
  static std::unique_ptr<SetCPUThrottlingRateParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetCPUThrottlingRateParams(const SetCPUThrottlingRateParams&) = delete;
  SetCPUThrottlingRateParams& operator=(const SetCPUThrottlingRateParams&) = delete;
  ~SetCPUThrottlingRateParams() { }

  // Throttling rate as a slowdown factor (1 is no throttle, 2 is 2x slowdown, etc).
  double GetRate() const { return rate_; }
  void SetRate(double value) { rate_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetCPUThrottlingRateParams> Clone() const;

  template<int STATE>
  class SetCPUThrottlingRateParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRateSet = 1 << 1,
      kAllRequiredFieldsSet = (kRateSet | 0)
    };

    SetCPUThrottlingRateParamsBuilder<STATE | kRateSet>& SetRate(double value) {
      static_assert(!(STATE & kRateSet), "property rate should not have already been set");
      result_->SetRate(value);
      return CastState<kRateSet>();
    }

    std::unique_ptr<SetCPUThrottlingRateParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetCPUThrottlingRateParams;
    SetCPUThrottlingRateParamsBuilder() : result_(new SetCPUThrottlingRateParams()) { }

    template<int STEP> SetCPUThrottlingRateParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetCPUThrottlingRateParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetCPUThrottlingRateParams> result_;
  };

  static SetCPUThrottlingRateParamsBuilder<0> Builder() {
    return SetCPUThrottlingRateParamsBuilder<0>();
  }

 private:
  SetCPUThrottlingRateParams() { }

  double rate_;
};


// Result for the SetCPUThrottlingRate command.
class SetCPUThrottlingRateResult {
 public:
  static std::unique_ptr<SetCPUThrottlingRateResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetCPUThrottlingRateResult(const SetCPUThrottlingRateResult&) = delete;
  SetCPUThrottlingRateResult& operator=(const SetCPUThrottlingRateResult&) = delete;
  ~SetCPUThrottlingRateResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetCPUThrottlingRateResult> Clone() const;

  template<int STATE>
  class SetCPUThrottlingRateResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetCPUThrottlingRateResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetCPUThrottlingRateResult;
    SetCPUThrottlingRateResultBuilder() : result_(new SetCPUThrottlingRateResult()) { }

    template<int STEP> SetCPUThrottlingRateResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetCPUThrottlingRateResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetCPUThrottlingRateResult> result_;
  };

  static SetCPUThrottlingRateResultBuilder<0> Builder() {
    return SetCPUThrottlingRateResultBuilder<0>();
  }

 private:
  SetCPUThrottlingRateResult() { }

};


// Parameters for the SetDefaultBackgroundColorOverride command.
class SetDefaultBackgroundColorOverrideParams {
 public:
  static std::unique_ptr<SetDefaultBackgroundColorOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetDefaultBackgroundColorOverrideParams(const SetDefaultBackgroundColorOverrideParams&) = delete;
  SetDefaultBackgroundColorOverrideParams& operator=(const SetDefaultBackgroundColorOverrideParams&) = delete;
  ~SetDefaultBackgroundColorOverrideParams() { }

  // RGBA of the default background color. If not specified, any existing override will be
  // cleared.
  bool HasColor() const { return !!color_; }
  const ::autofill_assistant::dom::RGBA* GetColor() const { DCHECK(HasColor()); return color_.value().get(); }
  void SetColor(std::unique_ptr<::autofill_assistant::dom::RGBA> value) { color_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDefaultBackgroundColorOverrideParams> Clone() const;

  template<int STATE>
  class SetDefaultBackgroundColorOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetDefaultBackgroundColorOverrideParamsBuilder<STATE>& SetColor(std::unique_ptr<::autofill_assistant::dom::RGBA> value) {
      result_->SetColor(std::move(value));
      return *this;
    }

    std::unique_ptr<SetDefaultBackgroundColorOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDefaultBackgroundColorOverrideParams;
    SetDefaultBackgroundColorOverrideParamsBuilder() : result_(new SetDefaultBackgroundColorOverrideParams()) { }

    template<int STEP> SetDefaultBackgroundColorOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDefaultBackgroundColorOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDefaultBackgroundColorOverrideParams> result_;
  };

  static SetDefaultBackgroundColorOverrideParamsBuilder<0> Builder() {
    return SetDefaultBackgroundColorOverrideParamsBuilder<0>();
  }

 private:
  SetDefaultBackgroundColorOverrideParams() { }

  absl::optional<std::unique_ptr<::autofill_assistant::dom::RGBA>> color_;
};


// Result for the SetDefaultBackgroundColorOverride command.
class SetDefaultBackgroundColorOverrideResult {
 public:
  static std::unique_ptr<SetDefaultBackgroundColorOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetDefaultBackgroundColorOverrideResult(const SetDefaultBackgroundColorOverrideResult&) = delete;
  SetDefaultBackgroundColorOverrideResult& operator=(const SetDefaultBackgroundColorOverrideResult&) = delete;
  ~SetDefaultBackgroundColorOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDefaultBackgroundColorOverrideResult> Clone() const;

  template<int STATE>
  class SetDefaultBackgroundColorOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetDefaultBackgroundColorOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDefaultBackgroundColorOverrideResult;
    SetDefaultBackgroundColorOverrideResultBuilder() : result_(new SetDefaultBackgroundColorOverrideResult()) { }

    template<int STEP> SetDefaultBackgroundColorOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDefaultBackgroundColorOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDefaultBackgroundColorOverrideResult> result_;
  };

  static SetDefaultBackgroundColorOverrideResultBuilder<0> Builder() {
    return SetDefaultBackgroundColorOverrideResultBuilder<0>();
  }

 private:
  SetDefaultBackgroundColorOverrideResult() { }

};


// Parameters for the SetDeviceMetricsOverride command.
class SetDeviceMetricsOverrideParams {
 public:
  static std::unique_ptr<SetDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetDeviceMetricsOverrideParams(const SetDeviceMetricsOverrideParams&) = delete;
  SetDeviceMetricsOverrideParams& operator=(const SetDeviceMetricsOverrideParams&) = delete;
  ~SetDeviceMetricsOverrideParams() { }

  // Overriding width value in pixels (minimum 0, maximum 10000000). 0 disables the override.
  int GetWidth() const { return width_; }
  void SetWidth(int value) { width_ = value; }

  // Overriding height value in pixels (minimum 0, maximum 10000000). 0 disables the override.
  int GetHeight() const { return height_; }
  void SetHeight(int value) { height_ = value; }

  // Overriding device scale factor value. 0 disables the override.
  double GetDeviceScaleFactor() const { return device_scale_factor_; }
  void SetDeviceScaleFactor(double value) { device_scale_factor_ = value; }

  // Whether to emulate mobile device. This includes viewport meta tag, overlay scrollbars, text
  // autosizing and more.
  bool GetMobile() const { return mobile_; }
  void SetMobile(bool value) { mobile_ = value; }

  // Scale to apply to resulting view image.
  bool HasScale() const { return !!scale_; }
  double GetScale() const { DCHECK(HasScale()); return scale_.value(); }
  void SetScale(double value) { scale_ = value; }

  // Overriding screen width value in pixels (minimum 0, maximum 10000000).
  bool HasScreenWidth() const { return !!screen_width_; }
  int GetScreenWidth() const { DCHECK(HasScreenWidth()); return screen_width_.value(); }
  void SetScreenWidth(int value) { screen_width_ = value; }

  // Overriding screen height value in pixels (minimum 0, maximum 10000000).
  bool HasScreenHeight() const { return !!screen_height_; }
  int GetScreenHeight() const { DCHECK(HasScreenHeight()); return screen_height_.value(); }
  void SetScreenHeight(int value) { screen_height_ = value; }

  // Overriding view X position on screen in pixels (minimum 0, maximum 10000000).
  bool HasPositionX() const { return !!positionx_; }
  int GetPositionX() const { DCHECK(HasPositionX()); return positionx_.value(); }
  void SetPositionX(int value) { positionx_ = value; }

  // Overriding view Y position on screen in pixels (minimum 0, maximum 10000000).
  bool HasPositionY() const { return !!positiony_; }
  int GetPositionY() const { DCHECK(HasPositionY()); return positiony_.value(); }
  void SetPositionY(int value) { positiony_ = value; }

  // Do not set visible view size, rely upon explicit setVisibleSize call.
  bool HasDontSetVisibleSize() const { return !!dont_set_visible_size_; }
  bool GetDontSetVisibleSize() const { DCHECK(HasDontSetVisibleSize()); return dont_set_visible_size_.value(); }
  void SetDontSetVisibleSize(bool value) { dont_set_visible_size_ = value; }

  // Screen orientation override.
  bool HasScreenOrientation() const { return !!screen_orientation_; }
  const ::autofill_assistant::emulation::ScreenOrientation* GetScreenOrientation() const { DCHECK(HasScreenOrientation()); return screen_orientation_.value().get(); }
  void SetScreenOrientation(std::unique_ptr<::autofill_assistant::emulation::ScreenOrientation> value) { screen_orientation_ = std::move(value); }

  // If set, the visible area of the page will be overridden to this viewport. This viewport
  // change is not observed by the page, e.g. viewport-relative elements do not change positions.
  bool HasViewport() const { return !!viewport_; }
  const ::autofill_assistant::page::Viewport* GetViewport() const { DCHECK(HasViewport()); return viewport_.value().get(); }
  void SetViewport(std::unique_ptr<::autofill_assistant::page::Viewport> value) { viewport_ = std::move(value); }

  // If set, the display feature of a multi-segment screen. If not set, multi-segment support
  // is turned-off.
  bool HasDisplayFeature() const { return !!display_feature_; }
  const ::autofill_assistant::emulation::DisplayFeature* GetDisplayFeature() const { DCHECK(HasDisplayFeature()); return display_feature_.value().get(); }
  void SetDisplayFeature(std::unique_ptr<::autofill_assistant::emulation::DisplayFeature> value) { display_feature_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDeviceMetricsOverrideParams> Clone() const;

  template<int STATE>
  class SetDeviceMetricsOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kWidthSet = 1 << 1,
    kHeightSet = 1 << 2,
    kDeviceScaleFactorSet = 1 << 3,
    kMobileSet = 1 << 4,
      kAllRequiredFieldsSet = (kWidthSet | kHeightSet | kDeviceScaleFactorSet | kMobileSet | 0)
    };

    SetDeviceMetricsOverrideParamsBuilder<STATE | kWidthSet>& SetWidth(int value) {
      static_assert(!(STATE & kWidthSet), "property width should not have already been set");
      result_->SetWidth(value);
      return CastState<kWidthSet>();
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE | kHeightSet>& SetHeight(int value) {
      static_assert(!(STATE & kHeightSet), "property height should not have already been set");
      result_->SetHeight(value);
      return CastState<kHeightSet>();
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE | kDeviceScaleFactorSet>& SetDeviceScaleFactor(double value) {
      static_assert(!(STATE & kDeviceScaleFactorSet), "property deviceScaleFactor should not have already been set");
      result_->SetDeviceScaleFactor(value);
      return CastState<kDeviceScaleFactorSet>();
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE | kMobileSet>& SetMobile(bool value) {
      static_assert(!(STATE & kMobileSet), "property mobile should not have already been set");
      result_->SetMobile(value);
      return CastState<kMobileSet>();
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetScale(double value) {
      result_->SetScale(value);
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetScreenWidth(int value) {
      result_->SetScreenWidth(value);
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetScreenHeight(int value) {
      result_->SetScreenHeight(value);
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetPositionX(int value) {
      result_->SetPositionX(value);
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetPositionY(int value) {
      result_->SetPositionY(value);
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetDontSetVisibleSize(bool value) {
      result_->SetDontSetVisibleSize(value);
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetScreenOrientation(std::unique_ptr<::autofill_assistant::emulation::ScreenOrientation> value) {
      result_->SetScreenOrientation(std::move(value));
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetViewport(std::unique_ptr<::autofill_assistant::page::Viewport> value) {
      result_->SetViewport(std::move(value));
      return *this;
    }

    SetDeviceMetricsOverrideParamsBuilder<STATE>& SetDisplayFeature(std::unique_ptr<::autofill_assistant::emulation::DisplayFeature> value) {
      result_->SetDisplayFeature(std::move(value));
      return *this;
    }

    std::unique_ptr<SetDeviceMetricsOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDeviceMetricsOverrideParams;
    SetDeviceMetricsOverrideParamsBuilder() : result_(new SetDeviceMetricsOverrideParams()) { }

    template<int STEP> SetDeviceMetricsOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDeviceMetricsOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDeviceMetricsOverrideParams> result_;
  };

  static SetDeviceMetricsOverrideParamsBuilder<0> Builder() {
    return SetDeviceMetricsOverrideParamsBuilder<0>();
  }

 private:
  SetDeviceMetricsOverrideParams() { }

  int width_;
  int height_;
  double device_scale_factor_;
  bool mobile_;
  absl::optional<double> scale_;
  absl::optional<int> screen_width_;
  absl::optional<int> screen_height_;
  absl::optional<int> positionx_;
  absl::optional<int> positiony_;
  absl::optional<bool> dont_set_visible_size_;
  absl::optional<std::unique_ptr<::autofill_assistant::emulation::ScreenOrientation>> screen_orientation_;
  absl::optional<std::unique_ptr<::autofill_assistant::page::Viewport>> viewport_;
  absl::optional<std::unique_ptr<::autofill_assistant::emulation::DisplayFeature>> display_feature_;
};


// Result for the SetDeviceMetricsOverride command.
class SetDeviceMetricsOverrideResult {
 public:
  static std::unique_ptr<SetDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetDeviceMetricsOverrideResult(const SetDeviceMetricsOverrideResult&) = delete;
  SetDeviceMetricsOverrideResult& operator=(const SetDeviceMetricsOverrideResult&) = delete;
  ~SetDeviceMetricsOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDeviceMetricsOverrideResult> Clone() const;

  template<int STATE>
  class SetDeviceMetricsOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetDeviceMetricsOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDeviceMetricsOverrideResult;
    SetDeviceMetricsOverrideResultBuilder() : result_(new SetDeviceMetricsOverrideResult()) { }

    template<int STEP> SetDeviceMetricsOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDeviceMetricsOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDeviceMetricsOverrideResult> result_;
  };

  static SetDeviceMetricsOverrideResultBuilder<0> Builder() {
    return SetDeviceMetricsOverrideResultBuilder<0>();
  }

 private:
  SetDeviceMetricsOverrideResult() { }

};


// Parameters for the SetScrollbarsHidden command.
class SetScrollbarsHiddenParams {
 public:
  static std::unique_ptr<SetScrollbarsHiddenParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetScrollbarsHiddenParams(const SetScrollbarsHiddenParams&) = delete;
  SetScrollbarsHiddenParams& operator=(const SetScrollbarsHiddenParams&) = delete;
  ~SetScrollbarsHiddenParams() { }

  // Whether scrollbars should be always hidden.
  bool GetHidden() const { return hidden_; }
  void SetHidden(bool value) { hidden_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScrollbarsHiddenParams> Clone() const;

  template<int STATE>
  class SetScrollbarsHiddenParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHiddenSet = 1 << 1,
      kAllRequiredFieldsSet = (kHiddenSet | 0)
    };

    SetScrollbarsHiddenParamsBuilder<STATE | kHiddenSet>& SetHidden(bool value) {
      static_assert(!(STATE & kHiddenSet), "property hidden should not have already been set");
      result_->SetHidden(value);
      return CastState<kHiddenSet>();
    }

    std::unique_ptr<SetScrollbarsHiddenParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScrollbarsHiddenParams;
    SetScrollbarsHiddenParamsBuilder() : result_(new SetScrollbarsHiddenParams()) { }

    template<int STEP> SetScrollbarsHiddenParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScrollbarsHiddenParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScrollbarsHiddenParams> result_;
  };

  static SetScrollbarsHiddenParamsBuilder<0> Builder() {
    return SetScrollbarsHiddenParamsBuilder<0>();
  }

 private:
  SetScrollbarsHiddenParams() { }

  bool hidden_;
};


// Result for the SetScrollbarsHidden command.
class SetScrollbarsHiddenResult {
 public:
  static std::unique_ptr<SetScrollbarsHiddenResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetScrollbarsHiddenResult(const SetScrollbarsHiddenResult&) = delete;
  SetScrollbarsHiddenResult& operator=(const SetScrollbarsHiddenResult&) = delete;
  ~SetScrollbarsHiddenResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScrollbarsHiddenResult> Clone() const;

  template<int STATE>
  class SetScrollbarsHiddenResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetScrollbarsHiddenResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScrollbarsHiddenResult;
    SetScrollbarsHiddenResultBuilder() : result_(new SetScrollbarsHiddenResult()) { }

    template<int STEP> SetScrollbarsHiddenResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScrollbarsHiddenResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScrollbarsHiddenResult> result_;
  };

  static SetScrollbarsHiddenResultBuilder<0> Builder() {
    return SetScrollbarsHiddenResultBuilder<0>();
  }

 private:
  SetScrollbarsHiddenResult() { }

};


// Parameters for the SetDocumentCookieDisabled command.
class SetDocumentCookieDisabledParams {
 public:
  static std::unique_ptr<SetDocumentCookieDisabledParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetDocumentCookieDisabledParams(const SetDocumentCookieDisabledParams&) = delete;
  SetDocumentCookieDisabledParams& operator=(const SetDocumentCookieDisabledParams&) = delete;
  ~SetDocumentCookieDisabledParams() { }

  // Whether document.coookie API should be disabled.
  bool GetDisabled() const { return disabled_; }
  void SetDisabled(bool value) { disabled_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDocumentCookieDisabledParams> Clone() const;

  template<int STATE>
  class SetDocumentCookieDisabledParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDisabledSet = 1 << 1,
      kAllRequiredFieldsSet = (kDisabledSet | 0)
    };

    SetDocumentCookieDisabledParamsBuilder<STATE | kDisabledSet>& SetDisabled(bool value) {
      static_assert(!(STATE & kDisabledSet), "property disabled should not have already been set");
      result_->SetDisabled(value);
      return CastState<kDisabledSet>();
    }

    std::unique_ptr<SetDocumentCookieDisabledParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDocumentCookieDisabledParams;
    SetDocumentCookieDisabledParamsBuilder() : result_(new SetDocumentCookieDisabledParams()) { }

    template<int STEP> SetDocumentCookieDisabledParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDocumentCookieDisabledParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDocumentCookieDisabledParams> result_;
  };

  static SetDocumentCookieDisabledParamsBuilder<0> Builder() {
    return SetDocumentCookieDisabledParamsBuilder<0>();
  }

 private:
  SetDocumentCookieDisabledParams() { }

  bool disabled_;
};


// Result for the SetDocumentCookieDisabled command.
class SetDocumentCookieDisabledResult {
 public:
  static std::unique_ptr<SetDocumentCookieDisabledResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetDocumentCookieDisabledResult(const SetDocumentCookieDisabledResult&) = delete;
  SetDocumentCookieDisabledResult& operator=(const SetDocumentCookieDisabledResult&) = delete;
  ~SetDocumentCookieDisabledResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDocumentCookieDisabledResult> Clone() const;

  template<int STATE>
  class SetDocumentCookieDisabledResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetDocumentCookieDisabledResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDocumentCookieDisabledResult;
    SetDocumentCookieDisabledResultBuilder() : result_(new SetDocumentCookieDisabledResult()) { }

    template<int STEP> SetDocumentCookieDisabledResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDocumentCookieDisabledResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDocumentCookieDisabledResult> result_;
  };

  static SetDocumentCookieDisabledResultBuilder<0> Builder() {
    return SetDocumentCookieDisabledResultBuilder<0>();
  }

 private:
  SetDocumentCookieDisabledResult() { }

};


// Parameters for the SetEmitTouchEventsForMouse command.
class SetEmitTouchEventsForMouseParams {
 public:
  static std::unique_ptr<SetEmitTouchEventsForMouseParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetEmitTouchEventsForMouseParams(const SetEmitTouchEventsForMouseParams&) = delete;
  SetEmitTouchEventsForMouseParams& operator=(const SetEmitTouchEventsForMouseParams&) = delete;
  ~SetEmitTouchEventsForMouseParams() { }

  // Whether touch emulation based on mouse input should be enabled.
  bool GetEnabled() const { return enabled_; }
  void SetEnabled(bool value) { enabled_ = value; }

  // Touch/gesture events configuration. Default: current platform.
  bool HasConfiguration() const { return !!configuration_; }
  ::autofill_assistant::emulation::SetEmitTouchEventsForMouseConfiguration GetConfiguration() const { DCHECK(HasConfiguration()); return configuration_.value(); }
  void SetConfiguration(::autofill_assistant::emulation::SetEmitTouchEventsForMouseConfiguration value) { configuration_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEmitTouchEventsForMouseParams> Clone() const;

  template<int STATE>
  class SetEmitTouchEventsForMouseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEnabledSet = 1 << 1,
      kAllRequiredFieldsSet = (kEnabledSet | 0)
    };

    SetEmitTouchEventsForMouseParamsBuilder<STATE | kEnabledSet>& SetEnabled(bool value) {
      static_assert(!(STATE & kEnabledSet), "property enabled should not have already been set");
      result_->SetEnabled(value);
      return CastState<kEnabledSet>();
    }

    SetEmitTouchEventsForMouseParamsBuilder<STATE>& SetConfiguration(::autofill_assistant::emulation::SetEmitTouchEventsForMouseConfiguration value) {
      result_->SetConfiguration(value);
      return *this;
    }

    std::unique_ptr<SetEmitTouchEventsForMouseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEmitTouchEventsForMouseParams;
    SetEmitTouchEventsForMouseParamsBuilder() : result_(new SetEmitTouchEventsForMouseParams()) { }

    template<int STEP> SetEmitTouchEventsForMouseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEmitTouchEventsForMouseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEmitTouchEventsForMouseParams> result_;
  };

  static SetEmitTouchEventsForMouseParamsBuilder<0> Builder() {
    return SetEmitTouchEventsForMouseParamsBuilder<0>();
  }

 private:
  SetEmitTouchEventsForMouseParams() { }

  bool enabled_;
  absl::optional<::autofill_assistant::emulation::SetEmitTouchEventsForMouseConfiguration> configuration_;
};


// Result for the SetEmitTouchEventsForMouse command.
class SetEmitTouchEventsForMouseResult {
 public:
  static std::unique_ptr<SetEmitTouchEventsForMouseResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetEmitTouchEventsForMouseResult(const SetEmitTouchEventsForMouseResult&) = delete;
  SetEmitTouchEventsForMouseResult& operator=(const SetEmitTouchEventsForMouseResult&) = delete;
  ~SetEmitTouchEventsForMouseResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEmitTouchEventsForMouseResult> Clone() const;

  template<int STATE>
  class SetEmitTouchEventsForMouseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetEmitTouchEventsForMouseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEmitTouchEventsForMouseResult;
    SetEmitTouchEventsForMouseResultBuilder() : result_(new SetEmitTouchEventsForMouseResult()) { }

    template<int STEP> SetEmitTouchEventsForMouseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEmitTouchEventsForMouseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEmitTouchEventsForMouseResult> result_;
  };

  static SetEmitTouchEventsForMouseResultBuilder<0> Builder() {
    return SetEmitTouchEventsForMouseResultBuilder<0>();
  }

 private:
  SetEmitTouchEventsForMouseResult() { }

};


// Parameters for the SetEmulatedMedia command.
class SetEmulatedMediaParams {
 public:
  static std::unique_ptr<SetEmulatedMediaParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetEmulatedMediaParams(const SetEmulatedMediaParams&) = delete;
  SetEmulatedMediaParams& operator=(const SetEmulatedMediaParams&) = delete;
  ~SetEmulatedMediaParams() { }

  // Media type to emulate. Empty string disables the override.
  bool HasMedia() const { return !!media_; }
  std::string GetMedia() const { DCHECK(HasMedia()); return media_.value(); }
  void SetMedia(const std::string& value) { media_ = value; }

  // Media features to emulate.
  bool HasFeatures() const { return !!features_; }
  const std::vector<std::unique_ptr<::autofill_assistant::emulation::MediaFeature>>* GetFeatures() const { DCHECK(HasFeatures()); return &features_.value(); }
  void SetFeatures(std::vector<std::unique_ptr<::autofill_assistant::emulation::MediaFeature>> value) { features_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEmulatedMediaParams> Clone() const;

  template<int STATE>
  class SetEmulatedMediaParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetEmulatedMediaParamsBuilder<STATE>& SetMedia(const std::string& value) {
      result_->SetMedia(value);
      return *this;
    }

    SetEmulatedMediaParamsBuilder<STATE>& SetFeatures(std::vector<std::unique_ptr<::autofill_assistant::emulation::MediaFeature>> value) {
      result_->SetFeatures(std::move(value));
      return *this;
    }

    std::unique_ptr<SetEmulatedMediaParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEmulatedMediaParams;
    SetEmulatedMediaParamsBuilder() : result_(new SetEmulatedMediaParams()) { }

    template<int STEP> SetEmulatedMediaParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEmulatedMediaParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEmulatedMediaParams> result_;
  };

  static SetEmulatedMediaParamsBuilder<0> Builder() {
    return SetEmulatedMediaParamsBuilder<0>();
  }

 private:
  SetEmulatedMediaParams() { }

  absl::optional<std::string> media_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::emulation::MediaFeature>>> features_;
};


// Result for the SetEmulatedMedia command.
class SetEmulatedMediaResult {
 public:
  static std::unique_ptr<SetEmulatedMediaResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetEmulatedMediaResult(const SetEmulatedMediaResult&) = delete;
  SetEmulatedMediaResult& operator=(const SetEmulatedMediaResult&) = delete;
  ~SetEmulatedMediaResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEmulatedMediaResult> Clone() const;

  template<int STATE>
  class SetEmulatedMediaResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetEmulatedMediaResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEmulatedMediaResult;
    SetEmulatedMediaResultBuilder() : result_(new SetEmulatedMediaResult()) { }

    template<int STEP> SetEmulatedMediaResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEmulatedMediaResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEmulatedMediaResult> result_;
  };

  static SetEmulatedMediaResultBuilder<0> Builder() {
    return SetEmulatedMediaResultBuilder<0>();
  }

 private:
  SetEmulatedMediaResult() { }

};


// Parameters for the SetEmulatedVisionDeficiency command.
class SetEmulatedVisionDeficiencyParams {
 public:
  static std::unique_ptr<SetEmulatedVisionDeficiencyParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetEmulatedVisionDeficiencyParams(const SetEmulatedVisionDeficiencyParams&) = delete;
  SetEmulatedVisionDeficiencyParams& operator=(const SetEmulatedVisionDeficiencyParams&) = delete;
  ~SetEmulatedVisionDeficiencyParams() { }

  // Vision deficiency to emulate.
  ::autofill_assistant::emulation::SetEmulatedVisionDeficiencyType GetType() const { return type_; }
  void SetType(::autofill_assistant::emulation::SetEmulatedVisionDeficiencyType value) { type_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEmulatedVisionDeficiencyParams> Clone() const;

  template<int STATE>
  class SetEmulatedVisionDeficiencyParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTypeSet = 1 << 1,
      kAllRequiredFieldsSet = (kTypeSet | 0)
    };

    SetEmulatedVisionDeficiencyParamsBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::emulation::SetEmulatedVisionDeficiencyType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    std::unique_ptr<SetEmulatedVisionDeficiencyParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEmulatedVisionDeficiencyParams;
    SetEmulatedVisionDeficiencyParamsBuilder() : result_(new SetEmulatedVisionDeficiencyParams()) { }

    template<int STEP> SetEmulatedVisionDeficiencyParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEmulatedVisionDeficiencyParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEmulatedVisionDeficiencyParams> result_;
  };

  static SetEmulatedVisionDeficiencyParamsBuilder<0> Builder() {
    return SetEmulatedVisionDeficiencyParamsBuilder<0>();
  }

 private:
  SetEmulatedVisionDeficiencyParams() { }

  ::autofill_assistant::emulation::SetEmulatedVisionDeficiencyType type_;
};


// Result for the SetEmulatedVisionDeficiency command.
class SetEmulatedVisionDeficiencyResult {
 public:
  static std::unique_ptr<SetEmulatedVisionDeficiencyResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetEmulatedVisionDeficiencyResult(const SetEmulatedVisionDeficiencyResult&) = delete;
  SetEmulatedVisionDeficiencyResult& operator=(const SetEmulatedVisionDeficiencyResult&) = delete;
  ~SetEmulatedVisionDeficiencyResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEmulatedVisionDeficiencyResult> Clone() const;

  template<int STATE>
  class SetEmulatedVisionDeficiencyResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetEmulatedVisionDeficiencyResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEmulatedVisionDeficiencyResult;
    SetEmulatedVisionDeficiencyResultBuilder() : result_(new SetEmulatedVisionDeficiencyResult()) { }

    template<int STEP> SetEmulatedVisionDeficiencyResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEmulatedVisionDeficiencyResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEmulatedVisionDeficiencyResult> result_;
  };

  static SetEmulatedVisionDeficiencyResultBuilder<0> Builder() {
    return SetEmulatedVisionDeficiencyResultBuilder<0>();
  }

 private:
  SetEmulatedVisionDeficiencyResult() { }

};


// Parameters for the SetGeolocationOverride command.
class SetGeolocationOverrideParams {
 public:
  static std::unique_ptr<SetGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetGeolocationOverrideParams(const SetGeolocationOverrideParams&) = delete;
  SetGeolocationOverrideParams& operator=(const SetGeolocationOverrideParams&) = delete;
  ~SetGeolocationOverrideParams() { }

  // Mock latitude
  bool HasLatitude() const { return !!latitude_; }
  double GetLatitude() const { DCHECK(HasLatitude()); return latitude_.value(); }
  void SetLatitude(double value) { latitude_ = value; }

  // Mock longitude
  bool HasLongitude() const { return !!longitude_; }
  double GetLongitude() const { DCHECK(HasLongitude()); return longitude_.value(); }
  void SetLongitude(double value) { longitude_ = value; }

  // Mock accuracy
  bool HasAccuracy() const { return !!accuracy_; }
  double GetAccuracy() const { DCHECK(HasAccuracy()); return accuracy_.value(); }
  void SetAccuracy(double value) { accuracy_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetGeolocationOverrideParams> Clone() const;

  template<int STATE>
  class SetGeolocationOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetGeolocationOverrideParamsBuilder<STATE>& SetLatitude(double value) {
      result_->SetLatitude(value);
      return *this;
    }

    SetGeolocationOverrideParamsBuilder<STATE>& SetLongitude(double value) {
      result_->SetLongitude(value);
      return *this;
    }

    SetGeolocationOverrideParamsBuilder<STATE>& SetAccuracy(double value) {
      result_->SetAccuracy(value);
      return *this;
    }

    std::unique_ptr<SetGeolocationOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetGeolocationOverrideParams;
    SetGeolocationOverrideParamsBuilder() : result_(new SetGeolocationOverrideParams()) { }

    template<int STEP> SetGeolocationOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetGeolocationOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetGeolocationOverrideParams> result_;
  };

  static SetGeolocationOverrideParamsBuilder<0> Builder() {
    return SetGeolocationOverrideParamsBuilder<0>();
  }

 private:
  SetGeolocationOverrideParams() { }

  absl::optional<double> latitude_;
  absl::optional<double> longitude_;
  absl::optional<double> accuracy_;
};


// Result for the SetGeolocationOverride command.
class SetGeolocationOverrideResult {
 public:
  static std::unique_ptr<SetGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetGeolocationOverrideResult(const SetGeolocationOverrideResult&) = delete;
  SetGeolocationOverrideResult& operator=(const SetGeolocationOverrideResult&) = delete;
  ~SetGeolocationOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetGeolocationOverrideResult> Clone() const;

  template<int STATE>
  class SetGeolocationOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetGeolocationOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetGeolocationOverrideResult;
    SetGeolocationOverrideResultBuilder() : result_(new SetGeolocationOverrideResult()) { }

    template<int STEP> SetGeolocationOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetGeolocationOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetGeolocationOverrideResult> result_;
  };

  static SetGeolocationOverrideResultBuilder<0> Builder() {
    return SetGeolocationOverrideResultBuilder<0>();
  }

 private:
  SetGeolocationOverrideResult() { }

};


// Parameters for the SetIdleOverride command.
class SetIdleOverrideParams {
 public:
  static std::unique_ptr<SetIdleOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetIdleOverrideParams(const SetIdleOverrideParams&) = delete;
  SetIdleOverrideParams& operator=(const SetIdleOverrideParams&) = delete;
  ~SetIdleOverrideParams() { }

  // Mock isUserActive
  bool GetIsUserActive() const { return is_user_active_; }
  void SetIsUserActive(bool value) { is_user_active_ = value; }

  // Mock isScreenUnlocked
  bool GetIsScreenUnlocked() const { return is_screen_unlocked_; }
  void SetIsScreenUnlocked(bool value) { is_screen_unlocked_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetIdleOverrideParams> Clone() const;

  template<int STATE>
  class SetIdleOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIsUserActiveSet = 1 << 1,
    kIsScreenUnlockedSet = 1 << 2,
      kAllRequiredFieldsSet = (kIsUserActiveSet | kIsScreenUnlockedSet | 0)
    };

    SetIdleOverrideParamsBuilder<STATE | kIsUserActiveSet>& SetIsUserActive(bool value) {
      static_assert(!(STATE & kIsUserActiveSet), "property isUserActive should not have already been set");
      result_->SetIsUserActive(value);
      return CastState<kIsUserActiveSet>();
    }

    SetIdleOverrideParamsBuilder<STATE | kIsScreenUnlockedSet>& SetIsScreenUnlocked(bool value) {
      static_assert(!(STATE & kIsScreenUnlockedSet), "property isScreenUnlocked should not have already been set");
      result_->SetIsScreenUnlocked(value);
      return CastState<kIsScreenUnlockedSet>();
    }

    std::unique_ptr<SetIdleOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetIdleOverrideParams;
    SetIdleOverrideParamsBuilder() : result_(new SetIdleOverrideParams()) { }

    template<int STEP> SetIdleOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetIdleOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetIdleOverrideParams> result_;
  };

  static SetIdleOverrideParamsBuilder<0> Builder() {
    return SetIdleOverrideParamsBuilder<0>();
  }

 private:
  SetIdleOverrideParams() { }

  bool is_user_active_;
  bool is_screen_unlocked_;
};


// Result for the SetIdleOverride command.
class SetIdleOverrideResult {
 public:
  static std::unique_ptr<SetIdleOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetIdleOverrideResult(const SetIdleOverrideResult&) = delete;
  SetIdleOverrideResult& operator=(const SetIdleOverrideResult&) = delete;
  ~SetIdleOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetIdleOverrideResult> Clone() const;

  template<int STATE>
  class SetIdleOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetIdleOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetIdleOverrideResult;
    SetIdleOverrideResultBuilder() : result_(new SetIdleOverrideResult()) { }

    template<int STEP> SetIdleOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetIdleOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetIdleOverrideResult> result_;
  };

  static SetIdleOverrideResultBuilder<0> Builder() {
    return SetIdleOverrideResultBuilder<0>();
  }

 private:
  SetIdleOverrideResult() { }

};


// Parameters for the ClearIdleOverride command.
class ClearIdleOverrideParams {
 public:
  static std::unique_ptr<ClearIdleOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearIdleOverrideParams(const ClearIdleOverrideParams&) = delete;
  ClearIdleOverrideParams& operator=(const ClearIdleOverrideParams&) = delete;
  ~ClearIdleOverrideParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearIdleOverrideParams> Clone() const;

  template<int STATE>
  class ClearIdleOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearIdleOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearIdleOverrideParams;
    ClearIdleOverrideParamsBuilder() : result_(new ClearIdleOverrideParams()) { }

    template<int STEP> ClearIdleOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearIdleOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearIdleOverrideParams> result_;
  };

  static ClearIdleOverrideParamsBuilder<0> Builder() {
    return ClearIdleOverrideParamsBuilder<0>();
  }

 private:
  ClearIdleOverrideParams() { }

};


// Result for the ClearIdleOverride command.
class ClearIdleOverrideResult {
 public:
  static std::unique_ptr<ClearIdleOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearIdleOverrideResult(const ClearIdleOverrideResult&) = delete;
  ClearIdleOverrideResult& operator=(const ClearIdleOverrideResult&) = delete;
  ~ClearIdleOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearIdleOverrideResult> Clone() const;

  template<int STATE>
  class ClearIdleOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearIdleOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearIdleOverrideResult;
    ClearIdleOverrideResultBuilder() : result_(new ClearIdleOverrideResult()) { }

    template<int STEP> ClearIdleOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearIdleOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearIdleOverrideResult> result_;
  };

  static ClearIdleOverrideResultBuilder<0> Builder() {
    return ClearIdleOverrideResultBuilder<0>();
  }

 private:
  ClearIdleOverrideResult() { }

};


// Parameters for the SetNavigatorOverrides command.
class SetNavigatorOverridesParams {
 public:
  static std::unique_ptr<SetNavigatorOverridesParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetNavigatorOverridesParams(const SetNavigatorOverridesParams&) = delete;
  SetNavigatorOverridesParams& operator=(const SetNavigatorOverridesParams&) = delete;
  ~SetNavigatorOverridesParams() { }

  // The platform navigator.platform should return.
  std::string GetPlatform() const { return platform_; }
  void SetPlatform(const std::string& value) { platform_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetNavigatorOverridesParams> Clone() const;

  template<int STATE>
  class SetNavigatorOverridesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPlatformSet = 1 << 1,
      kAllRequiredFieldsSet = (kPlatformSet | 0)
    };

    SetNavigatorOverridesParamsBuilder<STATE | kPlatformSet>& SetPlatform(const std::string& value) {
      static_assert(!(STATE & kPlatformSet), "property platform should not have already been set");
      result_->SetPlatform(value);
      return CastState<kPlatformSet>();
    }

    std::unique_ptr<SetNavigatorOverridesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetNavigatorOverridesParams;
    SetNavigatorOverridesParamsBuilder() : result_(new SetNavigatorOverridesParams()) { }

    template<int STEP> SetNavigatorOverridesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetNavigatorOverridesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetNavigatorOverridesParams> result_;
  };

  static SetNavigatorOverridesParamsBuilder<0> Builder() {
    return SetNavigatorOverridesParamsBuilder<0>();
  }

 private:
  SetNavigatorOverridesParams() { }

  std::string platform_;
};


// Result for the SetNavigatorOverrides command.
class SetNavigatorOverridesResult {
 public:
  static std::unique_ptr<SetNavigatorOverridesResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetNavigatorOverridesResult(const SetNavigatorOverridesResult&) = delete;
  SetNavigatorOverridesResult& operator=(const SetNavigatorOverridesResult&) = delete;
  ~SetNavigatorOverridesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetNavigatorOverridesResult> Clone() const;

  template<int STATE>
  class SetNavigatorOverridesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetNavigatorOverridesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetNavigatorOverridesResult;
    SetNavigatorOverridesResultBuilder() : result_(new SetNavigatorOverridesResult()) { }

    template<int STEP> SetNavigatorOverridesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetNavigatorOverridesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetNavigatorOverridesResult> result_;
  };

  static SetNavigatorOverridesResultBuilder<0> Builder() {
    return SetNavigatorOverridesResultBuilder<0>();
  }

 private:
  SetNavigatorOverridesResult() { }

};


// Parameters for the SetPageScaleFactor command.
class SetPageScaleFactorParams {
 public:
  static std::unique_ptr<SetPageScaleFactorParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetPageScaleFactorParams(const SetPageScaleFactorParams&) = delete;
  SetPageScaleFactorParams& operator=(const SetPageScaleFactorParams&) = delete;
  ~SetPageScaleFactorParams() { }

  // Page scale factor.
  double GetPageScaleFactor() const { return page_scale_factor_; }
  void SetPageScaleFactor(double value) { page_scale_factor_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetPageScaleFactorParams> Clone() const;

  template<int STATE>
  class SetPageScaleFactorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPageScaleFactorSet = 1 << 1,
      kAllRequiredFieldsSet = (kPageScaleFactorSet | 0)
    };

    SetPageScaleFactorParamsBuilder<STATE | kPageScaleFactorSet>& SetPageScaleFactor(double value) {
      static_assert(!(STATE & kPageScaleFactorSet), "property pageScaleFactor should not have already been set");
      result_->SetPageScaleFactor(value);
      return CastState<kPageScaleFactorSet>();
    }

    std::unique_ptr<SetPageScaleFactorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetPageScaleFactorParams;
    SetPageScaleFactorParamsBuilder() : result_(new SetPageScaleFactorParams()) { }

    template<int STEP> SetPageScaleFactorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetPageScaleFactorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetPageScaleFactorParams> result_;
  };

  static SetPageScaleFactorParamsBuilder<0> Builder() {
    return SetPageScaleFactorParamsBuilder<0>();
  }

 private:
  SetPageScaleFactorParams() { }

  double page_scale_factor_;
};


// Result for the SetPageScaleFactor command.
class SetPageScaleFactorResult {
 public:
  static std::unique_ptr<SetPageScaleFactorResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetPageScaleFactorResult(const SetPageScaleFactorResult&) = delete;
  SetPageScaleFactorResult& operator=(const SetPageScaleFactorResult&) = delete;
  ~SetPageScaleFactorResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetPageScaleFactorResult> Clone() const;

  template<int STATE>
  class SetPageScaleFactorResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetPageScaleFactorResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetPageScaleFactorResult;
    SetPageScaleFactorResultBuilder() : result_(new SetPageScaleFactorResult()) { }

    template<int STEP> SetPageScaleFactorResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetPageScaleFactorResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetPageScaleFactorResult> result_;
  };

  static SetPageScaleFactorResultBuilder<0> Builder() {
    return SetPageScaleFactorResultBuilder<0>();
  }

 private:
  SetPageScaleFactorResult() { }

};


// Parameters for the SetScriptExecutionDisabled command.
class SetScriptExecutionDisabledParams {
 public:
  static std::unique_ptr<SetScriptExecutionDisabledParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetScriptExecutionDisabledParams(const SetScriptExecutionDisabledParams&) = delete;
  SetScriptExecutionDisabledParams& operator=(const SetScriptExecutionDisabledParams&) = delete;
  ~SetScriptExecutionDisabledParams() { }

  // Whether script execution should be disabled in the page.
  bool GetValue() const { return value_; }
  void SetValue(bool value) { value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScriptExecutionDisabledParams> Clone() const;

  template<int STATE>
  class SetScriptExecutionDisabledParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kValueSet = 1 << 1,
      kAllRequiredFieldsSet = (kValueSet | 0)
    };

    SetScriptExecutionDisabledParamsBuilder<STATE | kValueSet>& SetValue(bool value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    std::unique_ptr<SetScriptExecutionDisabledParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScriptExecutionDisabledParams;
    SetScriptExecutionDisabledParamsBuilder() : result_(new SetScriptExecutionDisabledParams()) { }

    template<int STEP> SetScriptExecutionDisabledParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScriptExecutionDisabledParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScriptExecutionDisabledParams> result_;
  };

  static SetScriptExecutionDisabledParamsBuilder<0> Builder() {
    return SetScriptExecutionDisabledParamsBuilder<0>();
  }

 private:
  SetScriptExecutionDisabledParams() { }

  bool value_;
};


// Result for the SetScriptExecutionDisabled command.
class SetScriptExecutionDisabledResult {
 public:
  static std::unique_ptr<SetScriptExecutionDisabledResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetScriptExecutionDisabledResult(const SetScriptExecutionDisabledResult&) = delete;
  SetScriptExecutionDisabledResult& operator=(const SetScriptExecutionDisabledResult&) = delete;
  ~SetScriptExecutionDisabledResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScriptExecutionDisabledResult> Clone() const;

  template<int STATE>
  class SetScriptExecutionDisabledResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetScriptExecutionDisabledResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScriptExecutionDisabledResult;
    SetScriptExecutionDisabledResultBuilder() : result_(new SetScriptExecutionDisabledResult()) { }

    template<int STEP> SetScriptExecutionDisabledResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScriptExecutionDisabledResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScriptExecutionDisabledResult> result_;
  };

  static SetScriptExecutionDisabledResultBuilder<0> Builder() {
    return SetScriptExecutionDisabledResultBuilder<0>();
  }

 private:
  SetScriptExecutionDisabledResult() { }

};


// Parameters for the SetTouchEmulationEnabled command.
class SetTouchEmulationEnabledParams {
 public:
  static std::unique_ptr<SetTouchEmulationEnabledParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetTouchEmulationEnabledParams(const SetTouchEmulationEnabledParams&) = delete;
  SetTouchEmulationEnabledParams& operator=(const SetTouchEmulationEnabledParams&) = delete;
  ~SetTouchEmulationEnabledParams() { }

  // Whether the touch event emulation should be enabled.
  bool GetEnabled() const { return enabled_; }
  void SetEnabled(bool value) { enabled_ = value; }

  // Maximum touch points supported. Defaults to one.
  bool HasMaxTouchPoints() const { return !!max_touch_points_; }
  int GetMaxTouchPoints() const { DCHECK(HasMaxTouchPoints()); return max_touch_points_.value(); }
  void SetMaxTouchPoints(int value) { max_touch_points_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetTouchEmulationEnabledParams> Clone() const;

  template<int STATE>
  class SetTouchEmulationEnabledParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEnabledSet = 1 << 1,
      kAllRequiredFieldsSet = (kEnabledSet | 0)
    };

    SetTouchEmulationEnabledParamsBuilder<STATE | kEnabledSet>& SetEnabled(bool value) {
      static_assert(!(STATE & kEnabledSet), "property enabled should not have already been set");
      result_->SetEnabled(value);
      return CastState<kEnabledSet>();
    }

    SetTouchEmulationEnabledParamsBuilder<STATE>& SetMaxTouchPoints(int value) {
      result_->SetMaxTouchPoints(value);
      return *this;
    }

    std::unique_ptr<SetTouchEmulationEnabledParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetTouchEmulationEnabledParams;
    SetTouchEmulationEnabledParamsBuilder() : result_(new SetTouchEmulationEnabledParams()) { }

    template<int STEP> SetTouchEmulationEnabledParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetTouchEmulationEnabledParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetTouchEmulationEnabledParams> result_;
  };

  static SetTouchEmulationEnabledParamsBuilder<0> Builder() {
    return SetTouchEmulationEnabledParamsBuilder<0>();
  }

 private:
  SetTouchEmulationEnabledParams() { }

  bool enabled_;
  absl::optional<int> max_touch_points_;
};


// Result for the SetTouchEmulationEnabled command.
class SetTouchEmulationEnabledResult {
 public:
  static std::unique_ptr<SetTouchEmulationEnabledResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetTouchEmulationEnabledResult(const SetTouchEmulationEnabledResult&) = delete;
  SetTouchEmulationEnabledResult& operator=(const SetTouchEmulationEnabledResult&) = delete;
  ~SetTouchEmulationEnabledResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetTouchEmulationEnabledResult> Clone() const;

  template<int STATE>
  class SetTouchEmulationEnabledResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetTouchEmulationEnabledResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetTouchEmulationEnabledResult;
    SetTouchEmulationEnabledResultBuilder() : result_(new SetTouchEmulationEnabledResult()) { }

    template<int STEP> SetTouchEmulationEnabledResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetTouchEmulationEnabledResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetTouchEmulationEnabledResult> result_;
  };

  static SetTouchEmulationEnabledResultBuilder<0> Builder() {
    return SetTouchEmulationEnabledResultBuilder<0>();
  }

 private:
  SetTouchEmulationEnabledResult() { }

};


// Parameters for the SetVirtualTimePolicy command.
class SetVirtualTimePolicyParams {
 public:
  static std::unique_ptr<SetVirtualTimePolicyParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetVirtualTimePolicyParams(const SetVirtualTimePolicyParams&) = delete;
  SetVirtualTimePolicyParams& operator=(const SetVirtualTimePolicyParams&) = delete;
  ~SetVirtualTimePolicyParams() { }

  ::autofill_assistant::emulation::VirtualTimePolicy GetPolicy() const { return policy_; }
  void SetPolicy(::autofill_assistant::emulation::VirtualTimePolicy value) { policy_ = value; }

  // If set, after this many virtual milliseconds have elapsed virtual time will be paused and a
  // virtualTimeBudgetExpired event is sent.
  bool HasBudget() const { return !!budget_; }
  double GetBudget() const { DCHECK(HasBudget()); return budget_.value(); }
  void SetBudget(double value) { budget_ = value; }

  // If set this specifies the maximum number of tasks that can be run before virtual is forced
  // forwards to prevent deadlock.
  bool HasMaxVirtualTimeTaskStarvationCount() const { return !!max_virtual_time_task_starvation_count_; }
  int GetMaxVirtualTimeTaskStarvationCount() const { DCHECK(HasMaxVirtualTimeTaskStarvationCount()); return max_virtual_time_task_starvation_count_.value(); }
  void SetMaxVirtualTimeTaskStarvationCount(int value) { max_virtual_time_task_starvation_count_ = value; }

  // If set, base::Time::Now will be overridden to initially return this value.
  bool HasInitialVirtualTime() const { return !!initial_virtual_time_; }
  double GetInitialVirtualTime() const { DCHECK(HasInitialVirtualTime()); return initial_virtual_time_.value(); }
  void SetInitialVirtualTime(double value) { initial_virtual_time_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetVirtualTimePolicyParams> Clone() const;

  template<int STATE>
  class SetVirtualTimePolicyParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPolicySet = 1 << 1,
      kAllRequiredFieldsSet = (kPolicySet | 0)
    };

    SetVirtualTimePolicyParamsBuilder<STATE | kPolicySet>& SetPolicy(::autofill_assistant::emulation::VirtualTimePolicy value) {
      static_assert(!(STATE & kPolicySet), "property policy should not have already been set");
      result_->SetPolicy(value);
      return CastState<kPolicySet>();
    }

    SetVirtualTimePolicyParamsBuilder<STATE>& SetBudget(double value) {
      result_->SetBudget(value);
      return *this;
    }

    SetVirtualTimePolicyParamsBuilder<STATE>& SetMaxVirtualTimeTaskStarvationCount(int value) {
      result_->SetMaxVirtualTimeTaskStarvationCount(value);
      return *this;
    }

    SetVirtualTimePolicyParamsBuilder<STATE>& SetInitialVirtualTime(double value) {
      result_->SetInitialVirtualTime(value);
      return *this;
    }

    std::unique_ptr<SetVirtualTimePolicyParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetVirtualTimePolicyParams;
    SetVirtualTimePolicyParamsBuilder() : result_(new SetVirtualTimePolicyParams()) { }

    template<int STEP> SetVirtualTimePolicyParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetVirtualTimePolicyParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetVirtualTimePolicyParams> result_;
  };

  static SetVirtualTimePolicyParamsBuilder<0> Builder() {
    return SetVirtualTimePolicyParamsBuilder<0>();
  }

 private:
  SetVirtualTimePolicyParams() { }

  ::autofill_assistant::emulation::VirtualTimePolicy policy_;
  absl::optional<double> budget_;
  absl::optional<int> max_virtual_time_task_starvation_count_;
  absl::optional<double> initial_virtual_time_;
};


// Result for the SetVirtualTimePolicy command.
class SetVirtualTimePolicyResult {
 public:
  static std::unique_ptr<SetVirtualTimePolicyResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetVirtualTimePolicyResult(const SetVirtualTimePolicyResult&) = delete;
  SetVirtualTimePolicyResult& operator=(const SetVirtualTimePolicyResult&) = delete;
  ~SetVirtualTimePolicyResult() { }

  // Absolute timestamp at which virtual time was first enabled (up time in milliseconds).
  double GetVirtualTimeTicksBase() const { return virtual_time_ticks_base_; }
  void SetVirtualTimeTicksBase(double value) { virtual_time_ticks_base_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetVirtualTimePolicyResult> Clone() const;

  template<int STATE>
  class SetVirtualTimePolicyResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kVirtualTimeTicksBaseSet = 1 << 1,
      kAllRequiredFieldsSet = (kVirtualTimeTicksBaseSet | 0)
    };

    SetVirtualTimePolicyResultBuilder<STATE | kVirtualTimeTicksBaseSet>& SetVirtualTimeTicksBase(double value) {
      static_assert(!(STATE & kVirtualTimeTicksBaseSet), "property virtualTimeTicksBase should not have already been set");
      result_->SetVirtualTimeTicksBase(value);
      return CastState<kVirtualTimeTicksBaseSet>();
    }

    std::unique_ptr<SetVirtualTimePolicyResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetVirtualTimePolicyResult;
    SetVirtualTimePolicyResultBuilder() : result_(new SetVirtualTimePolicyResult()) { }

    template<int STEP> SetVirtualTimePolicyResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetVirtualTimePolicyResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetVirtualTimePolicyResult> result_;
  };

  static SetVirtualTimePolicyResultBuilder<0> Builder() {
    return SetVirtualTimePolicyResultBuilder<0>();
  }

 private:
  SetVirtualTimePolicyResult() { }

  double virtual_time_ticks_base_;
};


// Parameters for the SetLocaleOverride command.
class SetLocaleOverrideParams {
 public:
  static std::unique_ptr<SetLocaleOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetLocaleOverrideParams(const SetLocaleOverrideParams&) = delete;
  SetLocaleOverrideParams& operator=(const SetLocaleOverrideParams&) = delete;
  ~SetLocaleOverrideParams() { }

  // ICU style C locale (e.g. "en_US"). If not specified or empty, disables the override and
  // restores default host system locale.
  bool HasLocale() const { return !!locale_; }
  std::string GetLocale() const { DCHECK(HasLocale()); return locale_.value(); }
  void SetLocale(const std::string& value) { locale_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetLocaleOverrideParams> Clone() const;

  template<int STATE>
  class SetLocaleOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetLocaleOverrideParamsBuilder<STATE>& SetLocale(const std::string& value) {
      result_->SetLocale(value);
      return *this;
    }

    std::unique_ptr<SetLocaleOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetLocaleOverrideParams;
    SetLocaleOverrideParamsBuilder() : result_(new SetLocaleOverrideParams()) { }

    template<int STEP> SetLocaleOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetLocaleOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetLocaleOverrideParams> result_;
  };

  static SetLocaleOverrideParamsBuilder<0> Builder() {
    return SetLocaleOverrideParamsBuilder<0>();
  }

 private:
  SetLocaleOverrideParams() { }

  absl::optional<std::string> locale_;
};


// Result for the SetLocaleOverride command.
class SetLocaleOverrideResult {
 public:
  static std::unique_ptr<SetLocaleOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetLocaleOverrideResult(const SetLocaleOverrideResult&) = delete;
  SetLocaleOverrideResult& operator=(const SetLocaleOverrideResult&) = delete;
  ~SetLocaleOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetLocaleOverrideResult> Clone() const;

  template<int STATE>
  class SetLocaleOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetLocaleOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetLocaleOverrideResult;
    SetLocaleOverrideResultBuilder() : result_(new SetLocaleOverrideResult()) { }

    template<int STEP> SetLocaleOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetLocaleOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetLocaleOverrideResult> result_;
  };

  static SetLocaleOverrideResultBuilder<0> Builder() {
    return SetLocaleOverrideResultBuilder<0>();
  }

 private:
  SetLocaleOverrideResult() { }

};


// Parameters for the SetTimezoneOverride command.
class SetTimezoneOverrideParams {
 public:
  static std::unique_ptr<SetTimezoneOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetTimezoneOverrideParams(const SetTimezoneOverrideParams&) = delete;
  SetTimezoneOverrideParams& operator=(const SetTimezoneOverrideParams&) = delete;
  ~SetTimezoneOverrideParams() { }

  // The timezone identifier. If empty, disables the override and
  // restores default host system timezone.
  std::string GetTimezoneId() const { return timezone_id_; }
  void SetTimezoneId(const std::string& value) { timezone_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetTimezoneOverrideParams> Clone() const;

  template<int STATE>
  class SetTimezoneOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTimezoneIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kTimezoneIdSet | 0)
    };

    SetTimezoneOverrideParamsBuilder<STATE | kTimezoneIdSet>& SetTimezoneId(const std::string& value) {
      static_assert(!(STATE & kTimezoneIdSet), "property timezoneId should not have already been set");
      result_->SetTimezoneId(value);
      return CastState<kTimezoneIdSet>();
    }

    std::unique_ptr<SetTimezoneOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetTimezoneOverrideParams;
    SetTimezoneOverrideParamsBuilder() : result_(new SetTimezoneOverrideParams()) { }

    template<int STEP> SetTimezoneOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetTimezoneOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetTimezoneOverrideParams> result_;
  };

  static SetTimezoneOverrideParamsBuilder<0> Builder() {
    return SetTimezoneOverrideParamsBuilder<0>();
  }

 private:
  SetTimezoneOverrideParams() { }

  std::string timezone_id_;
};


// Result for the SetTimezoneOverride command.
class SetTimezoneOverrideResult {
 public:
  static std::unique_ptr<SetTimezoneOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetTimezoneOverrideResult(const SetTimezoneOverrideResult&) = delete;
  SetTimezoneOverrideResult& operator=(const SetTimezoneOverrideResult&) = delete;
  ~SetTimezoneOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetTimezoneOverrideResult> Clone() const;

  template<int STATE>
  class SetTimezoneOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetTimezoneOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetTimezoneOverrideResult;
    SetTimezoneOverrideResultBuilder() : result_(new SetTimezoneOverrideResult()) { }

    template<int STEP> SetTimezoneOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetTimezoneOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetTimezoneOverrideResult> result_;
  };

  static SetTimezoneOverrideResultBuilder<0> Builder() {
    return SetTimezoneOverrideResultBuilder<0>();
  }

 private:
  SetTimezoneOverrideResult() { }

};


// Parameters for the SetVisibleSize command.
class SetVisibleSizeParams {
 public:
  static std::unique_ptr<SetVisibleSizeParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetVisibleSizeParams(const SetVisibleSizeParams&) = delete;
  SetVisibleSizeParams& operator=(const SetVisibleSizeParams&) = delete;
  ~SetVisibleSizeParams() { }

  // Frame width (DIP).
  int GetWidth() const { return width_; }
  void SetWidth(int value) { width_ = value; }

  // Frame height (DIP).
  int GetHeight() const { return height_; }
  void SetHeight(int value) { height_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetVisibleSizeParams> Clone() const;

  template<int STATE>
  class SetVisibleSizeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kWidthSet = 1 << 1,
    kHeightSet = 1 << 2,
      kAllRequiredFieldsSet = (kWidthSet | kHeightSet | 0)
    };

    SetVisibleSizeParamsBuilder<STATE | kWidthSet>& SetWidth(int value) {
      static_assert(!(STATE & kWidthSet), "property width should not have already been set");
      result_->SetWidth(value);
      return CastState<kWidthSet>();
    }

    SetVisibleSizeParamsBuilder<STATE | kHeightSet>& SetHeight(int value) {
      static_assert(!(STATE & kHeightSet), "property height should not have already been set");
      result_->SetHeight(value);
      return CastState<kHeightSet>();
    }

    std::unique_ptr<SetVisibleSizeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetVisibleSizeParams;
    SetVisibleSizeParamsBuilder() : result_(new SetVisibleSizeParams()) { }

    template<int STEP> SetVisibleSizeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetVisibleSizeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetVisibleSizeParams> result_;
  };

  static SetVisibleSizeParamsBuilder<0> Builder() {
    return SetVisibleSizeParamsBuilder<0>();
  }

 private:
  SetVisibleSizeParams() { }

  int width_;
  int height_;
};


// Result for the SetVisibleSize command.
class SetVisibleSizeResult {
 public:
  static std::unique_ptr<SetVisibleSizeResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetVisibleSizeResult(const SetVisibleSizeResult&) = delete;
  SetVisibleSizeResult& operator=(const SetVisibleSizeResult&) = delete;
  ~SetVisibleSizeResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetVisibleSizeResult> Clone() const;

  template<int STATE>
  class SetVisibleSizeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetVisibleSizeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetVisibleSizeResult;
    SetVisibleSizeResultBuilder() : result_(new SetVisibleSizeResult()) { }

    template<int STEP> SetVisibleSizeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetVisibleSizeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetVisibleSizeResult> result_;
  };

  static SetVisibleSizeResultBuilder<0> Builder() {
    return SetVisibleSizeResultBuilder<0>();
  }

 private:
  SetVisibleSizeResult() { }

};


// Parameters for the SetDisabledImageTypes command.
class SetDisabledImageTypesParams {
 public:
  static std::unique_ptr<SetDisabledImageTypesParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetDisabledImageTypesParams(const SetDisabledImageTypesParams&) = delete;
  SetDisabledImageTypesParams& operator=(const SetDisabledImageTypesParams&) = delete;
  ~SetDisabledImageTypesParams() { }

  // Image types to disable.
  const std::vector<::autofill_assistant::emulation::DisabledImageType>* GetImageTypes() const { return &image_types_; }
  void SetImageTypes(std::vector<::autofill_assistant::emulation::DisabledImageType> value) { image_types_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDisabledImageTypesParams> Clone() const;

  template<int STATE>
  class SetDisabledImageTypesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kImageTypesSet = 1 << 1,
      kAllRequiredFieldsSet = (kImageTypesSet | 0)
    };

    SetDisabledImageTypesParamsBuilder<STATE | kImageTypesSet>& SetImageTypes(std::vector<::autofill_assistant::emulation::DisabledImageType> value) {
      static_assert(!(STATE & kImageTypesSet), "property imageTypes should not have already been set");
      result_->SetImageTypes(std::move(value));
      return CastState<kImageTypesSet>();
    }

    std::unique_ptr<SetDisabledImageTypesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDisabledImageTypesParams;
    SetDisabledImageTypesParamsBuilder() : result_(new SetDisabledImageTypesParams()) { }

    template<int STEP> SetDisabledImageTypesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDisabledImageTypesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDisabledImageTypesParams> result_;
  };

  static SetDisabledImageTypesParamsBuilder<0> Builder() {
    return SetDisabledImageTypesParamsBuilder<0>();
  }

 private:
  SetDisabledImageTypesParams() { }

  std::vector<::autofill_assistant::emulation::DisabledImageType> image_types_;
};


// Result for the SetDisabledImageTypes command.
class SetDisabledImageTypesResult {
 public:
  static std::unique_ptr<SetDisabledImageTypesResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetDisabledImageTypesResult(const SetDisabledImageTypesResult&) = delete;
  SetDisabledImageTypesResult& operator=(const SetDisabledImageTypesResult&) = delete;
  ~SetDisabledImageTypesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDisabledImageTypesResult> Clone() const;

  template<int STATE>
  class SetDisabledImageTypesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetDisabledImageTypesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDisabledImageTypesResult;
    SetDisabledImageTypesResultBuilder() : result_(new SetDisabledImageTypesResult()) { }

    template<int STEP> SetDisabledImageTypesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDisabledImageTypesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDisabledImageTypesResult> result_;
  };

  static SetDisabledImageTypesResultBuilder<0> Builder() {
    return SetDisabledImageTypesResultBuilder<0>();
  }

 private:
  SetDisabledImageTypesResult() { }

};


// Parameters for the SetHardwareConcurrencyOverride command.
class SetHardwareConcurrencyOverrideParams {
 public:
  static std::unique_ptr<SetHardwareConcurrencyOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetHardwareConcurrencyOverrideParams(const SetHardwareConcurrencyOverrideParams&) = delete;
  SetHardwareConcurrencyOverrideParams& operator=(const SetHardwareConcurrencyOverrideParams&) = delete;
  ~SetHardwareConcurrencyOverrideParams() { }

  // Hardware concurrency to report
  int GetHardwareConcurrency() const { return hardware_concurrency_; }
  void SetHardwareConcurrency(int value) { hardware_concurrency_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetHardwareConcurrencyOverrideParams> Clone() const;

  template<int STATE>
  class SetHardwareConcurrencyOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHardwareConcurrencySet = 1 << 1,
      kAllRequiredFieldsSet = (kHardwareConcurrencySet | 0)
    };

    SetHardwareConcurrencyOverrideParamsBuilder<STATE | kHardwareConcurrencySet>& SetHardwareConcurrency(int value) {
      static_assert(!(STATE & kHardwareConcurrencySet), "property hardwareConcurrency should not have already been set");
      result_->SetHardwareConcurrency(value);
      return CastState<kHardwareConcurrencySet>();
    }

    std::unique_ptr<SetHardwareConcurrencyOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetHardwareConcurrencyOverrideParams;
    SetHardwareConcurrencyOverrideParamsBuilder() : result_(new SetHardwareConcurrencyOverrideParams()) { }

    template<int STEP> SetHardwareConcurrencyOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetHardwareConcurrencyOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetHardwareConcurrencyOverrideParams> result_;
  };

  static SetHardwareConcurrencyOverrideParamsBuilder<0> Builder() {
    return SetHardwareConcurrencyOverrideParamsBuilder<0>();
  }

 private:
  SetHardwareConcurrencyOverrideParams() { }

  int hardware_concurrency_;
};


// Result for the SetHardwareConcurrencyOverride command.
class SetHardwareConcurrencyOverrideResult {
 public:
  static std::unique_ptr<SetHardwareConcurrencyOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetHardwareConcurrencyOverrideResult(const SetHardwareConcurrencyOverrideResult&) = delete;
  SetHardwareConcurrencyOverrideResult& operator=(const SetHardwareConcurrencyOverrideResult&) = delete;
  ~SetHardwareConcurrencyOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetHardwareConcurrencyOverrideResult> Clone() const;

  template<int STATE>
  class SetHardwareConcurrencyOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetHardwareConcurrencyOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetHardwareConcurrencyOverrideResult;
    SetHardwareConcurrencyOverrideResultBuilder() : result_(new SetHardwareConcurrencyOverrideResult()) { }

    template<int STEP> SetHardwareConcurrencyOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetHardwareConcurrencyOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetHardwareConcurrencyOverrideResult> result_;
  };

  static SetHardwareConcurrencyOverrideResultBuilder<0> Builder() {
    return SetHardwareConcurrencyOverrideResultBuilder<0>();
  }

 private:
  SetHardwareConcurrencyOverrideResult() { }

};


// Parameters for the SetUserAgentOverride command.
class SetUserAgentOverrideParams {
 public:
  static std::unique_ptr<SetUserAgentOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetUserAgentOverrideParams(const SetUserAgentOverrideParams&) = delete;
  SetUserAgentOverrideParams& operator=(const SetUserAgentOverrideParams&) = delete;
  ~SetUserAgentOverrideParams() { }

  // User agent to use.
  std::string GetUserAgent() const { return user_agent_; }
  void SetUserAgent(const std::string& value) { user_agent_ = value; }

  // Browser langugage to emulate.
  bool HasAcceptLanguage() const { return !!accept_language_; }
  std::string GetAcceptLanguage() const { DCHECK(HasAcceptLanguage()); return accept_language_.value(); }
  void SetAcceptLanguage(const std::string& value) { accept_language_ = value; }

  // The platform navigator.platform should return.
  bool HasPlatform() const { return !!platform_; }
  std::string GetPlatform() const { DCHECK(HasPlatform()); return platform_.value(); }
  void SetPlatform(const std::string& value) { platform_ = value; }

  // To be sent in Sec-CH-UA-* headers and returned in navigator.userAgentData
  bool HasUserAgentMetadata() const { return !!user_agent_metadata_; }
  const ::autofill_assistant::emulation::UserAgentMetadata* GetUserAgentMetadata() const { DCHECK(HasUserAgentMetadata()); return user_agent_metadata_.value().get(); }
  void SetUserAgentMetadata(std::unique_ptr<::autofill_assistant::emulation::UserAgentMetadata> value) { user_agent_metadata_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetUserAgentOverrideParams> Clone() const;

  template<int STATE>
  class SetUserAgentOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kUserAgentSet = 1 << 1,
      kAllRequiredFieldsSet = (kUserAgentSet | 0)
    };

    SetUserAgentOverrideParamsBuilder<STATE | kUserAgentSet>& SetUserAgent(const std::string& value) {
      static_assert(!(STATE & kUserAgentSet), "property userAgent should not have already been set");
      result_->SetUserAgent(value);
      return CastState<kUserAgentSet>();
    }

    SetUserAgentOverrideParamsBuilder<STATE>& SetAcceptLanguage(const std::string& value) {
      result_->SetAcceptLanguage(value);
      return *this;
    }

    SetUserAgentOverrideParamsBuilder<STATE>& SetPlatform(const std::string& value) {
      result_->SetPlatform(value);
      return *this;
    }

    SetUserAgentOverrideParamsBuilder<STATE>& SetUserAgentMetadata(std::unique_ptr<::autofill_assistant::emulation::UserAgentMetadata> value) {
      result_->SetUserAgentMetadata(std::move(value));
      return *this;
    }

    std::unique_ptr<SetUserAgentOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetUserAgentOverrideParams;
    SetUserAgentOverrideParamsBuilder() : result_(new SetUserAgentOverrideParams()) { }

    template<int STEP> SetUserAgentOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetUserAgentOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetUserAgentOverrideParams> result_;
  };

  static SetUserAgentOverrideParamsBuilder<0> Builder() {
    return SetUserAgentOverrideParamsBuilder<0>();
  }

 private:
  SetUserAgentOverrideParams() { }

  std::string user_agent_;
  absl::optional<std::string> accept_language_;
  absl::optional<std::string> platform_;
  absl::optional<std::unique_ptr<::autofill_assistant::emulation::UserAgentMetadata>> user_agent_metadata_;
};


// Result for the SetUserAgentOverride command.
class SetUserAgentOverrideResult {
 public:
  static std::unique_ptr<SetUserAgentOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetUserAgentOverrideResult(const SetUserAgentOverrideResult&) = delete;
  SetUserAgentOverrideResult& operator=(const SetUserAgentOverrideResult&) = delete;
  ~SetUserAgentOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetUserAgentOverrideResult> Clone() const;

  template<int STATE>
  class SetUserAgentOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetUserAgentOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetUserAgentOverrideResult;
    SetUserAgentOverrideResultBuilder() : result_(new SetUserAgentOverrideResult()) { }

    template<int STEP> SetUserAgentOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetUserAgentOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetUserAgentOverrideResult> result_;
  };

  static SetUserAgentOverrideResultBuilder<0> Builder() {
    return SetUserAgentOverrideResultBuilder<0>();
  }

 private:
  SetUserAgentOverrideResult() { }

};


// Parameters for the SetAutomationOverride command.
class SetAutomationOverrideParams {
 public:
  static std::unique_ptr<SetAutomationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetAutomationOverrideParams(const SetAutomationOverrideParams&) = delete;
  SetAutomationOverrideParams& operator=(const SetAutomationOverrideParams&) = delete;
  ~SetAutomationOverrideParams() { }

  // Whether the override should be enabled.
  bool GetEnabled() const { return enabled_; }
  void SetEnabled(bool value) { enabled_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAutomationOverrideParams> Clone() const;

  template<int STATE>
  class SetAutomationOverrideParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEnabledSet = 1 << 1,
      kAllRequiredFieldsSet = (kEnabledSet | 0)
    };

    SetAutomationOverrideParamsBuilder<STATE | kEnabledSet>& SetEnabled(bool value) {
      static_assert(!(STATE & kEnabledSet), "property enabled should not have already been set");
      result_->SetEnabled(value);
      return CastState<kEnabledSet>();
    }

    std::unique_ptr<SetAutomationOverrideParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAutomationOverrideParams;
    SetAutomationOverrideParamsBuilder() : result_(new SetAutomationOverrideParams()) { }

    template<int STEP> SetAutomationOverrideParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAutomationOverrideParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAutomationOverrideParams> result_;
  };

  static SetAutomationOverrideParamsBuilder<0> Builder() {
    return SetAutomationOverrideParamsBuilder<0>();
  }

 private:
  SetAutomationOverrideParams() { }

  bool enabled_;
};


// Result for the SetAutomationOverride command.
class SetAutomationOverrideResult {
 public:
  static std::unique_ptr<SetAutomationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetAutomationOverrideResult(const SetAutomationOverrideResult&) = delete;
  SetAutomationOverrideResult& operator=(const SetAutomationOverrideResult&) = delete;
  ~SetAutomationOverrideResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAutomationOverrideResult> Clone() const;

  template<int STATE>
  class SetAutomationOverrideResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetAutomationOverrideResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAutomationOverrideResult;
    SetAutomationOverrideResultBuilder() : result_(new SetAutomationOverrideResult()) { }

    template<int STEP> SetAutomationOverrideResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAutomationOverrideResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAutomationOverrideResult> result_;
  };

  static SetAutomationOverrideResultBuilder<0> Builder() {
    return SetAutomationOverrideResultBuilder<0>();
  }

 private:
  SetAutomationOverrideResult() { }

};


// Parameters for the VirtualTimeBudgetExpired event.
class VirtualTimeBudgetExpiredParams {
 public:
  static std::unique_ptr<VirtualTimeBudgetExpiredParams> Parse(const base::Value& value, ErrorReporter* errors);
  VirtualTimeBudgetExpiredParams(const VirtualTimeBudgetExpiredParams&) = delete;
  VirtualTimeBudgetExpiredParams& operator=(const VirtualTimeBudgetExpiredParams&) = delete;
  ~VirtualTimeBudgetExpiredParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<VirtualTimeBudgetExpiredParams> Clone() const;

  template<int STATE>
  class VirtualTimeBudgetExpiredParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<VirtualTimeBudgetExpiredParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class VirtualTimeBudgetExpiredParams;
    VirtualTimeBudgetExpiredParamsBuilder() : result_(new VirtualTimeBudgetExpiredParams()) { }

    template<int STEP> VirtualTimeBudgetExpiredParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<VirtualTimeBudgetExpiredParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<VirtualTimeBudgetExpiredParams> result_;
  };

  static VirtualTimeBudgetExpiredParamsBuilder<0> Builder() {
    return VirtualTimeBudgetExpiredParamsBuilder<0>();
  }

 private:
  VirtualTimeBudgetExpiredParams() { }

};


}  // namespace emulation

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_EMULATION_H_
