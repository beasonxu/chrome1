// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/types_browser.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_storage.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_target.h"

#include "base/memory/ptr_util.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_browser.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_security.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_storage.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_target.h"

namespace autofill_assistant {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace storage {

std::unique_ptr<UsageForType> UsageForType::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UsageForType");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UsageForType> result(new UsageForType());
  errors->Push();
  errors->SetName("UsageForType");
  const base::Value* storage_type_value = value.FindKey("storageType");
  if (storage_type_value) {
    errors->SetName("storageType");
    result->storage_type_ = internal::FromValue<::autofill_assistant::storage::StorageType>::Parse(*storage_type_value, errors);
  } else {
    errors->AddError("required property missing: storageType");
  }
  const base::Value* usage_value = value.FindKey("usage");
  if (usage_value) {
    errors->SetName("usage");
    result->usage_ = internal::FromValue<double>::Parse(*usage_value, errors);
  } else {
    errors->AddError("required property missing: usage");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UsageForType::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("storageType", internal::ToValue(storage_type_));
  result->Set("usage", internal::ToValue(usage_));
  return std::move(result);
}

std::unique_ptr<UsageForType> UsageForType::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UsageForType> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrustTokens> TrustTokens::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrustTokens");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrustTokens> result(new TrustTokens());
  errors->Push();
  errors->SetName("TrustTokens");
  const base::Value* issuer_origin_value = value.FindKey("issuerOrigin");
  if (issuer_origin_value) {
    errors->SetName("issuerOrigin");
    result->issuer_origin_ = internal::FromValue<std::string>::Parse(*issuer_origin_value, errors);
  } else {
    errors->AddError("required property missing: issuerOrigin");
  }
  const base::Value* count_value = value.FindKey("count");
  if (count_value) {
    errors->SetName("count");
    result->count_ = internal::FromValue<double>::Parse(*count_value, errors);
  } else {
    errors->AddError("required property missing: count");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrustTokens::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("issuerOrigin", internal::ToValue(issuer_origin_));
  result->Set("count", internal::ToValue(count_));
  return std::move(result);
}

std::unique_ptr<TrustTokens> TrustTokens::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrustTokens> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InterestGroupAd> InterestGroupAd::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InterestGroupAd");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InterestGroupAd> result(new InterestGroupAd());
  errors->Push();
  errors->SetName("InterestGroupAd");
  const base::Value* render_url_value = value.FindKey("renderUrl");
  if (render_url_value) {
    errors->SetName("renderUrl");
    result->render_url_ = internal::FromValue<std::string>::Parse(*render_url_value, errors);
  } else {
    errors->AddError("required property missing: renderUrl");
  }
  const base::Value* metadata_value = value.FindKey("metadata");
  if (metadata_value) {
    errors->SetName("metadata");
    result->metadata_ = internal::FromValue<std::string>::Parse(*metadata_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InterestGroupAd::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("renderUrl", internal::ToValue(render_url_));
  if (metadata_)
    result->Set("metadata", internal::ToValue(metadata_.value()));
  return std::move(result);
}

std::unique_ptr<InterestGroupAd> InterestGroupAd::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InterestGroupAd> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InterestGroupDetails> InterestGroupDetails::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InterestGroupDetails");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InterestGroupDetails> result(new InterestGroupDetails());
  errors->Push();
  errors->SetName("InterestGroupDetails");
  const base::Value* owner_origin_value = value.FindKey("ownerOrigin");
  if (owner_origin_value) {
    errors->SetName("ownerOrigin");
    result->owner_origin_ = internal::FromValue<std::string>::Parse(*owner_origin_value, errors);
  } else {
    errors->AddError("required property missing: ownerOrigin");
  }
  const base::Value* name_value = value.FindKey("name");
  if (name_value) {
    errors->SetName("name");
    result->name_ = internal::FromValue<std::string>::Parse(*name_value, errors);
  } else {
    errors->AddError("required property missing: name");
  }
  const base::Value* expiration_time_value = value.FindKey("expirationTime");
  if (expiration_time_value) {
    errors->SetName("expirationTime");
    result->expiration_time_ = internal::FromValue<double>::Parse(*expiration_time_value, errors);
  } else {
    errors->AddError("required property missing: expirationTime");
  }
  const base::Value* joining_origin_value = value.FindKey("joiningOrigin");
  if (joining_origin_value) {
    errors->SetName("joiningOrigin");
    result->joining_origin_ = internal::FromValue<std::string>::Parse(*joining_origin_value, errors);
  } else {
    errors->AddError("required property missing: joiningOrigin");
  }
  const base::Value* bidding_url_value = value.FindKey("biddingUrl");
  if (bidding_url_value) {
    errors->SetName("biddingUrl");
    result->bidding_url_ = internal::FromValue<std::string>::Parse(*bidding_url_value, errors);
  }
  const base::Value* bidding_wasm_helper_url_value = value.FindKey("biddingWasmHelperUrl");
  if (bidding_wasm_helper_url_value) {
    errors->SetName("biddingWasmHelperUrl");
    result->bidding_wasm_helper_url_ = internal::FromValue<std::string>::Parse(*bidding_wasm_helper_url_value, errors);
  }
  const base::Value* update_url_value = value.FindKey("updateUrl");
  if (update_url_value) {
    errors->SetName("updateUrl");
    result->update_url_ = internal::FromValue<std::string>::Parse(*update_url_value, errors);
  }
  const base::Value* trusted_bidding_signals_url_value = value.FindKey("trustedBiddingSignalsUrl");
  if (trusted_bidding_signals_url_value) {
    errors->SetName("trustedBiddingSignalsUrl");
    result->trusted_bidding_signals_url_ = internal::FromValue<std::string>::Parse(*trusted_bidding_signals_url_value, errors);
  }
  const base::Value* trusted_bidding_signals_keys_value = value.FindKey("trustedBiddingSignalsKeys");
  if (trusted_bidding_signals_keys_value) {
    errors->SetName("trustedBiddingSignalsKeys");
    result->trusted_bidding_signals_keys_ = internal::FromValue<std::vector<std::string>>::Parse(*trusted_bidding_signals_keys_value, errors);
  } else {
    errors->AddError("required property missing: trustedBiddingSignalsKeys");
  }
  const base::Value* user_bidding_signals_value = value.FindKey("userBiddingSignals");
  if (user_bidding_signals_value) {
    errors->SetName("userBiddingSignals");
    result->user_bidding_signals_ = internal::FromValue<std::string>::Parse(*user_bidding_signals_value, errors);
  }
  const base::Value* ads_value = value.FindKey("ads");
  if (ads_value) {
    errors->SetName("ads");
    result->ads_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>>>::Parse(*ads_value, errors);
  } else {
    errors->AddError("required property missing: ads");
  }
  const base::Value* ad_components_value = value.FindKey("adComponents");
  if (ad_components_value) {
    errors->SetName("adComponents");
    result->ad_components_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::storage::InterestGroupAd>>>::Parse(*ad_components_value, errors);
  } else {
    errors->AddError("required property missing: adComponents");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InterestGroupDetails::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("ownerOrigin", internal::ToValue(owner_origin_));
  result->Set("name", internal::ToValue(name_));
  result->Set("expirationTime", internal::ToValue(expiration_time_));
  result->Set("joiningOrigin", internal::ToValue(joining_origin_));
  if (bidding_url_)
    result->Set("biddingUrl", internal::ToValue(bidding_url_.value()));
  if (bidding_wasm_helper_url_)
    result->Set("biddingWasmHelperUrl", internal::ToValue(bidding_wasm_helper_url_.value()));
  if (update_url_)
    result->Set("updateUrl", internal::ToValue(update_url_.value()));
  if (trusted_bidding_signals_url_)
    result->Set("trustedBiddingSignalsUrl", internal::ToValue(trusted_bidding_signals_url_.value()));
  result->Set("trustedBiddingSignalsKeys", internal::ToValue(trusted_bidding_signals_keys_));
  if (user_bidding_signals_)
    result->Set("userBiddingSignals", internal::ToValue(user_bidding_signals_.value()));
  result->Set("ads", internal::ToValue(ads_));
  result->Set("adComponents", internal::ToValue(ad_components_));
  return std::move(result);
}

std::unique_ptr<InterestGroupDetails> InterestGroupDetails::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InterestGroupDetails> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetStorageKeyForFrameParams> GetStorageKeyForFrameParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetStorageKeyForFrameParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetStorageKeyForFrameParams> result(new GetStorageKeyForFrameParams());
  errors->Push();
  errors->SetName("GetStorageKeyForFrameParams");
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  } else {
    errors->AddError("required property missing: frameId");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetStorageKeyForFrameParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("frameId", internal::ToValue(frame_id_));
  return std::move(result);
}

std::unique_ptr<GetStorageKeyForFrameParams> GetStorageKeyForFrameParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetStorageKeyForFrameParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetStorageKeyForFrameResult> GetStorageKeyForFrameResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetStorageKeyForFrameResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetStorageKeyForFrameResult> result(new GetStorageKeyForFrameResult());
  errors->Push();
  errors->SetName("GetStorageKeyForFrameResult");
  const base::Value* storage_key_value = value.FindKey("storageKey");
  if (storage_key_value) {
    errors->SetName("storageKey");
    result->storage_key_ = internal::FromValue<std::string>::Parse(*storage_key_value, errors);
  } else {
    errors->AddError("required property missing: storageKey");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetStorageKeyForFrameResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("storageKey", internal::ToValue(storage_key_));
  return std::move(result);
}

std::unique_ptr<GetStorageKeyForFrameResult> GetStorageKeyForFrameResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetStorageKeyForFrameResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearDataForOriginParams> ClearDataForOriginParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearDataForOriginParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearDataForOriginParams> result(new ClearDataForOriginParams());
  errors->Push();
  errors->SetName("ClearDataForOriginParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  const base::Value* storage_types_value = value.FindKey("storageTypes");
  if (storage_types_value) {
    errors->SetName("storageTypes");
    result->storage_types_ = internal::FromValue<std::string>::Parse(*storage_types_value, errors);
  } else {
    errors->AddError("required property missing: storageTypes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearDataForOriginParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  result->Set("storageTypes", internal::ToValue(storage_types_));
  return std::move(result);
}

std::unique_ptr<ClearDataForOriginParams> ClearDataForOriginParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearDataForOriginParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearDataForOriginResult> ClearDataForOriginResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearDataForOriginResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearDataForOriginResult> result(new ClearDataForOriginResult());
  errors->Push();
  errors->SetName("ClearDataForOriginResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearDataForOriginResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearDataForOriginResult> ClearDataForOriginResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearDataForOriginResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearDataForStorageKeyParams> ClearDataForStorageKeyParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearDataForStorageKeyParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearDataForStorageKeyParams> result(new ClearDataForStorageKeyParams());
  errors->Push();
  errors->SetName("ClearDataForStorageKeyParams");
  const base::Value* storage_key_value = value.FindKey("storageKey");
  if (storage_key_value) {
    errors->SetName("storageKey");
    result->storage_key_ = internal::FromValue<std::string>::Parse(*storage_key_value, errors);
  } else {
    errors->AddError("required property missing: storageKey");
  }
  const base::Value* storage_types_value = value.FindKey("storageTypes");
  if (storage_types_value) {
    errors->SetName("storageTypes");
    result->storage_types_ = internal::FromValue<std::string>::Parse(*storage_types_value, errors);
  } else {
    errors->AddError("required property missing: storageTypes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearDataForStorageKeyParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("storageKey", internal::ToValue(storage_key_));
  result->Set("storageTypes", internal::ToValue(storage_types_));
  return std::move(result);
}

std::unique_ptr<ClearDataForStorageKeyParams> ClearDataForStorageKeyParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearDataForStorageKeyParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearDataForStorageKeyResult> ClearDataForStorageKeyResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearDataForStorageKeyResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearDataForStorageKeyResult> result(new ClearDataForStorageKeyResult());
  errors->Push();
  errors->SetName("ClearDataForStorageKeyResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearDataForStorageKeyResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearDataForStorageKeyResult> ClearDataForStorageKeyResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearDataForStorageKeyResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetCookiesParams> GetCookiesParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetCookiesParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetCookiesParams> result(new GetCookiesParams());
  errors->Push();
  errors->SetName("GetCookiesParams");
  const base::Value* browser_context_id_value = value.FindKey("browserContextId");
  if (browser_context_id_value) {
    errors->SetName("browserContextId");
    result->browser_context_id_ = internal::FromValue<std::string>::Parse(*browser_context_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetCookiesParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (browser_context_id_)
    result->Set("browserContextId", internal::ToValue(browser_context_id_.value()));
  return std::move(result);
}

std::unique_ptr<GetCookiesParams> GetCookiesParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetCookiesParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetCookiesResult> GetCookiesResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetCookiesResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetCookiesResult> result(new GetCookiesResult());
  errors->Push();
  errors->SetName("GetCookiesResult");
  const base::Value* cookies_value = value.FindKey("cookies");
  if (cookies_value) {
    errors->SetName("cookies");
    result->cookies_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::network::Cookie>>>::Parse(*cookies_value, errors);
  } else {
    errors->AddError("required property missing: cookies");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetCookiesResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("cookies", internal::ToValue(cookies_));
  return std::move(result);
}

std::unique_ptr<GetCookiesResult> GetCookiesResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetCookiesResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetCookiesParams> SetCookiesParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetCookiesParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetCookiesParams> result(new SetCookiesParams());
  errors->Push();
  errors->SetName("SetCookiesParams");
  const base::Value* cookies_value = value.FindKey("cookies");
  if (cookies_value) {
    errors->SetName("cookies");
    result->cookies_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::network::CookieParam>>>::Parse(*cookies_value, errors);
  } else {
    errors->AddError("required property missing: cookies");
  }
  const base::Value* browser_context_id_value = value.FindKey("browserContextId");
  if (browser_context_id_value) {
    errors->SetName("browserContextId");
    result->browser_context_id_ = internal::FromValue<std::string>::Parse(*browser_context_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetCookiesParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("cookies", internal::ToValue(cookies_));
  if (browser_context_id_)
    result->Set("browserContextId", internal::ToValue(browser_context_id_.value()));
  return std::move(result);
}

std::unique_ptr<SetCookiesParams> SetCookiesParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetCookiesParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetCookiesResult> SetCookiesResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetCookiesResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetCookiesResult> result(new SetCookiesResult());
  errors->Push();
  errors->SetName("SetCookiesResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetCookiesResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetCookiesResult> SetCookiesResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetCookiesResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearCookiesParams> ClearCookiesParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearCookiesParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearCookiesParams> result(new ClearCookiesParams());
  errors->Push();
  errors->SetName("ClearCookiesParams");
  const base::Value* browser_context_id_value = value.FindKey("browserContextId");
  if (browser_context_id_value) {
    errors->SetName("browserContextId");
    result->browser_context_id_ = internal::FromValue<std::string>::Parse(*browser_context_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearCookiesParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (browser_context_id_)
    result->Set("browserContextId", internal::ToValue(browser_context_id_.value()));
  return std::move(result);
}

std::unique_ptr<ClearCookiesParams> ClearCookiesParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearCookiesParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearCookiesResult> ClearCookiesResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearCookiesResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearCookiesResult> result(new ClearCookiesResult());
  errors->Push();
  errors->SetName("ClearCookiesResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearCookiesResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearCookiesResult> ClearCookiesResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearCookiesResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetUsageAndQuotaParams> GetUsageAndQuotaParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetUsageAndQuotaParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetUsageAndQuotaParams> result(new GetUsageAndQuotaParams());
  errors->Push();
  errors->SetName("GetUsageAndQuotaParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetUsageAndQuotaParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  return std::move(result);
}

std::unique_ptr<GetUsageAndQuotaParams> GetUsageAndQuotaParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetUsageAndQuotaParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetUsageAndQuotaResult> GetUsageAndQuotaResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetUsageAndQuotaResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetUsageAndQuotaResult> result(new GetUsageAndQuotaResult());
  errors->Push();
  errors->SetName("GetUsageAndQuotaResult");
  const base::Value* usage_value = value.FindKey("usage");
  if (usage_value) {
    errors->SetName("usage");
    result->usage_ = internal::FromValue<double>::Parse(*usage_value, errors);
  } else {
    errors->AddError("required property missing: usage");
  }
  const base::Value* quota_value = value.FindKey("quota");
  if (quota_value) {
    errors->SetName("quota");
    result->quota_ = internal::FromValue<double>::Parse(*quota_value, errors);
  } else {
    errors->AddError("required property missing: quota");
  }
  const base::Value* override_active_value = value.FindKey("overrideActive");
  if (override_active_value) {
    errors->SetName("overrideActive");
    result->override_active_ = internal::FromValue<bool>::Parse(*override_active_value, errors);
  } else {
    errors->AddError("required property missing: overrideActive");
  }
  const base::Value* usage_breakdown_value = value.FindKey("usageBreakdown");
  if (usage_breakdown_value) {
    errors->SetName("usageBreakdown");
    result->usage_breakdown_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::storage::UsageForType>>>::Parse(*usage_breakdown_value, errors);
  } else {
    errors->AddError("required property missing: usageBreakdown");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetUsageAndQuotaResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("usage", internal::ToValue(usage_));
  result->Set("quota", internal::ToValue(quota_));
  result->Set("overrideActive", internal::ToValue(override_active_));
  result->Set("usageBreakdown", internal::ToValue(usage_breakdown_));
  return std::move(result);
}

std::unique_ptr<GetUsageAndQuotaResult> GetUsageAndQuotaResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetUsageAndQuotaResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<OverrideQuotaForOriginParams> OverrideQuotaForOriginParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("OverrideQuotaForOriginParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<OverrideQuotaForOriginParams> result(new OverrideQuotaForOriginParams());
  errors->Push();
  errors->SetName("OverrideQuotaForOriginParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  const base::Value* quota_size_value = value.FindKey("quotaSize");
  if (quota_size_value) {
    errors->SetName("quotaSize");
    result->quota_size_ = internal::FromValue<double>::Parse(*quota_size_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> OverrideQuotaForOriginParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  if (quota_size_)
    result->Set("quotaSize", internal::ToValue(quota_size_.value()));
  return std::move(result);
}

std::unique_ptr<OverrideQuotaForOriginParams> OverrideQuotaForOriginParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<OverrideQuotaForOriginParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<OverrideQuotaForOriginResult> OverrideQuotaForOriginResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("OverrideQuotaForOriginResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<OverrideQuotaForOriginResult> result(new OverrideQuotaForOriginResult());
  errors->Push();
  errors->SetName("OverrideQuotaForOriginResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> OverrideQuotaForOriginResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<OverrideQuotaForOriginResult> OverrideQuotaForOriginResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<OverrideQuotaForOriginResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrackCacheStorageForOriginParams> TrackCacheStorageForOriginParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrackCacheStorageForOriginParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrackCacheStorageForOriginParams> result(new TrackCacheStorageForOriginParams());
  errors->Push();
  errors->SetName("TrackCacheStorageForOriginParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrackCacheStorageForOriginParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  return std::move(result);
}

std::unique_ptr<TrackCacheStorageForOriginParams> TrackCacheStorageForOriginParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrackCacheStorageForOriginParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrackCacheStorageForOriginResult> TrackCacheStorageForOriginResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrackCacheStorageForOriginResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrackCacheStorageForOriginResult> result(new TrackCacheStorageForOriginResult());
  errors->Push();
  errors->SetName("TrackCacheStorageForOriginResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrackCacheStorageForOriginResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<TrackCacheStorageForOriginResult> TrackCacheStorageForOriginResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrackCacheStorageForOriginResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrackIndexedDBForOriginParams> TrackIndexedDBForOriginParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrackIndexedDBForOriginParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrackIndexedDBForOriginParams> result(new TrackIndexedDBForOriginParams());
  errors->Push();
  errors->SetName("TrackIndexedDBForOriginParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrackIndexedDBForOriginParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  return std::move(result);
}

std::unique_ptr<TrackIndexedDBForOriginParams> TrackIndexedDBForOriginParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrackIndexedDBForOriginParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrackIndexedDBForOriginResult> TrackIndexedDBForOriginResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrackIndexedDBForOriginResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrackIndexedDBForOriginResult> result(new TrackIndexedDBForOriginResult());
  errors->Push();
  errors->SetName("TrackIndexedDBForOriginResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrackIndexedDBForOriginResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<TrackIndexedDBForOriginResult> TrackIndexedDBForOriginResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrackIndexedDBForOriginResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrackIndexedDBForStorageKeyParams> TrackIndexedDBForStorageKeyParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrackIndexedDBForStorageKeyParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrackIndexedDBForStorageKeyParams> result(new TrackIndexedDBForStorageKeyParams());
  errors->Push();
  errors->SetName("TrackIndexedDBForStorageKeyParams");
  const base::Value* storage_key_value = value.FindKey("storageKey");
  if (storage_key_value) {
    errors->SetName("storageKey");
    result->storage_key_ = internal::FromValue<std::string>::Parse(*storage_key_value, errors);
  } else {
    errors->AddError("required property missing: storageKey");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrackIndexedDBForStorageKeyParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("storageKey", internal::ToValue(storage_key_));
  return std::move(result);
}

std::unique_ptr<TrackIndexedDBForStorageKeyParams> TrackIndexedDBForStorageKeyParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrackIndexedDBForStorageKeyParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<TrackIndexedDBForStorageKeyResult> TrackIndexedDBForStorageKeyResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TrackIndexedDBForStorageKeyResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TrackIndexedDBForStorageKeyResult> result(new TrackIndexedDBForStorageKeyResult());
  errors->Push();
  errors->SetName("TrackIndexedDBForStorageKeyResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TrackIndexedDBForStorageKeyResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<TrackIndexedDBForStorageKeyResult> TrackIndexedDBForStorageKeyResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TrackIndexedDBForStorageKeyResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<UntrackCacheStorageForOriginParams> UntrackCacheStorageForOriginParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UntrackCacheStorageForOriginParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UntrackCacheStorageForOriginParams> result(new UntrackCacheStorageForOriginParams());
  errors->Push();
  errors->SetName("UntrackCacheStorageForOriginParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UntrackCacheStorageForOriginParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  return std::move(result);
}

std::unique_ptr<UntrackCacheStorageForOriginParams> UntrackCacheStorageForOriginParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UntrackCacheStorageForOriginParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<UntrackCacheStorageForOriginResult> UntrackCacheStorageForOriginResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UntrackCacheStorageForOriginResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UntrackCacheStorageForOriginResult> result(new UntrackCacheStorageForOriginResult());
  errors->Push();
  errors->SetName("UntrackCacheStorageForOriginResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UntrackCacheStorageForOriginResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<UntrackCacheStorageForOriginResult> UntrackCacheStorageForOriginResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UntrackCacheStorageForOriginResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<UntrackIndexedDBForOriginParams> UntrackIndexedDBForOriginParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UntrackIndexedDBForOriginParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UntrackIndexedDBForOriginParams> result(new UntrackIndexedDBForOriginParams());
  errors->Push();
  errors->SetName("UntrackIndexedDBForOriginParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UntrackIndexedDBForOriginParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  return std::move(result);
}

std::unique_ptr<UntrackIndexedDBForOriginParams> UntrackIndexedDBForOriginParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UntrackIndexedDBForOriginParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<UntrackIndexedDBForOriginResult> UntrackIndexedDBForOriginResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UntrackIndexedDBForOriginResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UntrackIndexedDBForOriginResult> result(new UntrackIndexedDBForOriginResult());
  errors->Push();
  errors->SetName("UntrackIndexedDBForOriginResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UntrackIndexedDBForOriginResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<UntrackIndexedDBForOriginResult> UntrackIndexedDBForOriginResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UntrackIndexedDBForOriginResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<UntrackIndexedDBForStorageKeyParams> UntrackIndexedDBForStorageKeyParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UntrackIndexedDBForStorageKeyParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UntrackIndexedDBForStorageKeyParams> result(new UntrackIndexedDBForStorageKeyParams());
  errors->Push();
  errors->SetName("UntrackIndexedDBForStorageKeyParams");
  const base::Value* storage_key_value = value.FindKey("storageKey");
  if (storage_key_value) {
    errors->SetName("storageKey");
    result->storage_key_ = internal::FromValue<std::string>::Parse(*storage_key_value, errors);
  } else {
    errors->AddError("required property missing: storageKey");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UntrackIndexedDBForStorageKeyParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("storageKey", internal::ToValue(storage_key_));
  return std::move(result);
}

std::unique_ptr<UntrackIndexedDBForStorageKeyParams> UntrackIndexedDBForStorageKeyParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UntrackIndexedDBForStorageKeyParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<UntrackIndexedDBForStorageKeyResult> UntrackIndexedDBForStorageKeyResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("UntrackIndexedDBForStorageKeyResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<UntrackIndexedDBForStorageKeyResult> result(new UntrackIndexedDBForStorageKeyResult());
  errors->Push();
  errors->SetName("UntrackIndexedDBForStorageKeyResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> UntrackIndexedDBForStorageKeyResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<UntrackIndexedDBForStorageKeyResult> UntrackIndexedDBForStorageKeyResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<UntrackIndexedDBForStorageKeyResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetTrustTokensParams> GetTrustTokensParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetTrustTokensParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetTrustTokensParams> result(new GetTrustTokensParams());
  errors->Push();
  errors->SetName("GetTrustTokensParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetTrustTokensParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<GetTrustTokensParams> GetTrustTokensParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetTrustTokensParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetTrustTokensResult> GetTrustTokensResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetTrustTokensResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetTrustTokensResult> result(new GetTrustTokensResult());
  errors->Push();
  errors->SetName("GetTrustTokensResult");
  const base::Value* tokens_value = value.FindKey("tokens");
  if (tokens_value) {
    errors->SetName("tokens");
    result->tokens_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::storage::TrustTokens>>>::Parse(*tokens_value, errors);
  } else {
    errors->AddError("required property missing: tokens");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetTrustTokensResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("tokens", internal::ToValue(tokens_));
  return std::move(result);
}

std::unique_ptr<GetTrustTokensResult> GetTrustTokensResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetTrustTokensResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearTrustTokensParams> ClearTrustTokensParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearTrustTokensParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearTrustTokensParams> result(new ClearTrustTokensParams());
  errors->Push();
  errors->SetName("ClearTrustTokensParams");
  const base::Value* issuer_origin_value = value.FindKey("issuerOrigin");
  if (issuer_origin_value) {
    errors->SetName("issuerOrigin");
    result->issuer_origin_ = internal::FromValue<std::string>::Parse(*issuer_origin_value, errors);
  } else {
    errors->AddError("required property missing: issuerOrigin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearTrustTokensParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("issuerOrigin", internal::ToValue(issuer_origin_));
  return std::move(result);
}

std::unique_ptr<ClearTrustTokensParams> ClearTrustTokensParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearTrustTokensParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearTrustTokensResult> ClearTrustTokensResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearTrustTokensResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearTrustTokensResult> result(new ClearTrustTokensResult());
  errors->Push();
  errors->SetName("ClearTrustTokensResult");
  const base::Value* did_delete_tokens_value = value.FindKey("didDeleteTokens");
  if (did_delete_tokens_value) {
    errors->SetName("didDeleteTokens");
    result->did_delete_tokens_ = internal::FromValue<bool>::Parse(*did_delete_tokens_value, errors);
  } else {
    errors->AddError("required property missing: didDeleteTokens");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearTrustTokensResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("didDeleteTokens", internal::ToValue(did_delete_tokens_));
  return std::move(result);
}

std::unique_ptr<ClearTrustTokensResult> ClearTrustTokensResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearTrustTokensResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetInterestGroupDetailsParams> GetInterestGroupDetailsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetInterestGroupDetailsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetInterestGroupDetailsParams> result(new GetInterestGroupDetailsParams());
  errors->Push();
  errors->SetName("GetInterestGroupDetailsParams");
  const base::Value* owner_origin_value = value.FindKey("ownerOrigin");
  if (owner_origin_value) {
    errors->SetName("ownerOrigin");
    result->owner_origin_ = internal::FromValue<std::string>::Parse(*owner_origin_value, errors);
  } else {
    errors->AddError("required property missing: ownerOrigin");
  }
  const base::Value* name_value = value.FindKey("name");
  if (name_value) {
    errors->SetName("name");
    result->name_ = internal::FromValue<std::string>::Parse(*name_value, errors);
  } else {
    errors->AddError("required property missing: name");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetInterestGroupDetailsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("ownerOrigin", internal::ToValue(owner_origin_));
  result->Set("name", internal::ToValue(name_));
  return std::move(result);
}

std::unique_ptr<GetInterestGroupDetailsParams> GetInterestGroupDetailsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetInterestGroupDetailsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetInterestGroupDetailsResult> GetInterestGroupDetailsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetInterestGroupDetailsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetInterestGroupDetailsResult> result(new GetInterestGroupDetailsResult());
  errors->Push();
  errors->SetName("GetInterestGroupDetailsResult");
  const base::Value* details_value = value.FindKey("details");
  if (details_value) {
    errors->SetName("details");
    result->details_ = internal::FromValue<::autofill_assistant::storage::InterestGroupDetails>::Parse(*details_value, errors);
  } else {
    errors->AddError("required property missing: details");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetInterestGroupDetailsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("details", internal::ToValue(*details_));
  return std::move(result);
}

std::unique_ptr<GetInterestGroupDetailsResult> GetInterestGroupDetailsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetInterestGroupDetailsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetInterestGroupTrackingParams> SetInterestGroupTrackingParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetInterestGroupTrackingParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetInterestGroupTrackingParams> result(new SetInterestGroupTrackingParams());
  errors->Push();
  errors->SetName("SetInterestGroupTrackingParams");
  const base::Value* enable_value = value.FindKey("enable");
  if (enable_value) {
    errors->SetName("enable");
    result->enable_ = internal::FromValue<bool>::Parse(*enable_value, errors);
  } else {
    errors->AddError("required property missing: enable");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetInterestGroupTrackingParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("enable", internal::ToValue(enable_));
  return std::move(result);
}

std::unique_ptr<SetInterestGroupTrackingParams> SetInterestGroupTrackingParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetInterestGroupTrackingParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetInterestGroupTrackingResult> SetInterestGroupTrackingResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetInterestGroupTrackingResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetInterestGroupTrackingResult> result(new SetInterestGroupTrackingResult());
  errors->Push();
  errors->SetName("SetInterestGroupTrackingResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetInterestGroupTrackingResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetInterestGroupTrackingResult> SetInterestGroupTrackingResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetInterestGroupTrackingResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<CacheStorageContentUpdatedParams> CacheStorageContentUpdatedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("CacheStorageContentUpdatedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<CacheStorageContentUpdatedParams> result(new CacheStorageContentUpdatedParams());
  errors->Push();
  errors->SetName("CacheStorageContentUpdatedParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  const base::Value* cache_name_value = value.FindKey("cacheName");
  if (cache_name_value) {
    errors->SetName("cacheName");
    result->cache_name_ = internal::FromValue<std::string>::Parse(*cache_name_value, errors);
  } else {
    errors->AddError("required property missing: cacheName");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> CacheStorageContentUpdatedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  result->Set("cacheName", internal::ToValue(cache_name_));
  return std::move(result);
}

std::unique_ptr<CacheStorageContentUpdatedParams> CacheStorageContentUpdatedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<CacheStorageContentUpdatedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<CacheStorageListUpdatedParams> CacheStorageListUpdatedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("CacheStorageListUpdatedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<CacheStorageListUpdatedParams> result(new CacheStorageListUpdatedParams());
  errors->Push();
  errors->SetName("CacheStorageListUpdatedParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> CacheStorageListUpdatedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  return std::move(result);
}

std::unique_ptr<CacheStorageListUpdatedParams> CacheStorageListUpdatedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<CacheStorageListUpdatedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<IndexedDBContentUpdatedParams> IndexedDBContentUpdatedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("IndexedDBContentUpdatedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<IndexedDBContentUpdatedParams> result(new IndexedDBContentUpdatedParams());
  errors->Push();
  errors->SetName("IndexedDBContentUpdatedParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  const base::Value* storage_key_value = value.FindKey("storageKey");
  if (storage_key_value) {
    errors->SetName("storageKey");
    result->storage_key_ = internal::FromValue<std::string>::Parse(*storage_key_value, errors);
  } else {
    errors->AddError("required property missing: storageKey");
  }
  const base::Value* database_name_value = value.FindKey("databaseName");
  if (database_name_value) {
    errors->SetName("databaseName");
    result->database_name_ = internal::FromValue<std::string>::Parse(*database_name_value, errors);
  } else {
    errors->AddError("required property missing: databaseName");
  }
  const base::Value* object_store_name_value = value.FindKey("objectStoreName");
  if (object_store_name_value) {
    errors->SetName("objectStoreName");
    result->object_store_name_ = internal::FromValue<std::string>::Parse(*object_store_name_value, errors);
  } else {
    errors->AddError("required property missing: objectStoreName");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> IndexedDBContentUpdatedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  result->Set("storageKey", internal::ToValue(storage_key_));
  result->Set("databaseName", internal::ToValue(database_name_));
  result->Set("objectStoreName", internal::ToValue(object_store_name_));
  return std::move(result);
}

std::unique_ptr<IndexedDBContentUpdatedParams> IndexedDBContentUpdatedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<IndexedDBContentUpdatedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<IndexedDBListUpdatedParams> IndexedDBListUpdatedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("IndexedDBListUpdatedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<IndexedDBListUpdatedParams> result(new IndexedDBListUpdatedParams());
  errors->Push();
  errors->SetName("IndexedDBListUpdatedParams");
  const base::Value* origin_value = value.FindKey("origin");
  if (origin_value) {
    errors->SetName("origin");
    result->origin_ = internal::FromValue<std::string>::Parse(*origin_value, errors);
  } else {
    errors->AddError("required property missing: origin");
  }
  const base::Value* storage_key_value = value.FindKey("storageKey");
  if (storage_key_value) {
    errors->SetName("storageKey");
    result->storage_key_ = internal::FromValue<std::string>::Parse(*storage_key_value, errors);
  } else {
    errors->AddError("required property missing: storageKey");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> IndexedDBListUpdatedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("origin", internal::ToValue(origin_));
  result->Set("storageKey", internal::ToValue(storage_key_));
  return std::move(result);
}

std::unique_ptr<IndexedDBListUpdatedParams> IndexedDBListUpdatedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<IndexedDBListUpdatedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InterestGroupAccessedParams> InterestGroupAccessedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InterestGroupAccessedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InterestGroupAccessedParams> result(new InterestGroupAccessedParams());
  errors->Push();
  errors->SetName("InterestGroupAccessedParams");
  const base::Value* access_time_value = value.FindKey("accessTime");
  if (access_time_value) {
    errors->SetName("accessTime");
    result->access_time_ = internal::FromValue<double>::Parse(*access_time_value, errors);
  } else {
    errors->AddError("required property missing: accessTime");
  }
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::storage::InterestGroupAccessType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* owner_origin_value = value.FindKey("ownerOrigin");
  if (owner_origin_value) {
    errors->SetName("ownerOrigin");
    result->owner_origin_ = internal::FromValue<std::string>::Parse(*owner_origin_value, errors);
  } else {
    errors->AddError("required property missing: ownerOrigin");
  }
  const base::Value* name_value = value.FindKey("name");
  if (name_value) {
    errors->SetName("name");
    result->name_ = internal::FromValue<std::string>::Parse(*name_value, errors);
  } else {
    errors->AddError("required property missing: name");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InterestGroupAccessedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("accessTime", internal::ToValue(access_time_));
  result->Set("type", internal::ToValue(type_));
  result->Set("ownerOrigin", internal::ToValue(owner_origin_));
  result->Set("name", internal::ToValue(name_));
  return std::move(result);
}

std::unique_ptr<InterestGroupAccessedParams> InterestGroupAccessedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InterestGroupAccessedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace storage
}  // namespace autofill_assistant
