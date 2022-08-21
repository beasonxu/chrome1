// media/mojo/mojom/audio_logging.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_AUDIO_LOGGING_MOJOM_SHARED_H_
#define MEDIA_MOJO_MOJOM_AUDIO_LOGGING_MOJOM_SHARED_H_

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

#include "media/mojo/mojom/audio_logging.mojom-shared-internal.h"
#include "media/mojo/mojom/audio_parameters.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class AudioLogComponent : int32_t {
  
  kInputController = 0,
  
  kOutputController = 1,
  
  kOutputStream = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AudioLogComponent value);
inline bool IsKnownEnumValue(AudioLogComponent value) {
  return internal::AudioLogComponent_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AudioLogInterfaceBase {};

using AudioLogPtrDataView =
    mojo::InterfacePtrDataView<AudioLogInterfaceBase>;
using AudioLogRequestDataView =
    mojo::InterfaceRequestDataView<AudioLogInterfaceBase>;
using AudioLogAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioLogInterfaceBase>;
using AudioLogAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioLogInterfaceBase>;
class AudioLogFactoryInterfaceBase {};

using AudioLogFactoryPtrDataView =
    mojo::InterfacePtrDataView<AudioLogFactoryInterfaceBase>;
using AudioLogFactoryRequestDataView =
    mojo::InterfaceRequestDataView<AudioLogFactoryInterfaceBase>;
using AudioLogFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioLogFactoryInterfaceBase>;
using AudioLogFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioLogFactoryInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::AudioLogComponent>
    : public mojo::internal::EnumHashImpl<::media::mojom::AudioLogComponent> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioLogComponent, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::AudioLogComponent, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::media::mojom::AudioLogComponent>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::media::mojom::AudioLogComponent> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::media::mojom::AudioLogComponent value);
};

} // namespace perfetto

#endif  // MEDIA_MOJO_MOJOM_AUDIO_LOGGING_MOJOM_SHARED_H_