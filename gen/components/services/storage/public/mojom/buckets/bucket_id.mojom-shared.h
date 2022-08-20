// components/services/storage/public/mojom/buckets/bucket_id.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_ID_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_ID_MOJOM_SHARED_H_

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

#include "components/services/storage/public/mojom/buckets/bucket_id.mojom-shared-internal.h"







namespace storage {
namespace mojom {
class BucketIdDataView;



}  // namespace mojom
}  // namespace storage

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::storage::mojom::BucketIdDataView> {
  using Data = ::storage::mojom::internal::BucketId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace storage {
namespace mojom {


class BucketIdDataView {
 public:
  BucketIdDataView() = default;

  BucketIdDataView(
      internal::BucketId_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t value() const {
    return data_->value;
  }
 private:
  internal::BucketId_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace storage

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::storage::mojom::BucketIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::storage::mojom::BucketIdDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::storage::mojom::internal::BucketId_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->value = Traits::value(input);
  }

  static bool Deserialize(::storage::mojom::internal::BucketId_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::storage::mojom::BucketIdDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace storage {
namespace mojom {




}  // namespace mojom
}  // namespace storage

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_ID_MOJOM_SHARED_H_