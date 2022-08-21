// services/network/public/mojom/x_frame_options.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_X_FRAME_OPTIONS_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_X_FRAME_OPTIONS_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "services/network/public/mojom/x_frame_options.mojom-shared.h"
#include "services/network/public/mojom/x_frame_options.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_XFrameOptionsValue_DataHashFn {
  static unsigned GetHash(const ::network::mojom::XFrameOptionsValue& value) {
    using utype = std::underlying_type<::network::mojom::XFrameOptionsValue>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::XFrameOptionsValue& left, const ::network::mojom::XFrameOptionsValue& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::XFrameOptionsValue>
    : public GenericHashTraits<::network::mojom::XFrameOptionsValue> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::network::mojom::XFrameOptionsValue EmptyValue() { return static_cast<::network::mojom::XFrameOptionsValue>(-1000000); }
  static void ConstructDeletedValue(::network::mojom::XFrameOptionsValue& slot, bool) {
    slot = static_cast<::network::mojom::XFrameOptionsValue>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::XFrameOptionsValue& value) {
    return value == static_cast<::network::mojom::XFrameOptionsValue>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_X_FRAME_OPTIONS_MOJOM_BLINK_H_