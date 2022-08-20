// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_STORAGE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_STORAGE_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_browser.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_security.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_storage.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_target.h"

namespace autofill_assistant {

class ErrorReporter;

namespace storage {

// Usage for a storage type.
class UsageForType {
 public:
  static std::unique_ptr<UsageForType> Parse(const base::Value& value, ErrorReporter* errors);
  UsageForType(const UsageForType&) = delete;
  UsageForType& operator=(const UsageForType&) = delete;
  ~UsageForType() { }

  // Name of storage type.
  ::autofill_assistant::storage::StorageType GetStorageType() const { return storage_type_; }
  void SetStorageType(::autofill_assistant::storage::StorageType value) { storage_type_ = value; }

  // Storage usage (bytes).
  double GetUsage() const { return usage_; }
  void SetUsage(double value) { usage_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UsageForType> Clone() const;

  template<int STATE>
  class UsageForTypeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageTypeSet = 1 << 1,
    kUsageSet = 1 << 2,
      kAllRequiredFieldsSet = (kStorageTypeSet | kUsageSet | 0)
    };

    UsageForTypeBuilder<STATE | kStorageTypeSet>& SetStorageType(::autofill_assistant::storage::StorageType value) {
      static_assert(!(STATE & kStorageTypeSet), "property storageType should not have already been set");
      result_->SetStorageType(value);
      return CastState<kStorageTypeSet>();
    }

    UsageForTypeBuilder<STATE | kUsageSet>& SetUsage(double value) {
      static_assert(!(STATE & kUsageSet), "property usage should not have already been set");
      result_->SetUsage(value);
      return CastState<kUsageSet>();
    }

    std::unique_ptr<UsageForType> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UsageForType;
    UsageForTypeBuilder() : result_(new UsageForType()) { }

    template<int STEP> UsageForTypeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UsageForTypeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UsageForType> result_;
  };

  static UsageForTypeBuilder<0> Builder() {
    return UsageForTypeBuilder<0>();
  }

 private:
  UsageForType() { }

  ::autofill_assistant::storage::StorageType storage_type_;
  double usage_;
};


// Pair of issuer origin and number of available (signed, but not used) Trust
// Tokens from that issuer.
class TrustTokens {
 public:
  static std::unique_ptr<TrustTokens> Parse(const base::Value& value, ErrorReporter* errors);
  TrustTokens(const TrustTokens&) = delete;
  TrustTokens& operator=(const TrustTokens&) = delete;
  ~TrustTokens() { }

  std::string GetIssuerOrigin() const { return issuer_origin_; }
  void SetIssuerOrigin(const std::string& value) { issuer_origin_ = value; }

  double GetCount() const { return count_; }
  void SetCount(double value) { count_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrustTokens> Clone() const;

  template<int STATE>
  class TrustTokensBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIssuerOriginSet = 1 << 1,
    kCountSet = 1 << 2,
      kAllRequiredFieldsSet = (kIssuerOriginSet | kCountSet | 0)
    };

    TrustTokensBuilder<STATE | kIssuerOriginSet>& SetIssuerOrigin(const std::string& value) {
      static_assert(!(STATE & kIssuerOriginSet), "property issuerOrigin should not have already been set");
      result_->SetIssuerOrigin(value);
      return CastState<kIssuerOriginSet>();
    }

    TrustTokensBuilder<STATE | kCountSet>& SetCount(double value) {
      static_assert(!(STATE & kCountSet), "property count should not have already been set");
      result_->SetCount(value);
      return CastState<kCountSet>();
    }

    std::unique_ptr<TrustTokens> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrustTokens;
    TrustTokensBuilder() : result_(new TrustTokens()) { }

    template<int STEP> TrustTokensBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrustTokensBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrustTokens> result_;
  };

  static TrustTokensBuilder<0> Builder() {
    return TrustTokensBuilder<0>();
  }

 private:
  TrustTokens() { }

  std::string issuer_origin_;
  double count_;
};


// Ad advertising element inside an interest group.
class InterestGroupAd {
 public:
  static std::unique_ptr<InterestGroupAd> Parse(const base::Value& value, ErrorReporter* errors);
  InterestGroupAd(const InterestGroupAd&) = delete;
  InterestGroupAd& operator=(const InterestGroupAd&) = delete;
  ~InterestGroupAd() { }

  std::string GetRenderUrl() const { return render_url_; }
  void SetRenderUrl(const std::string& value) { render_url_ = value; }

  bool HasMetadata() const { return !!metadata_; }
  std::string GetMetadata() const { DCHECK(HasMetadata()); return metadata_.value(); }
  void SetMetadata(const std::string& value) { metadata_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InterestGroupAd> Clone() const;

  template<int STATE>
  class InterestGroupAdBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRenderUrlSet = 1 << 1,
      kAllRequiredFieldsSet = (kRenderUrlSet | 0)
    };

    InterestGroupAdBuilder<STATE | kRenderUrlSet>& SetRenderUrl(const std::string& value) {
      static_assert(!(STATE & kRenderUrlSet), "property renderUrl should not have already been set");
      result_->SetRenderUrl(value);
      return CastState<kRenderUrlSet>();
    }

    InterestGroupAdBuilder<STATE>& SetMetadata(const std::string& value) {
      result_->SetMetadata(value);
      return *this;
    }

    std::unique_ptr<InterestGroupAd> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InterestGroupAd;
    InterestGroupAdBuilder() : result_(new InterestGroupAd()) { }

    template<int STEP> InterestGroupAdBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InterestGroupAdBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InterestGroupAd> result_;
  };

  static InterestGroupAdBuilder<0> Builder() {
    return InterestGroupAdBuilder<0>();
  }

 private:
  InterestGroupAd() { }

  std::string render_url_;
  absl::optional<std::string> metadata_;
};


// The full details of an interest group.
class InterestGroupDetails {
 public:
  static std::unique_ptr<InterestGroupDetails> Parse(const base::Value& value, ErrorReporter* errors);
  InterestGroupDetails(const InterestGroupDetails&) = delete;
  InterestGroupDetails& operator=(const InterestGroupDetails&) = delete;
  ~InterestGroupDetails() { }

  std::string GetOwnerOrigin() const { return owner_origin_; }
  void SetOwnerOrigin(const std::string& value) { owner_origin_ = value; }

  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  double GetExpirationTime() const { return expiration_time_; }
  void SetExpirationTime(double value) { expiration_time_ = value; }

  std::string GetJoiningOrigin() const { return joining_origin_; }
  void SetJoiningOrigin(const std::string& value) { joining_origin_ = value; }

  bool HasBiddingUrl() const { return !!bidding_url_; }
  std::string GetBiddingUrl() const { DCHECK(HasBiddingUrl()); return bidding_url_.value(); }
  void SetBiddingUrl(const std::string& value) { bidding_url_ = value; }

  bool HasBiddingWasmHelperUrl() const { return !!bidding_wasm_helper_url_; }
  std::string GetBiddingWasmHelperUrl() const { DCHECK(HasBiddingWasmHelperUrl()); return bidding_wasm_helper_url_.value(); }
  void SetBiddingWasmHelperUrl(const std::string& value) { bidding_wasm_helper_url_ = value; }

  bool HasUpdateUrl() const { return !!update_url_; }
  std::string GetUpdateUrl() const { DCHECK(HasUpdateUrl()); return update_url_.value(); }
  void SetUpdateUrl(const std::string& value) { update_url_ = value; }

  bool HasTrustedBiddingSignalsUrl() const { return !!trusted_bidding_signals_url_; }
  std::string GetTrustedBiddingSignalsUrl() const { DCHECK(HasTrustedBiddingSignalsUrl()); return trusted_bidding_signals_url_.value(); }
  void SetTrustedBiddingSignalsUrl(const std::string& value) { trusted_bidding_signals_url_ = value; }

  const std::vector<std::string>* GetTrustedBiddingSignalsKeys() const { return &trusted_bidding_signals_keys_; }
  void SetTrustedBiddingSignalsKeys(std::vector<std::string> value) { trusted_bidding_signals_keys_ = std::move(value); }

  bool HasUserBiddingSignals() const { return !!user_bidding_signals_; }
  std::string GetUserBiddingSignals() const { DCHECK(HasUserBiddingSignals()); return user_bidding_signals_.value(); }
  void SetUserBiddingSignals(const std::string& value) { user_bidding_signals_ = value; }

  const std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>>* GetAds() const { return &ads_; }
  void SetAds(std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>> value) { ads_ = std::move(value); }

  const std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>>* GetAdComponents() const { return &ad_components_; }
  void SetAdComponents(std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>> value) { ad_components_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InterestGroupDetails> Clone() const;

  template<int STATE>
  class InterestGroupDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOwnerOriginSet = 1 << 1,
    kNameSet = 1 << 2,
    kExpirationTimeSet = 1 << 3,
    kJoiningOriginSet = 1 << 4,
    kTrustedBiddingSignalsKeysSet = 1 << 5,
    kAdsSet = 1 << 6,
    kAdComponentsSet = 1 << 7,
      kAllRequiredFieldsSet = (kOwnerOriginSet | kNameSet | kExpirationTimeSet | kJoiningOriginSet | kTrustedBiddingSignalsKeysSet | kAdsSet | kAdComponentsSet | 0)
    };

    InterestGroupDetailsBuilder<STATE | kOwnerOriginSet>& SetOwnerOrigin(const std::string& value) {
      static_assert(!(STATE & kOwnerOriginSet), "property ownerOrigin should not have already been set");
      result_->SetOwnerOrigin(value);
      return CastState<kOwnerOriginSet>();
    }

    InterestGroupDetailsBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    InterestGroupDetailsBuilder<STATE | kExpirationTimeSet>& SetExpirationTime(double value) {
      static_assert(!(STATE & kExpirationTimeSet), "property expirationTime should not have already been set");
      result_->SetExpirationTime(value);
      return CastState<kExpirationTimeSet>();
    }

    InterestGroupDetailsBuilder<STATE | kJoiningOriginSet>& SetJoiningOrigin(const std::string& value) {
      static_assert(!(STATE & kJoiningOriginSet), "property joiningOrigin should not have already been set");
      result_->SetJoiningOrigin(value);
      return CastState<kJoiningOriginSet>();
    }

    InterestGroupDetailsBuilder<STATE>& SetBiddingUrl(const std::string& value) {
      result_->SetBiddingUrl(value);
      return *this;
    }

    InterestGroupDetailsBuilder<STATE>& SetBiddingWasmHelperUrl(const std::string& value) {
      result_->SetBiddingWasmHelperUrl(value);
      return *this;
    }

    InterestGroupDetailsBuilder<STATE>& SetUpdateUrl(const std::string& value) {
      result_->SetUpdateUrl(value);
      return *this;
    }

    InterestGroupDetailsBuilder<STATE>& SetTrustedBiddingSignalsUrl(const std::string& value) {
      result_->SetTrustedBiddingSignalsUrl(value);
      return *this;
    }

    InterestGroupDetailsBuilder<STATE | kTrustedBiddingSignalsKeysSet>& SetTrustedBiddingSignalsKeys(std::vector<std::string> value) {
      static_assert(!(STATE & kTrustedBiddingSignalsKeysSet), "property trustedBiddingSignalsKeys should not have already been set");
      result_->SetTrustedBiddingSignalsKeys(std::move(value));
      return CastState<kTrustedBiddingSignalsKeysSet>();
    }

    InterestGroupDetailsBuilder<STATE>& SetUserBiddingSignals(const std::string& value) {
      result_->SetUserBiddingSignals(value);
      return *this;
    }

    InterestGroupDetailsBuilder<STATE | kAdsSet>& SetAds(std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>> value) {
      static_assert(!(STATE & kAdsSet), "property ads should not have already been set");
      result_->SetAds(std::move(value));
      return CastState<kAdsSet>();
    }

    InterestGroupDetailsBuilder<STATE | kAdComponentsSet>& SetAdComponents(std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>> value) {
      static_assert(!(STATE & kAdComponentsSet), "property adComponents should not have already been set");
      result_->SetAdComponents(std::move(value));
      return CastState<kAdComponentsSet>();
    }

    std::unique_ptr<InterestGroupDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InterestGroupDetails;
    InterestGroupDetailsBuilder() : result_(new InterestGroupDetails()) { }

    template<int STEP> InterestGroupDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InterestGroupDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InterestGroupDetails> result_;
  };

  static InterestGroupDetailsBuilder<0> Builder() {
    return InterestGroupDetailsBuilder<0>();
  }

 private:
  InterestGroupDetails() { }

  std::string owner_origin_;
  std::string name_;
  double expiration_time_;
  std::string joining_origin_;
  absl::optional<std::string> bidding_url_;
  absl::optional<std::string> bidding_wasm_helper_url_;
  absl::optional<std::string> update_url_;
  absl::optional<std::string> trusted_bidding_signals_url_;
  std::vector<std::string> trusted_bidding_signals_keys_;
  absl::optional<std::string> user_bidding_signals_;
  std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>> ads_;
  std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>> ad_components_;
};


// Parameters for the GetStorageKeyForFrame command.
class GetStorageKeyForFrameParams {
 public:
  static std::unique_ptr<GetStorageKeyForFrameParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetStorageKeyForFrameParams(const GetStorageKeyForFrameParams&) = delete;
  GetStorageKeyForFrameParams& operator=(const GetStorageKeyForFrameParams&) = delete;
  ~GetStorageKeyForFrameParams() { }

  std::string GetFrameId() const { return frame_id_; }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetStorageKeyForFrameParams> Clone() const;

  template<int STATE>
  class GetStorageKeyForFrameParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFrameIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kFrameIdSet | 0)
    };

    GetStorageKeyForFrameParamsBuilder<STATE | kFrameIdSet>& SetFrameId(const std::string& value) {
      static_assert(!(STATE & kFrameIdSet), "property frameId should not have already been set");
      result_->SetFrameId(value);
      return CastState<kFrameIdSet>();
    }

    std::unique_ptr<GetStorageKeyForFrameParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetStorageKeyForFrameParams;
    GetStorageKeyForFrameParamsBuilder() : result_(new GetStorageKeyForFrameParams()) { }

    template<int STEP> GetStorageKeyForFrameParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetStorageKeyForFrameParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetStorageKeyForFrameParams> result_;
  };

  static GetStorageKeyForFrameParamsBuilder<0> Builder() {
    return GetStorageKeyForFrameParamsBuilder<0>();
  }

 private:
  GetStorageKeyForFrameParams() { }

  std::string frame_id_;
};


// Result for the GetStorageKeyForFrame command.
class GetStorageKeyForFrameResult {
 public:
  static std::unique_ptr<GetStorageKeyForFrameResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetStorageKeyForFrameResult(const GetStorageKeyForFrameResult&) = delete;
  GetStorageKeyForFrameResult& operator=(const GetStorageKeyForFrameResult&) = delete;
  ~GetStorageKeyForFrameResult() { }

  std::string GetStorageKey() const { return storage_key_; }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetStorageKeyForFrameResult> Clone() const;

  template<int STATE>
  class GetStorageKeyForFrameResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageKeySet = 1 << 1,
      kAllRequiredFieldsSet = (kStorageKeySet | 0)
    };

    GetStorageKeyForFrameResultBuilder<STATE | kStorageKeySet>& SetStorageKey(const std::string& value) {
      static_assert(!(STATE & kStorageKeySet), "property storageKey should not have already been set");
      result_->SetStorageKey(value);
      return CastState<kStorageKeySet>();
    }

    std::unique_ptr<GetStorageKeyForFrameResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetStorageKeyForFrameResult;
    GetStorageKeyForFrameResultBuilder() : result_(new GetStorageKeyForFrameResult()) { }

    template<int STEP> GetStorageKeyForFrameResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetStorageKeyForFrameResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetStorageKeyForFrameResult> result_;
  };

  static GetStorageKeyForFrameResultBuilder<0> Builder() {
    return GetStorageKeyForFrameResultBuilder<0>();
  }

 private:
  GetStorageKeyForFrameResult() { }

  std::string storage_key_;
};


// Parameters for the ClearDataForOrigin command.
class ClearDataForOriginParams {
 public:
  static std::unique_ptr<ClearDataForOriginParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearDataForOriginParams(const ClearDataForOriginParams&) = delete;
  ClearDataForOriginParams& operator=(const ClearDataForOriginParams&) = delete;
  ~ClearDataForOriginParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  // Comma separated list of StorageType to clear.
  std::string GetStorageTypes() const { return storage_types_; }
  void SetStorageTypes(const std::string& value) { storage_types_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearDataForOriginParams> Clone() const;

  template<int STATE>
  class ClearDataForOriginParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kStorageTypesSet = 1 << 2,
      kAllRequiredFieldsSet = (kOriginSet | kStorageTypesSet | 0)
    };

    ClearDataForOriginParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    ClearDataForOriginParamsBuilder<STATE | kStorageTypesSet>& SetStorageTypes(const std::string& value) {
      static_assert(!(STATE & kStorageTypesSet), "property storageTypes should not have already been set");
      result_->SetStorageTypes(value);
      return CastState<kStorageTypesSet>();
    }

    std::unique_ptr<ClearDataForOriginParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearDataForOriginParams;
    ClearDataForOriginParamsBuilder() : result_(new ClearDataForOriginParams()) { }

    template<int STEP> ClearDataForOriginParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearDataForOriginParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearDataForOriginParams> result_;
  };

  static ClearDataForOriginParamsBuilder<0> Builder() {
    return ClearDataForOriginParamsBuilder<0>();
  }

 private:
  ClearDataForOriginParams() { }

  std::string origin_;
  std::string storage_types_;
};


// Result for the ClearDataForOrigin command.
class ClearDataForOriginResult {
 public:
  static std::unique_ptr<ClearDataForOriginResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearDataForOriginResult(const ClearDataForOriginResult&) = delete;
  ClearDataForOriginResult& operator=(const ClearDataForOriginResult&) = delete;
  ~ClearDataForOriginResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearDataForOriginResult> Clone() const;

  template<int STATE>
  class ClearDataForOriginResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearDataForOriginResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearDataForOriginResult;
    ClearDataForOriginResultBuilder() : result_(new ClearDataForOriginResult()) { }

    template<int STEP> ClearDataForOriginResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearDataForOriginResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearDataForOriginResult> result_;
  };

  static ClearDataForOriginResultBuilder<0> Builder() {
    return ClearDataForOriginResultBuilder<0>();
  }

 private:
  ClearDataForOriginResult() { }

};


