// third_party/blink/public/mojom/shared_storage/shared_storage.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SHARED_STORAGE_SHARED_STORAGE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SHARED_STORAGE_SHARED_STORAGE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_AddModuleOnWorklet_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_source_url;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_AddModuleOnWorklet_Params_Data>;

  SharedStorageDocumentService_AddModuleOnWorklet_Params_Data();
  ~SharedStorageDocumentService_AddModuleOnWorklet_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_AddModuleOnWorklet_Params_Data) == 16,
              "Bad sizeof(SharedStorageDocumentService_AddModuleOnWorklet_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data>;

  SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data();
  ~SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_RunOperationOnWorklet_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> serialized_data;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_RunOperationOnWorklet_Params_Data>;

  SharedStorageDocumentService_RunOperationOnWorklet_Params_Data();
  ~SharedStorageDocumentService_RunOperationOnWorklet_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_RunOperationOnWorklet_Params_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_RunOperationOnWorklet_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data>;

  SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data();
  ~SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SharedStorageUrlWithMetadata_Data>>> urls_with_metadata;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> serialized_data;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data>;

  SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data();
  ~SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data) == 32,
              "Bad sizeof(SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> opaque_url;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data>;

  SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data();
  ~SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data) == 32,
              "Bad sizeof(SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageSet_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SharedStorageKeyArgument_Data> key;
  mojo::internal::Pointer<internal::SharedStorageValueArgument_Data> value;
  uint8_t ignore_if_present : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageSet_Params_Data>;

  SharedStorageDocumentService_SharedStorageSet_Params_Data();
  ~SharedStorageDocumentService_SharedStorageSet_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageSet_Params_Data) == 32,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageSet_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data>;

  SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data();
  ~SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageAppend_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SharedStorageKeyArgument_Data> key;
  mojo::internal::Pointer<internal::SharedStorageValueArgument_Data> value;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageAppend_Params_Data>;

  SharedStorageDocumentService_SharedStorageAppend_Params_Data();
  ~SharedStorageDocumentService_SharedStorageAppend_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageAppend_Params_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageAppend_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data>;

  SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data();
  ~SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageDelete_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SharedStorageKeyArgument_Data> key;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageDelete_Params_Data>;

  SharedStorageDocumentService_SharedStorageDelete_Params_Data();
  ~SharedStorageDocumentService_SharedStorageDelete_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageDelete_Params_Data) == 16,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageDelete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data>;

  SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data();
  ~SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageClear_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageClear_Params_Data>;

  SharedStorageDocumentService_SharedStorageClear_Params_Data();
  ~SharedStorageDocumentService_SharedStorageClear_Params_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageClear_Params_Data) == 8,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageClear_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data>;

  SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data();
  ~SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data() = delete;
};
static_assert(sizeof(SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data) == 24,
              "Bad sizeof(SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data)");

}  // namespace internal


class SharedStorageDocumentService_AddModuleOnWorklet_ParamsDataView {
 public:
  SharedStorageDocumentService_AddModuleOnWorklet_ParamsDataView() = default;

