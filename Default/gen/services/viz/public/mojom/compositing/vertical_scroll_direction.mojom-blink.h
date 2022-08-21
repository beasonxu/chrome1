// services/viz/public/mojom/compositing/vertical_scroll_direction.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_VERTICAL_SCROLL_DIRECTION_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_VERTICAL_SCROLL_DIRECTION_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "services/viz/public/mojom/compositing/vertical_scroll_direction.mojom-shared.h"
#include "services/viz/public/mojom/compositing/vertical_scroll_direction.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "services/viz/public/cpp/compositing/vertical_scroll_direction_mojom_traits.h"
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct viz_mojom_internal_VerticalScrollDirection_DataHashFn {
  static unsigned GetHash(const ::viz::mojom::VerticalScrollDirection& value) {
    using utype = std::underlying_type<::viz::mojom::VerticalScrollDirection>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::viz::mojom::VerticalScrollDirection& left, const ::viz::mojom::VerticalScrollDirection& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::viz::mojom::VerticalScrollDirection>
    : public GenericHashTraits<::viz::mojom::VerticalScrollDirection> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::viz::mojom::VerticalScrollDirection EmptyValue() { return static_cast<::viz::mojom::VerticalScrollDirection>(-1000000); }
  static void ConstructDeletedValue(::viz::mojom::VerticalScrollDirection& slot, bool) {
    slot = static_cast<::viz::mojom::VerticalScrollDirection>(-1000001);
  }
  static bool IsDeletedValue(const ::viz::mojom::VerticalScrollDirection& value) {
    return value == static_cast<::viz::mojom::VerticalScrollDirection>(-1000001);
  }
};
}  // namespace WTF


namespace viz {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_VERTICAL_SCROLL_DIRECTION_MOJOM_BLINK_H_