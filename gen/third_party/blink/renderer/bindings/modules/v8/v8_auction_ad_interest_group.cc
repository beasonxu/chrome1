// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// DO NOT EDIT: This file is auto-generated by
// //third_party/blink/renderer/bindings/scripts/generate_bindings.py
//
// Use the GN flag `blink_enable_generated_code_formatting=true` to enable
// formatting of the generated files.

#include "third_party/blink/renderer/bindings/modules/v8/v8_auction_ad_interest_group.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_traits.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_auction_ad.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_isolate_data.h"

namespace blink {



AuctionAdInterestGroup* AuctionAdInterestGroup::Create(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExceptionState& exception_state) {
  AuctionAdInterestGroup* dictionary = MakeGarbageCollected<AuctionAdInterestGroup>(isolate);
if (!v8_value->IsObject()) {
  const char* const class_like_name = "AuctionAdInterestGroup";
exception_state.ThrowTypeError(ExceptionMessages::ValueNotOfType(class_like_name));
return nullptr;
}
dictionary->FillMembersFromV8Object(isolate, v8_value.As<v8::Object>(), exception_state);
if (UNLIKELY(exception_state.HadException())) {
  return nullptr;
}
return dictionary;
}

 AuctionAdInterestGroup::AuctionAdInterestGroup() {
  
}

