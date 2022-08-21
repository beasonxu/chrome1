// skia/public/mojom/image_info.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_MOJOM_IMAGE_INFO_MOJOM_SHARED_INTERNAL_H_
#define SKIA_PUBLIC_MOJOM_IMAGE_INFO_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace skia {
namespace mojom {
namespace internal {
class ImageInfo_Data;
class BitmapN32ImageInfo_Data;

struct ColorType_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct AlphaType_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  ImageInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t color_type;
  int32_t alpha_type;
  uint32_t width;
  uint32_t height;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> color_transfer_function;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> color_to_xyz_matrix;

 private:
  friend class mojo::internal::MessageFragment<ImageInfo_Data>;

  ImageInfo_Data();
  ~ImageInfo_Data() = delete;
};
static_assert(sizeof(ImageInfo_Data) == 40,
              "Bad sizeof(ImageInfo_Data)");
// Used by ImageInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ImageInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ImageInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ImageInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ImageInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ImageInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  BitmapN32ImageInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t alpha_type;
  uint32_t width;
  uint32_t height;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> color_transfer_function;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> color_to_xyz_matrix;

 private:
  friend class mojo::internal::MessageFragment<BitmapN32ImageInfo_Data>;

  BitmapN32ImageInfo_Data();
  ~BitmapN32ImageInfo_Data() = delete;
};
static_assert(sizeof(BitmapN32ImageInfo_Data) == 40,
              "Bad sizeof(BitmapN32ImageInfo_Data)");
// Used by BitmapN32ImageInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BitmapN32ImageInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BitmapN32ImageInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BitmapN32ImageInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<BitmapN32ImageInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BitmapN32ImageInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_MOJOM_IMAGE_INFO_MOJOM_SHARED_INTERNAL_H_