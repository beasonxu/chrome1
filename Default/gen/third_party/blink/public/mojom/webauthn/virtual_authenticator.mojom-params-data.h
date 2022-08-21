// third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace test {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetUniqueId_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_GetUniqueId_Params_Data>;

  VirtualAuthenticator_GetUniqueId_Params_Data();
  ~VirtualAuthenticator_GetUniqueId_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUniqueId_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetUniqueId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetUniqueId_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_GetUniqueId_ResponseParams_Data>;

  VirtualAuthenticator_GetUniqueId_ResponseParams_Data();
  ~VirtualAuthenticator_GetUniqueId_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetUniqueId_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_AddRegistration_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RegisteredKey_Data> key;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_AddRegistration_Params_Data>;

  VirtualAuthenticator_AddRegistration_Params_Data();
  ~VirtualAuthenticator_AddRegistration_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_AddRegistration_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_AddRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_AddRegistration_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t added : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_AddRegistration_ResponseParams_Data>;

  VirtualAuthenticator_AddRegistration_ResponseParams_Data();
  ~VirtualAuthenticator_AddRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_AddRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetRegistrations_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_GetRegistrations_Params_Data>;

  VirtualAuthenticator_GetRegistrations_Params_Data();
  ~VirtualAuthenticator_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetRegistrations_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetRegistrations_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RegisteredKey_Data>>> keys;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_GetRegistrations_ResponseParams_Data>;

  VirtualAuthenticator_GetRegistrations_ResponseParams_Data();
  ~VirtualAuthenticator_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_RemoveRegistration_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_handle;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_RemoveRegistration_Params_Data>;

  VirtualAuthenticator_RemoveRegistration_Params_Data();
  ~VirtualAuthenticator_RemoveRegistration_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_RemoveRegistration_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_RemoveRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_RemoveRegistration_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t removed : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_RemoveRegistration_ResponseParams_Data>;

  VirtualAuthenticator_RemoveRegistration_ResponseParams_Data();
  ~VirtualAuthenticator_RemoveRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_RemoveRegistration_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_RemoveRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_ClearRegistrations_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_ClearRegistrations_Params_Data>;

  VirtualAuthenticator_ClearRegistrations_Params_Data();
  ~VirtualAuthenticator_ClearRegistrations_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_ClearRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_ClearRegistrations_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_ClearRegistrations_ResponseParams_Data>;

  VirtualAuthenticator_ClearRegistrations_ResponseParams_Data();
  ~VirtualAuthenticator_ClearRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_ClearRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetLargeBlob_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_handle;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_GetLargeBlob_Params_Data>;

  VirtualAuthenticator_GetLargeBlob_Params_Data();
  ~VirtualAuthenticator_GetLargeBlob_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetLargeBlob_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetLargeBlob_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_GetLargeBlob_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> blob;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_GetLargeBlob_ResponseParams_Data>;

  VirtualAuthenticator_GetLargeBlob_ResponseParams_Data();
  ~VirtualAuthenticator_GetLargeBlob_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_GetLargeBlob_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_GetLargeBlob_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_SetLargeBlob_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_handle;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> blob;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_SetLargeBlob_Params_Data>;

  VirtualAuthenticator_SetLargeBlob_Params_Data();
  ~VirtualAuthenticator_SetLargeBlob_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetLargeBlob_Params_Data) == 24,
              "Bad sizeof(VirtualAuthenticator_SetLargeBlob_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_SetLargeBlob_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t set : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_SetLargeBlob_ResponseParams_Data>;

  VirtualAuthenticator_SetLargeBlob_ResponseParams_Data();
  ~VirtualAuthenticator_SetLargeBlob_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetLargeBlob_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_SetLargeBlob_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_SetUserVerified_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t verified : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_SetUserVerified_Params_Data>;

  VirtualAuthenticator_SetUserVerified_Params_Data();
  ~VirtualAuthenticator_SetUserVerified_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetUserVerified_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticator_SetUserVerified_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticator_SetUserVerified_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticator_SetUserVerified_ResponseParams_Data>;

  VirtualAuthenticator_SetUserVerified_ResponseParams_Data();
  ~VirtualAuthenticator_SetUserVerified_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticator_SetUserVerified_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticator_SetUserVerified_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_CreateAuthenticator_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VirtualAuthenticatorOptions_Data> options;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_CreateAuthenticator_Params_Data>;

  VirtualAuthenticatorManager_CreateAuthenticator_Params_Data();
  ~VirtualAuthenticatorManager_CreateAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_CreateAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data authenticator;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data>;

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data();
  ~VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_GetAuthenticators_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_GetAuthenticators_Params_Data>;

  VirtualAuthenticatorManager_GetAuthenticators_Params_Data();
  ~VirtualAuthenticatorManager_GetAuthenticators_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_GetAuthenticators_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> authenticators;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data>;

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data();
  ~VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data>;

  VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data();
  ~VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t removed : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data>;

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data();
  ~VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data) == 16,
              "Bad sizeof(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_ClearAuthenticators_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_ClearAuthenticators_Params_Data>;

  VirtualAuthenticatorManager_ClearAuthenticators_Params_Data();
  ~VirtualAuthenticatorManager_ClearAuthenticators_Params_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_ClearAuthenticators_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data>;

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data();
  ~VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data() = delete;
};
static_assert(sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data) == 8,
              "Bad sizeof(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data)");

}  // namespace internal


