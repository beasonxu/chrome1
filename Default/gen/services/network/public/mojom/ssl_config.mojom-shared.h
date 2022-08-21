// services/network/public/mojom/ssl_config.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/ssl_config.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace network {
namespace mojom {
class SSLConfigDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::SSLConfigDataView> {
  using Data = ::network::mojom::internal::SSLConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class SSLVersion : int32_t {
  
  kTLS1 = 0,
  
  kTLS11 = 1,
  
  kTLS12 = 2,
  
  kTLS13 = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, SSLVersion value);
inline bool IsKnownEnumValue(SSLVersion value) {
  return internal::SSLVersion_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SSLConfigClientInterfaceBase {};

using SSLConfigClientPtrDataView =
    mojo::InterfacePtrDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientRequestDataView =
    mojo::InterfaceRequestDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SSLConfigClientInterfaceBase>;


class SSLConfigDataView {
 public:
  SSLConfigDataView() = default;

  SSLConfigDataView(
      internal::SSLConfig_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  bool rev_checking_enabled() const {
    return data_->rev_checking_enabled;
  }
  bool rev_checking_required_local_anchors() const {
    return data_->rev_checking_required_local_anchors;
  }
  bool sha1_local_anchors_enabled() const {
    return data_->sha1_local_anchors_enabled;
  }
  bool symantec_enforcement_disabled() const {
    return data_->symantec_enforcement_disabled;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadVersionMin(UserType* output) const {
    auto data_value = data_->version_min;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }
  SSLVersion version_min() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::network::mojom::SSLVersion>(data_->version_min));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadVersionMax(UserType* output) const {
    auto data_value = data_->version_max;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }
  SSLVersion version_max() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::network::mojom::SSLVersion>(data_->version_max));
  }
  inline void GetDisabledCipherSuitesDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDisabledCipherSuites(UserType* output) {
    
    auto* pointer = data_->disabled_cipher_suites.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, message_);
  }
  inline void GetClientCertPoolingPolicyDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadClientCertPoolingPolicy(UserType* output) {
    
    auto* pointer = data_->client_cert_pooling_policy.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
  bool cecpq2_enabled() const {
    return data_->cecpq2_enabled;
  }
  bool ech_enabled() const {
    return data_->ech_enabled;
  }
 private:
  internal::SSLConfig_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::SSLVersion>
    : public mojo::internal::EnumHashImpl<::network::mojom::SSLVersion> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SSLVersion, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::SSLVersion, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::network::mojom::SSLVersion>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SSLConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::SSLConfigDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::SSLConfig_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->rev_checking_enabled = Traits::rev_checking_enabled(input);
    fragment->rev_checking_required_local_anchors = Traits::rev_checking_required_local_anchors(input);
    fragment->sha1_local_anchors_enabled = Traits::sha1_local_anchors_enabled(input);
    fragment->symantec_enforcement_disabled = Traits::symantec_enforcement_disabled(input);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        Traits::version_min(input), &fragment->version_min);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        Traits::version_max(input), &fragment->version_max);
    decltype(Traits::disabled_cipher_suites(input)) in_disabled_cipher_suites = Traits::disabled_cipher_suites(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->disabled_cipher_suites)::BaseType>
        disabled_cipher_suites_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams disabled_cipher_suites_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_disabled_cipher_suites, disabled_cipher_suites_fragment, &disabled_cipher_suites_validate_params);
    fragment->disabled_cipher_suites.Set(
        disabled_cipher_suites_fragment.is_null() ? nullptr : disabled_cipher_suites_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->disabled_cipher_suites.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null disabled_cipher_suites in SSLConfig struct");
    decltype(Traits::client_cert_pooling_policy(input)) in_client_cert_pooling_policy = Traits::client_cert_pooling_policy(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->client_cert_pooling_policy)::BaseType>
        client_cert_pooling_policy_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams client_cert_pooling_policy_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_client_cert_pooling_policy, client_cert_pooling_policy_fragment, &client_cert_pooling_policy_validate_params);
    fragment->client_cert_pooling_policy.Set(
        client_cert_pooling_policy_fragment.is_null() ? nullptr : client_cert_pooling_policy_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->client_cert_pooling_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_cert_pooling_policy in SSLConfig struct");
    fragment->cecpq2_enabled = Traits::cecpq2_enabled(input);
    fragment->ech_enabled = Traits::ech_enabled(input);
  }

  static bool Deserialize(::network::mojom::internal::SSLConfig_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::SSLConfigDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void SSLConfigDataView::GetDisabledCipherSuitesDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->disabled_cipher_suites.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, message_);
}
inline void SSLConfigDataView::GetClientCertPoolingPolicyDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->client_cert_pooling_policy.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::network::mojom::SSLVersion> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::network::mojom::SSLVersion value);
};

} // namespace perfetto

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_