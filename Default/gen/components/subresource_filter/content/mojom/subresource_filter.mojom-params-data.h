// components/subresource_filter/content/mojom/subresource_filter.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SUBRESOURCE_FILTER_CONTENT_MOJOM_SUBRESOURCE_FILTER_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SUBRESOURCE_FILTER_CONTENT_MOJOM_SUBRESOURCE_FILTER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace subresource_filter {
namespace mojom {
namespace internal {

class ValidationContext;
class  SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::subresource_filter::mojom::internal::ActivationState_Data> activation_state;
  mojo::internal::Pointer<::blink::mojom::internal::FrameAdEvidence_Data> ad_evidence;

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data>;

  SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data();
  ~SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data) == 24,
              "Bad sizeof(SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data)");
class  SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data>;

  SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data();
  ~SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data) == 8,
              "Bad sizeof(SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data)");
class  SubresourceFilterHost_FrameIsAd_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterHost_FrameIsAd_Params_Data>;

  SubresourceFilterHost_FrameIsAd_Params_Data();
  ~SubresourceFilterHost_FrameIsAd_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterHost_FrameIsAd_Params_Data) == 8,
              "Bad sizeof(SubresourceFilterHost_FrameIsAd_Params_Data)");
class  SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data>;

  SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data();
  ~SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data) == 8,
              "Bad sizeof(SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data)");
class  SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::RemoteFrameToken_Data> fenced_frame_root_placeholder_token;

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data>;

  SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data();
  ~SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data) == 16,
              "Bad sizeof(SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data)");
class  SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::subresource_filter::mojom::internal::DocumentLoadStatistics_Data> statistics;

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data>;

  SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data();
  ~SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data) == 16,
              "Bad sizeof(SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data)");
class  SubresourceFilterHost_OnAdsViolationTriggered_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t violation;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<SubresourceFilterHost_OnAdsViolationTriggered_Params_Data>;

  SubresourceFilterHost_OnAdsViolationTriggered_Params_Data();
  ~SubresourceFilterHost_OnAdsViolationTriggered_Params_Data() = delete;
};
static_assert(sizeof(SubresourceFilterHost_OnAdsViolationTriggered_Params_Data) == 16,
              "Bad sizeof(SubresourceFilterHost_OnAdsViolationTriggered_Params_Data)");

}  // namespace internal


class SubresourceFilterAgent_ActivateForNextCommittedLoad_ParamsDataView {
 public:
  SubresourceFilterAgent_ActivateForNextCommittedLoad_ParamsDataView() = default;

