// services/network/public/mojom/network_param.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "url/mojom/scheme_host_port.mojom-shared.h"



#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class AuthChallengeInfoDataView;

using AuthCredentialsDataView = mojo::native::NativeStructDataView;

using CertVerifyResultDataView = mojo::native::NativeStructDataView;

using HttpResponseHeadersDataView = mojo::native::NativeStructDataView;

class HttpVersionDataView;

using HostPortPairDataView = mojo::native::NativeStructDataView;

using ProxyServerDataView = mojo::native::NativeStructDataView;

class ResolveErrorInfoDataView;

using SSLCertRequestInfoDataView = mojo::native::NativeStructDataView;

using SSLInfoDataView = mojo::native::NativeStructDataView;

using X509CertificateDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::AuthChallengeInfoDataView> {
  using Data = ::network::mojom::internal::AuthChallengeInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::network::mojom::HttpVersionDataView> {
  using Data = ::network::mojom::internal::HttpVersion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::network::mojom::ResolveErrorInfoDataView> {
  using Data = ::network::mojom::internal::ResolveErrorInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


class AuthChallengeInfoDataView {
 public:
  AuthChallengeInfoDataView() = default;

  AuthChallengeInfoDataView(
      internal::AuthChallengeInfo_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool is_proxy() const {
    return data_->is_proxy;
  }
  inline void GetChallengerDataView(
      ::url::mojom::SchemeHostPortDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadChallenger(UserType* output) {
    
    auto* pointer = data_->challenger.Get();
    return mojo::internal::Deserialize<::url::mojom::SchemeHostPortDataView>(
        pointer, output, message_);
  }
  inline void GetSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadScheme(UserType* output) {
    
    auto* pointer = data_->scheme.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRealm(UserType* output) {
    
    auto* pointer = data_->realm.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetChallengeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadChallenge(UserType* output) {
    
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPath(UserType* output) {
    
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::AuthChallengeInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class HttpVersionDataView {
 public:
  HttpVersionDataView() = default;

  HttpVersionDataView(
      internal::HttpVersion_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t major_value() const {
    return data_->major_value;
  }
  uint16_t minor_value() const {
    return data_->minor_value;
  }
 private:
  internal::HttpVersion_Data* data_ = nullptr;
};



class ResolveErrorInfoDataView {
 public:
  ResolveErrorInfoDataView() = default;

  ResolveErrorInfoDataView(
      internal::ResolveErrorInfo_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t error() const {
    return data_->error;
  }
  bool is_secure_network_error() const {
    return data_->is_secure_network_error;
  }
 private:
  internal::ResolveErrorInfo_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::AuthChallengeInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::AuthChallengeInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::AuthChallengeInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->is_proxy = Traits::is_proxy(input);
    decltype(Traits::challenger(input)) in_challenger = Traits::challenger(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->challenger)::BaseType> challenger_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::SchemeHostPortDataView>(
        in_challenger, challenger_fragment);
    fragment->challenger.Set(
        challenger_fragment.is_null() ? nullptr : challenger_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->challenger.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null challenger in AuthChallengeInfo struct");
    decltype(Traits::scheme(input)) in_scheme = Traits::scheme(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->scheme)::BaseType> scheme_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_scheme, scheme_fragment);
    fragment->scheme.Set(
        scheme_fragment.is_null() ? nullptr : scheme_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->scheme.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scheme in AuthChallengeInfo struct");
    decltype(Traits::realm(input)) in_realm = Traits::realm(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->realm)::BaseType> realm_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_realm, realm_fragment);
    fragment->realm.Set(
        realm_fragment.is_null() ? nullptr : realm_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->realm.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null realm in AuthChallengeInfo struct");
    decltype(Traits::challenge(input)) in_challenge = Traits::challenge(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->challenge)::BaseType> challenge_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_challenge, challenge_fragment);
    fragment->challenge.Set(
        challenge_fragment.is_null() ? nullptr : challenge_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->challenge.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null challenge in AuthChallengeInfo struct");
    decltype(Traits::path(input)) in_path = Traits::path(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->path)::BaseType> path_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, path_fragment);
    fragment->path.Set(
        path_fragment.is_null() ? nullptr : path_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in AuthChallengeInfo struct");
  }

  static bool Deserialize(::network::mojom::internal::AuthChallengeInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::AuthChallengeInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpVersionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpVersionDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::HttpVersion_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->major_value = Traits::major_value(input);
    fragment->minor_value = Traits::minor_value(input);
  }

  static bool Deserialize(::network::mojom::internal::HttpVersion_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpVersionDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ResolveErrorInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ResolveErrorInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::ResolveErrorInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->error = Traits::error(input);
    fragment->is_secure_network_error = Traits::is_secure_network_error(input);
  }

  static bool Deserialize(::network::mojom::internal::ResolveErrorInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ResolveErrorInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void AuthChallengeInfoDataView::GetChallengerDataView(
    ::url::mojom::SchemeHostPortDataView* output) {
  auto pointer = data_->challenger.Get();
  *output = ::url::mojom::SchemeHostPortDataView(pointer, message_);
}
inline void AuthChallengeInfoDataView::GetSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->scheme.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void AuthChallengeInfoDataView::GetRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->realm.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void AuthChallengeInfoDataView::GetChallengeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void AuthChallengeInfoDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, message_);
}







}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_H_