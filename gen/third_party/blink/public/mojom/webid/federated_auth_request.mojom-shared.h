// third_party/blink/public/mojom/webid/federated_auth_request.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBID_FEDERATED_AUTH_REQUEST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBID_FEDERATED_AUTH_REQUEST_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/webid/federated_auth_request.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "base/component_export.h"




namespace blink {
namespace mojom {
class LogoutRpsRequestDataView;

class IdentityProviderDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::LogoutRpsRequestDataView> {
  using Data = ::blink::mojom::internal::LogoutRpsRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::blink::mojom::IdentityProviderDataView> {
  using Data = ::blink::mojom::internal::IdentityProvider_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class RequestTokenStatus : int32_t {
  
  kSuccess = 0,
  
  kApprovalDeclined = 1,
  
  kErrorTooManyRequests = 2,
  
  kErrorCanceled = 3,
  
  kError = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, RequestTokenStatus value);
inline bool IsKnownEnumValue(RequestTokenStatus value) {
  return internal::RequestTokenStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class LogoutRpsStatus : int32_t {
  
  kSuccess = 0,
  
  kErrorTooManyRequests = 1,
  
  kError = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, LogoutRpsStatus value);
inline bool IsKnownEnumValue(LogoutRpsStatus value) {
  return internal::LogoutRpsStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FederatedAuthRequestInterfaceBase {};

using FederatedAuthRequestPtrDataView =
    mojo::InterfacePtrDataView<FederatedAuthRequestInterfaceBase>;
using FederatedAuthRequestRequestDataView =
    mojo::InterfaceRequestDataView<FederatedAuthRequestInterfaceBase>;
using FederatedAuthRequestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FederatedAuthRequestInterfaceBase>;
using FederatedAuthRequestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FederatedAuthRequestInterfaceBase>;


class LogoutRpsRequestDataView {
 public:
  LogoutRpsRequestDataView() = default;

  LogoutRpsRequestDataView(
      internal::LogoutRpsRequest_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetAccountIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAccountId(UserType* output) {
    
    auto* pointer = data_->account_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::LogoutRpsRequest_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class IdentityProviderDataView {
 public:
  IdentityProviderDataView() = default;

  IdentityProviderDataView(
      internal::IdentityProvider_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetConfigUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadConfigUrl(UserType* output) {
    
    auto* pointer = data_->config_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadClientId(UserType* output) {
    
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetNonceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadNonce(UserType* output) {
    
    auto* pointer = data_->nonce.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::IdentityProvider_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::RequestTokenStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::RequestTokenStatus> {};

template <>
struct hash<::blink::mojom::LogoutRpsStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LogoutRpsStatus> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RequestTokenStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::RequestTokenStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::RequestTokenStatus>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LogoutRpsStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LogoutRpsStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::LogoutRpsStatus>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LogoutRpsRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::LogoutRpsRequestDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::LogoutRpsRequest_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::url(input)) in_url = Traits::url(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->url)::BaseType> url_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, url_fragment);
    fragment->url.Set(
        url_fragment.is_null() ? nullptr : url_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in LogoutRpsRequest struct");
    decltype(Traits::account_id(input)) in_account_id = Traits::account_id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->account_id)::BaseType> account_id_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_account_id, account_id_fragment);
    fragment->account_id.Set(
        account_id_fragment.is_null() ? nullptr : account_id_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->account_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null account_id in LogoutRpsRequest struct");
  }

  static bool Deserialize(::blink::mojom::internal::LogoutRpsRequest_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::LogoutRpsRequestDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IdentityProviderDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IdentityProviderDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::IdentityProvider_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::config_url(input)) in_config_url = Traits::config_url(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->config_url)::BaseType> config_url_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_config_url, config_url_fragment);
    fragment->config_url.Set(
        config_url_fragment.is_null() ? nullptr : config_url_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->config_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null config_url in IdentityProvider struct");
    decltype(Traits::client_id(input)) in_client_id = Traits::client_id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->client_id)::BaseType> client_id_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_id, client_id_fragment);
    fragment->client_id.Set(
        client_id_fragment.is_null() ? nullptr : client_id_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->client_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_id in IdentityProvider struct");
    decltype(Traits::nonce(input)) in_nonce = Traits::nonce(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->nonce)::BaseType> nonce_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_nonce, nonce_fragment);
    fragment->nonce.Set(
        nonce_fragment.is_null() ? nullptr : nonce_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->nonce.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null nonce in IdentityProvider struct");
  }

  static bool Deserialize(::blink::mojom::internal::IdentityProvider_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IdentityProviderDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void LogoutRpsRequestDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void LogoutRpsRequestDataView::GetAccountIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->account_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void IdentityProviderDataView::GetConfigUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->config_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void IdentityProviderDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void IdentityProviderDataView::GetNonceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->nonce.Get();
  *output = mojo::StringDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::RequestTokenStatus> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::RequestTokenStatus value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::LogoutRpsStatus> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::LogoutRpsStatus value);
};

} // namespace perfetto

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBID_FEDERATED_AUTH_REQUEST_MOJOM_SHARED_H_