// Parameters for the ClearDataForStorageKey command.
class ClearDataForStorageKeyParams {
 public:
  static std::unique_ptr<ClearDataForStorageKeyParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearDataForStorageKeyParams(const ClearDataForStorageKeyParams&) = delete;
  ClearDataForStorageKeyParams& operator=(const ClearDataForStorageKeyParams&) = delete;
  ~ClearDataForStorageKeyParams() { }

  // Storage key.
  std::string GetStorageKey() const { return storage_key_; }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Comma separated list of StorageType to clear.
  std::string GetStorageTypes() const { return storage_types_; }
  void SetStorageTypes(const std::string& value) { storage_types_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearDataForStorageKeyParams> Clone() const;

  template<int STATE>
  class ClearDataForStorageKeyParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageKeySet = 1 << 1,
    kStorageTypesSet = 1 << 2,
      kAllRequiredFieldsSet = (kStorageKeySet | kStorageTypesSet | 0)
    };

    ClearDataForStorageKeyParamsBuilder<STATE | kStorageKeySet>& SetStorageKey(const std::string& value) {
      static_assert(!(STATE & kStorageKeySet), "property storageKey should not have already been set");
      result_->SetStorageKey(value);
      return CastState<kStorageKeySet>();
    }

    ClearDataForStorageKeyParamsBuilder<STATE | kStorageTypesSet>& SetStorageTypes(const std::string& value) {
      static_assert(!(STATE & kStorageTypesSet), "property storageTypes should not have already been set");
      result_->SetStorageTypes(value);
      return CastState<kStorageTypesSet>();
    }

    std::unique_ptr<ClearDataForStorageKeyParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearDataForStorageKeyParams;
    ClearDataForStorageKeyParamsBuilder() : result_(new ClearDataForStorageKeyParams()) { }

    template<int STEP> ClearDataForStorageKeyParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearDataForStorageKeyParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearDataForStorageKeyParams> result_;
  };

  static ClearDataForStorageKeyParamsBuilder<0> Builder() {
    return ClearDataForStorageKeyParamsBuilder<0>();
  }

 private:
  ClearDataForStorageKeyParams() { }

  std::string storage_key_;
  std::string storage_types_;
};


// Result for the ClearDataForStorageKey command.
class ClearDataForStorageKeyResult {
 public:
  static std::unique_ptr<ClearDataForStorageKeyResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearDataForStorageKeyResult(const ClearDataForStorageKeyResult&) = delete;
  ClearDataForStorageKeyResult& operator=(const ClearDataForStorageKeyResult&) = delete;
  ~ClearDataForStorageKeyResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearDataForStorageKeyResult> Clone() const;

  template<int STATE>
  class ClearDataForStorageKeyResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearDataForStorageKeyResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearDataForStorageKeyResult;
    ClearDataForStorageKeyResultBuilder() : result_(new ClearDataForStorageKeyResult()) { }

    template<int STEP> ClearDataForStorageKeyResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearDataForStorageKeyResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearDataForStorageKeyResult> result_;
  };

  static ClearDataForStorageKeyResultBuilder<0> Builder() {
    return ClearDataForStorageKeyResultBuilder<0>();
  }

 private:
  ClearDataForStorageKeyResult() { }

};


// Parameters for the GetCookies command.
class GetCookiesParams {
 public:
  static std::unique_ptr<GetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetCookiesParams(const GetCookiesParams&) = delete;
  GetCookiesParams& operator=(const GetCookiesParams&) = delete;
  ~GetCookiesParams() { }

  // Browser context to use when called on the browser endpoint.
  bool HasBrowserContextId() const { return !!browser_context_id_; }
  std::string GetBrowserContextId() const { DCHECK(HasBrowserContextId()); return browser_context_id_.value(); }
  void SetBrowserContextId(const std::string& value) { browser_context_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetCookiesParams> Clone() const;

  template<int STATE>
  class GetCookiesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    GetCookiesParamsBuilder<STATE>& SetBrowserContextId(const std::string& value) {
      result_->SetBrowserContextId(value);
      return *this;
    }

    std::unique_ptr<GetCookiesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetCookiesParams;
    GetCookiesParamsBuilder() : result_(new GetCookiesParams()) { }

    template<int STEP> GetCookiesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetCookiesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetCookiesParams> result_;
  };

  static GetCookiesParamsBuilder<0> Builder() {
    return GetCookiesParamsBuilder<0>();
  }

 private:
  GetCookiesParams() { }

  absl::optional<std::string> browser_context_id_;
};


// Result for the GetCookies command.
class GetCookiesResult {
 public:
  static std::unique_ptr<GetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetCookiesResult(const GetCookiesResult&) = delete;
  GetCookiesResult& operator=(const GetCookiesResult&) = delete;
  ~GetCookiesResult() { }

  // Array of cookie objects.
  const std::vector<std::unique_ptr<::autofill_assistant::network::Cookie>>* GetCookies() const { return &cookies_; }
  void SetCookies(std::vector<std::unique_ptr<::autofill_assistant::network::Cookie>> value) { cookies_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetCookiesResult> Clone() const;

  template<int STATE>
  class GetCookiesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCookiesSet = 1 << 1,
      kAllRequiredFieldsSet = (kCookiesSet | 0)
    };

    GetCookiesResultBuilder<STATE | kCookiesSet>& SetCookies(std::vector<std::unique_ptr<::autofill_assistant::network::Cookie>> value) {
      static_assert(!(STATE & kCookiesSet), "property cookies should not have already been set");
      result_->SetCookies(std::move(value));
      return CastState<kCookiesSet>();
    }

    std::unique_ptr<GetCookiesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetCookiesResult;
    GetCookiesResultBuilder() : result_(new GetCookiesResult()) { }

    template<int STEP> GetCookiesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetCookiesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetCookiesResult> result_;
  };

  static GetCookiesResultBuilder<0> Builder() {
    return GetCookiesResultBuilder<0>();
  }

 private:
  GetCookiesResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::network::Cookie>> cookies_;
};


// Parameters for the SetCookies command.
class SetCookiesParams {
 public:
  static std::unique_ptr<SetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetCookiesParams(const SetCookiesParams&) = delete;
  SetCookiesParams& operator=(const SetCookiesParams&) = delete;
  ~SetCookiesParams() { }

  // Cookies to be set.
  const std::vector<std::unique_ptr<::autofill_assistant::network::CookieParam>>* GetCookies() const { return &cookies_; }
  void SetCookies(std::vector<std::unique_ptr<::autofill_assistant::network::CookieParam>> value) { cookies_ = std::move(value); }

  // Browser context to use when called on the browser endpoint.
  bool HasBrowserContextId() const { return !!browser_context_id_; }
  std::string GetBrowserContextId() const { DCHECK(HasBrowserContextId()); return browser_context_id_.value(); }
  void SetBrowserContextId(const std::string& value) { browser_context_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetCookiesParams> Clone() const;

  template<int STATE>
  class SetCookiesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCookiesSet = 1 << 1,
      kAllRequiredFieldsSet = (kCookiesSet | 0)
    };

    SetCookiesParamsBuilder<STATE | kCookiesSet>& SetCookies(std::vector<std::unique_ptr<::autofill_assistant::network::CookieParam>> value) {
      static_assert(!(STATE & kCookiesSet), "property cookies should not have already been set");
      result_->SetCookies(std::move(value));
      return CastState<kCookiesSet>();
    }

    SetCookiesParamsBuilder<STATE>& SetBrowserContextId(const std::string& value) {
      result_->SetBrowserContextId(value);
      return *this;
    }

    std::unique_ptr<SetCookiesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetCookiesParams;
    SetCookiesParamsBuilder() : result_(new SetCookiesParams()) { }

    template<int STEP> SetCookiesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetCookiesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetCookiesParams> result_;
  };

  static SetCookiesParamsBuilder<0> Builder() {
    return SetCookiesParamsBuilder<0>();
  }

 private:
  SetCookiesParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::network::CookieParam>> cookies_;
  absl::optional<std::string> browser_context_id_;
};


// Result for the SetCookies command.
class SetCookiesResult {
 public:
  static std::unique_ptr<SetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetCookiesResult(const SetCookiesResult&) = delete;
  SetCookiesResult& operator=(const SetCookiesResult&) = delete;
  ~SetCookiesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetCookiesResult> Clone() const;

  template<int STATE>
  class SetCookiesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetCookiesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetCookiesResult;
    SetCookiesResultBuilder() : result_(new SetCookiesResult()) { }

    template<int STEP> SetCookiesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetCookiesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetCookiesResult> result_;
  };

  static SetCookiesResultBuilder<0> Builder() {
    return SetCookiesResultBuilder<0>();
  }

 private:
  SetCookiesResult() { }

};


// Parameters for the ClearCookies command.
class ClearCookiesParams {
 public:
  static std::unique_ptr<ClearCookiesParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearCookiesParams(const ClearCookiesParams&) = delete;
  ClearCookiesParams& operator=(const ClearCookiesParams&) = delete;
  ~ClearCookiesParams() { }

  // Browser context to use when called on the browser endpoint.
  bool HasBrowserContextId() const { return !!browser_context_id_; }
  std::string GetBrowserContextId() const { DCHECK(HasBrowserContextId()); return browser_context_id_.value(); }
  void SetBrowserContextId(const std::string& value) { browser_context_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearCookiesParams> Clone() const;

  template<int STATE>
  class ClearCookiesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    ClearCookiesParamsBuilder<STATE>& SetBrowserContextId(const std::string& value) {
      result_->SetBrowserContextId(value);
      return *this;
    }

    std::unique_ptr<ClearCookiesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearCookiesParams;
    ClearCookiesParamsBuilder() : result_(new ClearCookiesParams()) { }

    template<int STEP> ClearCookiesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearCookiesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearCookiesParams> result_;
  };

