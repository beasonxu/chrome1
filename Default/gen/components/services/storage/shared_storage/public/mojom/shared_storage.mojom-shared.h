// components/services/storage/shared_storage/public/mojom/shared_storage.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_SHARED_STORAGE_PUBLIC_MOJOM_SHARED_STORAGE_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_STORAGE_SHARED_STORAGE_PUBLIC_MOJOM_SHARED_STORAGE_MOJOM_SHARED_H_

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

#include "components/services/storage/shared_storage/public/mojom/shared_storage.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace shared_storage_worklet {
namespace mojom {
class SharedStorageKeyAndOrValueDataView;



}  // namespace mojom
}  // namespace shared_storage_worklet

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::shared_storage_worklet::mojom::SharedStorageKeyAndOrValueDataView> {
  using Data = ::shared_storage_worklet::mojom::internal::SharedStorageKeyAndOrValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace shared_storage_worklet {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SharedStorageEntriesListenerInterfaceBase {};

using SharedStorageEntriesListenerPtrDataView =
    mojo::InterfacePtrDataView<SharedStorageEntriesListenerInterfaceBase>;
using SharedStorageEntriesListenerRequestDataView =
    mojo::InterfaceRequestDataView<SharedStorageEntriesListenerInterfaceBase>;
using SharedStorageEntriesListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedStorageEntriesListenerInterfaceBase>;
using SharedStorageEntriesListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedStorageEntriesListenerInterfaceBase>;


class SharedStorageKeyAndOrValueDataView {
 public:
  SharedStorageKeyAndOrValueDataView() = default;

  SharedStorageKeyAndOrValueDataView(
      internal::SharedStorageKeyAndOrValue_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadKey(UserType* output) {
    
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, message_);
  }
  inline void GetValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadValue(UserType* output) {
    
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedStorageKeyAndOrValue_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace shared_storage_worklet

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shared_storage_worklet::mojom::SharedStorageKeyAndOrValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shared_storage_worklet::mojom::SharedStorageKeyAndOrValueDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::shared_storage_worklet::mojom::internal::SharedStorageKeyAndOrValue_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::key(input)) in_key = Traits::key(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->key)::BaseType> key_fragment(
            fragment.message());
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_key, key_fragment);
    fragment->key.Set(
        key_fragment.is_null() ? nullptr : key_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in SharedStorageKeyAndOrValue struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->value)::BaseType> value_fragment(
            fragment.message());
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_value, value_fragment);
    fragment->value.Set(
        value_fragment.is_null() ? nullptr : value_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in SharedStorageKeyAndOrValue struct");
  }

  static bool Deserialize(::shared_storage_worklet::mojom::internal::SharedStorageKeyAndOrValue_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shared_storage_worklet::mojom::SharedStorageKeyAndOrValueDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace shared_storage_worklet {
namespace mojom {

inline void SharedStorageKeyAndOrValueDataView::GetKeyDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->key.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, message_);
}
inline void SharedStorageKeyAndOrValueDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, message_);
}



}  // namespace mojom
}  // namespace shared_storage_worklet

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // COMPONENTS_SERVICES_STORAGE_SHARED_STORAGE_PUBLIC_MOJOM_SHARED_STORAGE_MOJOM_SHARED_H_