// third_party/blink/public/mojom/device/device.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVICE_DEVICE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVICE_DEVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManagedConfigurationObserver_OnConfigurationChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<ManagedConfigurationObserver_OnConfigurationChanged_Params_Data>;

  ManagedConfigurationObserver_OnConfigurationChanged_Params_Data();
  ~ManagedConfigurationObserver_OnConfigurationChanged_Params_Data() = delete;
};
static_assert(sizeof(ManagedConfigurationObserver_OnConfigurationChanged_Params_Data) == 8,
              "Bad sizeof(ManagedConfigurationObserver_OnConfigurationChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetDirectoryId_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetDirectoryId_Params_Data>;

  DeviceAPIService_GetDirectoryId_Params_Data();
  ~DeviceAPIService_GetDirectoryId_Params_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetDirectoryId_Params_Data) == 8,
              "Bad sizeof(DeviceAPIService_GetDirectoryId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetDirectoryId_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::DeviceAttributeResult_Data result;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetDirectoryId_ResponseParams_Data>;

  DeviceAPIService_GetDirectoryId_ResponseParams_Data();
  ~DeviceAPIService_GetDirectoryId_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetDirectoryId_ResponseParams_Data) == 24,
              "Bad sizeof(DeviceAPIService_GetDirectoryId_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetHostname_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetHostname_Params_Data>;

  DeviceAPIService_GetHostname_Params_Data();
  ~DeviceAPIService_GetHostname_Params_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetHostname_Params_Data) == 8,
              "Bad sizeof(DeviceAPIService_GetHostname_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetHostname_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::DeviceAttributeResult_Data result;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetHostname_ResponseParams_Data>;

  DeviceAPIService_GetHostname_ResponseParams_Data();
  ~DeviceAPIService_GetHostname_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetHostname_ResponseParams_Data) == 24,
              "Bad sizeof(DeviceAPIService_GetHostname_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetSerialNumber_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetSerialNumber_Params_Data>;

  DeviceAPIService_GetSerialNumber_Params_Data();
  ~DeviceAPIService_GetSerialNumber_Params_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetSerialNumber_Params_Data) == 8,
              "Bad sizeof(DeviceAPIService_GetSerialNumber_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetSerialNumber_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::DeviceAttributeResult_Data result;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetSerialNumber_ResponseParams_Data>;

  DeviceAPIService_GetSerialNumber_ResponseParams_Data();
  ~DeviceAPIService_GetSerialNumber_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetSerialNumber_ResponseParams_Data) == 24,
              "Bad sizeof(DeviceAPIService_GetSerialNumber_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetAnnotatedAssetId_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetAnnotatedAssetId_Params_Data>;

  DeviceAPIService_GetAnnotatedAssetId_Params_Data();
  ~DeviceAPIService_GetAnnotatedAssetId_Params_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetAnnotatedAssetId_Params_Data) == 8,
              "Bad sizeof(DeviceAPIService_GetAnnotatedAssetId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::DeviceAttributeResult_Data result;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data>;

  DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data();
  ~DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data) == 24,
              "Bad sizeof(DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetAnnotatedLocation_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetAnnotatedLocation_Params_Data>;

  DeviceAPIService_GetAnnotatedLocation_Params_Data();
  ~DeviceAPIService_GetAnnotatedLocation_Params_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetAnnotatedLocation_Params_Data) == 8,
              "Bad sizeof(DeviceAPIService_GetAnnotatedLocation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::DeviceAttributeResult_Data result;

 private:
  friend class mojo::internal::MessageFragment<DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data>;

  DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data();
  ~DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data) == 24,
              "Bad sizeof(DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManagedConfigurationService_GetManagedConfiguration_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> keys;

 private:
  friend class mojo::internal::MessageFragment<ManagedConfigurationService_GetManagedConfiguration_Params_Data>;

  ManagedConfigurationService_GetManagedConfiguration_Params_Data();
  ~ManagedConfigurationService_GetManagedConfiguration_Params_Data() = delete;
};
static_assert(sizeof(ManagedConfigurationService_GetManagedConfiguration_Params_Data) == 16,
              "Bad sizeof(ManagedConfigurationService_GetManagedConfiguration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> configurations;

 private:
  friend class mojo::internal::MessageFragment<ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data>;

  ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data();
  ~ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  friend class mojo::internal::MessageFragment<ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data>;

  ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data();
  ~ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data() = delete;
};
static_assert(sizeof(ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data) == 16,
              "Bad sizeof(ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data)");

}  // namespace internal


