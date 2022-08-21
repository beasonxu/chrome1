// third_party/blink/public/mojom/navigation/was_activated_option.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_WAS_ACTIVATED_OPTION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_WAS_ACTIVATED_OPTION_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "third_party/blink/public/mojom/navigation/was_activated_option.mojom-shared.h"
#include "third_party/blink/public/mojom/navigation/was_activated_option.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_WasActivatedOption_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::WasActivatedOption& value) {
    using utype = std::underlying_type<::blink::mojom::WasActivatedOption>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::WasActivatedOption& left, const ::blink::mojom::WasActivatedOption& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::WasActivatedOption>
    : public GenericHashTraits<::blink::mojom::WasActivatedOption> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::WasActivatedOption EmptyValue() { return static_cast<::blink::mojom::WasActivatedOption>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::WasActivatedOption& slot, bool) {
    slot = static_cast<::blink::mojom::WasActivatedOption>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::WasActivatedOption& value) {
    return value == static_cast<::blink::mojom::WasActivatedOption>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NAVIGATION_WAS_ACTIVATED_OPTION_MOJOM_BLINK_H_