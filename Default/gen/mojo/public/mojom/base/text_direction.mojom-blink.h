// mojo/public/mojom/base/text_direction.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TEXT_DIRECTION_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_TEXT_DIRECTION_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "mojo/public/mojom/base/text_direction.mojom-shared.h"
#include "mojo/public/mojom/base/text_direction.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "base/component_export.h"




namespace WTF {
struct mojo_base_mojom_internal_TextDirection_DataHashFn {
  static unsigned GetHash(const ::mojo_base::mojom::TextDirection& value) {
    using utype = std::underlying_type<::mojo_base::mojom::TextDirection>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo_base::mojom::TextDirection& left, const ::mojo_base::mojom::TextDirection& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo_base::mojom::TextDirection>
    : public GenericHashTraits<::mojo_base::mojom::TextDirection> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::mojo_base::mojom::TextDirection EmptyValue() { return static_cast<::mojo_base::mojom::TextDirection>(-1000000); }
  static void ConstructDeletedValue(::mojo_base::mojom::TextDirection& slot, bool) {
    slot = static_cast<::mojo_base::mojom::TextDirection>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo_base::mojom::TextDirection& value) {
    return value == static_cast<::mojo_base::mojom::TextDirection>(-1000001);
  }
};
}  // namespace WTF


namespace mojo_base {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_TEXT_DIRECTION_MOJOM_BLINK_H_