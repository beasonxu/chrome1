// ui/gfx/mojom/overlay_transform.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_OVERLAY_TRANSFORM_MOJOM_BLINK_H_
#define UI_GFX_MOJOM_OVERLAY_TRANSFORM_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "ui/gfx/mojom/overlay_transform.mojom-shared.h"
#include "ui/gfx/mojom/overlay_transform.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"








namespace WTF {
struct gfx_mojom_internal_OverlayTransform_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::OverlayTransform& value) {
    using utype = std::underlying_type<::gfx::mojom::OverlayTransform>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::OverlayTransform& left, const ::gfx::mojom::OverlayTransform& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::OverlayTransform>
    : public GenericHashTraits<::gfx::mojom::OverlayTransform> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::OverlayTransform EmptyValue() { return static_cast<::gfx::mojom::OverlayTransform>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::OverlayTransform& slot, bool) {
    slot = static_cast<::gfx::mojom::OverlayTransform>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::OverlayTransform& value) {
    return value == static_cast<::gfx::mojom::OverlayTransform>(-1000001);
  }
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {

}  // namespace mojo

#endif  // UI_GFX_MOJOM_OVERLAY_TRANSFORM_MOJOM_BLINK_H_