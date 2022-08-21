// services/device/public/mojom/fingerprint.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_

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

#include "services/device/public/mojom/fingerprint.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace device {
namespace mojom {
class FingerprintMessageDataView;


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::FingerprintMessageDataView> {
  using Data = ::device::mojom::internal::FingerprintMessage_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kUnion;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class ScanResult : int32_t {
  
  SUCCESS = 0,
  
  PARTIAL = 1,
  
  INSUFFICIENT = 2,
  
  SENSOR_DIRTY = 3,
  
  TOO_SLOW = 4,
  
  TOO_FAST = 5,
  
  IMMOBILE = 6,
  
  NO_MATCH = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

 std::ostream& operator<<(std::ostream& os, ScanResult value);
inline bool IsKnownEnumValue(ScanResult value) {
  return internal::ScanResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FingerprintError : int32_t {
  
  UNKNOWN = 0,
  
  HW_UNAVAILABLE = 1,
  
  UNABLE_TO_PROCESS = 2,
  
  TIMEOUT = 3,
  
  NO_SPACE = 4,
  
  CANCELED = 5,
  
  UNABLE_TO_REMOVE = 6,
  
  LOCKOUT = 7,
  
  NO_TEMPLATES = 8,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, FingerprintError value);
inline bool IsKnownEnumValue(FingerprintError value) {
  return internal::FingerprintError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BiometricType : int32_t {
  
  UNKNOWN = 0,
  
  FINGERPRINT = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, BiometricType value);
inline bool IsKnownEnumValue(BiometricType value) {
  return internal::BiometricType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FingerprintObserverInterfaceBase {};

using FingerprintObserverPtrDataView =
    mojo::InterfacePtrDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverRequestDataView =
    mojo::InterfaceRequestDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FingerprintObserverInterfaceBase>;
class FingerprintInterfaceBase {};

using FingerprintPtrDataView =
    mojo::InterfacePtrDataView<FingerprintInterfaceBase>;
using FingerprintRequestDataView =
    mojo::InterfaceRequestDataView<FingerprintInterfaceBase>;
using FingerprintAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FingerprintInterfaceBase>;
using FingerprintAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FingerprintInterfaceBase>;


class FingerprintMessageDataView {
 public:
  using Tag = internal::FingerprintMessage_Data::FingerprintMessage_Tag;

  FingerprintMessageDataView() = default;

  FingerprintMessageDataView(
      internal::FingerprintMessage_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_fingerprint_error() const { return data_->tag == Tag::kFingerprintError; }
  template <typename UserType>
  [[nodiscard]] bool ReadFingerprintError(UserType* output) const {
    CHECK(is_fingerprint_error());
    return mojo::internal::Deserialize<::device::mojom::FingerprintError>(
        data_->data.f_fingerprint_error, output);
  }
  FingerprintError fingerprint_error() const {
    CHECK(is_fingerprint_error());
    // TODO(dcheng): This seems incorrect, as it bypasses enum traits.
    return ::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::FingerprintError>(data_->data.f_fingerprint_error));
  }
  bool is_scan_result() const { return data_->tag == Tag::kScanResult; }
  template <typename UserType>
  [[nodiscard]] bool ReadScanResult(UserType* output) const {
    CHECK(is_scan_result());
    return mojo::internal::Deserialize<::device::mojom::ScanResult>(
        data_->data.f_scan_result, output);
  }
  ScanResult scan_result() const {
    CHECK(is_scan_result());
    // TODO(dcheng): This seems incorrect, as it bypasses enum traits.
    return ::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::ScanResult>(data_->data.f_scan_result));
  }

 private:
  internal::FingerprintMessage_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::ScanResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::ScanResult> {};

template <>
struct hash<::device::mojom::FingerprintError>
    : public mojo::internal::EnumHashImpl<::device::mojom::FingerprintError> {};

template <>
struct hash<::device::mojom::BiometricType>
    : public mojo::internal::EnumHashImpl<::device::mojom::BiometricType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::ScanResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::ScanResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::ScanResult>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::FingerprintError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::FingerprintError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::FingerprintError>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BiometricType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BiometricType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::device::mojom::BiometricType>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::FingerprintMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::device::mojom::FingerprintMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        MessageFragment<::device::mojom::internal::FingerprintMessage_Data>& fragment,
                        bool inlined) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
        fragment->set_null();
      return;
    }

    if (!inlined)
      fragment.Allocate();

    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    fragment->size = kUnionDataSize;
    fragment->tag = Traits::GetTag(input);
    switch (fragment->tag) {
      case ::device::mojom::FingerprintMessageDataView::Tag::kFingerprintError: {
        decltype(Traits::fingerprint_error(input))
            in_fingerprint_error = Traits::fingerprint_error(input);
        mojo::internal::Serialize<::device::mojom::FingerprintError>(
            in_fingerprint_error, &fragment->data.f_fingerprint_error);
        break;
      }
      case ::device::mojom::FingerprintMessageDataView::Tag::kScanResult: {
        decltype(Traits::scan_result(input))
            in_scan_result = Traits::scan_result(input);
        mojo::internal::Serialize<::device::mojom::ScanResult>(
            in_scan_result, &fragment->data.f_scan_result);
        break;
      }
    }
  }

  static bool Deserialize(::device::mojom::internal::FingerprintMessage_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::FingerprintMessageDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {



}  // namespace mojom
}  // namespace device

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::ScanResult> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::ScanResult value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::FingerprintError> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::FingerprintError value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::device::mojom::BiometricType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::device::mojom::BiometricType value);
};

} // namespace perfetto

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_