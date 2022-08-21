// content/common/renderer_variations_configuration.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_VARIATIONS_CONFIGURATION_MOJOM_PARAMS_DATA_H_
#define CONTENT_COMMON_RENDERER_VARIATIONS_CONFIGURATION_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererVariationsConfiguration_SetVariationsHeaders_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::variations::mojom::internal::VariationsHeaders_Data> variations_headers;

 private:
  friend class mojo::internal::MessageFragment<RendererVariationsConfiguration_SetVariationsHeaders_Params_Data>;

  RendererVariationsConfiguration_SetVariationsHeaders_Params_Data();
  ~RendererVariationsConfiguration_SetVariationsHeaders_Params_Data() = delete;
};
static_assert(sizeof(RendererVariationsConfiguration_SetVariationsHeaders_Params_Data) == 16,
              "Bad sizeof(RendererVariationsConfiguration_SetVariationsHeaders_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> trial_name;
  mojo::internal::Pointer<mojo::internal::String_Data> group_name;

 private:
  friend class mojo::internal::MessageFragment<RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data>;

  RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data();
  ~RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data() = delete;
};
static_assert(sizeof(RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data) == 24,
              "Bad sizeof(RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data)");

}  // namespace internal


class RendererVariationsConfiguration_SetVariationsHeaders_ParamsDataView {
 public:
  RendererVariationsConfiguration_SetVariationsHeaders_ParamsDataView() = default;

  RendererVariationsConfiguration_SetVariationsHeaders_ParamsDataView(
      internal::RendererVariationsConfiguration_SetVariationsHeaders_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetVariationsHeadersDataView(
      ::variations::mojom::VariationsHeadersDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadVariationsHeaders(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::variations::mojom::VariationsHeadersDataView, UserType>(),
    "Attempting to read the optional `variations_headers` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadVariationsHeaders` instead "
    "of `ReadVariationsHeaders if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->variations_headers.Get();
    return mojo::internal::Deserialize<::variations::mojom::VariationsHeadersDataView>(
        pointer, output, message_);
  }
 private:
  internal::RendererVariationsConfiguration_SetVariationsHeaders_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class RendererVariationsConfiguration_SetFieldTrialGroup_ParamsDataView {
 public:
  RendererVariationsConfiguration_SetFieldTrialGroup_ParamsDataView() = default;

  RendererVariationsConfiguration_SetFieldTrialGroup_ParamsDataView(
      internal::RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTrialNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTrialName(UserType* output) {
    
    auto* pointer = data_->trial_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetGroupNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadGroupName(UserType* output) {
    
    auto* pointer = data_->group_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::RendererVariationsConfiguration_SetFieldTrialGroup_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void RendererVariationsConfiguration_SetVariationsHeaders_ParamsDataView::GetVariationsHeadersDataView(
    ::variations::mojom::VariationsHeadersDataView* output) {
  auto pointer = data_->variations_headers.Get();
  *output = ::variations::mojom::VariationsHeadersDataView(pointer, message_);
}


inline void RendererVariationsConfiguration_SetFieldTrialGroup_ParamsDataView::GetTrialNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trial_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void RendererVariationsConfiguration_SetFieldTrialGroup_ParamsDataView::GetGroupNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CONTENT_COMMON_RENDERER_VARIATIONS_CONFIGURATION_MOJOM_PARAMS_DATA_H_