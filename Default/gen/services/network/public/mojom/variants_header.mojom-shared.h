// services/network/public/mojom/variants_header.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_VARIANTS_HEADER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_VARIANTS_HEADER_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/variants_header.mojom-shared-internal.h"







namespace network {
namespace mojom {
class VariantsHeaderDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::VariantsHeaderDataView> {
  using Data = ::network::mojom::internal::VariantsHeader_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


class VariantsHeaderDataView {
 public:
  VariantsHeaderDataView() = default;

  VariantsHeaderDataView(
      internal::VariantsHeader_Data* data,
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
  inline void GetAvailableValuesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAvailableValues(UserType* output) {
    
    auto* pointer = data_->available_values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::VariantsHeader_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::VariantsHeaderDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::VariantsHeaderDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::VariantsHeader_Data>& fragment) {
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
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in VariantsHeader struct");
    decltype(Traits::available_values(input)) in_available_values = Traits::available_values(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->available_values)::BaseType>
        available_values_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams available_values_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_available_values, available_values_fragment, &available_values_validate_params);
    fragment->available_values.Set(
        available_values_fragment.is_null() ? nullptr : available_values_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->available_values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null available_values in VariantsHeader struct");
  }

  static bool Deserialize(::network::mojom::internal::VariantsHeader_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::VariantsHeaderDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void VariantsHeaderDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void VariantsHeaderDataView::GetAvailableValuesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->available_values.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_VARIANTS_HEADER_MOJOM_SHARED_H_