  static ClearCookiesParamsBuilder<0> Builder() {
    return ClearCookiesParamsBuilder<0>();
  }

 private:
  ClearCookiesParams() { }

  absl::optional<std::string> browser_context_id_;
};


// Result for the ClearCookies command.
class ClearCookiesResult {
 public:
  static std::unique_ptr<ClearCookiesResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearCookiesResult(const ClearCookiesResult&) = delete;
  ClearCookiesResult& operator=(const ClearCookiesResult&) = delete;
  ~ClearCookiesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearCookiesResult> Clone() const;

  template<int STATE>
  class ClearCookiesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearCookiesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearCookiesResult;
    ClearCookiesResultBuilder() : result_(new ClearCookiesResult()) { }

    template<int STEP> ClearCookiesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearCookiesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearCookiesResult> result_;
  };

  static ClearCookiesResultBuilder<0> Builder() {
    return ClearCookiesResultBuilder<0>();
  }

 private:
  ClearCookiesResult() { }

};


// Parameters for the GetUsageAndQuota command.
class GetUsageAndQuotaParams {
 public:
  static std::unique_ptr<GetUsageAndQuotaParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetUsageAndQuotaParams(const GetUsageAndQuotaParams&) = delete;
  GetUsageAndQuotaParams& operator=(const GetUsageAndQuotaParams&) = delete;
  ~GetUsageAndQuotaParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetUsageAndQuotaParams> Clone() const;

  template<int STATE>
  class GetUsageAndQuotaParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    GetUsageAndQuotaParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    std::unique_ptr<GetUsageAndQuotaParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetUsageAndQuotaParams;
    GetUsageAndQuotaParamsBuilder() : result_(new GetUsageAndQuotaParams()) { }

    template<int STEP> GetUsageAndQuotaParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetUsageAndQuotaParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetUsageAndQuotaParams> result_;
  };

  static GetUsageAndQuotaParamsBuilder<0> Builder() {
    return GetUsageAndQuotaParamsBuilder<0>();
  }

 private:
  GetUsageAndQuotaParams() { }

  std::string origin_;
};


// Result for the GetUsageAndQuota command.
class GetUsageAndQuotaResult {
 public:
  static std::unique_ptr<GetUsageAndQuotaResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetUsageAndQuotaResult(const GetUsageAndQuotaResult&) = delete;
  GetUsageAndQuotaResult& operator=(const GetUsageAndQuotaResult&) = delete;
  ~GetUsageAndQuotaResult() { }

  // Storage usage (bytes).
  double GetUsage() const { return usage_; }
  void SetUsage(double value) { usage_ = value; }

  // Storage quota (bytes).
  double GetQuota() const { return quota_; }
  void SetQuota(double value) { quota_ = value; }

  // Whether or not the origin has an active storage quota override
  bool GetOverrideActive() const { return override_active_; }
  void SetOverrideActive(bool value) { override_active_ = value; }

  // Storage usage per type (bytes).
  const std::vector<std::unique_ptr<::autofill_assistant::storage::UsageForType>>* GetUsageBreakdown() const { return &usage_breakdown_; }
  void SetUsageBreakdown(std::vector<std::unique_ptr<::autofill_assistant::storage::UsageForType>> value) { usage_breakdown_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetUsageAndQuotaResult> Clone() const;

  template<int STATE>
  class GetUsageAndQuotaResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kUsageSet = 1 << 1,
    kQuotaSet = 1 << 2,
    kOverrideActiveSet = 1 << 3,
    kUsageBreakdownSet = 1 << 4,
      kAllRequiredFieldsSet = (kUsageSet | kQuotaSet | kOverrideActiveSet | kUsageBreakdownSet | 0)
    };

    GetUsageAndQuotaResultBuilder<STATE | kUsageSet>& SetUsage(double value) {
      static_assert(!(STATE & kUsageSet), "property usage should not have already been set");
      result_->SetUsage(value);
      return CastState<kUsageSet>();
    }

    GetUsageAndQuotaResultBuilder<STATE | kQuotaSet>& SetQuota(double value) {
      static_assert(!(STATE & kQuotaSet), "property quota should not have already been set");
      result_->SetQuota(value);
      return CastState<kQuotaSet>();
    }

    GetUsageAndQuotaResultBuilder<STATE | kOverrideActiveSet>& SetOverrideActive(bool value) {
      static_assert(!(STATE & kOverrideActiveSet), "property overrideActive should not have already been set");
      result_->SetOverrideActive(value);
      return CastState<kOverrideActiveSet>();
    }

    GetUsageAndQuotaResultBuilder<STATE | kUsageBreakdownSet>& SetUsageBreakdown(std::vector<std::unique_ptr<::autofill_assistant::storage::UsageForType>> value) {
      static_assert(!(STATE & kUsageBreakdownSet), "property usageBreakdown should not have already been set");
      result_->SetUsageBreakdown(std::move(value));
      return CastState<kUsageBreakdownSet>();
    }

    std::unique_ptr<GetUsageAndQuotaResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetUsageAndQuotaResult;
    GetUsageAndQuotaResultBuilder() : result_(new GetUsageAndQuotaResult()) { }

    template<int STEP> GetUsageAndQuotaResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetUsageAndQuotaResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetUsageAndQuotaResult> result_;
  };

  static GetUsageAndQuotaResultBuilder<0> Builder() {
    return GetUsageAndQuotaResultBuilder<0>();
  }

 private:
  GetUsageAndQuotaResult() { }

  double usage_;
  double quota_;
  bool override_active_;
  std::vector<std::unique_ptr<::autofill_assistant::storage::UsageForType>> usage_breakdown_;
};


// Parameters for the OverrideQuotaForOrigin command.
class OverrideQuotaForOriginParams {
 public:
  static std::unique_ptr<OverrideQuotaForOriginParams> Parse(const base::Value& value, ErrorReporter* errors);
  OverrideQuotaForOriginParams(const OverrideQuotaForOriginParams&) = delete;
  OverrideQuotaForOriginParams& operator=(const OverrideQuotaForOriginParams&) = delete;
  ~OverrideQuotaForOriginParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  // The quota size (in bytes) to override the original quota with.
  // If this is called multiple times, the overridden quota will be equal to
  // the quotaSize provided in the final call. If this is called without
  // specifying a quotaSize, the quota will be reset to the default value for
  // the specified origin. If this is called multiple times with different
  // origins, the override will be maintained for each origin until it is
  // disabled (called without a quotaSize).
  bool HasQuotaSize() const { return !!quota_size_; }
  double GetQuotaSize() const { DCHECK(HasQuotaSize()); return quota_size_.value(); }
  void SetQuotaSize(double value) { quota_size_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<OverrideQuotaForOriginParams> Clone() const;

  template<int STATE>
  class OverrideQuotaForOriginParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    OverrideQuotaForOriginParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    OverrideQuotaForOriginParamsBuilder<STATE>& SetQuotaSize(double value) {
      result_->SetQuotaSize(value);
      return *this;
    }

    std::unique_ptr<OverrideQuotaForOriginParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class OverrideQuotaForOriginParams;
    OverrideQuotaForOriginParamsBuilder() : result_(new OverrideQuotaForOriginParams()) { }

    template<int STEP> OverrideQuotaForOriginParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<OverrideQuotaForOriginParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<OverrideQuotaForOriginParams> result_;
  };

  static OverrideQuotaForOriginParamsBuilder<0> Builder() {
    return OverrideQuotaForOriginParamsBuilder<0>();
  }

 private:
  OverrideQuotaForOriginParams() { }

  std::string origin_;
  absl::optional<double> quota_size_;
};


// Result for the OverrideQuotaForOrigin command.
class OverrideQuotaForOriginResult {
 public:
  static std::unique_ptr<OverrideQuotaForOriginResult> Parse(const base::Value& value, ErrorReporter* errors);
  OverrideQuotaForOriginResult(const OverrideQuotaForOriginResult&) = delete;
  OverrideQuotaForOriginResult& operator=(const OverrideQuotaForOriginResult&) = delete;
  ~OverrideQuotaForOriginResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<OverrideQuotaForOriginResult> Clone() const;

  template<int STATE>
  class OverrideQuotaForOriginResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<OverrideQuotaForOriginResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class OverrideQuotaForOriginResult;
    OverrideQuotaForOriginResultBuilder() : result_(new OverrideQuotaForOriginResult()) { }

    template<int STEP> OverrideQuotaForOriginResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<OverrideQuotaForOriginResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<OverrideQuotaForOriginResult> result_;
  };

  static OverrideQuotaForOriginResultBuilder<0> Builder() {
    return OverrideQuotaForOriginResultBuilder<0>();
  }

 private:
  OverrideQuotaForOriginResult() { }

};


// Parameters for the TrackCacheStorageForOrigin command.
class TrackCacheStorageForOriginParams {
 public:
  static std::unique_ptr<TrackCacheStorageForOriginParams> Parse(const base::Value& value, ErrorReporter* errors);
  TrackCacheStorageForOriginParams(const TrackCacheStorageForOriginParams&) = delete;
  TrackCacheStorageForOriginParams& operator=(const TrackCacheStorageForOriginParams&) = delete;
  ~TrackCacheStorageForOriginParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackCacheStorageForOriginParams> Clone() const;

