// services/audio/public/mojom/debug_recording.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_H_

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

#include "services/audio/public/mojom/debug_recording.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace audio {
namespace mojom {


}  // namespace mojom
}  // namespace audio

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace audio {
namespace mojom {


enum class DebugRecordingStreamType : int32_t {
  
  kInput = 0,
  
  kOutput = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, DebugRecordingStreamType value);
inline bool IsKnownEnumValue(DebugRecordingStreamType value) {
  return internal::DebugRecordingStreamType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DebugRecordingFileProviderInterfaceBase {};

using DebugRecordingFileProviderPtrDataView =
    mojo::InterfacePtrDataView<DebugRecordingFileProviderInterfaceBase>;
using DebugRecordingFileProviderRequestDataView =
    mojo::InterfaceRequestDataView<DebugRecordingFileProviderInterfaceBase>;
using DebugRecordingFileProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DebugRecordingFileProviderInterfaceBase>;
using DebugRecordingFileProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DebugRecordingFileProviderInterfaceBase>;
class DebugRecordingInterfaceBase {};

using DebugRecordingPtrDataView =
    mojo::InterfacePtrDataView<DebugRecordingInterfaceBase>;
using DebugRecordingRequestDataView =
    mojo::InterfaceRequestDataView<DebugRecordingInterfaceBase>;
using DebugRecordingAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DebugRecordingInterfaceBase>;
using DebugRecordingAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DebugRecordingInterfaceBase>;


}  // namespace mojom
}  // namespace audio

namespace std {

template <>
struct hash<::audio::mojom::DebugRecordingStreamType>
    : public mojo::internal::EnumHashImpl<::audio::mojom::DebugRecordingStreamType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::audio::mojom::DebugRecordingStreamType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::audio::mojom::DebugRecordingStreamType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::audio::mojom::DebugRecordingStreamType>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace audio {
namespace mojom {


}  // namespace mojom
}  // namespace audio

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::audio::mojom::DebugRecordingStreamType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::audio::mojom::DebugRecordingStreamType value);
};

} // namespace perfetto

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_H_