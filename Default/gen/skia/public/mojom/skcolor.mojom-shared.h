// skia/public/mojom/skcolor.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_MOJOM_SKCOLOR_MOJOM_SHARED_H_
#define SKIA_PUBLIC_MOJOM_SKCOLOR_MOJOM_SHARED_H_

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

#include "skia/public/mojom/skcolor.mojom-shared-internal.h"







namespace skia {
namespace mojom {
class SkColorDataView;



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::skia::mojom::SkColorDataView> {
  using Data = ::skia::mojom::internal::SkColor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace skia {
namespace mojom {


class SkColorDataView {
 public:
  SkColorDataView() = default;

  SkColorDataView(
      internal::SkColor_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t value() const {
    return data_->value;
  }
 private:
  internal::SkColor_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::SkColorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::SkColorDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::skia::mojom::internal::SkColor_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->value = Traits::value(input);
  }

  static bool Deserialize(::skia::mojom::internal::SkColor_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::SkColorDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace skia {
namespace mojom {




}  // namespace mojom
}  // namespace skia

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SKIA_PUBLIC_MOJOM_SKCOLOR_MOJOM_SHARED_H_