  template<int STATE>
  class TrackCacheStorageForOriginParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    TrackCacheStorageForOriginParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    std::unique_ptr<TrackCacheStorageForOriginParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackCacheStorageForOriginParams;
    TrackCacheStorageForOriginParamsBuilder() : result_(new TrackCacheStorageForOriginParams()) { }

    template<int STEP> TrackCacheStorageForOriginParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackCacheStorageForOriginParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackCacheStorageForOriginParams> result_;
  };

  static TrackCacheStorageForOriginParamsBuilder<0> Builder() {
    return TrackCacheStorageForOriginParamsBuilder<0>();
  }

 private:
  TrackCacheStorageForOriginParams() { }

  std::string origin_;
};


// Result for the TrackCacheStorageForOrigin command.
class TrackCacheStorageForOriginResult {
 public:
  static std::unique_ptr<TrackCacheStorageForOriginResult> Parse(const base::Value& value, ErrorReporter* errors);
  TrackCacheStorageForOriginResult(const TrackCacheStorageForOriginResult&) = delete;
  TrackCacheStorageForOriginResult& operator=(const TrackCacheStorageForOriginResult&) = delete;
  ~TrackCacheStorageForOriginResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackCacheStorageForOriginResult> Clone() const;

  template<int STATE>
  class TrackCacheStorageForOriginResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TrackCacheStorageForOriginResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackCacheStorageForOriginResult;
    TrackCacheStorageForOriginResultBuilder() : result_(new TrackCacheStorageForOriginResult()) { }

    template<int STEP> TrackCacheStorageForOriginResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackCacheStorageForOriginResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackCacheStorageForOriginResult> result_;
  };

  static TrackCacheStorageForOriginResultBuilder<0> Builder() {
    return TrackCacheStorageForOriginResultBuilder<0>();
  }

 private:
  TrackCacheStorageForOriginResult() { }

};


// Parameters for the TrackIndexedDBForOrigin command.
class TrackIndexedDBForOriginParams {
 public:
  static std::unique_ptr<TrackIndexedDBForOriginParams> Parse(const base::Value& value, ErrorReporter* errors);
  TrackIndexedDBForOriginParams(const TrackIndexedDBForOriginParams&) = delete;
  TrackIndexedDBForOriginParams& operator=(const TrackIndexedDBForOriginParams&) = delete;
  ~TrackIndexedDBForOriginParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackIndexedDBForOriginParams> Clone() const;

  template<int STATE>
  class TrackIndexedDBForOriginParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    TrackIndexedDBForOriginParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    std::unique_ptr<TrackIndexedDBForOriginParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackIndexedDBForOriginParams;
    TrackIndexedDBForOriginParamsBuilder() : result_(new TrackIndexedDBForOriginParams()) { }

    template<int STEP> TrackIndexedDBForOriginParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackIndexedDBForOriginParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackIndexedDBForOriginParams> result_;
  };

  static TrackIndexedDBForOriginParamsBuilder<0> Builder() {
    return TrackIndexedDBForOriginParamsBuilder<0>();
  }

 private:
  TrackIndexedDBForOriginParams() { }

  std::string origin_;
};


// Result for the TrackIndexedDBForOrigin command.
class TrackIndexedDBForOriginResult {
 public:
  static std::unique_ptr<TrackIndexedDBForOriginResult> Parse(const base::Value& value, ErrorReporter* errors);
  TrackIndexedDBForOriginResult(const TrackIndexedDBForOriginResult&) = delete;
  TrackIndexedDBForOriginResult& operator=(const TrackIndexedDBForOriginResult&) = delete;
  ~TrackIndexedDBForOriginResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackIndexedDBForOriginResult> Clone() const;

  template<int STATE>
  class TrackIndexedDBForOriginResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TrackIndexedDBForOriginResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackIndexedDBForOriginResult;
    TrackIndexedDBForOriginResultBuilder() : result_(new TrackIndexedDBForOriginResult()) { }

    template<int STEP> TrackIndexedDBForOriginResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackIndexedDBForOriginResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackIndexedDBForOriginResult> result_;
  };

  static TrackIndexedDBForOriginResultBuilder<0> Builder() {
    return TrackIndexedDBForOriginResultBuilder<0>();
  }

 private:
  TrackIndexedDBForOriginResult() { }

};


// Parameters for the TrackIndexedDBForStorageKey command.
class TrackIndexedDBForStorageKeyParams {
 public:
  static std::unique_ptr<TrackIndexedDBForStorageKeyParams> Parse(const base::Value& value, ErrorReporter* errors);
  TrackIndexedDBForStorageKeyParams(const TrackIndexedDBForStorageKeyParams&) = delete;
  TrackIndexedDBForStorageKeyParams& operator=(const TrackIndexedDBForStorageKeyParams&) = delete;
  ~TrackIndexedDBForStorageKeyParams() { }

  // Storage key.
  std::string GetStorageKey() const { return storage_key_; }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackIndexedDBForStorageKeyParams> Clone() const;

  template<int STATE>
  class TrackIndexedDBForStorageKeyParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageKeySet = 1 << 1,
      kAllRequiredFieldsSet = (kStorageKeySet | 0)
    };

    TrackIndexedDBForStorageKeyParamsBuilder<STATE | kStorageKeySet>& SetStorageKey(const std::string& value) {
      static_assert(!(STATE & kStorageKeySet), "property storageKey should not have already been set");
      result_->SetStorageKey(value);
      return CastState<kStorageKeySet>();
    }

    std::unique_ptr<TrackIndexedDBForStorageKeyParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackIndexedDBForStorageKeyParams;
    TrackIndexedDBForStorageKeyParamsBuilder() : result_(new TrackIndexedDBForStorageKeyParams()) { }

    template<int STEP> TrackIndexedDBForStorageKeyParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackIndexedDBForStorageKeyParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackIndexedDBForStorageKeyParams> result_;
  };

  static TrackIndexedDBForStorageKeyParamsBuilder<0> Builder() {
    return TrackIndexedDBForStorageKeyParamsBuilder<0>();
  }

 private:
  TrackIndexedDBForStorageKeyParams() { }

  std::string storage_key_;
};


// Result for the TrackIndexedDBForStorageKey command.
class TrackIndexedDBForStorageKeyResult {
 public:
  static std::unique_ptr<TrackIndexedDBForStorageKeyResult> Parse(const base::Value& value, ErrorReporter* errors);
  TrackIndexedDBForStorageKeyResult(const TrackIndexedDBForStorageKeyResult&) = delete;
  TrackIndexedDBForStorageKeyResult& operator=(const TrackIndexedDBForStorageKeyResult&) = delete;
  ~TrackIndexedDBForStorageKeyResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackIndexedDBForStorageKeyResult> Clone() const;

  template<int STATE>
  class TrackIndexedDBForStorageKeyResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TrackIndexedDBForStorageKeyResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackIndexedDBForStorageKeyResult;
    TrackIndexedDBForStorageKeyResultBuilder() : result_(new TrackIndexedDBForStorageKeyResult()) { }

    template<int STEP> TrackIndexedDBForStorageKeyResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackIndexedDBForStorageKeyResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackIndexedDBForStorageKeyResult> result_;
  };

  static TrackIndexedDBForStorageKeyResultBuilder<0> Builder() {
    return TrackIndexedDBForStorageKeyResultBuilder<0>();
  }

 private:
  TrackIndexedDBForStorageKeyResult() { }

};


// Parameters for the UntrackCacheStorageForOrigin command.
class UntrackCacheStorageForOriginParams {
 public:
  static std::unique_ptr<UntrackCacheStorageForOriginParams> Parse(const base::Value& value, ErrorReporter* errors);
  UntrackCacheStorageForOriginParams(const UntrackCacheStorageForOriginParams&) = delete;
  UntrackCacheStorageForOriginParams& operator=(const UntrackCacheStorageForOriginParams&) = delete;
  ~UntrackCacheStorageForOriginParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UntrackCacheStorageForOriginParams> Clone() const;

  template<int STATE>
  class UntrackCacheStorageForOriginParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    UntrackCacheStorageForOriginParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    std::unique_ptr<UntrackCacheStorageForOriginParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UntrackCacheStorageForOriginParams;
    UntrackCacheStorageForOriginParamsBuilder() : result_(new UntrackCacheStorageForOriginParams()) { }

    template<int STEP> UntrackCacheStorageForOriginParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UntrackCacheStorageForOriginParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UntrackCacheStorageForOriginParams> result_;
  };

  static UntrackCacheStorageForOriginParamsBuilder<0> Builder() {
    return UntrackCacheStorageForOriginParamsBuilder<0>();
  }

 private:
  UntrackCacheStorageForOriginParams() { }

  std::string origin_;
};


// Result for the UntrackCacheStorageForOrigin command.
class UntrackCacheStorageForOriginResult {
 public:
  static std::unique_ptr<UntrackCacheStorageForOriginResult> Parse(const base::Value& value, ErrorReporter* errors);
  UntrackCacheStorageForOriginResult(const UntrackCacheStorageForOriginResult&) = delete;
  UntrackCacheStorageForOriginResult& operator=(const UntrackCacheStorageForOriginResult&) = delete;
  ~UntrackCacheStorageForOriginResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UntrackCacheStorageForOriginResult> Clone() const;

