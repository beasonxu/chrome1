// gpu/ipc/common/gpu_peak_memory.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_PEAK_MEMORY_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_GPU_PEAK_MEMORY_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "gpu/ipc/common/gpu_peak_memory.mojom-shared.h"
#include "gpu/ipc/common/gpu_peak_memory.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct gpu_mojom_internal_GpuPeakMemoryAllocationSource_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::GpuPeakMemoryAllocationSource& value) {
    using utype = std::underlying_type<::gpu::mojom::GpuPeakMemoryAllocationSource>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::GpuPeakMemoryAllocationSource& left, const ::gpu::mojom::GpuPeakMemoryAllocationSource& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::GpuPeakMemoryAllocationSource>
    : public GenericHashTraits<::gpu::mojom::GpuPeakMemoryAllocationSource> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gpu::mojom::GpuPeakMemoryAllocationSource EmptyValue() { return static_cast<::gpu::mojom::GpuPeakMemoryAllocationSource>(-1000000); }
  static void ConstructDeletedValue(::gpu::mojom::GpuPeakMemoryAllocationSource& slot, bool) {
    slot = static_cast<::gpu::mojom::GpuPeakMemoryAllocationSource>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::GpuPeakMemoryAllocationSource& value) {
    return value == static_cast<::gpu::mojom::GpuPeakMemoryAllocationSource>(-1000001);
  }
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {

}  // namespace mojo

#endif  // GPU_IPC_COMMON_GPU_PEAK_MEMORY_MOJOM_BLINK_H_