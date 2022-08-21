// ui/base/cursor/mojom/cursor_type.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_CURSOR_MOJOM_CURSOR_TYPE_MOJOM_BLINK_H_
#define UI_BASE_CURSOR_MOJOM_CURSOR_TYPE_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/type_converter.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "ui/base/cursor/mojom/cursor_type.mojom-shared.h"
#include "ui/base/cursor/mojom/cursor_type.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"








namespace WTF {
struct ui_mojom_internal_CursorType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::CursorType& value) {
    using utype = std::underlying_type<::ui::mojom::CursorType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::CursorType& left, const ::ui::mojom::CursorType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::CursorType>
    : public GenericHashTraits<::ui::mojom::CursorType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::ui::mojom::CursorType EmptyValue() { return static_cast<::ui::mojom::CursorType>(-1000000); }
  static void ConstructDeletedValue(::ui::mojom::CursorType& slot, bool) {
    slot = static_cast<::ui::mojom::CursorType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::CursorType& value) {
    return value == static_cast<::ui::mojom::CursorType>(-1000001);
  }
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // UI_BASE_CURSOR_MOJOM_CURSOR_TYPE_MOJOM_BLINK_H_