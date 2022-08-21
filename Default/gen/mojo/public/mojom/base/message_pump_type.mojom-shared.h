// mojo/public/mojom/base/message_pump_type.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_MESSAGE_PUMP_TYPE_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_MESSAGE_PUMP_TYPE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "mojo/public/mojom/base/message_pump_type.mojom-shared-internal.h"



#include "base/component_export.h"




namespace mojo_base {
namespace mojom {


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {


enum class MessagePumpType : int32_t {
  
  kDefault = 0,
  
  kUi = 1,
  
  kCustom = 2,
  
  kIo = 3,
  
  kJava = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, MessagePumpType value);
inline bool IsKnownEnumValue(MessagePumpType value) {
  return internal::MessagePumpType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace mojo_base

namespace std {

template <>
struct hash<::mojo_base::mojom::MessagePumpType>
    : public mojo::internal::EnumHashImpl<::mojo_base::mojom::MessagePumpType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::MessagePumpType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo_base::mojom::MessagePumpType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::mojo_base::mojom::MessagePumpType>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {


}  // namespace mojom
}  // namespace mojo_base

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) TraceFormatTraits<::mojo_base::mojom::MessagePumpType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::mojo_base::mojom::MessagePumpType value);
};

} // namespace perfetto

#endif  // MOJO_PUBLIC_MOJOM_BASE_MESSAGE_PUMP_TYPE_MOJOM_SHARED_H_