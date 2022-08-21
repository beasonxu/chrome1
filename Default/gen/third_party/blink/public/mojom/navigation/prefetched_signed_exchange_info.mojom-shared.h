// third_party/blink/public/mojom/navigation/prefetched_signed_exchange_info.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_PREFETCHED_SIGNED_EXCHANGE_INFO_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_PREFETCHED_SIGNED_EXCHANGE_INFO_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/navigation/prefetched_signed_exchange_info.mojom-shared-internal.h"
#include "mojo/public/mojom/base/byte_string.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/url_response_head.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SHA256HashValueDataView;

class PrefetchedSignedExchangeInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SHA256HashValueDataView> {
  using Data = ::blink::mojom::internal::SHA256HashValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::blink::mojom::PrefetchedSignedExchangeInfoDataView> {
  using Data = ::blink::mojom::internal::PrefetchedSignedExchangeInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


class SHA256HashValueDataView {
 public:
  SHA256HashValueDataView() = default;

  SHA256HashValueDataView(
      internal::SHA256HashValue_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::ByteStringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadData(UserType* output) {
    
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ByteStringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SHA256HashValue_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PrefetchedSignedExchangeInfoDataView {
 public:
  PrefetchedSignedExchangeInfoDataView() = default;

  PrefetchedSignedExchangeInfoDataView(
      internal::PrefetchedSignedExchangeInfo_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetOuterUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOuterUrl(UserType* output) {
    
    auto* pointer = data_->outer_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetHeaderIntegrityDataView(
      SHA256HashValueDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadHeaderIntegrity(UserType* output) {
    
    auto* pointer = data_->header_integrity.Get();
    return mojo::internal::Deserialize<::blink::mojom::SHA256HashValueDataView>(
        pointer, output, message_);
  }
  inline void GetInnerUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadInnerUrl(UserType* output) {
    
    auto* pointer = data_->inner_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetInnerResponseDataView(
      ::network::mojom::URLResponseHeadDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadInnerResponse(UserType* output) {
    
    auto* pointer = data_->inner_response.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeLoaderFactoryHandle() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::network::mojom::URLLoaderFactoryInterfaceBase>>(
            &data_->loader_factory_handle, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PrefetchedSignedExchangeInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SHA256HashValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SHA256HashValueDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::SHA256HashValue_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::data(input)) in_data = Traits::data(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->data)::BaseType> data_fragment(
            fragment.message());
    mojo::internal::Serialize<::mojo_base::mojom::ByteStringDataView>(
        in_data, data_fragment);
    fragment->data.Set(
        data_fragment.is_null() ? nullptr : data_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in SHA256HashValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::SHA256HashValue_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SHA256HashValueDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PrefetchedSignedExchangeInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PrefetchedSignedExchangeInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::PrefetchedSignedExchangeInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::outer_url(input)) in_outer_url = Traits::outer_url(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->outer_url)::BaseType> outer_url_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_outer_url, outer_url_fragment);
    fragment->outer_url.Set(
        outer_url_fragment.is_null() ? nullptr : outer_url_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->outer_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null outer_url in PrefetchedSignedExchangeInfo struct");
    decltype(Traits::header_integrity(input)) in_header_integrity = Traits::header_integrity(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->header_integrity)::BaseType> header_integrity_fragment(
            fragment.message());
    mojo::internal::Serialize<::blink::mojom::SHA256HashValueDataView>(
        in_header_integrity, header_integrity_fragment);
    fragment->header_integrity.Set(
        header_integrity_fragment.is_null() ? nullptr : header_integrity_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->header_integrity.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null header_integrity in PrefetchedSignedExchangeInfo struct");
    decltype(Traits::inner_url(input)) in_inner_url = Traits::inner_url(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->inner_url)::BaseType> inner_url_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_inner_url, inner_url_fragment);
    fragment->inner_url.Set(
        inner_url_fragment.is_null() ? nullptr : inner_url_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->inner_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null inner_url in PrefetchedSignedExchangeInfo struct");
    decltype(Traits::inner_response(input)) in_inner_response = Traits::inner_response(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->inner_response)::BaseType> inner_response_fragment(
            fragment.message());
    mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
        in_inner_response, inner_response_fragment);
    fragment->inner_response.Set(
        inner_response_fragment.is_null() ? nullptr : inner_response_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->inner_response.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null inner_response in PrefetchedSignedExchangeInfo struct");
    decltype(Traits::loader_factory_handle(input)) in_loader_factory_handle = Traits::loader_factory_handle(input);
    mojo::internal::Serialize<mojo::InterfacePtrDataView<::network::mojom::URLLoaderFactoryInterfaceBase>>(
        in_loader_factory_handle, &fragment->loader_factory_handle, &fragment.message());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid(fragment->loader_factory_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid loader_factory_handle in PrefetchedSignedExchangeInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::PrefetchedSignedExchangeInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PrefetchedSignedExchangeInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SHA256HashValueDataView::GetDataDataView(
    ::mojo_base::mojom::ByteStringDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ByteStringDataView(pointer, message_);
}


inline void PrefetchedSignedExchangeInfoDataView::GetOuterUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->outer_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void PrefetchedSignedExchangeInfoDataView::GetHeaderIntegrityDataView(
    SHA256HashValueDataView* output) {
  auto pointer = data_->header_integrity.Get();
  *output = SHA256HashValueDataView(pointer, message_);
}
inline void PrefetchedSignedExchangeInfoDataView::GetInnerUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->inner_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void PrefetchedSignedExchangeInfoDataView::GetInnerResponseDataView(
    ::network::mojom::URLResponseHeadDataView* output) {
  auto pointer = data_->inner_response.Get();
  *output = ::network::mojom::URLResponseHeadDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_PREFETCHED_SIGNED_EXCHANGE_INFO_MOJOM_SHARED_H_