// services/viz/public/mojom/compositing/compositor_frame_sink.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/begin_frame_args.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/frame_timing_details.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/returned_resource.mojom-shared-internal.h"
#include "services/viz/public/mojom/hit_test/hit_test_region_list.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {

struct CompositorFrameSinkType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_