// third_party/blink/public/mojom/permissions_policy/permissions_policy_feature.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_POLICY_PERMISSIONS_POLICY_FEATURE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_POLICY_PERMISSIONS_POLICY_FEATURE_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "third_party/blink/public/mojom/permissions_policy/permissions_policy_feature.mojom-shared.h"
#include "third_party/blink/public/mojom/permissions_policy/permissions_policy_feature.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_PermissionsPolicyFeature_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PermissionsPolicyFeature& value) {
    using utype = std::underlying_type<::blink::mojom::PermissionsPolicyFeature>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PermissionsPolicyFeature& left, const ::blink::mojom::PermissionsPolicyFeature& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PermissionsPolicyFeature>
    : public GenericHashTraits<::blink::mojom::PermissionsPolicyFeature> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::PermissionsPolicyFeature EmptyValue() { return static_cast<::blink::mojom::PermissionsPolicyFeature>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::PermissionsPolicyFeature& slot, bool) {
    slot = static_cast<::blink::mojom::PermissionsPolicyFeature>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PermissionsPolicyFeature& value) {
    return value == static_cast<::blink::mojom::PermissionsPolicyFeature>(-1000001);
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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_POLICY_PERMISSIONS_POLICY_FEATURE_MOJOM_BLINK_H_