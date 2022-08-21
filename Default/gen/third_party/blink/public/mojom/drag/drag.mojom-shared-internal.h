// third_party/blink/public/mojom/drag/drag.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DRAG_DRAG_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DRAG_DRAG_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "services/network/public/mojom/referrer_policy.mojom-shared-internal.h"
#include "ui/base/dragdrop/mojom/drag_drop_types.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/data_transfer/data_transfer.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class AllowedDragOperations_Data;
class DragItemString_Data;
class DragItemBinary_Data;
class DragItemFileSystemFile_Data;
class DragData_Data;
class DragEventSourceInfo_Data;
class DragItem_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DragItem_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  DragItem_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~DragItem_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<DragItem_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class DragItem_Tag : uint32_t {

    
    kString,
    
    kFile,
    
    kBinary,
    
    kFileSystemFile,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::DragItemString_Data> f_string;
    mojo::internal::Pointer<::blink::mojom::internal::DataTransferFile_Data> f_file;
    mojo::internal::Pointer<internal::DragItemBinary_Data> f_binary;
    mojo::internal::Pointer<internal::DragItemFileSystemFile_Data> f_file_system_file;
    uint64_t unknown;
  };

  uint32_t size;
  DragItem_Tag tag;
  Union_ data;
};
static_assert(sizeof(DragItem_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(DragItem_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AllowedDragOperations_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allow_copy : 1;
  uint8_t allow_link : 1;
  uint8_t allow_move : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<AllowedDragOperations_Data>;

  AllowedDragOperations_Data();
  ~AllowedDragOperations_Data() = delete;
};
static_assert(sizeof(AllowedDragOperations_Data) == 16,
              "Bad sizeof(AllowedDragOperations_Data)");
// Used by AllowedDragOperations::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AllowedDragOperations_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AllowedDragOperations_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AllowedDragOperations_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<AllowedDragOperations_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AllowedDragOperations_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DragItemString_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> string_type;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString16_Data> string_data;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> base_url;

 private:
  friend class mojo::internal::MessageFragment<DragItemString_Data>;

  DragItemString_Data();
  ~DragItemString_Data() = delete;
};
static_assert(sizeof(DragItemString_Data) == 40,
              "Bad sizeof(DragItemString_Data)");
// Used by DragItemString::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DragItemString_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DragItemString_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DragItemString_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DragItemString_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DragItemString_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DragItemBinary_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::mojo_base::mojom::internal::BigBuffer_Data data;
  uint8_t is_image_accessible : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> filename_extension;
  mojo::internal::Pointer<mojo::internal::String_Data> content_disposition;

 private:
  friend class mojo::internal::MessageFragment<DragItemBinary_Data>;

  DragItemBinary_Data();
  ~DragItemBinary_Data() = delete;
};
static_assert(sizeof(DragItemBinary_Data) == 56,
              "Bad sizeof(DragItemBinary_Data)");
// Used by DragItemBinary::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DragItemBinary_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DragItemBinary_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DragItemBinary_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DragItemBinary_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DragItemBinary_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DragItemFileSystemFile_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int64_t size;
  mojo::internal::Pointer<mojo::internal::String_Data> file_system_id;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> serialized_blob;

 private:
  friend class mojo::internal::MessageFragment<DragItemFileSystemFile_Data>;

  DragItemFileSystemFile_Data();
  ~DragItemFileSystemFile_Data() = delete;
};
static_assert(sizeof(DragItemFileSystemFile_Data) == 40,
              "Bad sizeof(DragItemFileSystemFile_Data)");
// Used by DragItemFileSystemFile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DragItemFileSystemFile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DragItemFileSystemFile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DragItemFileSystemFile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DragItemFileSystemFile_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DragItemFileSystemFile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DragData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::DragItem_Data>> items;
  mojo::internal::Pointer<mojo::internal::String_Data> file_system_id;
  int32_t referrer_policy;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<DragData_Data>;

  DragData_Data();
  ~DragData_Data() = delete;
};
static_assert(sizeof(DragData_Data) == 32,
              "Bad sizeof(DragData_Data)");
// Used by DragData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DragData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DragData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DragData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DragData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DragData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DragEventSourceInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> location;
  int32_t source;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<DragEventSourceInfo_Data>;

  DragEventSourceInfo_Data();
  ~DragEventSourceInfo_Data() = delete;
};
static_assert(sizeof(DragEventSourceInfo_Data) == 24,
              "Bad sizeof(DragEventSourceInfo_Data)");
// Used by DragEventSourceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DragEventSourceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DragEventSourceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DragEventSourceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DragEventSourceInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DragEventSourceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DRAG_DRAG_MOJOM_SHARED_INTERNAL_H_