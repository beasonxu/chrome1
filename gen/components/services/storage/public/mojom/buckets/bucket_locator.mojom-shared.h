// components/services/storage/public/mojom/buckets/bucket_locator.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_LOCATOR_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_LOCATOR_MOJOM_SHARED_H_

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

#include "components/services/storage/public/mojom/buckets/bucket_locator.mojom-shared-internal.h"
#include "components/services/storage/public/mojom/buckets/bucket_id.mojom-shared.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared.h"
#include "third_party/blink/public/mojom/storage_key/storage_key.mojom-shared.h"







namespace storage {
namespace mojom {
class BucketLocatorDataView;



}  // namespace mojom
}  // namespace storage

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::storage::mojom::BucketLocatorDataView> {
  using Data = ::storage::mojom::internal::BucketLocator_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace storage {
namespace mojom {


class BucketLocatorDataView {
 public:
  BucketLocatorDataView() = default;

  BucketLocatorDataView(
      internal::BucketLocator_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::storage::mojom::BucketIdDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadId(UserType* output) {
    
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::storage::mojom::BucketIdDataView>(
        pointer, output, message_);
  }
  inline void GetStorageKeyDataView(
      ::blink::mojom::StorageKeyDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadStorageKey(UserType* output) {
    
    auto* pointer = data_->storage_key.Get();
    return mojo::internal::Deserialize<::blink::mojom::StorageKeyDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::StorageType>(
        data_value, output);
  }
  ::blink::mojom::StorageType type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::StorageType>(data_->type));
  }
  bool is_default() const {
    return data_->is_default;
  }
 private:
  internal::BucketLocator_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace storage

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::storage::mojom::BucketLocatorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::storage::mojom::BucketLocatorDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::storage::mojom::internal::BucketLocator_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::id(input)) in_id = Traits::id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->id)::BaseType> id_fragment(
            fragment.message());
    mojo::internal::Serialize<::storage::mojom::BucketIdDataView>(
        in_id, id_fragment);
    fragment->id.Set(
        id_fragment.is_null() ? nullptr : id_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in BucketLocator struct");
    decltype(Traits::storage_key(input)) in_storage_key = Traits::storage_key(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->storage_key)::BaseType> storage_key_fragment(
            fragment.message());
    mojo::internal::Serialize<::blink::mojom::StorageKeyDataView>(
        in_storage_key, storage_key_fragment);
    fragment->storage_key.Set(
        storage_key_fragment.is_null() ? nullptr : storage_key_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->storage_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null storage_key in BucketLocator struct");
    mojo::internal::Serialize<::blink::mojom::StorageType>(
        Traits::type(input), &fragment->type);
    fragment->is_default = Traits::is_default(input);
  }

  static bool Deserialize(::storage::mojom::internal::BucketLocator_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::storage::mojom::BucketLocatorDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace storage {
namespace mojom {

inline void BucketLocatorDataView::GetIdDataView(
    ::storage::mojom::BucketIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::storage::mojom::BucketIdDataView(pointer, message_);
}
inline void BucketLocatorDataView::GetStorageKeyDataView(
    ::blink::mojom::StorageKeyDataView* output) {
  auto pointer = data_->storage_key.Get();
  *output = ::blink::mojom::StorageKeyDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace storage

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_LOCATOR_MOJOM_SHARED_H_