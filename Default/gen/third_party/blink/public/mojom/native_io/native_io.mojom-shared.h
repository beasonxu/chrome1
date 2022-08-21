// third_party/blink/public/mojom/native_io/native_io.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_IO_NATIVE_IO_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_IO_NATIVE_IO_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/native_io/native_io.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_error.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "base/component_export.h"




namespace blink {
namespace mojom {
class NativeIOErrorDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::NativeIOErrorDataView> {
  using Data = ::blink::mojom::internal::NativeIOError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class NativeIOErrorType : int32_t {
  
  kSuccess = 0,
  
  kUnknown = 1,
  
  kInvalidState = 2,
  
  kNotFound = 3,
  
  kNoModificationAllowed = 4,
  
  kNoSpace = 5,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, NativeIOErrorType value);
inline bool IsKnownEnumValue(NativeIOErrorType value) {
  return internal::NativeIOErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NativeIOFileHostInterfaceBase {};

using NativeIOFileHostPtrDataView =
    mojo::InterfacePtrDataView<NativeIOFileHostInterfaceBase>;
using NativeIOFileHostRequestDataView =
    mojo::InterfaceRequestDataView<NativeIOFileHostInterfaceBase>;
using NativeIOFileHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NativeIOFileHostInterfaceBase>;
using NativeIOFileHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NativeIOFileHostInterfaceBase>;
class NativeIOHostInterfaceBase {};

using NativeIOHostPtrDataView =
    mojo::InterfacePtrDataView<NativeIOHostInterfaceBase>;
using NativeIOHostRequestDataView =
    mojo::InterfaceRequestDataView<NativeIOHostInterfaceBase>;
using NativeIOHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NativeIOHostInterfaceBase>;
using NativeIOHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NativeIOHostInterfaceBase>;


class NativeIOErrorDataView {
 public:
  NativeIOErrorDataView() = default;

  NativeIOErrorDataView(
      internal::NativeIOError_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::NativeIOErrorType>(
        data_value, output);
  }
  NativeIOErrorType type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::NativeIOErrorType>(data_->type));
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessage(UserType* output) {
    
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::NativeIOError_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::NativeIOErrorType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::NativeIOErrorType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NativeIOErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::NativeIOErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::NativeIOErrorType>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NativeIOErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::NativeIOErrorDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::NativeIOError_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    mojo::internal::Serialize<::blink::mojom::NativeIOErrorType>(
        Traits::type(input), &fragment->type);
    decltype(Traits::message(input)) in_message = Traits::message(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->message)::BaseType> message_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, message_fragment);
    fragment->message.Set(
        message_fragment.is_null() ? nullptr : message_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in NativeIOError struct");
  }

  static bool Deserialize(::blink::mojom::internal::NativeIOError_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NativeIOErrorDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void NativeIOErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::NativeIOErrorType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::NativeIOErrorType value);
};

} // namespace perfetto

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_IO_NATIVE_IO_MOJOM_SHARED_H_