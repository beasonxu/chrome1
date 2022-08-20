// components/mirroring/mojom/cast_message_channel.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MIRRORING_MOJOM_CAST_MESSAGE_CHANNEL_MOJOM_SHARED_H_
#define COMPONENTS_MIRRORING_MOJOM_CAST_MESSAGE_CHANNEL_MOJOM_SHARED_H_

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

#include "components/mirroring/mojom/cast_message_channel.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace mirroring {
namespace mojom {
class CastMessageDataView;



}  // namespace mojom
}  // namespace mirroring

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mirroring::mojom::CastMessageDataView> {
  using Data = ::mirroring::mojom::internal::CastMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace mirroring {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CastMessageChannelInterfaceBase {};

using CastMessageChannelPtrDataView =
    mojo::InterfacePtrDataView<CastMessageChannelInterfaceBase>;
using CastMessageChannelRequestDataView =
    mojo::InterfaceRequestDataView<CastMessageChannelInterfaceBase>;
using CastMessageChannelAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CastMessageChannelInterfaceBase>;
using CastMessageChannelAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CastMessageChannelInterfaceBase>;


class CastMessageDataView {
 public:
  CastMessageDataView() = default;

  CastMessageDataView(
      internal::CastMessage_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMessageNamespaceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessageNamespace(UserType* output) {
    
    auto* pointer = data_->message_namespace.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetJsonFormatDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadJsonFormatData(UserType* output) {
    
    auto* pointer = data_->json_format_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::CastMessage_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace mirroring

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mirroring::mojom::CastMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mirroring::mojom::CastMessageDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::mirroring::mojom::internal::CastMessage_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::message_namespace(input)) in_message_namespace = Traits::message_namespace(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->message_namespace)::BaseType> message_namespace_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message_namespace, message_namespace_fragment);
    fragment->message_namespace.Set(
        message_namespace_fragment.is_null() ? nullptr : message_namespace_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->message_namespace.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message_namespace in CastMessage struct");
    decltype(Traits::json_format_data(input)) in_json_format_data = Traits::json_format_data(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->json_format_data)::BaseType> json_format_data_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_json_format_data, json_format_data_fragment);
    fragment->json_format_data.Set(
        json_format_data_fragment.is_null() ? nullptr : json_format_data_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->json_format_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null json_format_data in CastMessage struct");
  }

  static bool Deserialize(::mirroring::mojom::internal::CastMessage_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mirroring::mojom::CastMessageDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mirroring {
namespace mojom {

inline void CastMessageDataView::GetMessageNamespaceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message_namespace.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void CastMessageDataView::GetJsonFormatDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->json_format_data.Get();
  *output = mojo::StringDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace mirroring

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // COMPONENTS_MIRRORING_MOJOM_CAST_MESSAGE_CHANNEL_MOJOM_SHARED_H_