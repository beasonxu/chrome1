// ui/gfx/mojom/overlay_priority_hint.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_OVERLAY_PRIORITY_HINT_MOJOM_BLINK_H_
#define UI_GFX_MOJOM_OVERLAY_PRIORITY_HINT_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "ui/gfx/mojom/overlay_priority_hint.mojom-shared.h"
#include "ui/gfx/mojom/overlay_priority_hint.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"








namespace WTF {
struct gfx_mojom_internal_OverlayPriorityHint_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::OverlayPriorityHint& value) {
    using utype = std::underlying_type<::gfx::mojom::OverlayPriorityHint>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::OverlayPriorityHint& left, const ::gfx::mojom::OverlayPriorityHint& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::OverlayPriorityHint>
    : public GenericHashTraits<::gfx::mojom::OverlayPriorityHint> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::OverlayPriorityHint EmptyValue() { return static_cast<::gfx::mojom::OverlayPriorityHint>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::OverlayPriorityHint& slot, bool) {
    slot = static_cast<::gfx::mojom::OverlayPriorityHint>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::OverlayPriorityHint& value) {
    return value == static_cast<::gfx::mojom::OverlayPriorityHint>(-1000001);
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

#endif  // UI_GFX_MOJOM_OVERLAY_PRIORITY_HINT_MOJOM_BLINK_H_