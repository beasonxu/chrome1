// services/device/public/mojom/serial.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_

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

#include "services/device/public/mojom/serial.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace device {
namespace mojom {
class SerialPortInfoDataView;

class SerialConnectionOptionsDataView;

class SerialConnectionInfoDataView;

class SerialHostControlSignalsDataView;

class SerialPortControlSignalsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::SerialPortInfoDataView> {
  using Data = ::device::mojom::internal::SerialPortInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialConnectionOptionsDataView> {
  using Data = ::device::mojom::internal::SerialConnectionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialConnectionInfoDataView> {
  using Data = ::device::mojom::internal::SerialConnectionInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialHostControlSignalsDataView> {
  using Data = ::device::mojom::internal::SerialHostControlSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialPortControlSignalsDataView> {
  using Data = ::device::mojom::internal::SerialPortControlSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class SerialSendError : int32_t {
  
  NONE = 0,
  
  DISCONNECTED = 1,
  
  SYSTEM_ERROR = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SerialSendError value);
inline bool IsKnownEnumValue(SerialSendError value) {
  return internal::SerialSendError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialReceiveError : int32_t {
  
  NONE = 0,
  
  DISCONNECTED = 1,
  
  DEVICE_LOST = 2,
  
  BREAK = 3,
  
  FRAME_ERROR = 4,
  
  OVERRUN = 5,
  
  BUFFER_OVERFLOW = 6,
  
  PARITY_ERROR = 7,
  
  SYSTEM_ERROR = 8,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, SerialReceiveError value);
inline bool IsKnownEnumValue(SerialReceiveError value) {
  return internal::SerialReceiveError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialDataBits : int32_t {
  
  NONE = 0,
  
  SEVEN = 1,
  
  EIGHT = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SerialDataBits value);
inline bool IsKnownEnumValue(SerialDataBits value) {
  return internal::SerialDataBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialParityBit : int32_t {
  
  NONE = 0,
  
  NO_PARITY = 1,
  
  ODD = 2,
  
  EVEN = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, SerialParityBit value);
inline bool IsKnownEnumValue(SerialParityBit value) {
  return internal::SerialParityBit_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialStopBits : int32_t {
  
  NONE = 0,
  
  ONE = 1,
  
  TWO = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SerialStopBits value);
inline bool IsKnownEnumValue(SerialStopBits value) {
  return internal::SerialStopBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialPortFlushMode : int32_t {
  
  kReceiveAndTransmit = 0,
  
  kReceive = 1,
  
  kTransmit = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SerialPortFlushMode value);
inline bool IsKnownEnumValue(SerialPortFlushMode value) {
  return internal::SerialPortFlushMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class DeviceType : int32_t {
  
  PLATFORM_SERIAL = 0,
  
  SPP_DEVICE = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, DeviceType value);
inline bool IsKnownEnumValue(DeviceType value) {
  return internal::DeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SerialPortManagerInterfaceBase {};

using SerialPortManagerPtrDataView =
    mojo::InterfacePtrDataView<SerialPortManagerInterfaceBase>;
using SerialPortManagerRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortManagerInterfaceBase>;
using SerialPortManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortManagerInterfaceBase>;
using SerialPortManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortManagerInterfaceBase>;
class SerialPortManagerClientInterfaceBase {};

using SerialPortManagerClientPtrDataView =
    mojo::InterfacePtrDataView<SerialPortManagerClientInterfaceBase>;
using SerialPortManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortManagerClientInterfaceBase>;
using SerialPortManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortManagerClientInterfaceBase>;
using SerialPortManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortManagerClientInterfaceBase>;
class SerialPortInterfaceBase {};

using SerialPortPtrDataView =
    mojo::InterfacePtrDataView<SerialPortInterfaceBase>;
using SerialPortRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortInterfaceBase>;
using SerialPortAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortInterfaceBase>;
using SerialPortAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortInterfaceBase>;
class SerialPortClientInterfaceBase {};

using SerialPortClientPtrDataView =
    mojo::InterfacePtrDataView<SerialPortClientInterfaceBase>;
using SerialPortClientRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortClientInterfaceBase>;
using SerialPortClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortClientInterfaceBase>;
using SerialPortClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortClientInterfaceBase>;
class SerialPortConnectionWatcherInterfaceBase {};

using SerialPortConnectionWatcherPtrDataView =
    mojo::InterfacePtrDataView<SerialPortConnectionWatcherInterfaceBase>;
using SerialPortConnectionWatcherRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortConnectionWatcherInterfaceBase>;
using SerialPortConnectionWatcherAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortConnectionWatcherInterfaceBase>;
using SerialPortConnectionWatcherAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortConnectionWatcherInterfaceBase>;


class SerialPortInfoDataView {
 public:
  SerialPortInfoDataView() = default;

  SerialPortInfoDataView(
      internal::SerialPortInfo_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadToken(UserType* output) {
    
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, message_);
  }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPath(UserType* output) {
    
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::DeviceType>(
        data_value, output);
  }
  DeviceType type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::DeviceType>(data_->type));
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDisplayName(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `display_name` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadDisplayName` instead "
    "of `ReadDisplayName if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSerialNumber(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `serial_number` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadSerialNumber` instead "
    "of `ReadSerialNumber if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SerialPortInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SerialConnectionOptionsDataView {
 public:
  SerialConnectionOptionsDataView() = default;

  SerialConnectionOptionsDataView(
      internal::SerialConnectionOptions_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadDataBits(UserType* output) const {
    auto data_value = data_->data_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialDataBits>(
        data_value, output);
  }
  SerialDataBits data_bits() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::SerialDataBits>(data_->data_bits));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadParityBit(UserType* output) const {
    auto data_value = data_->parity_bit;
    return mojo::internal::Deserialize<::device::mojom::SerialParityBit>(
        data_value, output);
  }
  SerialParityBit parity_bit() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::SerialParityBit>(data_->parity_bit));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadStopBits(UserType* output) const {
    auto data_value = data_->stop_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialStopBits>(
        data_value, output);
  }
  SerialStopBits stop_bits() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::SerialStopBits>(data_->stop_bits));
  }
  bool cts_flow_control() const {
    return data_->cts_flow_control;
  }
  bool has_cts_flow_control() const {
    return data_->has_cts_flow_control;
  }
 private:
  internal::SerialConnectionOptions_Data* data_ = nullptr;
};



class SerialConnectionInfoDataView {
 public:
  SerialConnectionInfoDataView() = default;

  SerialConnectionInfoDataView(
      internal::SerialConnectionInfo_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadDataBits(UserType* output) const {
    auto data_value = data_->data_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialDataBits>(
        data_value, output);
  }
  SerialDataBits data_bits() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::SerialDataBits>(data_->data_bits));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadParityBit(UserType* output) const {
    auto data_value = data_->parity_bit;
    return mojo::internal::Deserialize<::device::mojom::SerialParityBit>(
        data_value, output);
  }
  SerialParityBit parity_bit() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::SerialParityBit>(data_->parity_bit));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadStopBits(UserType* output) const {
    auto data_value = data_->stop_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialStopBits>(
        data_value, output);
  }
  SerialStopBits stop_bits() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::SerialStopBits>(data_->stop_bits));
  }
  bool cts_flow_control() const {
    return data_->cts_flow_control;
  }
 private:
  internal::SerialConnectionInfo_Data* data_ = nullptr;
};



class SerialHostControlSignalsDataView {
 public:
  SerialHostControlSignalsDataView() = default;

  SerialHostControlSignalsDataView(
      internal::SerialHostControlSignals_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool dtr() const {
    return data_->dtr;
  }
  bool has_dtr() const {
    return data_->has_dtr;
  }
  bool rts() const {
    return data_->rts;
  }
  bool has_rts() const {
    return data_->has_rts;
  }
  bool brk() const {
    return data_->brk;
  }
  bool has_brk() const {
    return data_->has_brk;
  }
 private:
  internal::SerialHostControlSignals_Data* data_ = nullptr;
};



class SerialPortControlSignalsDataView {
 public:
  SerialPortControlSignalsDataView() = default;

  SerialPortControlSignalsDataView(
      internal::SerialPortControlSignals_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool dcd() const {
    return data_->dcd;
  }
  bool cts() const {
    return data_->cts;
  }
  bool ri() const {
    return data_->ri;
  }
  bool dsr() const {
    return data_->dsr;
  }
 private:
  internal::SerialPortControlSignals_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::SerialSendError>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialSendError> {};

template <>
struct hash<::device::mojom::SerialReceiveError>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialReceiveError> {};

template <>
struct hash<::device::mojom::SerialDataBits>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialDataBits> {};

template <>
struct hash<::device::mojom::SerialParityBit>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialParityBit> {};

template <>
struct hash<::device::mojom::SerialStopBits>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialStopBits> {};

template <>
struct hash<::device::mojom::SerialPortFlushMode>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialPortFlushMode> {};

template <>
struct hash<::device::mojom::DeviceType>
    : public mojo::internal::EnumHashImpl<::device::mojom::DeviceType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialSendError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialSendError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::SerialSendError>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialReceiveError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialReceiveError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::SerialReceiveError>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialDataBits, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialDataBits, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::SerialDataBits>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialParityBit, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialParityBit, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::SerialParityBit>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialStopBits, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialStopBits, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::SerialStopBits>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialPortFlushMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialPortFlushMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::SerialPortFlushMode>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::DeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::DeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::DeviceType>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialPortInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialPortInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::device::mojom::internal::SerialPortInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::token(input)) in_token = Traits::token(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->token)::BaseType> token_fragment(
            fragment.message());
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_token, token_fragment);
    fragment->token.Set(
        token_fragment.is_null() ? nullptr : token_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null token in SerialPortInfo struct");
    decltype(Traits::path(input)) in_path = Traits::path(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->path)::BaseType> path_fragment(
            fragment.message());
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_path, path_fragment);
    fragment->path.Set(
        path_fragment.is_null() ? nullptr : path_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in SerialPortInfo struct");
    mojo::internal::Serialize<::device::mojom::DeviceType>(
        Traits::type(input), &fragment->type);
    fragment->vendor_id = Traits::vendor_id(input);
    fragment->has_vendor_id = Traits::has_vendor_id(input);
    fragment->product_id = Traits::product_id(input);
    fragment->has_product_id = Traits::has_product_id(input);
    decltype(Traits::display_name(input)) in_display_name = Traits::display_name(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->display_name)::BaseType> display_name_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, display_name_fragment);
    fragment->display_name.Set(
        display_name_fragment.is_null() ? nullptr : display_name_fragment.data());
    decltype(Traits::serial_number(input)) in_serial_number = Traits::serial_number(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->serial_number)::BaseType> serial_number_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_serial_number, serial_number_fragment);
    fragment->serial_number.Set(
        serial_number_fragment.is_null() ? nullptr : serial_number_fragment.data());
  }

  static bool Deserialize(::device::mojom::internal::SerialPortInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialPortInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialConnectionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialConnectionOptionsDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::device::mojom::internal::SerialConnectionOptions_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->bitrate = Traits::bitrate(input);
    mojo::internal::Serialize<::device::mojom::SerialDataBits>(
        Traits::data_bits(input), &fragment->data_bits);
    mojo::internal::Serialize<::device::mojom::SerialParityBit>(
        Traits::parity_bit(input), &fragment->parity_bit);
    mojo::internal::Serialize<::device::mojom::SerialStopBits>(
        Traits::stop_bits(input), &fragment->stop_bits);
    fragment->cts_flow_control = Traits::cts_flow_control(input);
    fragment->has_cts_flow_control = Traits::has_cts_flow_control(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialConnectionOptions_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialConnectionOptionsDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialConnectionInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialConnectionInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::device::mojom::internal::SerialConnectionInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->bitrate = Traits::bitrate(input);
    mojo::internal::Serialize<::device::mojom::SerialDataBits>(
        Traits::data_bits(input), &fragment->data_bits);
    mojo::internal::Serialize<::device::mojom::SerialParityBit>(
        Traits::parity_bit(input), &fragment->parity_bit);
    mojo::internal::Serialize<::device::mojom::SerialStopBits>(
        Traits::stop_bits(input), &fragment->stop_bits);
    fragment->cts_flow_control = Traits::cts_flow_control(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialConnectionInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialConnectionInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialHostControlSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialHostControlSignalsDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::device::mojom::internal::SerialHostControlSignals_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->dtr = Traits::dtr(input);
    fragment->has_dtr = Traits::has_dtr(input);
    fragment->rts = Traits::rts(input);
    fragment->has_rts = Traits::has_rts(input);
    fragment->brk = Traits::brk(input);
    fragment->has_brk = Traits::has_brk(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialHostControlSignals_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialHostControlSignalsDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialPortControlSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialPortControlSignalsDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::device::mojom::internal::SerialPortControlSignals_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->dcd = Traits::dcd(input);
    fragment->cts = Traits::cts(input);
    fragment->ri = Traits::ri(input);
    fragment->dsr = Traits::dsr(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialPortControlSignals_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialPortControlSignalsDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void SerialPortInfoDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, message_);
}
inline void SerialPortInfoDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, message_);
}
inline void SerialPortInfoDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void SerialPortInfoDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, message_);
}











}  // namespace mojom
}  // namespace device

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::SerialSendError> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::SerialSendError value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::SerialReceiveError> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::SerialReceiveError value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::SerialDataBits> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::SerialDataBits value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::SerialParityBit> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::SerialParityBit value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::SerialStopBits> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::SerialStopBits value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::SerialPortFlushMode> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::SerialPortFlushMode value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::DeviceType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::DeviceType value);
};

} // namespace perfetto

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_