 AuctionAdInterestGroup::AuctionAdInterestGroup(v8::Isolate* isolate) {
  
}



HeapVector<Member<AuctionAd>> AuctionAdInterestGroup::getAdComponentsOr(const HeapVector<Member<AuctionAd>>& fallback_value) const {
  if (!hasAdComponents()) {
  return fallback_value;
}
return member_ad_components_;
}

HeapVector<Member<AuctionAd>> AuctionAdInterestGroup::getAdComponentsOr(HeapVector<Member<AuctionAd>>&& fallback_value) const {
  if (!hasAdComponents()) {
  return std::move(fallback_value);
}
return member_ad_components_;
}

void AuctionAdInterestGroup::setAdComponents(const HeapVector<Member<AuctionAd>>& value) {
  member_ad_components_ = value;
has_ad_components_ = true;
}

void AuctionAdInterestGroup::setAdComponents(HeapVector<Member<AuctionAd>>&& value) {
  member_ad_components_ = std::move(value);
has_ad_components_ = true;
}




HeapVector<Member<AuctionAd>> AuctionAdInterestGroup::getAdsOr(const HeapVector<Member<AuctionAd>>& fallback_value) const {
  if (!hasAds()) {
  return fallback_value;
}
return member_ads_;
}

HeapVector<Member<AuctionAd>> AuctionAdInterestGroup::getAdsOr(HeapVector<Member<AuctionAd>>&& fallback_value) const {
  if (!hasAds()) {
  return std::move(fallback_value);
}
return member_ads_;
}

void AuctionAdInterestGroup::setAds(const HeapVector<Member<AuctionAd>>& value) {
  member_ads_ = value;
has_ads_ = true;
}

void AuctionAdInterestGroup::setAds(HeapVector<Member<AuctionAd>>&& value) {
  member_ads_ = std::move(value);
has_ads_ = true;
}




String AuctionAdInterestGroup::getBiddingLogicUrlOr(const String& fallback_value) const {
  if (!hasBiddingLogicUrl()) {
  return fallback_value;
}
return member_bidding_logic_url_;
}

String AuctionAdInterestGroup::getBiddingLogicUrlOr(String&& fallback_value) const {
  if (!hasBiddingLogicUrl()) {
  return std::move(fallback_value);
}
return member_bidding_logic_url_;
}

void AuctionAdInterestGroup::setBiddingLogicUrl(const String& value) {
  member_bidding_logic_url_ = value;
has_bidding_logic_url_ = true;
}

void AuctionAdInterestGroup::setBiddingLogicUrl(String&& value) {
  member_bidding_logic_url_ = std::move(value);
has_bidding_logic_url_ = true;
}




String AuctionAdInterestGroup::getBiddingWasmHelperUrlOr(const String& fallback_value) const {
  if (!hasBiddingWasmHelperUrl()) {
  return fallback_value;
}
return member_bidding_wasm_helper_url_;
}

String AuctionAdInterestGroup::getBiddingWasmHelperUrlOr(String&& fallback_value) const {
  if (!hasBiddingWasmHelperUrl()) {
  return std::move(fallback_value);
}
return member_bidding_wasm_helper_url_;
}

void AuctionAdInterestGroup::setBiddingWasmHelperUrl(const String& value) {
  member_bidding_wasm_helper_url_ = value;
has_bidding_wasm_helper_url_ = true;
}

void AuctionAdInterestGroup::setBiddingWasmHelperUrl(String&& value) {
  member_bidding_wasm_helper_url_ = std::move(value);
has_bidding_wasm_helper_url_ = true;
}




String AuctionAdInterestGroup::getDailyUpdateUrlOr(const String& fallback_value) const {
  if (!hasDailyUpdateUrl()) {
  return fallback_value;
}
return member_daily_update_url_;
}

String AuctionAdInterestGroup::getDailyUpdateUrlOr(String&& fallback_value) const {
  if (!hasDailyUpdateUrl()) {
  return std::move(fallback_value);
}
return member_daily_update_url_;
}

void AuctionAdInterestGroup::setDailyUpdateUrl(const String& value) {
  member_daily_update_url_ = value;
has_daily_update_url_ = true;
}

void AuctionAdInterestGroup::setDailyUpdateUrl(String&& value) {
  member_daily_update_url_ = std::move(value);
has_daily_update_url_ = true;
}











void AuctionAdInterestGroup::setName(const String& value) {
  member_name_ = value;
}

void AuctionAdInterestGroup::setName(String&& value) {
  member_name_ = std::move(value);
}




void AuctionAdInterestGroup::setOwner(const String& value) {
  member_owner_ = value;
}

void AuctionAdInterestGroup::setOwner(String&& value) {
  member_owner_ = std::move(value);
}











Vector<String> AuctionAdInterestGroup::getTrustedBiddingSignalsKeysOr(const Vector<String>& fallback_value) const {
  if (!hasTrustedBiddingSignalsKeys()) {
  return fallback_value;
}
return member_trusted_bidding_signals_keys_;
}

Vector<String> AuctionAdInterestGroup::getTrustedBiddingSignalsKeysOr(Vector<String>&& fallback_value) const {
  if (!hasTrustedBiddingSignalsKeys()) {
  return std::move(fallback_value);
}
return member_trusted_bidding_signals_keys_;
}

void AuctionAdInterestGroup::setTrustedBiddingSignalsKeys(const Vector<String>& value) {
  member_trusted_bidding_signals_keys_ = value;
has_trusted_bidding_signals_keys_ = true;
}

void AuctionAdInterestGroup::setTrustedBiddingSignalsKeys(Vector<String>&& value) {
  member_trusted_bidding_signals_keys_ = std::move(value);
has_trusted_bidding_signals_keys_ = true;
}




String AuctionAdInterestGroup::getTrustedBiddingSignalsUrlOr(const String& fallback_value) const {
  if (!hasTrustedBiddingSignalsUrl()) {
  return fallback_value;
}
return member_trusted_bidding_signals_url_;
}

String AuctionAdInterestGroup::getTrustedBiddingSignalsUrlOr(String&& fallback_value) const {
  if (!hasTrustedBiddingSignalsUrl()) {
  return std::move(fallback_value);
}
return member_trusted_bidding_signals_url_;
}

void AuctionAdInterestGroup::setTrustedBiddingSignalsUrl(const String& value) {
  member_trusted_bidding_signals_url_ = value;
has_trusted_bidding_signals_url_ = true;
}

void AuctionAdInterestGroup::setTrustedBiddingSignalsUrl(String&& value) {
  member_trusted_bidding_signals_url_ = std::move(value);
has_trusted_bidding_signals_url_ = true;
}











void AuctionAdInterestGroup::Trace(Visitor* visitor) const {
  TraceIfNeeded<HeapVector<Member<AuctionAd>>>::Trace(visitor, member_ad_components_);
TraceIfNeeded<HeapVector<Member<AuctionAd>>>::Trace(visitor, member_ads_);
TraceIfNeeded<String>::Trace(visitor, member_bidding_logic_url_);
TraceIfNeeded<String>::Trace(visitor, member_bidding_wasm_helper_url_);
TraceIfNeeded<String>::Trace(visitor, member_daily_update_url_);
TraceIfNeeded<V8WorkletExecutionMode>::Trace(visitor, member_execution_mode_);
TraceIfNeeded<String>::Trace(visitor, member_name_);
TraceIfNeeded<String>::Trace(visitor, member_owner_);
TraceIfNeeded<double>::Trace(visitor, member_priority_);
TraceIfNeeded<Vector<String>>::Trace(visitor, member_trusted_bidding_signals_keys_);
TraceIfNeeded<String>::Trace(visitor, member_trusted_bidding_signals_url_);
TraceIfNeeded<ScriptValue>::Trace(visitor, member_user_bidding_signals_);
bindings::DictionaryBase::Trace(visitor);
}

bool AuctionAdInterestGroup::FillV8ObjectWithMembers(ScriptState* script_state, v8::Local<v8::Object> v8_dictionary) const {
  v8::Local<v8::Value> v8_value;
v8::Isolate* isolate = script_state->GetIsolate();
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
bool was_property_created;
if (hasAdComponents()) {
  if (!ToV8Traits<IDLSequence<AuctionAd>>::ToV8(script_state, member_ad_components_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[0].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasAds()) {
  if (!ToV8Traits<IDLSequence<AuctionAd>>::ToV8(script_state, member_ads_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[1].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasBiddingLogicUrl()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_bidding_logic_url_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[2].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasBiddingWasmHelperUrl()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_bidding_wasm_helper_url_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[3].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasDailyUpdateUrl()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_daily_update_url_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[4].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasExecutionMode()) {
  if (!ToV8Traits<V8WorkletExecutionMode>::ToV8(script_state, member_execution_mode_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[5].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasName()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_name_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[6].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasOwner()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_owner_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[7].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasPriority()) {
  if (!ToV8Traits<IDLDouble>::ToV8(script_state, member_priority_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[8].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasTrustedBiddingSignalsKeys()) {
  if (!ToV8Traits<IDLSequence<IDLUSVString>>::ToV8(script_state, member_trusted_bidding_signals_keys_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[9].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasTrustedBiddingSignalsUrl()) {
  if (!ToV8Traits<IDLUSVString>::ToV8(script_state, member_trusted_bidding_signals_url_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[10].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
if (hasUserBiddingSignals()) {
  if (!ToV8Traits<IDLAny>::ToV8(script_state, member_user_bidding_signals_).ToLocal(&v8_value)) {
  return false;
}
if (!v8_dictionary->CreateDataProperty(current_context, v8_own_member_names[11].Get(isolate), v8_value).To(&was_property_created)) {
  return false;
}
}
return true;
}

void AuctionAdInterestGroup::FillMembersFromV8Object(v8::Isolate* isolate, v8::Local<v8::Object> v8_dictionary, ExceptionState& exception_state) {
  const char* const class_like_name = "AuctionAdInterestGroup";
ExceptionState::ContextScope exception_context_scope(ExceptionContext(ExceptionContext::Context::kDictionaryMemberGet, class_like_name, ""), exception_state);
exception_context_scope.ChangePropertyNameAsOptimizationHack("adComponents");
constexpr bool is_optional = false;
v8::Local<v8::Context> current_context = isolate->GetCurrentContext();
const auto& v8_own_member_names = GetV8OwnMemberNames(isolate);
v8::TryCatch try_block(isolate);
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<AuctionAd>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[0].Get(isolate), has_ad_components_, member_ad_components_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("ads");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<AuctionAd>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[1].Get(isolate), has_ads_, member_ads_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("biddingLogicUrl");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[2].Get(isolate), has_bidding_logic_url_, member_bidding_logic_url_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("biddingWasmHelperUrl");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[3].Get(isolate), has_bidding_wasm_helper_url_, member_bidding_wasm_helper_url_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("dailyUpdateUrl");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[4].Get(isolate), has_daily_update_url_, member_daily_update_url_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("executionMode");
if (!bindings::GetDictionaryMemberFromV8Object<V8WorkletExecutionMode, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[5].Get(isolate), has_execution_mode_, member_execution_mode_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("name");
constexpr bool is_required = true;
bool fallback_presence_var;
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[6].Get(isolate), fallback_presence_var, member_name_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("owner");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_required>(isolate, current_context, v8_dictionary, v8_own_member_names[7].Get(isolate), fallback_presence_var, member_owner_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("priority");
if (!bindings::GetDictionaryMemberFromV8Object<IDLDouble, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[8].Get(isolate), has_priority_, member_priority_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("trustedBiddingSignalsKeys");
if (!bindings::GetDictionaryMemberFromV8Object<IDLSequence<IDLUSVString>, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[9].Get(isolate), has_trusted_bidding_signals_keys_, member_trusted_bidding_signals_keys_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("trustedBiddingSignalsUrl");
if (!bindings::GetDictionaryMemberFromV8Object<IDLUSVString, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[10].Get(isolate), has_trusted_bidding_signals_url_, member_trusted_bidding_signals_url_, try_block, exception_state)) {
  return;
}
exception_context_scope.ChangePropertyNameAsOptimizationHack("userBiddingSignals");
if (!bindings::GetDictionaryMemberFromV8Object<IDLAny, is_optional>(isolate, current_context, v8_dictionary, v8_own_member_names[11].Get(isolate), fallback_presence_var, member_user_bidding_signals_, try_block, exception_state)) {
  return;
}
}

const base::span<const v8::Eternal<v8::Name>> AuctionAdInterestGroup::GetV8OwnMemberNames(v8::Isolate* isolate) {
  static const char* const kOwnMemberNames[] = {
"adComponents",
"ads",
"biddingLogicUrl",
"biddingWasmHelperUrl",
"dailyUpdateUrl",
"executionMode",
"name",
"owner",
"priority",
"trustedBiddingSignalsKeys",
"trustedBiddingSignalsUrl",
"userBiddingSignals",
};
return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(kOwnMemberNames, kOwnMemberNames);
}


}  // namespace blink