  template<int STATE>
  class UntrackCacheStorageForOriginResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<UntrackCacheStorageForOriginResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UntrackCacheStorageForOriginResult;
    UntrackCacheStorageForOriginResultBuilder() : result_(new UntrackCacheStorageForOriginResult()) { }

    template<int STEP> UntrackCacheStorageForOriginResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UntrackCacheStorageForOriginResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UntrackCacheStorageForOriginResult> result_;
  };

  static UntrackCacheStorageForOriginResultBuilder<0> Builder() {
    return UntrackCacheStorageForOriginResultBuilder<0>();
  }

 private:
  UntrackCacheStorageForOriginResult() { }

};


// Parameters for the UntrackIndexedDBForOrigin command.
class UntrackIndexedDBForOriginParams {
 public:
  static std::unique_ptr<UntrackIndexedDBForOriginParams> Parse(const base::Value& value, ErrorReporter* errors);
  UntrackIndexedDBForOriginParams(const UntrackIndexedDBForOriginParams&) = delete;
  UntrackIndexedDBForOriginParams& operator=(const UntrackIndexedDBForOriginParams&) = delete;
  ~UntrackIndexedDBForOriginParams() { }

  // Security origin.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UntrackIndexedDBForOriginParams> Clone() const;

  template<int STATE>
  class UntrackIndexedDBForOriginParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    UntrackIndexedDBForOriginParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    std::unique_ptr<UntrackIndexedDBForOriginParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UntrackIndexedDBForOriginParams;
    UntrackIndexedDBForOriginParamsBuilder() : result_(new UntrackIndexedDBForOriginParams()) { }

    template<int STEP> UntrackIndexedDBForOriginParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UntrackIndexedDBForOriginParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UntrackIndexedDBForOriginParams> result_;
  };

  static UntrackIndexedDBForOriginParamsBuilder<0> Builder() {
    return UntrackIndexedDBForOriginParamsBuilder<0>();
  }

 private:
  UntrackIndexedDBForOriginParams() { }

  std::string origin_;
};


// Result for the UntrackIndexedDBForOrigin command.
class UntrackIndexedDBForOriginResult {
 public:
  static std::unique_ptr<UntrackIndexedDBForOriginResult> Parse(const base::Value& value, ErrorReporter* errors);
  UntrackIndexedDBForOriginResult(const UntrackIndexedDBForOriginResult&) = delete;
  UntrackIndexedDBForOriginResult& operator=(const UntrackIndexedDBForOriginResult&) = delete;
  ~UntrackIndexedDBForOriginResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UntrackIndexedDBForOriginResult> Clone() const;

  template<int STATE>
  class UntrackIndexedDBForOriginResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<UntrackIndexedDBForOriginResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UntrackIndexedDBForOriginResult;
    UntrackIndexedDBForOriginResultBuilder() : result_(new UntrackIndexedDBForOriginResult()) { }

    template<int STEP> UntrackIndexedDBForOriginResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UntrackIndexedDBForOriginResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UntrackIndexedDBForOriginResult> result_;
  };

  static UntrackIndexedDBForOriginResultBuilder<0> Builder() {
    return UntrackIndexedDBForOriginResultBuilder<0>();
  }

 private:
  UntrackIndexedDBForOriginResult() { }

};


// Parameters for the UntrackIndexedDBForStorageKey command.
class UntrackIndexedDBForStorageKeyParams {
 public:
  static std::unique_ptr<UntrackIndexedDBForStorageKeyParams> Parse(const base::Value& value, ErrorReporter* errors);
  UntrackIndexedDBForStorageKeyParams(const UntrackIndexedDBForStorageKeyParams&) = delete;
  UntrackIndexedDBForStorageKeyParams& operator=(const UntrackIndexedDBForStorageKeyParams&) = delete;
  ~UntrackIndexedDBForStorageKeyParams() { }

  // Storage key.
  std::string GetStorageKey() const { return storage_key_; }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UntrackIndexedDBForStorageKeyParams> Clone() const;

  template<int STATE>
  class UntrackIndexedDBForStorageKeyParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageKeySet = 1 << 1,
      kAllRequiredFieldsSet = (kStorageKeySet | 0)
    };

    UntrackIndexedDBForStorageKeyParamsBuilder<STATE | kStorageKeySet>& SetStorageKey(const std::string& value) {
      static_assert(!(STATE & kStorageKeySet), "property storageKey should not have already been set");
      result_->SetStorageKey(value);
      return CastState<kStorageKeySet>();
    }

    std::unique_ptr<UntrackIndexedDBForStorageKeyParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UntrackIndexedDBForStorageKeyParams;
    UntrackIndexedDBForStorageKeyParamsBuilder() : result_(new UntrackIndexedDBForStorageKeyParams()) { }

    template<int STEP> UntrackIndexedDBForStorageKeyParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UntrackIndexedDBForStorageKeyParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UntrackIndexedDBForStorageKeyParams> result_;
  };

  static UntrackIndexedDBForStorageKeyParamsBuilder<0> Builder() {
    return UntrackIndexedDBForStorageKeyParamsBuilder<0>();
  }

 private:
  UntrackIndexedDBForStorageKeyParams() { }

  std::string storage_key_;
};


// Result for the UntrackIndexedDBForStorageKey command.
class UntrackIndexedDBForStorageKeyResult {
 public:
  static std::unique_ptr<UntrackIndexedDBForStorageKeyResult> Parse(const base::Value& value, ErrorReporter* errors);
  UntrackIndexedDBForStorageKeyResult(const UntrackIndexedDBForStorageKeyResult&) = delete;
  UntrackIndexedDBForStorageKeyResult& operator=(const UntrackIndexedDBForStorageKeyResult&) = delete;
  ~UntrackIndexedDBForStorageKeyResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UntrackIndexedDBForStorageKeyResult> Clone() const;

  template<int STATE>
  class UntrackIndexedDBForStorageKeyResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<UntrackIndexedDBForStorageKeyResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UntrackIndexedDBForStorageKeyResult;
    UntrackIndexedDBForStorageKeyResultBuilder() : result_(new UntrackIndexedDBForStorageKeyResult()) { }

    template<int STEP> UntrackIndexedDBForStorageKeyResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UntrackIndexedDBForStorageKeyResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UntrackIndexedDBForStorageKeyResult> result_;
  };

  static UntrackIndexedDBForStorageKeyResultBuilder<0> Builder() {
    return UntrackIndexedDBForStorageKeyResultBuilder<0>();
  }

 private:
  UntrackIndexedDBForStorageKeyResult() { }

};


// Parameters for the GetTrustTokens command.
class GetTrustTokensParams {
 public:
  static std::unique_ptr<GetTrustTokensParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetTrustTokensParams(const GetTrustTokensParams&) = delete;
  GetTrustTokensParams& operator=(const GetTrustTokensParams&) = delete;
  ~GetTrustTokensParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetTrustTokensParams> Clone() const;

  template<int STATE>
  class GetTrustTokensParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<GetTrustTokensParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetTrustTokensParams;
    GetTrustTokensParamsBuilder() : result_(new GetTrustTokensParams()) { }

    template<int STEP> GetTrustTokensParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetTrustTokensParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetTrustTokensParams> result_;
  };

  static GetTrustTokensParamsBuilder<0> Builder() {
    return GetTrustTokensParamsBuilder<0>();
  }

 private:
  GetTrustTokensParams() { }

};


// Result for the GetTrustTokens command.
class GetTrustTokensResult {
 public:
  static std::unique_ptr<GetTrustTokensResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetTrustTokensResult(const GetTrustTokensResult&) = delete;
  GetTrustTokensResult& operator=(const GetTrustTokensResult&) = delete;
  ~GetTrustTokensResult() { }

  const std::vector<std::unique_ptr<::autofill_assistant::storage::TrustTokens>>* GetTokens() const { return &tokens_; }
  void SetTokens(std::vector<std::unique_ptr<::autofill_assistant::storage::TrustTokens>> value) { tokens_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetTrustTokensResult> Clone() const;

  template<int STATE>
  class GetTrustTokensResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTokensSet = 1 << 1,
      kAllRequiredFieldsSet = (kTokensSet | 0)
    };

    GetTrustTokensResultBuilder<STATE | kTokensSet>& SetTokens(std::vector<std::unique_ptr<::autofill_assistant::storage::TrustTokens>> value) {
      static_assert(!(STATE & kTokensSet), "property tokens should not have already been set");
      result_->SetTokens(std::move(value));
      return CastState<kTokensSet>();
    }

    std::unique_ptr<GetTrustTokensResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetTrustTokensResult;
    GetTrustTokensResultBuilder() : result_(new GetTrustTokensResult()) { }

    template<int STEP> GetTrustTokensResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetTrustTokensResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetTrustTokensResult> result_;
  };

  static GetTrustTokensResultBuilder<0> Builder() {
    return GetTrustTokensResultBuilder<0>();
  }

 private:
  GetTrustTokensResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::storage::TrustTokens>> tokens_;
};


// Parameters for the ClearTrustTokens command.
class ClearTrustTokensParams {
 public:
  static std::unique_ptr<ClearTrustTokensParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearTrustTokensParams(const ClearTrustTokensParams&) = delete;
  ClearTrustTokensParams& operator=(const ClearTrustTokensParams&) = delete;
  ~ClearTrustTokensParams() { }

