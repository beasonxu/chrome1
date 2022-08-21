// services/viz/public/mojom/gpu.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_GPU_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_GPU_MOJOM_SHARED_H_

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

#include "services/viz/public/mojom/gpu.mojom-shared-internal.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-shared.h"
#include "gpu/ipc/common/gpu_info.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "media/mojo/mojom/video_encode_accelerator.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared.h"
#include "ui/gfx/mojom/buffer_types.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class GpuMemoryBufferFactoryInterfaceBase {};

using GpuMemoryBufferFactoryPtrDataView =
    mojo::InterfacePtrDataView<GpuMemoryBufferFactoryInterfaceBase>;
using GpuMemoryBufferFactoryRequestDataView =
    mojo::InterfaceRequestDataView<GpuMemoryBufferFactoryInterfaceBase>;
using GpuMemoryBufferFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GpuMemoryBufferFactoryInterfaceBase>;
using GpuMemoryBufferFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GpuMemoryBufferFactoryInterfaceBase>;
class GpuInterfaceBase {};

using GpuPtrDataView =
    mojo::InterfacePtrDataView<GpuInterfaceBase>;
using GpuRequestDataView =
    mojo::InterfaceRequestDataView<GpuInterfaceBase>;
using GpuAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GpuInterfaceBase>;
using GpuAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GpuInterfaceBase>;


}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_GPU_MOJOM_SHARED_H_