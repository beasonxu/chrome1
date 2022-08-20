// third_party/blink/public/mojom/mobile_metrics/mobile_friendliness.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MOBILE_METRICS_MOBILE_FRIENDLINESS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MOBILE_METRICS_MOBILE_FRIENDLINESS_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/mobile_metrics/mobile_friendliness.mojom-shared-internal.h"







namespace blink {
namespace mojom {
class MobileFriendlinessDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::MobileFriendlinessDataView> {
  using Data = ::blink::mojom::internal::MobileFriendliness_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


class MobileFriendlinessDataView {
 public:
  MobileFriendlinessDataView() = default;

  MobileFriendlinessDataView(
      internal::MobileFriendliness_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool viewport_device_width() const {
    return data_->viewport_device_width;
  }
  int32_t viewport_initial_scale_x10() const {
    return data_->viewport_initial_scale_x10;
  }
  int32_t viewport_hardcoded_width() const {
    return data_->viewport_hardcoded_width;
  }
  bool allow_user_zoom() const {
    return data_->allow_user_zoom;
  }
  int32_t small_text_ratio() const {
    return data_->small_text_ratio;
  }
  int32_t text_content_outside_viewport_percentage() const {
    return data_->text_content_outside_viewport_percentage;
  }
  int32_t bad_tap_targets_ratio() const {
    return data_->bad_tap_targets_ratio;
  }
 private:
  internal::MobileFriendliness_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MobileFriendlinessDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MobileFriendlinessDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::MobileFriendliness_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->viewport_device_width = Traits::viewport_device_width(input);
    fragment->viewport_initial_scale_x10 = Traits::viewport_initial_scale_x10(input);
    fragment->viewport_hardcoded_width = Traits::viewport_hardcoded_width(input);
    fragment->allow_user_zoom = Traits::allow_user_zoom(input);
    fragment->small_text_ratio = Traits::small_text_ratio(input);
    fragment->text_content_outside_viewport_percentage = Traits::text_content_outside_viewport_percentage(input);
    fragment->bad_tap_targets_ratio = Traits::bad_tap_targets_ratio(input);
  }

  static bool Deserialize(::blink::mojom::internal::MobileFriendliness_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MobileFriendlinessDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MOBILE_METRICS_MOBILE_FRIENDLINESS_MOJOM_SHARED_H_