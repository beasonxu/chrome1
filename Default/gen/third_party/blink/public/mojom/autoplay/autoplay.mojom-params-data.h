// third_party/blink/public/mojom/autoplay/autoplay.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AutoplayConfigurationClient_AddAutoplayFlags_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t flags;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<AutoplayConfigurationClient_AddAutoplayFlags_Params_Data>;

  AutoplayConfigurationClient_AddAutoplayFlags_Params_Data();
  ~AutoplayConfigurationClient_AddAutoplayFlags_Params_Data() = delete;
};
static_assert(sizeof(AutoplayConfigurationClient_AddAutoplayFlags_Params_Data) == 24,
              "Bad sizeof(AutoplayConfigurationClient_AddAutoplayFlags_Params_Data)");

}  // namespace internal


class AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView {
 public:
  AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView() = default;

  AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView(
      internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOrigin(UserType* output) {
    
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, message_);
  }
  int32_t flags() const {
    return data_->flags;
  }
 private:
  internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_PARAMS_DATA_H_