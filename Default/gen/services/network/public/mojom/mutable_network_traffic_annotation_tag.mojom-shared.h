// services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"







namespace network {
namespace mojom {
class MutableNetworkTrafficAnnotationTagDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::MutableNetworkTrafficAnnotationTagDataView> {
  using Data = ::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


class MutableNetworkTrafficAnnotationTagDataView {
 public:
  MutableNetworkTrafficAnnotationTagDataView() = default;

  MutableNetworkTrafficAnnotationTagDataView(
      internal::MutableNetworkTrafficAnnotationTag_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t unique_id_hash_code() const {
    return data_->unique_id_hash_code;
  }
 private:
  internal::MutableNetworkTrafficAnnotationTag_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::MutableNetworkTrafficAnnotationTagDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::MutableNetworkTrafficAnnotationTagDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->unique_id_hash_code = Traits::unique_id_hash_code(input);
  }

  static bool Deserialize(::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_SHARED_H_