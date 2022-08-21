// device/bluetooth/public/mojom/device.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_

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

#include "device/bluetooth/public/mojom/device.mojom-shared-internal.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace bluetooth {
namespace mojom {
class RSSIWrapperDataView;

class DeviceInfoDataView;

class ServiceInfoDataView;

class CharacteristicInfoDataView;

class DescriptorInfoDataView;



}  // namespace mojom
}  // namespace bluetooth

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::bluetooth::mojom::RSSIWrapperDataView> {
  using Data = ::bluetooth::mojom::internal::RSSIWrapper_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::DeviceInfoDataView> {
  using Data = ::bluetooth::mojom::internal::DeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::ServiceInfoDataView> {
  using Data = ::bluetooth::mojom::internal::ServiceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::CharacteristicInfoDataView> {
  using Data = ::bluetooth::mojom::internal::CharacteristicInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::bluetooth::mojom::DescriptorInfoDataView> {
  using Data = ::bluetooth::mojom::internal::DescriptorInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace bluetooth {
namespace mojom {


enum class Property : int32_t {
  
  NONE = 0,
  
  BROADCAST = 1,
  
  READ = 2,
  
  WRITE_WITHOUT_RESPONSE = 4,
  
  WRITE = 8,
  
  NOTIFY = 16,
  
  INDICATE = 32,
  
  AUTHENTICATED_SIGNED_WRITES = 64,
  
  EXTENDED_PROPERTIES = 128,
  
  RELIABLE_WRITE = 256,
  
  WRITABLE_AUXILIARIES = 512,
  
  READ_ENCRYPTED = 1024,
  
  WRITE_ENCRYPTED = 2048,
  
  READ_ENCRYPTED_AUTHENTICATED = 4096,
  
  WRITE_ENCRYPTED_AUTHENTICATED = 8192,
  kMinValue = 0,
  kMaxValue = 8192,
};

 std::ostream& operator<<(std::ostream& os, Property value);
inline bool IsKnownEnumValue(Property value) {
  return internal::Property_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GattResult : int32_t {
  
  SUCCESS = 0,
  
  UNKNOWN = 1,
  
  FAILED = 2,
  
  IN_PROGRESS = 3,
  
  INVALID_LENGTH = 4,
  
  NOT_PERMITTED = 5,
  
  NOT_AUTHORIZED = 6,
  
  NOT_PAIRED = 7,
  
  NOT_SUPPORTED = 8,
  
  SERVICE_NOT_FOUND = 9,
  
  CHARACTERISTIC_NOT_FOUND = 10,
  
  DESCRIPTOR_NOT_FOUND = 11,
  kMinValue = 0,
  kMaxValue = 11,
};

 std::ostream& operator<<(std::ostream& os, GattResult value);
inline bool IsKnownEnumValue(GattResult value) {
  return internal::GattResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DeviceInterfaceBase {};

using DevicePtrDataView =
    mojo::InterfacePtrDataView<DeviceInterfaceBase>;
using DeviceRequestDataView =
    mojo::InterfaceRequestDataView<DeviceInterfaceBase>;
using DeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DeviceInterfaceBase>;
using DeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DeviceInterfaceBase>;


class RSSIWrapperDataView {
 public:
  RSSIWrapperDataView() = default;

  RSSIWrapperDataView(
      internal::RSSIWrapper_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int8_t value() const {
    return data_->value;
  }
 private:
  internal::RSSIWrapper_Data* data_ = nullptr;
};



class DeviceInfoDataView {
 public:
  DeviceInfoDataView() = default;

  DeviceInfoDataView(
      internal::DeviceInfo_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadName(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `name` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadName` instead "
    "of `ReadName if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetNameForDisplayDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadNameForDisplay(UserType* output) {
    
    auto* pointer = data_->name_for_display.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetAddressDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAddress(UserType* output) {
    
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  bool is_gatt_connected() const {
    return data_->is_gatt_connected;
  }
  inline void GetRssiDataView(
      RSSIWrapperDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRssi(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::bluetooth::mojom::RSSIWrapperDataView, UserType>(),
    "Attempting to read the optional `rssi` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadRssi` instead "
    "of `ReadRssi if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->rssi.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::RSSIWrapperDataView>(
        pointer, output, message_);
  }
  inline void GetServiceUuidsDataView(
      mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadServiceUuids(UserType* output) {
    
    auto* pointer = data_->service_uuids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        pointer, output, message_);
  }
  inline void GetManufacturerDataMapDataView(
      mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadManufacturerDataMap(UserType* output) {
    
    auto* pointer = data_->manufacturer_data_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, message_);
  }
  inline void GetServiceDataMapDataView(
      mojo::MapDataView<::bluetooth::mojom::UUIDDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadServiceDataMap(UserType* output) {
    
    auto* pointer = data_->service_data_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::bluetooth::mojom::UUIDDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, message_);
  }
 private:
  internal::DeviceInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ServiceInfoDataView {
 public:
  ServiceInfoDataView() = default;

  ServiceInfoDataView(
      internal::ServiceInfo_Data* data,
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
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUuid(UserType* output) {
    
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, message_);
  }
  bool is_primary() const {
    return data_->is_primary;
  }
 private:
  internal::ServiceInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CharacteristicInfoDataView {
 public:
  CharacteristicInfoDataView() = default;

  CharacteristicInfoDataView(
      internal::CharacteristicInfo_Data* data,
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
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUuid(UserType* output) {
    
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, message_);
  }
  uint32_t properties() const {
    return data_->properties;
  }
  inline void GetLastKnownValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadLastKnownValue(UserType* output) {
    
    auto* pointer = data_->last_known_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::CharacteristicInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class DescriptorInfoDataView {
 public:
  DescriptorInfoDataView() = default;

  DescriptorInfoDataView(
      internal::DescriptorInfo_Data* data,
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
  inline void GetUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUuid(UserType* output) {
    
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, message_);
  }
  inline void GetLastKnownValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadLastKnownValue(UserType* output) {
    
    auto* pointer = data_->last_known_value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::DescriptorInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace bluetooth

namespace std {

template <>
struct hash<::bluetooth::mojom::Property>
    : public mojo::internal::EnumHashImpl<::bluetooth::mojom::Property> {};

template <>
struct hash<::bluetooth::mojom::GattResult>
    : public mojo::internal::EnumHashImpl<::bluetooth::mojom::GattResult> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::Property, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::bluetooth::mojom::Property, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::bluetooth::mojom::Property>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::GattResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::bluetooth::mojom::GattResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::bluetooth::mojom::GattResult>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::RSSIWrapperDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::RSSIWrapperDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::bluetooth::mojom::internal::RSSIWrapper_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->value = Traits::value(input);
  }

  static bool Deserialize(::bluetooth::mojom::internal::RSSIWrapper_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::RSSIWrapperDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::DeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::DeviceInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::bluetooth::mojom::internal::DeviceInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::name(input)) in_name = Traits::name(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->name)::BaseType> name_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, name_fragment);
    fragment->name.Set(
        name_fragment.is_null() ? nullptr : name_fragment.data());
    decltype(Traits::name_for_display(input)) in_name_for_display = Traits::name_for_display(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->name_for_display)::BaseType> name_for_display_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name_for_display, name_for_display_fragment);
    fragment->name_for_display.Set(
        name_for_display_fragment.is_null() ? nullptr : name_for_display_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->name_for_display.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name_for_display in DeviceInfo struct");
    decltype(Traits::address(input)) in_address = Traits::address(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->address)::BaseType> address_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_address, address_fragment);
    fragment->address.Set(
        address_fragment.is_null() ? nullptr : address_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in DeviceInfo struct");
    fragment->is_gatt_connected = Traits::is_gatt_connected(input);
    decltype(Traits::rssi(input)) in_rssi = Traits::rssi(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->rssi)::BaseType> rssi_fragment(
            fragment.message());
    mojo::internal::Serialize<::bluetooth::mojom::RSSIWrapperDataView>(
        in_rssi, rssi_fragment);
    fragment->rssi.Set(
        rssi_fragment.is_null() ? nullptr : rssi_fragment.data());
    decltype(Traits::service_uuids(input)) in_service_uuids = Traits::service_uuids(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->service_uuids)::BaseType>
        service_uuids_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams service_uuids_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>>(
        in_service_uuids, service_uuids_fragment, &service_uuids_validate_params);
    fragment->service_uuids.Set(
        service_uuids_fragment.is_null() ? nullptr : service_uuids_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->service_uuids.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null service_uuids in DeviceInfo struct");
    decltype(Traits::manufacturer_data_map(input)) in_manufacturer_data_map = Traits::manufacturer_data_map(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->manufacturer_data_map)::BaseType>
        manufacturer_data_map_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams manufacturer_data_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>>(
        in_manufacturer_data_map, manufacturer_data_map_fragment, &manufacturer_data_map_validate_params);
    fragment->manufacturer_data_map.Set(
        manufacturer_data_map_fragment.is_null() ? nullptr : manufacturer_data_map_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->manufacturer_data_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null manufacturer_data_map in DeviceInfo struct");
    decltype(Traits::service_data_map(input)) in_service_data_map = Traits::service_data_map(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->service_data_map)::BaseType>
        service_data_map_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams service_data_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<::bluetooth::mojom::UUIDDataView, mojo::ArrayDataView<uint8_t>>>(
        in_service_data_map, service_data_map_fragment, &service_data_map_validate_params);
    fragment->service_data_map.Set(
        service_data_map_fragment.is_null() ? nullptr : service_data_map_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->service_data_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null service_data_map in DeviceInfo struct");
  }

  static bool Deserialize(::bluetooth::mojom::internal::DeviceInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::DeviceInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::ServiceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::ServiceInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::bluetooth::mojom::internal::ServiceInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::id(input)) in_id = Traits::id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->id)::BaseType> id_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, id_fragment);
    fragment->id.Set(
        id_fragment.is_null() ? nullptr : id_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in ServiceInfo struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->uuid)::BaseType> uuid_fragment(
            fragment.message());
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, uuid_fragment);
    fragment->uuid.Set(
        uuid_fragment.is_null() ? nullptr : uuid_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in ServiceInfo struct");
    fragment->is_primary = Traits::is_primary(input);
  }

  static bool Deserialize(::bluetooth::mojom::internal::ServiceInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::ServiceInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::CharacteristicInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::CharacteristicInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::bluetooth::mojom::internal::CharacteristicInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::id(input)) in_id = Traits::id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->id)::BaseType> id_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, id_fragment);
    fragment->id.Set(
        id_fragment.is_null() ? nullptr : id_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in CharacteristicInfo struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->uuid)::BaseType> uuid_fragment(
            fragment.message());
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, uuid_fragment);
    fragment->uuid.Set(
        uuid_fragment.is_null() ? nullptr : uuid_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in CharacteristicInfo struct");
    fragment->properties = Traits::properties(input);
    decltype(Traits::last_known_value(input)) in_last_known_value = Traits::last_known_value(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->last_known_value)::BaseType>
        last_known_value_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams last_known_value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_last_known_value, last_known_value_fragment, &last_known_value_validate_params);
    fragment->last_known_value.Set(
        last_known_value_fragment.is_null() ? nullptr : last_known_value_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->last_known_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_known_value in CharacteristicInfo struct");
  }

  static bool Deserialize(::bluetooth::mojom::internal::CharacteristicInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::CharacteristicInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::DescriptorInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::DescriptorInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::bluetooth::mojom::internal::DescriptorInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::id(input)) in_id = Traits::id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->id)::BaseType> id_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, id_fragment);
    fragment->id.Set(
        id_fragment.is_null() ? nullptr : id_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in DescriptorInfo struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->uuid)::BaseType> uuid_fragment(
            fragment.message());
    mojo::internal::Serialize<::bluetooth::mojom::UUIDDataView>(
        in_uuid, uuid_fragment);
    fragment->uuid.Set(
        uuid_fragment.is_null() ? nullptr : uuid_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in DescriptorInfo struct");
    decltype(Traits::last_known_value(input)) in_last_known_value = Traits::last_known_value(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->last_known_value)::BaseType>
        last_known_value_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams last_known_value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_last_known_value, last_known_value_fragment, &last_known_value_validate_params);
    fragment->last_known_value.Set(
        last_known_value_fragment.is_null() ? nullptr : last_known_value_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->last_known_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_known_value in DescriptorInfo struct");
  }

  static bool Deserialize(::bluetooth::mojom::internal::DescriptorInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::DescriptorInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace bluetooth {
namespace mojom {



inline void DeviceInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void DeviceInfoDataView::GetNameForDisplayDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name_for_display.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void DeviceInfoDataView::GetAddressDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->address.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void DeviceInfoDataView::GetRssiDataView(
    RSSIWrapperDataView* output) {
  auto pointer = data_->rssi.Get();
  *output = RSSIWrapperDataView(pointer, message_);
}
inline void DeviceInfoDataView::GetServiceUuidsDataView(
    mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>* output) {
  auto pointer = data_->service_uuids.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::UUIDDataView>(pointer, message_);
}
inline void DeviceInfoDataView::GetManufacturerDataMapDataView(
    mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->manufacturer_data_map.Get();
  *output = mojo::MapDataView<uint16_t, mojo::ArrayDataView<uint8_t>>(pointer, message_);
}
inline void DeviceInfoDataView::GetServiceDataMapDataView(
    mojo::MapDataView<::bluetooth::mojom::UUIDDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->service_data_map.Get();
  *output = mojo::MapDataView<::bluetooth::mojom::UUIDDataView, mojo::ArrayDataView<uint8_t>>(pointer, message_);
}


inline void ServiceInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void ServiceInfoDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, message_);
}


inline void CharacteristicInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void CharacteristicInfoDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, message_);
}
inline void CharacteristicInfoDataView::GetLastKnownValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->last_known_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}


inline void DescriptorInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void DescriptorInfoDataView::GetUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, message_);
}
inline void DescriptorInfoDataView::GetLastKnownValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->last_known_value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}



}  // namespace mojom
}  // namespace bluetooth

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::bluetooth::mojom::Property> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::bluetooth::mojom::Property value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::bluetooth::mojom::GattResult> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::bluetooth::mojom::GattResult value);
};

} // namespace perfetto

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_H_