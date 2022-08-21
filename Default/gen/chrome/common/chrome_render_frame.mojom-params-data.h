// chrome/common/chrome_render_frame.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_PARAMS_DATA_H_
#define CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace chrome {
namespace mojom {
namespace internal {

class ValidationContext;
class  ChromeRenderFrame_SetWindowFeatures_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::WindowFeatures_Data> window_features;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_SetWindowFeatures_Params_Data>;

  ChromeRenderFrame_SetWindowFeatures_Params_Data();
  ~ChromeRenderFrame_SetWindowFeatures_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_SetWindowFeatures_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_SetWindowFeatures_Params_Data)");
class  ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data>;

  ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data();
  ~ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data) == 8,
              "Bad sizeof(ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data)");
class  ChromeRenderFrame_RequestImageForContextNode_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t image_min_area_pixels;
  int32_t image_format;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> image_max_size_pixels;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_RequestImageForContextNode_Params_Data>;

  ChromeRenderFrame_RequestImageForContextNode_Params_Data();
  ~ChromeRenderFrame_RequestImageForContextNode_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_RequestImageForContextNode_Params_Data) == 24,
              "Bad sizeof(ChromeRenderFrame_RequestImageForContextNode_Params_Data)");
class  ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> image_data;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> original_size;
  mojo::internal::Pointer<mojo::internal::String_Data> encoded_extension;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data>;

  ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data();
  ~ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data) == 32,
              "Bad sizeof(ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data)");
class  ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> javascript;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data>;

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data();
  ~ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data)");
class  ChromeRenderFrame_SetCCTClientHeader_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> header;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_SetCCTClientHeader_Params_Data>;

  ChromeRenderFrame_SetCCTClientHeader_Params_Data();
  ~ChromeRenderFrame_SetCCTClientHeader_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_SetCCTClientHeader_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_SetCCTClientHeader_Params_Data)");
class  ChromeRenderFrame_GetMediaFeedURL_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_GetMediaFeedURL_Params_Data>;

  ChromeRenderFrame_GetMediaFeedURL_Params_Data();
  ~ChromeRenderFrame_GetMediaFeedURL_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_GetMediaFeedURL_Params_Data) == 8,
              "Bad sizeof(ChromeRenderFrame_GetMediaFeedURL_Params_Data)");
class  ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data>;

  ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data();
  ~ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data)");
class  ChromeRenderFrame_LoadBlockedPlugins_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> identifier;

 private:
  friend class mojo::internal::MessageFragment<ChromeRenderFrame_LoadBlockedPlugins_Params_Data>;

  ChromeRenderFrame_LoadBlockedPlugins_Params_Data();
  ~ChromeRenderFrame_LoadBlockedPlugins_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_LoadBlockedPlugins_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_LoadBlockedPlugins_Params_Data)");

}  // namespace internal


class ChromeRenderFrame_SetWindowFeatures_ParamsDataView {
 public:
  ChromeRenderFrame_SetWindowFeatures_ParamsDataView() = default;