  std::string GetIssuerOrigin() const { return issuer_origin_; }
  void SetIssuerOrigin(const std::string& value) { issuer_origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearTrustTokensParams> Clone() const;

  template<int STATE>
  class ClearTrustTokensParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIssuerOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kIssuerOriginSet | 0)
    };

    ClearTrustTokensParamsBuilder<STATE | kIssuerOriginSet>& SetIssuerOrigin(const std::string& value) {
      static_assert(!(STATE & kIssuerOriginSet), "property issuerOrigin should not have already been set");
      result_->SetIssuerOrigin(value);
      return CastState<kIssuerOriginSet>();
    }

    std::unique_ptr<ClearTrustTokensParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearTrustTokensParams;
    ClearTrustTokensParamsBuilder() : result_(new ClearTrustTokensParams()) { }

    template<int STEP> ClearTrustTokensParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearTrustTokensParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearTrustTokensParams> result_;
  };

  static ClearTrustTokensParamsBuilder<0> Builder() {
    return ClearTrustTokensParamsBuilder<0>();
  }

 private:
  ClearTrustTokensParams() { }

  std::string issuer_origin_;
};


// Result for the ClearTrustTokens command.
class ClearTrustTokensResult {
 public:
  static std::unique_ptr<ClearTrustTokensResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearTrustTokensResult(const ClearTrustTokensResult&) = delete;
  ClearTrustTokensResult& operator=(const ClearTrustTokensResult&) = delete;
  ~ClearTrustTokensResult() { }

  // True if any tokens were deleted, false otherwise.
  bool GetDidDeleteTokens() const { return did_delete_tokens_; }
  void SetDidDeleteTokens(bool value) { did_delete_tokens_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearTrustTokensResult> Clone() const;

  template<int STATE>
  class ClearTrustTokensResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDidDeleteTokensSet = 1 << 1,
      kAllRequiredFieldsSet = (kDidDeleteTokensSet | 0)
    };

    ClearTrustTokensResultBuilder<STATE | kDidDeleteTokensSet>& SetDidDeleteTokens(bool value) {
      static_assert(!(STATE & kDidDeleteTokensSet), "property didDeleteTokens should not have already been set");
      result_->SetDidDeleteTokens(value);
      return CastState<kDidDeleteTokensSet>();
    }

    std::unique_ptr<ClearTrustTokensResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearTrustTokensResult;
    ClearTrustTokensResultBuilder() : result_(new ClearTrustTokensResult()) { }

    template<int STEP> ClearTrustTokensResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearTrustTokensResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearTrustTokensResult> result_;
  };

  static ClearTrustTokensResultBuilder<0> Builder() {
    return ClearTrustTokensResultBuilder<0>();
  }

 private:
  ClearTrustTokensResult() { }

  bool did_delete_tokens_;
};


// Parameters for the GetInterestGroupDetails command.
class GetInterestGroupDetailsParams {
 public:
  static std::unique_ptr<GetInterestGroupDetailsParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetInterestGroupDetailsParams(const GetInterestGroupDetailsParams&) = delete;
  GetInterestGroupDetailsParams& operator=(const GetInterestGroupDetailsParams&) = delete;
  ~GetInterestGroupDetailsParams() { }

  std::string GetOwnerOrigin() const { return owner_origin_; }
  void SetOwnerOrigin(const std::string& value) { owner_origin_ = value; }

  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetInterestGroupDetailsParams> Clone() const;

  template<int STATE>
  class GetInterestGroupDetailsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOwnerOriginSet = 1 << 1,
    kNameSet = 1 << 2,
      kAllRequiredFieldsSet = (kOwnerOriginSet | kNameSet | 0)
    };

    GetInterestGroupDetailsParamsBuilder<STATE | kOwnerOriginSet>& SetOwnerOrigin(const std::string& value) {
      static_assert(!(STATE & kOwnerOriginSet), "property ownerOrigin should not have already been set");
      result_->SetOwnerOrigin(value);
      return CastState<kOwnerOriginSet>();
    }

    GetInterestGroupDetailsParamsBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    std::unique_ptr<GetInterestGroupDetailsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetInterestGroupDetailsParams;
    GetInterestGroupDetailsParamsBuilder() : result_(new GetInterestGroupDetailsParams()) { }

    template<int STEP> GetInterestGroupDetailsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetInterestGroupDetailsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetInterestGroupDetailsParams> result_;
  };

  static GetInterestGroupDetailsParamsBuilder<0> Builder() {
    return GetInterestGroupDetailsParamsBuilder<0>();
  }

 private:
  GetInterestGroupDetailsParams() { }

  std::string owner_origin_;
  std::string name_;
};


// Result for the GetInterestGroupDetails command.
class GetInterestGroupDetailsResult {
 public:
  static std::unique_ptr<GetInterestGroupDetailsResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetInterestGroupDetailsResult(const GetInterestGroupDetailsResult&) = delete;
  GetInterestGroupDetailsResult& operator=(const GetInterestGroupDetailsResult&) = delete;
  ~GetInterestGroupDetailsResult() { }

  const ::autofill_assistant::storage::InterestGroupDetails* GetDetails() const { return details_.get(); }
  void SetDetails(std::unique_ptr<::autofill_assistant::storage::InterestGroupDetails> value) { details_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetInterestGroupDetailsResult> Clone() const;

  template<int STATE>
  class GetInterestGroupDetailsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDetailsSet = 1 << 1,
      kAllRequiredFieldsSet = (kDetailsSet | 0)
    };

    GetInterestGroupDetailsResultBuilder<STATE | kDetailsSet>& SetDetails(std::unique_ptr<::autofill_assistant::storage::InterestGroupDetails> value) {
      static_assert(!(STATE & kDetailsSet), "property details should not have already been set");
      result_->SetDetails(std::move(value));
      return CastState<kDetailsSet>();
    }

    std::unique_ptr<GetInterestGroupDetailsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetInterestGroupDetailsResult;
    GetInterestGroupDetailsResultBuilder() : result_(new GetInterestGroupDetailsResult()) { }

    template<int STEP> GetInterestGroupDetailsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetInterestGroupDetailsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetInterestGroupDetailsResult> result_;
  };

  static GetInterestGroupDetailsResultBuilder<0> Builder() {
    return GetInterestGroupDetailsResultBuilder<0>();
  }

 private:
  GetInterestGroupDetailsResult() { }

  std::unique_ptr<::autofill_assistant::storage::InterestGroupDetails> details_;
};


// Parameters for the SetInterestGroupTracking command.
class SetInterestGroupTrackingParams {
 public:
  static std::unique_ptr<SetInterestGroupTrackingParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetInterestGroupTrackingParams(const SetInterestGroupTrackingParams&) = delete;
  SetInterestGroupTrackingParams& operator=(const SetInterestGroupTrackingParams&) = delete;
  ~SetInterestGroupTrackingParams() { }

  bool GetEnable() const { return enable_; }
  void SetEnable(bool value) { enable_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInterestGroupTrackingParams> Clone() const;

  template<int STATE>
  class SetInterestGroupTrackingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEnableSet = 1 << 1,
      kAllRequiredFieldsSet = (kEnableSet | 0)
    };

    SetInterestGroupTrackingParamsBuilder<STATE | kEnableSet>& SetEnable(bool value) {
      static_assert(!(STATE & kEnableSet), "property enable should not have already been set");
      result_->SetEnable(value);
      return CastState<kEnableSet>();
    }

    std::unique_ptr<SetInterestGroupTrackingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetInterestGroupTrackingParams;
    SetInterestGroupTrackingParamsBuilder() : result_(new SetInterestGroupTrackingParams()) { }

    template<int STEP> SetInterestGroupTrackingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetInterestGroupTrackingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetInterestGroupTrackingParams> result_;
  };

  static SetInterestGroupTrackingParamsBuilder<0> Builder() {
    return SetInterestGroupTrackingParamsBuilder<0>();
  }

 private:
  SetInterestGroupTrackingParams() { }

  bool enable_;
};


// Result for the SetInterestGroupTracking command.
class SetInterestGroupTrackingResult {
 public:
  static std::unique_ptr<SetInterestGroupTrackingResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetInterestGroupTrackingResult(const SetInterestGroupTrackingResult&) = delete;
  SetInterestGroupTrackingResult& operator=(const SetInterestGroupTrackingResult&) = delete;
  ~SetInterestGroupTrackingResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInterestGroupTrackingResult> Clone() const;

  template<int STATE>
  class SetInterestGroupTrackingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetInterestGroupTrackingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetInterestGroupTrackingResult;
    SetInterestGroupTrackingResultBuilder() : result_(new SetInterestGroupTrackingResult()) { }

    template<int STEP> SetInterestGroupTrackingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetInterestGroupTrackingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetInterestGroupTrackingResult> result_;
  };

  static SetInterestGroupTrackingResultBuilder<0> Builder() {
    return SetInterestGroupTrackingResultBuilder<0>();
  }

 private:
  SetInterestGroupTrackingResult() { }

};


// Parameters for the CacheStorageContentUpdated event.
class CacheStorageContentUpdatedParams {
 public:
  static std::unique_ptr<CacheStorageContentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  CacheStorageContentUpdatedParams(const CacheStorageContentUpdatedParams&) = delete;
  CacheStorageContentUpdatedParams& operator=(const CacheStorageContentUpdatedParams&) = delete;
  ~CacheStorageContentUpdatedParams() { }

