// services/network/public/mojom/address_family.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_FAMILY_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_FAMILY_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "services/network/public/mojom/address_family.mojom-shared-internal.h"







namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class AddressFamily : int32_t {
  
  UNSPECIFIED = 0,
  
  IPV4 = 1,
  
  IPV6 = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AddressFamily value);
inline bool IsKnownEnumValue(AddressFamily value) {
  return internal::AddressFamily_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::AddressFamily>
    : public mojo::internal::EnumHashImpl<::network::mojom::AddressFamily> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::AddressFamily, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::AddressFamily, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::network::mojom::AddressFamily>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::network::mojom::AddressFamily> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::network::mojom::AddressFamily value);
};

} // namespace perfetto

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_FAMILY_MOJOM_SHARED_H_