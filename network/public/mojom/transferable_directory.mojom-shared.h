// services/network/public/mojom/transferable_directory.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRANSFERABLE_DIRECTORY_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRANSFERABLE_DIRECTORY_MOJOM_SHARED_H_

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

#include "services/network/public/mojom/transferable_directory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace network {
namespace mojom {
class TransferableDirectoryDataView;


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::TransferableDirectoryDataView> {
  using Data = ::network::mojom::internal::TransferableDirectory_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kUnion;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


class TransferableDirectoryDataView {
 public:
  using Tag = internal::TransferableDirectory_Data::TransferableDirectory_Tag;

  TransferableDirectoryDataView() = default;

  TransferableDirectoryDataView(
      internal::TransferableDirectory_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_handle_for_ipc() const { return data_->tag == Tag::kHandleForIpc; }
  mojo::PlatformHandle TakeHandleForIpc() {
    CHECK(is_handle_for_ipc());
    mojo::PlatformHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::PlatformHandle>(
            &data_->data.f_handle_for_ipc, &result, message_);
    CHECK(ret);
    return result;
  }
  bool is_path() const { return data_->tag == Tag::kPath; }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output) const;

  template <typename UserType>
  [[nodiscard]] bool ReadPath(UserType* output) const {
    
    CHECK(is_path());
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        data_->data.f_path.Get(), output, message_);
  }

 private:
  internal::TransferableDirectory_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::TransferableDirectoryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::network::mojom::TransferableDirectoryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        MessageFragment<::network::mojom::internal::TransferableDirectory_Data>& fragment,
                        bool inlined) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
        fragment->set_null();
      return;
    }

    if (!inlined)
      fragment.Allocate();

    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    fragment->size = kUnionDataSize;
    fragment->tag = Traits::GetTag(input);
    switch (fragment->tag) {
      case ::network::mojom::TransferableDirectoryDataView::Tag::kHandleForIpc: {
        decltype(Traits::handle_for_ipc(input))
            in_handle_for_ipc = Traits::handle_for_ipc(input);
        mojo::internal::Serialize<mojo::PlatformHandle>(
            in_handle_for_ipc, &fragment->data.f_handle_for_ipc, &fragment.message());
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(fragment->data.f_handle_for_ipc),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid handle_for_ipc in TransferableDirectory union");
        break;
      }
      case ::network::mojom::TransferableDirectoryDataView::Tag::kPath: {
        decltype(Traits::path(input))
            in_path = Traits::path(input);
        mojo::internal::MessageFragment<
            typename decltype(fragment->data.f_path)::BaseType>
            value_fragment(fragment.message());
        mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
            in_path, value_fragment);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_fragment.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null path in TransferableDirectory union");
        fragment->data.f_path.Set(
            value_fragment.is_null() ? nullptr : value_fragment.data());
        break;
      }
    }
  }

  static bool Deserialize(::network::mojom::internal::TransferableDirectory_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::TransferableDirectoryDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void TransferableDirectoryDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) const {
  CHECK(is_path());
  *output = ::mojo_base::mojom::FilePathDataView(data_->data.f_path.Get(), message_);
}


}  // namespace mojom
}  // namespace network

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRANSFERABLE_DIRECTORY_MOJOM_SHARED_H_