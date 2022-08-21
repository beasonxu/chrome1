// services/network/public/mojom/early_hints.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_EARLY_HINTS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_EARLY_HINTS_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/early_hints.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address_space.mojom-shared.h"
#include "services/network/public/mojom/parsed_headers.mojom-shared.h"
#include "services/network/public/mojom/referrer_policy.mojom-shared.h"







namespace network {
namespace mojom {
class EarlyHintsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::EarlyHintsDataView> {
  using Data = ::network::mojom::internal::EarlyHints_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


class EarlyHintsDataView {
 public:
  EarlyHintsDataView() = default;

  EarlyHintsDataView(
      internal::EarlyHints_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      ::network::mojom::ParsedHeadersDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadHeaders(UserType* output) {
    
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::network::mojom::ParsedHeadersDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadReferrerPolicy(UserType* output) const {
    auto data_value = data_->referrer_policy;
    return mojo::internal::Deserialize<::network::mojom::ReferrerPolicy>(
        data_value, output);
  }
  ::network::mojom::ReferrerPolicy referrer_policy() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::network::mojom::ReferrerPolicy>(data_->referrer_policy));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadIpAddressSpace(UserType* output) const {
    auto data_value = data_->ip_address_space;
    return mojo::internal::Deserialize<::network::mojom::IPAddressSpace>(
        data_value, output);
  }
  ::network::mojom::IPAddressSpace ip_address_space() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::network::mojom::IPAddressSpace>(data_->ip_address_space));
  }
 private:
  internal::EarlyHints_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::EarlyHintsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::EarlyHintsDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::EarlyHints_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->headers)::BaseType> headers_fragment(
            fragment.message());
    mojo::internal::Serialize<::network::mojom::ParsedHeadersDataView>(
        in_headers, headers_fragment);
    fragment->headers.Set(
        headers_fragment.is_null() ? nullptr : headers_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in EarlyHints struct");
    mojo::internal::Serialize<::network::mojom::ReferrerPolicy>(
        Traits::referrer_policy(input), &fragment->referrer_policy);
    mojo::internal::Serialize<::network::mojom::IPAddressSpace>(
        Traits::ip_address_space(input), &fragment->ip_address_space);
  }

  static bool Deserialize(::network::mojom::internal::EarlyHints_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::EarlyHintsDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void EarlyHintsDataView::GetHeadersDataView(
    ::network::mojom::ParsedHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = ::network::mojom::ParsedHeadersDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_EARLY_HINTS_MOJOM_SHARED_H_