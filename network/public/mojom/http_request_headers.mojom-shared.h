// services/network/public/mojom/http_request_headers.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"







namespace network {
namespace mojom {
class HttpRequestHeaderKeyValuePairDataView;

class HttpRequestHeadersDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::HttpRequestHeaderKeyValuePairDataView> {
  using Data = ::network::mojom::internal::HttpRequestHeaderKeyValuePair_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::network::mojom::HttpRequestHeadersDataView> {
  using Data = ::network::mojom::internal::HttpRequestHeaders_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


class HttpRequestHeaderKeyValuePairDataView {
 public:
  HttpRequestHeaderKeyValuePairDataView() = default;

  HttpRequestHeaderKeyValuePairDataView(
      internal::HttpRequestHeaderKeyValuePair_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKey(UserType* output) {
    
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadValue(UserType* output) {
    
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::HttpRequestHeaderKeyValuePair_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class HttpRequestHeadersDataView {
 public:
  HttpRequestHeadersDataView() = default;

  HttpRequestHeadersDataView(
      internal::HttpRequestHeaders_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      mojo::ArrayDataView<HttpRequestHeaderKeyValuePairDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadHeaders(UserType* output) {
    
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::HttpRequestHeaderKeyValuePairDataView>>(
        pointer, output, message_);
  }
 private:
  internal::HttpRequestHeaders_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpRequestHeaderKeyValuePairDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpRequestHeaderKeyValuePairDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::HttpRequestHeaderKeyValuePair_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::key(input)) in_key = Traits::key(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->key)::BaseType> key_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key, key_fragment);
    fragment->key.Set(
        key_fragment.is_null() ? nullptr : key_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in HttpRequestHeaderKeyValuePair struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->value)::BaseType> value_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, value_fragment);
    fragment->value.Set(
        value_fragment.is_null() ? nullptr : value_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in HttpRequestHeaderKeyValuePair struct");
  }

  static bool Deserialize(::network::mojom::internal::HttpRequestHeaderKeyValuePair_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpRequestHeaderKeyValuePairDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpRequestHeadersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpRequestHeadersDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::HttpRequestHeaders_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->headers)::BaseType>
        headers_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::HttpRequestHeaderKeyValuePairDataView>>(
        in_headers, headers_fragment, &headers_validate_params);
    fragment->headers.Set(
        headers_fragment.is_null() ? nullptr : headers_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in HttpRequestHeaders struct");
  }

  static bool Deserialize(::network::mojom::internal::HttpRequestHeaders_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpRequestHeadersDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void HttpRequestHeaderKeyValuePairDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void HttpRequestHeaderKeyValuePairDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void HttpRequestHeadersDataView::GetHeadersDataView(
    mojo::ArrayDataView<HttpRequestHeaderKeyValuePairDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::ArrayDataView<HttpRequestHeaderKeyValuePairDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_SHARED_H_