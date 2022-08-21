// skia/public/mojom/bitmap.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_MOJOM_BITMAP_MOJOM_SHARED_H_
#define SKIA_PUBLIC_MOJOM_BITMAP_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "skia/public/mojom/bitmap.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "skia/public/mojom/image_info.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace skia {
namespace mojom {
class BitmapN32DataView;

class BitmapWithArbitraryBppDataView;

class BitmapMappedFromTrustedProcessDataView;

class InlineBitmapDataView;



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::skia::mojom::BitmapN32DataView> {
  using Data = ::skia::mojom::internal::BitmapN32_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::skia::mojom::BitmapWithArbitraryBppDataView> {
  using Data = ::skia::mojom::internal::BitmapWithArbitraryBpp_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::skia::mojom::BitmapMappedFromTrustedProcessDataView> {
  using Data = ::skia::mojom::internal::BitmapMappedFromTrustedProcess_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::skia::mojom::InlineBitmapDataView> {
  using Data = ::skia::mojom::internal::InlineBitmap_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace skia {
namespace mojom {


class BitmapN32DataView {
 public:
  BitmapN32DataView() = default;

  BitmapN32DataView(
      internal::BitmapN32_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetImageInfoDataView(
      ::skia::mojom::BitmapN32ImageInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImageInfo(UserType* output) {
    
    auto* pointer = data_->image_info.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapN32ImageInfoDataView>(
        pointer, output, message_);
  }
  inline void GetPixelDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPixelData(UserType* output) {
    
    auto* pointer = !data_->pixel_data.is_null() ? &data_->pixel_data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, message_);
  }
 private:
  internal::BitmapN32_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class BitmapWithArbitraryBppDataView {
 public:
  BitmapWithArbitraryBppDataView() = default;

  BitmapWithArbitraryBppDataView(
      internal::BitmapWithArbitraryBpp_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetImageInfoDataView(
      ::skia::mojom::ImageInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImageInfo(UserType* output) {
    
    auto* pointer = data_->image_info.Get();
    return mojo::internal::Deserialize<::skia::mojom::ImageInfoDataView>(
        pointer, output, message_);
  }
  uint64_t UNUSED_row_bytes() const {
    return data_->UNUSED_row_bytes;
  }
  inline void GetPixelDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPixelData(UserType* output) {
    
    auto* pointer = !data_->pixel_data.is_null() ? &data_->pixel_data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, message_);
  }
 private:
  internal::BitmapWithArbitraryBpp_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class BitmapMappedFromTrustedProcessDataView {
 public:
  BitmapMappedFromTrustedProcessDataView() = default;

  BitmapMappedFromTrustedProcessDataView(
      internal::BitmapMappedFromTrustedProcess_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetImageInfoDataView(
      ::skia::mojom::ImageInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImageInfo(UserType* output) {
    
    auto* pointer = data_->image_info.Get();
    return mojo::internal::Deserialize<::skia::mojom::ImageInfoDataView>(
        pointer, output, message_);
  }
  uint64_t UNUSED_row_bytes() const {
    return data_->UNUSED_row_bytes;
  }
  inline void GetPixelDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPixelData(UserType* output) {
    
    auto* pointer = !data_->pixel_data.is_null() ? &data_->pixel_data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, message_);
  }
 private:
  internal::BitmapMappedFromTrustedProcess_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class InlineBitmapDataView {
 public:
  InlineBitmapDataView() = default;

  InlineBitmapDataView(
      internal::InlineBitmap_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetImageInfoDataView(
      ::skia::mojom::BitmapN32ImageInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImageInfo(UserType* output) {
    
    auto* pointer = data_->image_info.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapN32ImageInfoDataView>(
        pointer, output, message_);
  }
  inline void GetPixelDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPixelData(UserType* output) {
    
    auto* pointer = data_->pixel_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::InlineBitmap_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::BitmapN32DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::BitmapN32DataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::skia::mojom::internal::BitmapN32_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::image_info(input)) in_image_info = Traits::image_info(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->image_info)::BaseType> image_info_fragment(
            fragment.message());
    mojo::internal::Serialize<::skia::mojom::BitmapN32ImageInfoDataView>(
        in_image_info, image_info_fragment);
    fragment->image_info.Set(
        image_info_fragment.is_null() ? nullptr : image_info_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->image_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_info in BitmapN32 struct");
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    mojo::internal::MessageFragment<decltype(fragment->pixel_data)>
        pixel_data_fragment(fragment.message());
    pixel_data_fragment.Claim(&fragment->pixel_data);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_pixel_data, pixel_data_fragment, true);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in BitmapN32 struct");
  }

  static bool Deserialize(::skia::mojom::internal::BitmapN32_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::BitmapN32DataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::BitmapWithArbitraryBppDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::BitmapWithArbitraryBppDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::skia::mojom::internal::BitmapWithArbitraryBpp_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::image_info(input)) in_image_info = Traits::image_info(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->image_info)::BaseType> image_info_fragment(
            fragment.message());
    mojo::internal::Serialize<::skia::mojom::ImageInfoDataView>(
        in_image_info, image_info_fragment);
    fragment->image_info.Set(
        image_info_fragment.is_null() ? nullptr : image_info_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->image_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_info in BitmapWithArbitraryBpp struct");
    fragment->UNUSED_row_bytes = Traits::UNUSED_row_bytes(input);
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    mojo::internal::MessageFragment<decltype(fragment->pixel_data)>
        pixel_data_fragment(fragment.message());
    pixel_data_fragment.Claim(&fragment->pixel_data);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_pixel_data, pixel_data_fragment, true);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in BitmapWithArbitraryBpp struct");
  }

  static bool Deserialize(::skia::mojom::internal::BitmapWithArbitraryBpp_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::BitmapWithArbitraryBppDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::BitmapMappedFromTrustedProcessDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::BitmapMappedFromTrustedProcessDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::skia::mojom::internal::BitmapMappedFromTrustedProcess_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::image_info(input)) in_image_info = Traits::image_info(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->image_info)::BaseType> image_info_fragment(
            fragment.message());
    mojo::internal::Serialize<::skia::mojom::ImageInfoDataView>(
        in_image_info, image_info_fragment);
    fragment->image_info.Set(
        image_info_fragment.is_null() ? nullptr : image_info_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->image_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_info in BitmapMappedFromTrustedProcess struct");
    fragment->UNUSED_row_bytes = Traits::UNUSED_row_bytes(input);
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    mojo::internal::MessageFragment<decltype(fragment->pixel_data)>
        pixel_data_fragment(fragment.message());
    pixel_data_fragment.Claim(&fragment->pixel_data);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_pixel_data, pixel_data_fragment, true);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in BitmapMappedFromTrustedProcess struct");
  }

  static bool Deserialize(::skia::mojom::internal::BitmapMappedFromTrustedProcess_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::BitmapMappedFromTrustedProcessDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::InlineBitmapDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::InlineBitmapDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::skia::mojom::internal::InlineBitmap_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::image_info(input)) in_image_info = Traits::image_info(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->image_info)::BaseType> image_info_fragment(
            fragment.message());
    mojo::internal::Serialize<::skia::mojom::BitmapN32ImageInfoDataView>(
        in_image_info, image_info_fragment);
    fragment->image_info.Set(
        image_info_fragment.is_null() ? nullptr : image_info_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->image_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_info in InlineBitmap struct");
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->pixel_data)::BaseType>
        pixel_data_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams pixel_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_pixel_data, pixel_data_fragment, &pixel_data_validate_params);
    fragment->pixel_data.Set(
        pixel_data_fragment.is_null() ? nullptr : pixel_data_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in InlineBitmap struct");
  }

  static bool Deserialize(::skia::mojom::internal::InlineBitmap_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::InlineBitmapDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace skia {
namespace mojom {

inline void BitmapN32DataView::GetImageInfoDataView(
    ::skia::mojom::BitmapN32ImageInfoDataView* output) {
  auto pointer = data_->image_info.Get();
  *output = ::skia::mojom::BitmapN32ImageInfoDataView(pointer, message_);
}
inline void BitmapN32DataView::GetPixelDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->pixel_data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, message_);
}


inline void BitmapWithArbitraryBppDataView::GetImageInfoDataView(
    ::skia::mojom::ImageInfoDataView* output) {
  auto pointer = data_->image_info.Get();
  *output = ::skia::mojom::ImageInfoDataView(pointer, message_);
}
inline void BitmapWithArbitraryBppDataView::GetPixelDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->pixel_data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, message_);
}


inline void BitmapMappedFromTrustedProcessDataView::GetImageInfoDataView(
    ::skia::mojom::ImageInfoDataView* output) {
  auto pointer = data_->image_info.Get();
  *output = ::skia::mojom::ImageInfoDataView(pointer, message_);
}
inline void BitmapMappedFromTrustedProcessDataView::GetPixelDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->pixel_data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, message_);
}


inline void InlineBitmapDataView::GetImageInfoDataView(
    ::skia::mojom::BitmapN32ImageInfoDataView* output) {
  auto pointer = data_->image_info.Get();
  *output = ::skia::mojom::BitmapN32ImageInfoDataView(pointer, message_);
}
inline void InlineBitmapDataView::GetPixelDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->pixel_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}



}  // namespace mojom
}  // namespace skia

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SKIA_PUBLIC_MOJOM_BITMAP_MOJOM_SHARED_H_