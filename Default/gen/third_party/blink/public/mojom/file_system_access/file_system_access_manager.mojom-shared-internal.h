// third_party/blink/public/mojom/file_system_access/file_system_access_manager.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_MANAGER_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_directory_handle.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_file_handle.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_error.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_transfer_token.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/file_system_access/file_system_access_data_transfer_token.mojom-shared-internal.h"
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
class ChooseFileSystemEntryAcceptsOption_Data;
class AcceptsTypesInfo_Data;
class OpenFilePickerOptions_Data;
class SaveFilePickerOptions_Data;
class DirectoryPickerOptions_Data;
class CommonFilePickerOptions_Data;
class FilePickerOptions_Data;

struct WellKnownDirectory_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
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


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FilePickerOptions_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  FilePickerOptions_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~FilePickerOptions_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<FilePickerOptions_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class FilePickerOptions_Tag : uint32_t {

    
    kOpenFilePickerOptions,
    
    kSaveFilePickerOptions,
    
    kDirectoryPickerOptions,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::OpenFilePickerOptions_Data> f_open_file_picker_options;
    mojo::internal::Pointer<internal::SaveFilePickerOptions_Data> f_save_file_picker_options;
    mojo::internal::Pointer<internal::DirectoryPickerOptions_Data> f_directory_picker_options;
    uint64_t unknown;
  };

  uint32_t size;
  FilePickerOptions_Tag tag;
  Union_ data;
};
static_assert(sizeof(FilePickerOptions_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(FilePickerOptions_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ChooseFileSystemEntryAcceptsOption_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> description;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> mime_types;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> extensions;

 private:
  friend class mojo::internal::MessageFragment<ChooseFileSystemEntryAcceptsOption_Data>;

  ChooseFileSystemEntryAcceptsOption_Data();
  ~ChooseFileSystemEntryAcceptsOption_Data() = delete;
};
static_assert(sizeof(ChooseFileSystemEntryAcceptsOption_Data) == 32,
              "Bad sizeof(ChooseFileSystemEntryAcceptsOption_Data)");
// Used by ChooseFileSystemEntryAcceptsOption::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChooseFileSystemEntryAcceptsOption_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChooseFileSystemEntryAcceptsOption_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChooseFileSystemEntryAcceptsOption_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ChooseFileSystemEntryAcceptsOption_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChooseFileSystemEntryAcceptsOption_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AcceptsTypesInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChooseFileSystemEntryAcceptsOption_Data>>> accepts;
  uint8_t include_accepts_all : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<AcceptsTypesInfo_Data>;

  AcceptsTypesInfo_Data();
  ~AcceptsTypesInfo_Data() = delete;
};
static_assert(sizeof(AcceptsTypesInfo_Data) == 24,
              "Bad sizeof(AcceptsTypesInfo_Data)");
// Used by AcceptsTypesInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AcceptsTypesInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AcceptsTypesInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AcceptsTypesInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<AcceptsTypesInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AcceptsTypesInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) OpenFilePickerOptions_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AcceptsTypesInfo_Data> accepts_types_info;
  uint8_t can_select_multiple_files : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<OpenFilePickerOptions_Data>;

  OpenFilePickerOptions_Data();
  ~OpenFilePickerOptions_Data() = delete;
};
static_assert(sizeof(OpenFilePickerOptions_Data) == 24,
              "Bad sizeof(OpenFilePickerOptions_Data)");
// Used by OpenFilePickerOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OpenFilePickerOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OpenFilePickerOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OpenFilePickerOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<OpenFilePickerOptions_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OpenFilePickerOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SaveFilePickerOptions_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AcceptsTypesInfo_Data> accepts_types_info;
  mojo::internal::Pointer<mojo::internal::String_Data> suggested_name;

 private:
  friend class mojo::internal::MessageFragment<SaveFilePickerOptions_Data>;

  SaveFilePickerOptions_Data();
  ~SaveFilePickerOptions_Data() = delete;
};
static_assert(sizeof(SaveFilePickerOptions_Data) == 24,
              "Bad sizeof(SaveFilePickerOptions_Data)");
// Used by SaveFilePickerOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SaveFilePickerOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SaveFilePickerOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SaveFilePickerOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<SaveFilePickerOptions_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SaveFilePickerOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DirectoryPickerOptions_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t request_writable : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<DirectoryPickerOptions_Data>;

  DirectoryPickerOptions_Data();
  ~DirectoryPickerOptions_Data() = delete;
};
static_assert(sizeof(DirectoryPickerOptions_Data) == 16,
              "Bad sizeof(DirectoryPickerOptions_Data)");
// Used by DirectoryPickerOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DirectoryPickerOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DirectoryPickerOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DirectoryPickerOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DirectoryPickerOptions_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DirectoryPickerOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CommonFilePickerOptions_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> starting_directory_id;
  int32_t well_known_starting_directory;
  mojo::internal::Interface_Data starting_directory_token;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<CommonFilePickerOptions_Data>;

  CommonFilePickerOptions_Data();
  ~CommonFilePickerOptions_Data() = delete;
};
static_assert(sizeof(CommonFilePickerOptions_Data) == 32,
              "Bad sizeof(CommonFilePickerOptions_Data)");
// Used by CommonFilePickerOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommonFilePickerOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommonFilePickerOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommonFilePickerOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<CommonFilePickerOptions_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommonFilePickerOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_SYSTEM_ACCESS_FILE_SYSTEM_ACCESS_MANAGER_MOJOM_SHARED_INTERNAL_H_