class ManagedConfigurationObserver_OnConfigurationChanged_ParamsDataView {
 public:
  ManagedConfigurationObserver_OnConfigurationChanged_ParamsDataView() = default;

  ManagedConfigurationObserver_OnConfigurationChanged_ParamsDataView(
      internal::ManagedConfigurationObserver_OnConfigurationChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ManagedConfigurationObserver_OnConfigurationChanged_Params_Data* data_ = nullptr;
};



class DeviceAPIService_GetDirectoryId_ParamsDataView {
 public:
  DeviceAPIService_GetDirectoryId_ParamsDataView() = default;

  DeviceAPIService_GetDirectoryId_ParamsDataView(
      internal::DeviceAPIService_GetDirectoryId_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DeviceAPIService_GetDirectoryId_Params_Data* data_ = nullptr;
};



class DeviceAPIService_GetDirectoryId_ResponseParamsDataView {
 public:
  DeviceAPIService_GetDirectoryId_ResponseParamsDataView() = default;

  DeviceAPIService_GetDirectoryId_ResponseParamsDataView(
      internal::DeviceAPIService_GetDirectoryId_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      DeviceAttributeResultDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::DeviceAttributeResultDataView>(
        pointer, output, message_);
  }
 private:
  internal::DeviceAPIService_GetDirectoryId_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class DeviceAPIService_GetHostname_ParamsDataView {
 public:
  DeviceAPIService_GetHostname_ParamsDataView() = default;

  DeviceAPIService_GetHostname_ParamsDataView(
      internal::DeviceAPIService_GetHostname_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DeviceAPIService_GetHostname_Params_Data* data_ = nullptr;
};



class DeviceAPIService_GetHostname_ResponseParamsDataView {
 public:
  DeviceAPIService_GetHostname_ResponseParamsDataView() = default;

  DeviceAPIService_GetHostname_ResponseParamsDataView(
      internal::DeviceAPIService_GetHostname_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      DeviceAttributeResultDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::DeviceAttributeResultDataView>(
        pointer, output, message_);
  }
 private:
  internal::DeviceAPIService_GetHostname_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class DeviceAPIService_GetSerialNumber_ParamsDataView {
 public:
  DeviceAPIService_GetSerialNumber_ParamsDataView() = default;

  DeviceAPIService_GetSerialNumber_ParamsDataView(
      internal::DeviceAPIService_GetSerialNumber_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DeviceAPIService_GetSerialNumber_Params_Data* data_ = nullptr;
};



class DeviceAPIService_GetSerialNumber_ResponseParamsDataView {
 public:
  DeviceAPIService_GetSerialNumber_ResponseParamsDataView() = default;

  DeviceAPIService_GetSerialNumber_ResponseParamsDataView(
      internal::DeviceAPIService_GetSerialNumber_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      DeviceAttributeResultDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::DeviceAttributeResultDataView>(
        pointer, output, message_);
  }
 private:
  internal::DeviceAPIService_GetSerialNumber_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class DeviceAPIService_GetAnnotatedAssetId_ParamsDataView {
 public:
  DeviceAPIService_GetAnnotatedAssetId_ParamsDataView() = default;

  DeviceAPIService_GetAnnotatedAssetId_ParamsDataView(
      internal::DeviceAPIService_GetAnnotatedAssetId_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DeviceAPIService_GetAnnotatedAssetId_Params_Data* data_ = nullptr;
};



class DeviceAPIService_GetAnnotatedAssetId_ResponseParamsDataView {
 public:
  DeviceAPIService_GetAnnotatedAssetId_ResponseParamsDataView() = default;

  DeviceAPIService_GetAnnotatedAssetId_ResponseParamsDataView(
      internal::DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      DeviceAttributeResultDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::DeviceAttributeResultDataView>(
        pointer, output, message_);
  }
 private:
  internal::DeviceAPIService_GetAnnotatedAssetId_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class DeviceAPIService_GetAnnotatedLocation_ParamsDataView {
 public:
  DeviceAPIService_GetAnnotatedLocation_ParamsDataView() = default;

  DeviceAPIService_GetAnnotatedLocation_ParamsDataView(
      internal::DeviceAPIService_GetAnnotatedLocation_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DeviceAPIService_GetAnnotatedLocation_Params_Data* data_ = nullptr;
};



class DeviceAPIService_GetAnnotatedLocation_ResponseParamsDataView {
 public:
  DeviceAPIService_GetAnnotatedLocation_ResponseParamsDataView() = default;

  DeviceAPIService_GetAnnotatedLocation_ResponseParamsDataView(
      internal::DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      DeviceAttributeResultDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::DeviceAttributeResultDataView>(
        pointer, output, message_);
  }
 private:
  internal::DeviceAPIService_GetAnnotatedLocation_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ManagedConfigurationService_GetManagedConfiguration_ParamsDataView {
 public:
  ManagedConfigurationService_GetManagedConfiguration_ParamsDataView() = default;

  ManagedConfigurationService_GetManagedConfiguration_ParamsDataView(
      internal::ManagedConfigurationService_GetManagedConfiguration_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKeys(UserType* output) {
    
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::ManagedConfigurationService_GetManagedConfiguration_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ManagedConfigurationService_GetManagedConfiguration_ResponseParamsDataView {
 public:
  ManagedConfigurationService_GetManagedConfiguration_ResponseParamsDataView() = default;

  ManagedConfigurationService_GetManagedConfiguration_ResponseParamsDataView(
      internal::ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetConfigurationsDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadConfigurations(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>, UserType>(),
    "Attempting to read the optional `configurations` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadConfigurations` instead "
    "of `ReadConfigurations if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->configurations.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::ManagedConfigurationService_GetManagedConfiguration_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsDataView {
 public:
  ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsDataView() = default;

  ManagedConfigurationService_SubscribeToManagedConfiguration_ParamsDataView(
      internal::ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::ManagedConfigurationObserverInterfaceBase>>(
            &data_->observer, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ManagedConfigurationService_SubscribeToManagedConfiguration_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};






inline void DeviceAPIService_GetDirectoryId_ResponseParamsDataView::GetResultDataView(
    DeviceAttributeResultDataView* output) {
  auto pointer = &data_->result;
  *output = DeviceAttributeResultDataView(pointer, message_);
}




inline void DeviceAPIService_GetHostname_ResponseParamsDataView::GetResultDataView(
    DeviceAttributeResultDataView* output) {
  auto pointer = &data_->result;
  *output = DeviceAttributeResultDataView(pointer, message_);
}




inline void DeviceAPIService_GetSerialNumber_ResponseParamsDataView::GetResultDataView(
    DeviceAttributeResultDataView* output) {
  auto pointer = &data_->result;
  *output = DeviceAttributeResultDataView(pointer, message_);
}




inline void DeviceAPIService_GetAnnotatedAssetId_ResponseParamsDataView::GetResultDataView(
    DeviceAttributeResultDataView* output) {
  auto pointer = &data_->result;
  *output = DeviceAttributeResultDataView(pointer, message_);
}




inline void DeviceAPIService_GetAnnotatedLocation_ResponseParamsDataView::GetResultDataView(
    DeviceAttributeResultDataView* output) {
  auto pointer = &data_->result;
  *output = DeviceAttributeResultDataView(pointer, message_);
}


inline void ManagedConfigurationService_GetManagedConfiguration_ParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}


inline void ManagedConfigurationService_GetManagedConfiguration_ResponseParamsDataView::GetConfigurationsDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->configurations.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVICE_DEVICE_MOJOM_PARAMS_DATA_H_