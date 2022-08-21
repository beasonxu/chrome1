// gpu/ipc/common/context_result.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "gpu/ipc/common/context_result.mojom-shared-internal.h"



#include "base/component_export.h"




namespace gpu {
namespace mojom {


}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class ContextResult : int32_t {
  
  Success = 0,
  
  TransientFailure = 1,
  
  FatalFailure = 2,
  
  SurfaceFailure = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) std::ostream& operator<<(std::ostream& os, ContextResult value);
inline bool IsKnownEnumValue(ContextResult value) {
  return internal::ContextResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::ContextResult>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::ContextResult> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::ContextResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::ContextResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::gpu::mojom::ContextResult>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {


}  // namespace mojom
}  // namespace gpu

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) TraceFormatTraits<::gpu::mojom::ContextResult> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::gpu::mojom::ContextResult value);
};

} // namespace perfetto

#endif  // GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_SHARED_H_