// content/public/common/trust_tokens.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_TRUST_TOKENS_MOJOM_PARAMS_DATA_H_
#define CONTENT_PUBLIC_COMMON_TRUST_TOKENS_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace content {
namespace mojom {
namespace internal {

class ValidationContext;
class  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::FulfillTrustTokenIssuanceRequest_Data> request;

 private:
  friend class mojo::internal::MessageFragment<LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data>;

  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data();
  ~LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data() = delete;
};
static_assert(sizeof(LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data) == 16,
              "Bad sizeof(LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data)");
class  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::FulfillTrustTokenIssuanceAnswer_Data> answer;

 private:
  friend class mojo::internal::MessageFragment<LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data>;

  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data();
  ~LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data() = delete;
};
static_assert(sizeof(LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data) == 16,
              "Bad sizeof(LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data)");

}  // namespace internal


class LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ParamsDataView {
 public:
  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ParamsDataView() = default;

  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ParamsDataView(
      internal::LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::network::mojom::FulfillTrustTokenIssuanceRequestDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRequest(UserType* output) {
    
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::network::mojom::FulfillTrustTokenIssuanceRequestDataView>(
        pointer, output, message_);
  }
 private:
  internal::LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParamsDataView {
 public:
  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParamsDataView() = default;

  LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParamsDataView(
      internal::LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetAnswerDataView(
      ::network::mojom::FulfillTrustTokenIssuanceAnswerDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAnswer(UserType* output) {
    
    auto* pointer = data_->answer.Get();
    return mojo::internal::Deserialize<::network::mojom::FulfillTrustTokenIssuanceAnswerDataView>(
        pointer, output, message_);
  }
 private:
  internal::LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ParamsDataView::GetRequestDataView(
    ::network::mojom::FulfillTrustTokenIssuanceRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::network::mojom::FulfillTrustTokenIssuanceRequestDataView(pointer, message_);
}


inline void LocalTrustTokenFulfiller_FulfillTrustTokenIssuance_ResponseParamsDataView::GetAnswerDataView(
    ::network::mojom::FulfillTrustTokenIssuanceAnswerDataView* output) {
  auto pointer = data_->answer.Get();
  *output = ::network::mojom::FulfillTrustTokenIssuanceAnswerDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CONTENT_PUBLIC_COMMON_TRUST_TOKENS_MOJOM_PARAMS_DATA_H_