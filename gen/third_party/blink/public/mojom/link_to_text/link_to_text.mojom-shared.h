// third_party/blink/public/mojom/link_to_text/link_to_text.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LINK_TO_TEXT_LINK_TO_TEXT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LINK_TO_TEXT_LINK_TO_TEXT_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/link_to_text/link_to_text.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class LinkGenerationReadyStatus : int32_t {
  
  kRequestedBeforeReady = 0,
  
  kRequestedAfterReady = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, LinkGenerationReadyStatus value);
inline bool IsKnownEnumValue(LinkGenerationReadyStatus value) {
  return internal::LinkGenerationReadyStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class LinkGenerationError : int32_t {
  
  kNone = -1,
  
  kIncorrectSelector = 0,
  
  kNoRange = 1,
  
  kNoContext = 2,
  
  kContextExhausted = 3,
  
  kContextLimitReached = 4,
  
  kEmptySelection = 5,
  
  kTabHidden = 6,
  
  kOmniboxNavigation = 7,
  
  kTabCrash = 8,
  
  kUnknown = 9,
  
  kIFrame = 10,
  
  kTimeout = 11,
  
  kBlockList = 12,
  
  kNoRemoteConnection = 13,
  
  kNotGenerated = 14,
  kMinValue = -1,
  kMaxValue = 14,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, LinkGenerationError value);
inline bool IsKnownEnumValue(LinkGenerationError value) {
  return internal::LinkGenerationError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class TextFragmentReceiverInterfaceBase {};

using TextFragmentReceiverPtrDataView =
    mojo::InterfacePtrDataView<TextFragmentReceiverInterfaceBase>;
using TextFragmentReceiverRequestDataView =
    mojo::InterfaceRequestDataView<TextFragmentReceiverInterfaceBase>;
using TextFragmentReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextFragmentReceiverInterfaceBase>;
using TextFragmentReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextFragmentReceiverInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::LinkGenerationReadyStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LinkGenerationReadyStatus> {};

template <>
struct hash<::blink::mojom::LinkGenerationError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LinkGenerationError> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LinkGenerationReadyStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LinkGenerationReadyStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::LinkGenerationReadyStatus>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LinkGenerationError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LinkGenerationError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::LinkGenerationError>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::LinkGenerationReadyStatus> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::LinkGenerationReadyStatus value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::LinkGenerationError> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::LinkGenerationError value);
};

} // namespace perfetto

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LINK_TO_TEXT_LINK_TO_TEXT_MOJOM_SHARED_H_