  ChromeRenderFrame_SetWindowFeatures_ParamsDataView(
      internal::ChromeRenderFrame_SetWindowFeatures_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetWindowFeaturesDataView(
      ::blink::mojom::WindowFeaturesDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadWindowFeatures(UserType* output) {
    
    auto* pointer = data_->window_features.Get();
    return mojo::internal::Deserialize<::blink::mojom::WindowFeaturesDataView>(
        pointer, output, message_);
  }
 private:
  internal::ChromeRenderFrame_SetWindowFeatures_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView {
 public:
  ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView() = default;

  ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView(
      internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* data_ = nullptr;
};



class ChromeRenderFrame_RequestImageForContextNode_ParamsDataView {
 public:
  ChromeRenderFrame_RequestImageForContextNode_ParamsDataView() = default;

  ChromeRenderFrame_RequestImageForContextNode_ParamsDataView(
      internal::ChromeRenderFrame_RequestImageForContextNode_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  int32_t image_min_area_pixels() const {
    return data_->image_min_area_pixels;
  }
  inline void GetImageMaxSizePixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImageMaxSizePixels(UserType* output) {
    
    auto* pointer = data_->image_max_size_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadImageFormat(UserType* output) const {
    auto data_value = data_->image_format;
    return mojo::internal::Deserialize<::chrome::mojom::ImageFormat>(
        data_value, output);
  }
  ImageFormat image_format() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::chrome::mojom::ImageFormat>(data_->image_format));
  }
 private:
  internal::ChromeRenderFrame_RequestImageForContextNode_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChromeRenderFrame_RequestImageForContextNode_ResponseParamsDataView {
 public:
  ChromeRenderFrame_RequestImageForContextNode_ResponseParamsDataView() = default;

  ChromeRenderFrame_RequestImageForContextNode_ResponseParamsDataView(
      internal::ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImageData(UserType* output) {
    
    auto* pointer = data_->image_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
  inline void GetOriginalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOriginalSize(UserType* output) {
    
    auto* pointer = data_->original_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, message_);
  }
  inline void GetEncodedExtensionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadEncodedExtension(UserType* output) {
    
    auto* pointer = data_->encoded_extension.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::ChromeRenderFrame_RequestImageForContextNode_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView {
 public:
  ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView() = default;

  ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView(
      internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetJavascriptDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadJavascript(UserType* output) {
    
    auto* pointer = data_->javascript.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, message_);
  }
 private:
  internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChromeRenderFrame_SetCCTClientHeader_ParamsDataView {
 public:
  ChromeRenderFrame_SetCCTClientHeader_ParamsDataView() = default;

  ChromeRenderFrame_SetCCTClientHeader_ParamsDataView(
      internal::ChromeRenderFrame_SetCCTClientHeader_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetHeaderDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadHeader(UserType* output) {
    
    auto* pointer = data_->header.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::ChromeRenderFrame_SetCCTClientHeader_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChromeRenderFrame_GetMediaFeedURL_ParamsDataView {
 public:
  ChromeRenderFrame_GetMediaFeedURL_ParamsDataView() = default;

  ChromeRenderFrame_GetMediaFeedURL_ParamsDataView(
      internal::ChromeRenderFrame_GetMediaFeedURL_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChromeRenderFrame_GetMediaFeedURL_Params_Data* data_ = nullptr;
};



class ChromeRenderFrame_GetMediaFeedURL_ResponseParamsDataView {
 public:
  ChromeRenderFrame_GetMediaFeedURL_ResponseParamsDataView() = default;

  ChromeRenderFrame_GetMediaFeedURL_ResponseParamsDataView(
      internal::ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::url::mojom::UrlDataView, UserType>(),
    "Attempting to read the optional `url` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadUrl` instead "
    "of `ReadUrl if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
 private:
  internal::ChromeRenderFrame_GetMediaFeedURL_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChromeRenderFrame_LoadBlockedPlugins_ParamsDataView {
 public:
  ChromeRenderFrame_LoadBlockedPlugins_ParamsDataView() = default;

  ChromeRenderFrame_LoadBlockedPlugins_ParamsDataView(
      internal::ChromeRenderFrame_LoadBlockedPlugins_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdentifierDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadIdentifier(UserType* output) {
    
    auto* pointer = data_->identifier.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::ChromeRenderFrame_LoadBlockedPlugins_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void ChromeRenderFrame_SetWindowFeatures_ParamsDataView::GetWindowFeaturesDataView(
    ::blink::mojom::WindowFeaturesDataView* output) {
  auto pointer = data_->window_features.Get();
  *output = ::blink::mojom::WindowFeaturesDataView(pointer, message_);
}




inline void ChromeRenderFrame_RequestImageForContextNode_ParamsDataView::GetImageMaxSizePixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->image_max_size_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, message_);
}


inline void ChromeRenderFrame_RequestImageForContextNode_ResponseParamsDataView::GetImageDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->image_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}
inline void ChromeRenderFrame_RequestImageForContextNode_ResponseParamsDataView::GetOriginalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->original_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, message_);
}
inline void ChromeRenderFrame_RequestImageForContextNode_ResponseParamsDataView::GetEncodedExtensionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->encoded_extension.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView::GetJavascriptDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->javascript.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, message_);
}


inline void ChromeRenderFrame_SetCCTClientHeader_ParamsDataView::GetHeaderDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header.Get();
  *output = mojo::StringDataView(pointer, message_);
}




inline void ChromeRenderFrame_GetMediaFeedURL_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}


inline void ChromeRenderFrame_LoadBlockedPlugins_ParamsDataView::GetIdentifierDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->identifier.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace chrome

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_PARAMS_DATA_H_