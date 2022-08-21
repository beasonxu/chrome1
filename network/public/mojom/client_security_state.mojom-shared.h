// services/network/public/mojom/client_security_state.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CLIENT_SECURITY_STATE_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CLIENT_SECURITY_STATE_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/client_security_state.mojom-shared-internal.h"
#include "services/network/public/mojom/cross_origin_embedder_policy.mojom-shared.h"
#include "services/network/public/mojom/ip_address_space.mojom-shared.h"







namespace network {
namespace mojom {
class ClientSecurityStateDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::ClientSecurityStateDataView> {
  using Data = ::network::mojom::internal::ClientSecurityState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class PrivateNetworkRequestPolicy : int32_t {
  
  kAllow = 0,
  
  kWarn = 1,
  
  kBlock = 2,
  
  kPreflightWarn = 3,
  
  kPreflightBlock = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, PrivateNetworkRequestPolicy value);
inline bool IsKnownEnumValue(PrivateNetworkRequestPolicy value) {
  return internal::PrivateNetworkRequestPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


class ClientSecurityStateDataView {
 public:
  ClientSecurityStateDataView() = default;

  ClientSecurityStateDataView(
      internal::ClientSecurityState_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetCrossOriginEmbedderPolicyDataView(
      ::network::mojom::CrossOriginEmbedderPolicyDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCrossOriginEmbedderPolicy(UserType* output) {
    
    auto* pointer = data_->cross_origin_embedder_policy.Get();
    return mojo::internal::Deserialize<::network::mojom::CrossOriginEmbedderPolicyDataView>(
        pointer, output, message_);
  }
  bool is_web_secure_context() const {
    return data_->is_web_secure_context;
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
  template <typename UserType>
  [[nodiscard]] bool ReadPrivateNetworkRequestPolicy(UserType* output) const {
    auto data_value = data_->private_network_request_policy;
    return mojo::internal::Deserialize<::network::mojom::PrivateNetworkRequestPolicy>(
        data_value, output);
  }
  PrivateNetworkRequestPolicy private_network_request_policy() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::network::mojom::PrivateNetworkRequestPolicy>(data_->private_network_request_policy));
  }
 private:
  internal::ClientSecurityState_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::PrivateNetworkRequestPolicy>
    : public mojo::internal::EnumHashImpl<::network::mojom::PrivateNetworkRequestPolicy> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::PrivateNetworkRequestPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::PrivateNetworkRequestPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::network::mojom::PrivateNetworkRequestPolicy>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ClientSecurityStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ClientSecurityStateDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::ClientSecurityState_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::cross_origin_embedder_policy(input)) in_cross_origin_embedder_policy = Traits::cross_origin_embedder_policy(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->cross_origin_embedder_policy)::BaseType> cross_origin_embedder_policy_fragment(
            fragment.message());
    mojo::internal::Serialize<::network::mojom::CrossOriginEmbedderPolicyDataView>(
        in_cross_origin_embedder_policy, cross_origin_embedder_policy_fragment);
    fragment->cross_origin_embedder_policy.Set(
        cross_origin_embedder_policy_fragment.is_null() ? nullptr : cross_origin_embedder_policy_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->cross_origin_embedder_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cross_origin_embedder_policy in ClientSecurityState struct");
    fragment->is_web_secure_context = Traits::is_web_secure_context(input);
    mojo::internal::Serialize<::network::mojom::IPAddressSpace>(
        Traits::ip_address_space(input), &fragment->ip_address_space);
    mojo::internal::Serialize<::network::mojom::PrivateNetworkRequestPolicy>(
        Traits::private_network_request_policy(input), &fragment->private_network_request_policy);
  }

  static bool Deserialize(::network::mojom::internal::ClientSecurityState_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ClientSecurityStateDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void ClientSecurityStateDataView::GetCrossOriginEmbedderPolicyDataView(
    ::network::mojom::CrossOriginEmbedderPolicyDataView* output) {
  auto pointer = data_->cross_origin_embedder_policy.Get();
  *output = ::network::mojom::CrossOriginEmbedderPolicyDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::network::mojom::PrivateNetworkRequestPolicy> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::network::mojom::PrivateNetworkRequestPolicy value);
};

} // namespace perfetto

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CLIENT_SECURITY_STATE_MOJOM_SHARED_H_