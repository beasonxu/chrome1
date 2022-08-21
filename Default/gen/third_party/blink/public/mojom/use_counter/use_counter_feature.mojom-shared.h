// third_party/blink/public/mojom/use_counter/use_counter_feature.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USE_COUNTER_USE_COUNTER_FEATURE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USE_COUNTER_USE_COUNTER_FEATURE_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/use_counter/use_counter_feature.mojom-shared-internal.h"



#include "base/component_export.h"




namespace blink {
namespace mojom {
class UseCounterFeatureDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::UseCounterFeatureDataView> {
  using Data = ::blink::mojom::internal::UseCounterFeature_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class UseCounterFeatureType : int32_t {
  
  kWebFeature = 0,
  
  kCssProperty = 1,
  
  kAnimatedCssProperty = 2,
  
  kPermissionsPolicyViolationEnforce = 3,
  
  kPermissionsPolicyIframeAttribute = 4,
  
  kPermissionsPolicyHeader = 5,
  
  kUserAgentOverride = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, UseCounterFeatureType value);
inline bool IsKnownEnumValue(UseCounterFeatureType value) {
  return internal::UseCounterFeatureType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


class UseCounterFeatureDataView {
 public:
  UseCounterFeatureDataView() = default;

  UseCounterFeatureDataView(
      internal::UseCounterFeature_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::UseCounterFeatureType>(
        data_value, output);
  }
  UseCounterFeatureType type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::UseCounterFeatureType>(data_->type));
  }
  uint32_t value() const {
    return data_->value;
  }
 private:
  internal::UseCounterFeature_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::UseCounterFeatureType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::UseCounterFeatureType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UseCounterFeatureType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::UseCounterFeatureType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::UseCounterFeatureType>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UseCounterFeatureDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::UseCounterFeatureDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::UseCounterFeature_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    mojo::internal::Serialize<::blink::mojom::UseCounterFeatureType>(
        Traits::type(input), &fragment->type);
    fragment->value = Traits::value(input);
  }

  static bool Deserialize(::blink::mojom::internal::UseCounterFeature_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::UseCounterFeatureDataView data_view(input, message);
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

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::UseCounterFeatureType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::UseCounterFeatureType value);
};

} // namespace perfetto

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USE_COUNTER_USE_COUNTER_FEATURE_MOJOM_SHARED_H_