  // Origin to update.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  // Name of cache in origin.
  std::string GetCacheName() const { return cache_name_; }
  void SetCacheName(const std::string& value) { cache_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CacheStorageContentUpdatedParams> Clone() const;

  template<int STATE>
  class CacheStorageContentUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kCacheNameSet = 1 << 2,
      kAllRequiredFieldsSet = (kOriginSet | kCacheNameSet | 0)
    };

    CacheStorageContentUpdatedParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    CacheStorageContentUpdatedParamsBuilder<STATE | kCacheNameSet>& SetCacheName(const std::string& value) {
      static_assert(!(STATE & kCacheNameSet), "property cacheName should not have already been set");
      result_->SetCacheName(value);
      return CastState<kCacheNameSet>();
    }

    std::unique_ptr<CacheStorageContentUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CacheStorageContentUpdatedParams;
    CacheStorageContentUpdatedParamsBuilder() : result_(new CacheStorageContentUpdatedParams()) { }

    template<int STEP> CacheStorageContentUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CacheStorageContentUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CacheStorageContentUpdatedParams> result_;
  };

  static CacheStorageContentUpdatedParamsBuilder<0> Builder() {
    return CacheStorageContentUpdatedParamsBuilder<0>();
  }

 private:
  CacheStorageContentUpdatedParams() { }

  std::string origin_;
  std::string cache_name_;
};


// Parameters for the CacheStorageListUpdated event.
class CacheStorageListUpdatedParams {
 public:
  static std::unique_ptr<CacheStorageListUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  CacheStorageListUpdatedParams(const CacheStorageListUpdatedParams&) = delete;
  CacheStorageListUpdatedParams& operator=(const CacheStorageListUpdatedParams&) = delete;
  ~CacheStorageListUpdatedParams() { }

  // Origin to update.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CacheStorageListUpdatedParams> Clone() const;

  template<int STATE>
  class CacheStorageListUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
      kAllRequiredFieldsSet = (kOriginSet | 0)
    };

    CacheStorageListUpdatedParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    std::unique_ptr<CacheStorageListUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CacheStorageListUpdatedParams;
    CacheStorageListUpdatedParamsBuilder() : result_(new CacheStorageListUpdatedParams()) { }

    template<int STEP> CacheStorageListUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CacheStorageListUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CacheStorageListUpdatedParams> result_;
  };

  static CacheStorageListUpdatedParamsBuilder<0> Builder() {
    return CacheStorageListUpdatedParamsBuilder<0>();
  }

 private:
  CacheStorageListUpdatedParams() { }

  std::string origin_;
};


// Parameters for the IndexedDBContentUpdated event.
class IndexedDBContentUpdatedParams {
 public:
  static std::unique_ptr<IndexedDBContentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  IndexedDBContentUpdatedParams(const IndexedDBContentUpdatedParams&) = delete;
  IndexedDBContentUpdatedParams& operator=(const IndexedDBContentUpdatedParams&) = delete;
  ~IndexedDBContentUpdatedParams() { }

  // Origin to update.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  // Storage key to update.
  std::string GetStorageKey() const { return storage_key_; }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Database to update.
  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  // ObjectStore to update.
  std::string GetObjectStoreName() const { return object_store_name_; }
  void SetObjectStoreName(const std::string& value) { object_store_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<IndexedDBContentUpdatedParams> Clone() const;

  template<int STATE>
  class IndexedDBContentUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kStorageKeySet = 1 << 2,
    kDatabaseNameSet = 1 << 3,
    kObjectStoreNameSet = 1 << 4,
      kAllRequiredFieldsSet = (kOriginSet | kStorageKeySet | kDatabaseNameSet | kObjectStoreNameSet | 0)
    };

    IndexedDBContentUpdatedParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    IndexedDBContentUpdatedParamsBuilder<STATE | kStorageKeySet>& SetStorageKey(const std::string& value) {
      static_assert(!(STATE & kStorageKeySet), "property storageKey should not have already been set");
      result_->SetStorageKey(value);
      return CastState<kStorageKeySet>();
    }

    IndexedDBContentUpdatedParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    IndexedDBContentUpdatedParamsBuilder<STATE | kObjectStoreNameSet>& SetObjectStoreName(const std::string& value) {
      static_assert(!(STATE & kObjectStoreNameSet), "property objectStoreName should not have already been set");
      result_->SetObjectStoreName(value);
      return CastState<kObjectStoreNameSet>();
    }

    std::unique_ptr<IndexedDBContentUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class IndexedDBContentUpdatedParams;
    IndexedDBContentUpdatedParamsBuilder() : result_(new IndexedDBContentUpdatedParams()) { }

    template<int STEP> IndexedDBContentUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<IndexedDBContentUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<IndexedDBContentUpdatedParams> result_;
  };

  static IndexedDBContentUpdatedParamsBuilder<0> Builder() {
    return IndexedDBContentUpdatedParamsBuilder<0>();
  }

 private:
  IndexedDBContentUpdatedParams() { }

  std::string origin_;
  std::string storage_key_;
  std::string database_name_;
  std::string object_store_name_;
};


// Parameters for the IndexedDBListUpdated event.
class IndexedDBListUpdatedParams {
 public:
  static std::unique_ptr<IndexedDBListUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  IndexedDBListUpdatedParams(const IndexedDBListUpdatedParams&) = delete;
  IndexedDBListUpdatedParams& operator=(const IndexedDBListUpdatedParams&) = delete;
  ~IndexedDBListUpdatedParams() { }

  // Origin to update.
  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  // Storage key to update.
  std::string GetStorageKey() const { return storage_key_; }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<IndexedDBListUpdatedParams> Clone() const;

  template<int STATE>
  class IndexedDBListUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kStorageKeySet = 1 << 2,
      kAllRequiredFieldsSet = (kOriginSet | kStorageKeySet | 0)
    };

    IndexedDBListUpdatedParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    IndexedDBListUpdatedParamsBuilder<STATE | kStorageKeySet>& SetStorageKey(const std::string& value) {
      static_assert(!(STATE & kStorageKeySet), "property storageKey should not have already been set");
      result_->SetStorageKey(value);
      return CastState<kStorageKeySet>();
    }

    std::unique_ptr<IndexedDBListUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class IndexedDBListUpdatedParams;
    IndexedDBListUpdatedParamsBuilder() : result_(new IndexedDBListUpdatedParams()) { }

    template<int STEP> IndexedDBListUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<IndexedDBListUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<IndexedDBListUpdatedParams> result_;
  };

  static IndexedDBListUpdatedParamsBuilder<0> Builder() {
    return IndexedDBListUpdatedParamsBuilder<0>();
  }

 private:
  IndexedDBListUpdatedParams() { }

  std::string origin_;
  std::string storage_key_;
};


// Parameters for the InterestGroupAccessed event.
class InterestGroupAccessedParams {
 public:
  static std::unique_ptr<InterestGroupAccessedParams> Parse(const base::Value& value, ErrorReporter* errors);
  InterestGroupAccessedParams(const InterestGroupAccessedParams&) = delete;
  InterestGroupAccessedParams& operator=(const InterestGroupAccessedParams&) = delete;
  ~InterestGroupAccessedParams() { }

  double GetAccessTime() const { return access_time_; }
  void SetAccessTime(double value) { access_time_ = value; }

  ::autofill_assistant::storage::InterestGroupAccessType GetType() const { return type_; }
  void SetType(::autofill_assistant::storage::InterestGroupAccessType value) { type_ = value; }

  std::string GetOwnerOrigin() const { return owner_origin_; }
  void SetOwnerOrigin(const std::string& value) { owner_origin_ = value; }

  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InterestGroupAccessedParams> Clone() const;

  template<int STATE>
  class InterestGroupAccessedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAccessTimeSet = 1 << 1,
    kTypeSet = 1 << 2,
    kOwnerOriginSet = 1 << 3,
    kNameSet = 1 << 4,
      kAllRequiredFieldsSet = (kAccessTimeSet | kTypeSet | kOwnerOriginSet | kNameSet | 0)
    };

    InterestGroupAccessedParamsBuilder<STATE | kAccessTimeSet>& SetAccessTime(double value) {
      static_assert(!(STATE & kAccessTimeSet), "property accessTime should not have already been set");
      result_->SetAccessTime(value);
      return CastState<kAccessTimeSet>();
    }

    InterestGroupAccessedParamsBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::storage::InterestGroupAccessType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    InterestGroupAccessedParamsBuilder<STATE | kOwnerOriginSet>& SetOwnerOrigin(const std::string& value) {
      static_assert(!(STATE & kOwnerOriginSet), "property ownerOrigin should not have already been set");
      result_->SetOwnerOrigin(value);
      return CastState<kOwnerOriginSet>();
    }

    InterestGroupAccessedParamsBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    std::unique_ptr<InterestGroupAccessedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InterestGroupAccessedParams;
    InterestGroupAccessedParamsBuilder() : result_(new InterestGroupAccessedParams()) { }

    template<int STEP> InterestGroupAccessedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InterestGroupAccessedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InterestGroupAccessedParams> result_;
  };

  static InterestGroupAccessedParamsBuilder<0> Builder() {
    return InterestGroupAccessedParamsBuilder<0>();
  }

 private:
  InterestGroupAccessedParams() { }

  double access_time_;
  ::autofill_assistant::storage::InterestGroupAccessType type_;
  std::string owner_origin_;
  std::string name_;
};


}  // namespace storage

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_STORAGE_H_
