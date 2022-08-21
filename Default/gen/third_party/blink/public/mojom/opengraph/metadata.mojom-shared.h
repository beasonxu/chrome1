// third_party/blink/public/mojom/opengraph/metadata.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OPENGRAPH_METADATA_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OPENGRAPH_METADATA_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/opengraph/metadata.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"



#include "base/component_export.h"




namespace blink {
namespace mojom {
class OpenGraphMetadataDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::OpenGraphMetadataDataView> {
  using Data = ::blink::mojom::internal::OpenGraphMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


class OpenGraphMetadataDataView {
 public:
  OpenGraphMetadataDataView() = default;

  OpenGraphMetadataDataView(
      internal::OpenGraphMetadata_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadImage(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::url::mojom::UrlDataView, UserType>(),
    "Attempting to read the optional `image` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadImage` instead "
    "of `ReadImage if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
 private:
  internal::OpenGraphMetadata_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::OpenGraphMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::OpenGraphMetadataDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::OpenGraphMetadata_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::image(input)) in_image = Traits::image(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->image)::BaseType> image_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_image, image_fragment);
    fragment->image.Set(
        image_fragment.is_null() ? nullptr : image_fragment.data());
  }

  static bool Deserialize(::blink::mojom::internal::OpenGraphMetadata_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::OpenGraphMetadataDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void OpenGraphMetadataDataView::GetImageDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->image.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OPENGRAPH_METADATA_MOJOM_SHARED_H_