  SubresourceFilterAgent_ActivateForNextCommittedLoad_ParamsDataView(
      internal::SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetActivationStateDataView(
      ::subresource_filter::mojom::ActivationStateDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadActivationState(UserType* output) {
    
    auto* pointer = data_->activation_state.Get();
    return mojo::internal::Deserialize<::subresource_filter::mojom::ActivationStateDataView>(
        pointer, output, message_);
  }
  inline void GetAdEvidenceDataView(
      ::blink::mojom::FrameAdEvidenceDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAdEvidence(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::blink::mojom::FrameAdEvidenceDataView, UserType>(),
    "Attempting to read the optional `ad_evidence` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadAdEvidence` instead "
    "of `ReadAdEvidence if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->ad_evidence.Get();
    return mojo::internal::Deserialize<::blink::mojom::FrameAdEvidenceDataView>(
        pointer, output, message_);
  }
 private:
  internal::SubresourceFilterAgent_ActivateForNextCommittedLoad_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SubresourceFilterHost_DidDisallowFirstSubresource_ParamsDataView {
 public:
  SubresourceFilterHost_DidDisallowFirstSubresource_ParamsDataView() = default;

  SubresourceFilterHost_DidDisallowFirstSubresource_ParamsDataView(
      internal::SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SubresourceFilterHost_DidDisallowFirstSubresource_Params_Data* data_ = nullptr;
};



class SubresourceFilterHost_FrameIsAd_ParamsDataView {
 public:
  SubresourceFilterHost_FrameIsAd_ParamsDataView() = default;

  SubresourceFilterHost_FrameIsAd_ParamsDataView(
      internal::SubresourceFilterHost_FrameIsAd_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SubresourceFilterHost_FrameIsAd_Params_Data* data_ = nullptr;
};



class SubresourceFilterHost_FrameWasCreatedByAdScript_ParamsDataView {
 public:
  SubresourceFilterHost_FrameWasCreatedByAdScript_ParamsDataView() = default;

  SubresourceFilterHost_FrameWasCreatedByAdScript_ParamsDataView(
      internal::SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SubresourceFilterHost_FrameWasCreatedByAdScript_Params_Data* data_ = nullptr;
};



class SubresourceFilterHost_AdScriptDidCreateFencedFrame_ParamsDataView {
 public:
  SubresourceFilterHost_AdScriptDidCreateFencedFrame_ParamsDataView() = default;

  SubresourceFilterHost_AdScriptDidCreateFencedFrame_ParamsDataView(
      internal::SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetFencedFrameRootPlaceholderTokenDataView(
      ::blink::mojom::RemoteFrameTokenDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFencedFrameRootPlaceholderToken(UserType* output) {
    
    auto* pointer = data_->fenced_frame_root_placeholder_token.Get();
    return mojo::internal::Deserialize<::blink::mojom::RemoteFrameTokenDataView>(
        pointer, output, message_);
  }
 private:
  internal::SubresourceFilterHost_AdScriptDidCreateFencedFrame_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SubresourceFilterHost_SetDocumentLoadStatistics_ParamsDataView {
 public:
  SubresourceFilterHost_SetDocumentLoadStatistics_ParamsDataView() = default;

  SubresourceFilterHost_SetDocumentLoadStatistics_ParamsDataView(
      internal::SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetStatisticsDataView(
      ::subresource_filter::mojom::DocumentLoadStatisticsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadStatistics(UserType* output) {
    
    auto* pointer = data_->statistics.Get();
    return mojo::internal::Deserialize<::subresource_filter::mojom::DocumentLoadStatisticsDataView>(
        pointer, output, message_);
  }
 private:
  internal::SubresourceFilterHost_SetDocumentLoadStatistics_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SubresourceFilterHost_OnAdsViolationTriggered_ParamsDataView {
 public:
  SubresourceFilterHost_OnAdsViolationTriggered_ParamsDataView() = default;

  SubresourceFilterHost_OnAdsViolationTriggered_ParamsDataView(
      internal::SubresourceFilterHost_OnAdsViolationTriggered_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadViolation(UserType* output) const {
    auto data_value = data_->violation;
    return mojo::internal::Deserialize<::subresource_filter::mojom::AdsViolation>(
        data_value, output);
  }
  ::subresource_filter::mojom::AdsViolation violation() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::subresource_filter::mojom::AdsViolation>(data_->violation));
  }
 private:
  internal::SubresourceFilterHost_OnAdsViolationTriggered_Params_Data* data_ = nullptr;
};


inline void SubresourceFilterAgent_ActivateForNextCommittedLoad_ParamsDataView::GetActivationStateDataView(
    ::subresource_filter::mojom::ActivationStateDataView* output) {
  auto pointer = data_->activation_state.Get();
  *output = ::subresource_filter::mojom::ActivationStateDataView(pointer, message_);
}
inline void SubresourceFilterAgent_ActivateForNextCommittedLoad_ParamsDataView::GetAdEvidenceDataView(
    ::blink::mojom::FrameAdEvidenceDataView* output) {
  auto pointer = data_->ad_evidence.Get();
  *output = ::blink::mojom::FrameAdEvidenceDataView(pointer, message_);
}








inline void SubresourceFilterHost_AdScriptDidCreateFencedFrame_ParamsDataView::GetFencedFrameRootPlaceholderTokenDataView(
    ::blink::mojom::RemoteFrameTokenDataView* output) {
  auto pointer = data_->fenced_frame_root_placeholder_token.Get();
  *output = ::blink::mojom::RemoteFrameTokenDataView(pointer, message_);
}


inline void SubresourceFilterHost_SetDocumentLoadStatistics_ParamsDataView::GetStatisticsDataView(
    ::subresource_filter::mojom::DocumentLoadStatisticsDataView* output) {
  auto pointer = data_->statistics.Get();
  *output = ::subresource_filter::mojom::DocumentLoadStatisticsDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace subresource_filter

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // COMPONENTS_SUBRESOURCE_FILTER_CONTENT_MOJOM_SUBRESOURCE_FILTER_MOJOM_PARAMS_DATA_H_