class VirtualAuthenticator_GetUniqueId_ParamsDataView {
 public:
  VirtualAuthenticator_GetUniqueId_ParamsDataView() = default;

  VirtualAuthenticator_GetUniqueId_ParamsDataView(
      internal::VirtualAuthenticator_GetUniqueId_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetUniqueId_Params_Data* data_ = nullptr;
};



class VirtualAuthenticator_GetUniqueId_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView() = default;

  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadId(UserType* output) {
    
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_AddRegistration_ParamsDataView {
 public:
  VirtualAuthenticator_AddRegistration_ParamsDataView() = default;

  VirtualAuthenticator_AddRegistration_ParamsDataView(
      internal::VirtualAuthenticator_AddRegistration_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      RegisteredKeyDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKey(UserType* output) {
    
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::blink::test::mojom::RegisteredKeyDataView>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_AddRegistration_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_AddRegistration_ResponseParamsDataView {
 public:
  VirtualAuthenticator_AddRegistration_ResponseParamsDataView() = default;

  VirtualAuthenticator_AddRegistration_ResponseParamsDataView(
      internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool added() const {
    return data_->added;
  }
 private:
  internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* data_ = nullptr;
};



class VirtualAuthenticator_GetRegistrations_ParamsDataView {
 public:
  VirtualAuthenticator_GetRegistrations_ParamsDataView() = default;

  VirtualAuthenticator_GetRegistrations_ParamsDataView(
      internal::VirtualAuthenticator_GetRegistrations_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetRegistrations_Params_Data* data_ = nullptr;
};



class VirtualAuthenticator_GetRegistrations_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView() = default;

  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<RegisteredKeyDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKeys(UserType* output) {
    
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::test::mojom::RegisteredKeyDataView>>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_RemoveRegistration_ParamsDataView {
 public:
  VirtualAuthenticator_RemoveRegistration_ParamsDataView() = default;

  VirtualAuthenticator_RemoveRegistration_ParamsDataView(
      internal::VirtualAuthenticator_RemoveRegistration_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKeyHandle(UserType* output) {
    
    auto* pointer = data_->key_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_RemoveRegistration_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_RemoveRegistration_ResponseParamsDataView {
 public:
  VirtualAuthenticator_RemoveRegistration_ResponseParamsDataView() = default;

  VirtualAuthenticator_RemoveRegistration_ResponseParamsDataView(
      internal::VirtualAuthenticator_RemoveRegistration_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool removed() const {
    return data_->removed;
  }
 private:
  internal::VirtualAuthenticator_RemoveRegistration_ResponseParams_Data* data_ = nullptr;
};



class VirtualAuthenticator_ClearRegistrations_ParamsDataView {
 public:
  VirtualAuthenticator_ClearRegistrations_ParamsDataView() = default;

  VirtualAuthenticator_ClearRegistrations_ParamsDataView(
      internal::VirtualAuthenticator_ClearRegistrations_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_ClearRegistrations_Params_Data* data_ = nullptr;
};



class VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView {
 public:
  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView() = default;

  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView(
      internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data_ = nullptr;
};



class VirtualAuthenticator_GetLargeBlob_ParamsDataView {
 public:
  VirtualAuthenticator_GetLargeBlob_ParamsDataView() = default;

  VirtualAuthenticator_GetLargeBlob_ParamsDataView(
      internal::VirtualAuthenticator_GetLargeBlob_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKeyHandle(UserType* output) {
    
    auto* pointer = data_->key_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_GetLargeBlob_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_GetLargeBlob_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetLargeBlob_ResponseParamsDataView() = default;

  VirtualAuthenticator_GetLargeBlob_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetLargeBlob_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetBlobDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadBlob(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::ArrayDataView<uint8_t>, UserType>(),
    "Attempting to read the optional `blob` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadBlob` instead "
    "of `ReadBlob if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_GetLargeBlob_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_SetLargeBlob_ParamsDataView {
 public:
  VirtualAuthenticator_SetLargeBlob_ParamsDataView() = default;

  VirtualAuthenticator_SetLargeBlob_ParamsDataView(
      internal::VirtualAuthenticator_SetLargeBlob_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKeyHandle(UserType* output) {
    
    auto* pointer = data_->key_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
  inline void GetBlobDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadBlob(UserType* output) {
    
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticator_SetLargeBlob_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticator_SetLargeBlob_ResponseParamsDataView {
 public:
  VirtualAuthenticator_SetLargeBlob_ResponseParamsDataView() = default;

  VirtualAuthenticator_SetLargeBlob_ResponseParamsDataView(
      internal::VirtualAuthenticator_SetLargeBlob_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool set() const {
    return data_->set;
  }
 private:
  internal::VirtualAuthenticator_SetLargeBlob_ResponseParams_Data* data_ = nullptr;
};



class VirtualAuthenticator_SetUserVerified_ParamsDataView {
 public:
  VirtualAuthenticator_SetUserVerified_ParamsDataView() = default;

  VirtualAuthenticator_SetUserVerified_ParamsDataView(
      internal::VirtualAuthenticator_SetUserVerified_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool verified() const {
    return data_->verified;
  }
 private:
  internal::VirtualAuthenticator_SetUserVerified_Params_Data* data_ = nullptr;
};



class VirtualAuthenticator_SetUserVerified_ResponseParamsDataView {
 public:
  VirtualAuthenticator_SetUserVerified_ResponseParamsDataView() = default;

  VirtualAuthenticator_SetUserVerified_ResponseParamsDataView(
      internal::VirtualAuthenticator_SetUserVerified_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_SetUserVerified_ResponseParams_Data* data_ = nullptr;
};



class VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView() = default;

  VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView(
      internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      VirtualAuthenticatorOptionsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOptions(UserType* output) {
    
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::test::mojom::VirtualAuthenticatorOptionsDataView>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView() = default;

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAuthenticator() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::test::mojom::VirtualAuthenticatorInterfaceBase>>(
            &data_->authenticator, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView() = default;

  VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView(
      internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data_ = nullptr;
};



class VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView() = default;

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetAuthenticatorsDataView(
      mojo::ArrayDataView<mojo::InterfacePtrDataView<VirtualAuthenticatorInterfaceBase>>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAuthenticators(UserType* output) {
    
    auto* pointer = data_->authenticators.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::blink::test::mojom::VirtualAuthenticatorInterfaceBase>>>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView() = default;

  VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView(
      internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadId(UserType* output) {
    
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView() = default;

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool removed() const {
    return data_->removed;
  }
 private:
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data_ = nullptr;
};



class VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView() = default;

  VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView(
      internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data_ = nullptr;
};



class VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView() = default;

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data_ = nullptr;
};




inline void VirtualAuthenticator_GetUniqueId_ResponseParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void VirtualAuthenticator_AddRegistration_ParamsDataView::GetKeyDataView(
    RegisteredKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = RegisteredKeyDataView(pointer, message_);
}






inline void VirtualAuthenticator_GetRegistrations_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<RegisteredKeyDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<RegisteredKeyDataView>(pointer, message_);
}


inline void VirtualAuthenticator_RemoveRegistration_ParamsDataView::GetKeyHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}








inline void VirtualAuthenticator_GetLargeBlob_ParamsDataView::GetKeyHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}


inline void VirtualAuthenticator_GetLargeBlob_ResponseParamsDataView::GetBlobDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->blob.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}


inline void VirtualAuthenticator_SetLargeBlob_ParamsDataView::GetKeyHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}
inline void VirtualAuthenticator_SetLargeBlob_ParamsDataView::GetBlobDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->blob.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}








inline void VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView::GetOptionsDataView(
    VirtualAuthenticatorOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = VirtualAuthenticatorOptionsDataView(pointer, message_);
}






inline void VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView::GetAuthenticatorsDataView(
    mojo::ArrayDataView<mojo::InterfacePtrDataView<VirtualAuthenticatorInterfaceBase>>* output) {
  auto pointer = data_->authenticators.Get();
  *output = mojo::ArrayDataView<mojo::InterfacePtrDataView<VirtualAuthenticatorInterfaceBase>>(pointer, message_);
}


inline void VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, message_);
}







}  // namespace mojom
}  // namespace test
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_PARAMS_DATA_H_