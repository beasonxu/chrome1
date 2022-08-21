// services/network/public/mojom/default_credentials.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DEFAULT_CREDENTIALS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DEFAULT_CREDENTIALS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "services/network/public/mojom/default_credentials.mojom-shared-internal.h"







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


enum class DefaultCredentials : int32_t {
  
  DISALLOW_DEFAULT_CREDENTIALS = 0,
  
  ALLOW_DEFAULT_CREDENTIALS = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, DefaultCredentials value);
inline bool IsKnownEnumValue(DefaultCredentials value) {
  return internal::DefaultCredentials_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::DefaultCredentials>
    : public mojo::internal::EnumHashImpl<::network::mojom::DefaultCredentials> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DefaultCredentials, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::DefaultCredentials, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::network::mojom::DefaultCredentials>(input)), output);
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
struct  TraceFormatTraits<::network::mojom::DefaultCredentials> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::network::mojom::DefaultCredentials value);
};

} // namespace perfetto

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DEFAULT_CREDENTIALS_MOJOM_SHARED_H_