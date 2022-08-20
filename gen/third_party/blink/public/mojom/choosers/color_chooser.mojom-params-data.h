// third_party/blink/public/mojom/choosers/color_chooser.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooserFactory_OpenColorChooser_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data chooser;
  mojo::internal::Interface_Data client;
  uint32_t color;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ColorSuggestion_Data>>> suggestions;

 private:
  friend class mojo::internal::MessageFragment<ColorChooserFactory_OpenColorChooser_Params_Data>;

  ColorChooserFactory_OpenColorChooser_Params_Data();
  ~ColorChooserFactory_OpenColorChooser_Params_Data() = delete;
};
static_assert(sizeof(ColorChooserFactory_OpenColorChooser_Params_Data) == 32,
              "Bad sizeof(ColorChooserFactory_OpenColorChooser_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooser_SetSelectedColor_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<ColorChooser_SetSelectedColor_Params_Data>;

  ColorChooser_SetSelectedColor_Params_Data();
  ~ColorChooser_SetSelectedColor_Params_Data() = delete;
};
static_assert(sizeof(ColorChooser_SetSelectedColor_Params_Data) == 16,
              "Bad sizeof(ColorChooser_SetSelectedColor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooserClient_DidChooseColor_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<ColorChooserClient_DidChooseColor_Params_Data>;

  ColorChooserClient_DidChooseColor_Params_Data();
  ~ColorChooserClient_DidChooseColor_Params_Data() = delete;
};
static_assert(sizeof(ColorChooserClient_DidChooseColor_Params_Data) == 16,
              "Bad sizeof(ColorChooserClient_DidChooseColor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EyeDropperChooser_Choose_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<EyeDropperChooser_Choose_Params_Data>;

  EyeDropperChooser_Choose_Params_Data();
  ~EyeDropperChooser_Choose_Params_Data() = delete;
};
static_assert(sizeof(EyeDropperChooser_Choose_Params_Data) == 8,
              "Bad sizeof(EyeDropperChooser_Choose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EyeDropperChooser_Choose_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  uint32_t color;

 private:
  friend class mojo::internal::MessageFragment<EyeDropperChooser_Choose_ResponseParams_Data>;

  EyeDropperChooser_Choose_ResponseParams_Data();
  ~EyeDropperChooser_Choose_ResponseParams_Data() = delete;
};
static_assert(sizeof(EyeDropperChooser_Choose_ResponseParams_Data) == 16,
              "Bad sizeof(EyeDropperChooser_Choose_ResponseParams_Data)");

}  // namespace internal


class ColorChooserFactory_OpenColorChooser_ParamsDataView {
 public:
  ColorChooserFactory_OpenColorChooser_ParamsDataView() = default;

  ColorChooserFactory_OpenColorChooser_ParamsDataView(
      internal::ColorChooserFactory_OpenColorChooser_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeChooser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::blink::mojom::ColorChooserInterfaceBase>>(
            &data_->chooser, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::ColorChooserClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
  uint32_t color() const {
    return data_->color;
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<ColorSuggestionDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSuggestions(UserType* output) {
    
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ColorSuggestionDataView>>(
        pointer, output, message_);
  }
 private:
  internal::ColorChooserFactory_OpenColorChooser_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ColorChooser_SetSelectedColor_ParamsDataView {
 public:
  ColorChooser_SetSelectedColor_ParamsDataView() = default;

  ColorChooser_SetSelectedColor_ParamsDataView(
      internal::ColorChooser_SetSelectedColor_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::ColorChooser_SetSelectedColor_Params_Data* data_ = nullptr;
};



class ColorChooserClient_DidChooseColor_ParamsDataView {
 public:
  ColorChooserClient_DidChooseColor_ParamsDataView() = default;

  ColorChooserClient_DidChooseColor_ParamsDataView(
      internal::ColorChooserClient_DidChooseColor_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::ColorChooserClient_DidChooseColor_Params_Data* data_ = nullptr;
};



class EyeDropperChooser_Choose_ParamsDataView {
 public:
  EyeDropperChooser_Choose_ParamsDataView() = default;

  EyeDropperChooser_Choose_ParamsDataView(
      internal::EyeDropperChooser_Choose_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EyeDropperChooser_Choose_Params_Data* data_ = nullptr;
};



class EyeDropperChooser_Choose_ResponseParamsDataView {
 public:
  EyeDropperChooser_Choose_ResponseParamsDataView() = default;

  EyeDropperChooser_Choose_ResponseParamsDataView(
      internal::EyeDropperChooser_Choose_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::EyeDropperChooser_Choose_ResponseParams_Data* data_ = nullptr;
};


inline void ColorChooserFactory_OpenColorChooser_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<ColorSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<ColorSuggestionDataView>(pointer, message_);
}









}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_PARAMS_DATA_H_