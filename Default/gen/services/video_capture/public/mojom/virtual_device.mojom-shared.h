// services/video_capture/public/mojom/virtual_device.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_H_

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

#include "services/video_capture/public/mojom/virtual_device.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_buffer.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "services/video_capture/public/mojom/producer.mojom-shared.h"
#include "services/video_capture/public/mojom/video_frame_handler.mojom-shared.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared.h"
#include "ui/gfx/mojom/buffer_types.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace video_capture {
namespace mojom {


}  // namespace mojom
}  // namespace video_capture

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace video_capture {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SharedMemoryVirtualDeviceInterfaceBase {};

using SharedMemoryVirtualDevicePtrDataView =
    mojo::InterfacePtrDataView<SharedMemoryVirtualDeviceInterfaceBase>;
using SharedMemoryVirtualDeviceRequestDataView =
    mojo::InterfaceRequestDataView<SharedMemoryVirtualDeviceInterfaceBase>;
using SharedMemoryVirtualDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedMemoryVirtualDeviceInterfaceBase>;
using SharedMemoryVirtualDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedMemoryVirtualDeviceInterfaceBase>;
class TextureVirtualDeviceInterfaceBase {};

using TextureVirtualDevicePtrDataView =
    mojo::InterfacePtrDataView<TextureVirtualDeviceInterfaceBase>;
using TextureVirtualDeviceRequestDataView =
    mojo::InterfaceRequestDataView<TextureVirtualDeviceInterfaceBase>;
using TextureVirtualDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextureVirtualDeviceInterfaceBase>;
using TextureVirtualDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextureVirtualDeviceInterfaceBase>;
class GpuMemoryBufferVirtualDeviceInterfaceBase {};

using GpuMemoryBufferVirtualDevicePtrDataView =
    mojo::InterfacePtrDataView<GpuMemoryBufferVirtualDeviceInterfaceBase>;
using GpuMemoryBufferVirtualDeviceRequestDataView =
    mojo::InterfaceRequestDataView<GpuMemoryBufferVirtualDeviceInterfaceBase>;
using GpuMemoryBufferVirtualDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GpuMemoryBufferVirtualDeviceInterfaceBase>;
using GpuMemoryBufferVirtualDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GpuMemoryBufferVirtualDeviceInterfaceBase>;


}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {


}  // namespace mojom
}  // namespace video_capture

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_H_