  SharedStorageDocumentService_AddModuleOnWorklet_ParamsDataView(
      internal::SharedStorageDocumentService_AddModuleOnWorklet_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetScriptSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadScriptSourceUrl(UserType* output) {
    
    auto* pointer = data_->script_source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_AddModuleOnWorklet_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_AddModuleOnWorklet_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_AddModuleOnWorklet_ResponseParamsDataView() = default;

  SharedStorageDocumentService_AddModuleOnWorklet_ResponseParamsDataView(
      internal::SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_AddModuleOnWorklet_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_RunOperationOnWorklet_ParamsDataView {
 public:
  SharedStorageDocumentService_RunOperationOnWorklet_ParamsDataView() = default;

  SharedStorageDocumentService_RunOperationOnWorklet_ParamsDataView(
      internal::SharedStorageDocumentService_RunOperationOnWorklet_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadName(UserType* output) {
    
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSerializedDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSerializedData(UserType* output) {
    
    auto* pointer = data_->serialized_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_RunOperationOnWorklet_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_RunOperationOnWorklet_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_RunOperationOnWorklet_ResponseParamsDataView() = default;

  SharedStorageDocumentService_RunOperationOnWorklet_ResponseParamsDataView(
      internal::SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_RunOperationOnWorklet_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ParamsDataView {
 public:
  SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ParamsDataView() = default;

  SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ParamsDataView(
      internal::SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadName(UserType* output) {
    
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetUrlsWithMetadataDataView(
      mojo::ArrayDataView<SharedStorageUrlWithMetadataDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrlsWithMetadata(UserType* output) {
    
    auto* pointer = data_->urls_with_metadata.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SharedStorageUrlWithMetadataDataView>>(
        pointer, output, message_);
  }
  inline void GetSerializedDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSerializedData(UserType* output) {
    
    auto* pointer = data_->serialized_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParamsDataView() = default;

  SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParamsDataView(
      internal::SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetOpaqueUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOpaqueUrl(UserType* output) {
    
    auto* pointer = data_->opaque_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageSet_ParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageSet_ParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageSet_ParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageSet_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      SharedStorageKeyArgumentDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKey(UserType* output) {
    
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedStorageKeyArgumentDataView>(
        pointer, output, message_);
  }
  inline void GetValueDataView(
      SharedStorageValueArgumentDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadValue(UserType* output) {
    
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedStorageValueArgumentDataView>(
        pointer, output, message_);
  }
  bool ignore_if_present() const {
    return data_->ignore_if_present;
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageSet_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageSet_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageSet_ResponseParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageSet_ResponseParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageSet_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageAppend_ParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageAppend_ParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageAppend_ParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageAppend_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      SharedStorageKeyArgumentDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKey(UserType* output) {
    
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedStorageKeyArgumentDataView>(
        pointer, output, message_);
  }
  inline void GetValueDataView(
      SharedStorageValueArgumentDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadValue(UserType* output) {
    
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedStorageValueArgumentDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageAppend_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageAppend_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageAppend_ResponseParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageAppend_ResponseParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageAppend_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageDelete_ParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageDelete_ParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageDelete_ParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageDelete_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      SharedStorageKeyArgumentDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKey(UserType* output) {
    
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedStorageKeyArgumentDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageDelete_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageDelete_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageDelete_ResponseParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageDelete_ResponseParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageDelete_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageClear_ParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageClear_ParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageClear_ParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageClear_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedStorageDocumentService_SharedStorageClear_Params_Data* data_ = nullptr;
};



class SharedStorageDocumentService_SharedStorageClear_ResponseParamsDataView {
 public:
  SharedStorageDocumentService_SharedStorageClear_ResponseParamsDataView() = default;

  SharedStorageDocumentService_SharedStorageClear_ResponseParamsDataView(
      internal::SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageDocumentService_SharedStorageClear_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void SharedStorageDocumentService_AddModuleOnWorklet_ParamsDataView::GetScriptSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}


inline void SharedStorageDocumentService_AddModuleOnWorklet_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void SharedStorageDocumentService_RunOperationOnWorklet_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void SharedStorageDocumentService_RunOperationOnWorklet_ParamsDataView::GetSerializedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->serialized_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}


inline void SharedStorageDocumentService_RunOperationOnWorklet_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ParamsDataView::GetUrlsWithMetadataDataView(
    mojo::ArrayDataView<SharedStorageUrlWithMetadataDataView>* output) {
  auto pointer = data_->urls_with_metadata.Get();
  *output = mojo::ArrayDataView<SharedStorageUrlWithMetadataDataView>(pointer, message_);
}
inline void SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ParamsDataView::GetSerializedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->serialized_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}


inline void SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void SharedStorageDocumentService_RunURLSelectionOperationOnWorklet_ResponseParamsDataView::GetOpaqueUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->opaque_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}


inline void SharedStorageDocumentService_SharedStorageSet_ParamsDataView::GetKeyDataView(
    SharedStorageKeyArgumentDataView* output) {
  auto pointer = data_->key.Get();
  *output = SharedStorageKeyArgumentDataView(pointer, message_);
}
inline void SharedStorageDocumentService_SharedStorageSet_ParamsDataView::GetValueDataView(
    SharedStorageValueArgumentDataView* output) {
  auto pointer = data_->value.Get();
  *output = SharedStorageValueArgumentDataView(pointer, message_);
}


inline void SharedStorageDocumentService_SharedStorageSet_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void SharedStorageDocumentService_SharedStorageAppend_ParamsDataView::GetKeyDataView(
    SharedStorageKeyArgumentDataView* output) {
  auto pointer = data_->key.Get();
  *output = SharedStorageKeyArgumentDataView(pointer, message_);
}
inline void SharedStorageDocumentService_SharedStorageAppend_ParamsDataView::GetValueDataView(
    SharedStorageValueArgumentDataView* output) {
  auto pointer = data_->value.Get();
  *output = SharedStorageValueArgumentDataView(pointer, message_);
}


inline void SharedStorageDocumentService_SharedStorageAppend_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void SharedStorageDocumentService_SharedStorageDelete_ParamsDataView::GetKeyDataView(
    SharedStorageKeyArgumentDataView* output) {
  auto pointer = data_->key.Get();
  *output = SharedStorageKeyArgumentDataView(pointer, message_);
}


inline void SharedStorageDocumentService_SharedStorageDelete_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}




inline void SharedStorageDocumentService_SharedStorageClear_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SHARED_STORAGE_SHARED_STORAGE_MOJOM_PARAMS_DATA_H_