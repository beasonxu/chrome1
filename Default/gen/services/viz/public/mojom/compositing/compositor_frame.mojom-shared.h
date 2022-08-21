// services/viz/public/mojom/compositing/compositor_frame.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_H_

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

#include "services/viz/public/mojom/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/compositor_frame_metadata.mojom-shared.h"
#include "services/viz/public/mojom/compositing/compositor_render_pass.mojom-shared.h"
#include "services/viz/public/mojom/compositing/transferable_resource.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace viz {
namespace mojom {
class CompositorFrameDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::CompositorFrameDataView> {
  using Data = ::viz::mojom::internal::CompositorFrame_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {


class CompositorFrameDataView {
 public:
  CompositorFrameDataView() = default;

  CompositorFrameDataView(
      internal::CompositorFrame_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::viz::mojom::CompositorFrameMetadataDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMetadata(UserType* output) {
    
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameMetadataDataView>(
        pointer, output, message_);
  }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResources(UserType* output) {
    
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>>(
        pointer, output, message_);
  }
  inline void GetPassesDataView(
      mojo::ArrayDataView<::viz::mojom::CompositorRenderPassDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPasses(UserType* output) {
    
    auto* pointer = data_->passes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::CompositorRenderPassDataView>>(
        pointer, output, message_);
  }
 private:
  internal::CompositorFrame_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CompositorFrameDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::CompositorFrameDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::viz::mojom::internal::CompositorFrame_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::metadata(input)) in_metadata = Traits::metadata(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->metadata)::BaseType> metadata_fragment(
            fragment.message());
    mojo::internal::Serialize<::viz::mojom::CompositorFrameMetadataDataView>(
        in_metadata, metadata_fragment);
    fragment->metadata.Set(
        metadata_fragment.is_null() ? nullptr : metadata_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->metadata.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null metadata in CompositorFrame struct");
    decltype(Traits::resources(input)) in_resources = Traits::resources(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->resources)::BaseType>
        resources_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams resources_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>>(
        in_resources, resources_fragment, &resources_validate_params);
    fragment->resources.Set(
        resources_fragment.is_null() ? nullptr : resources_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->resources.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null resources in CompositorFrame struct");
    decltype(Traits::passes(input)) in_passes = Traits::passes(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->passes)::BaseType>
        passes_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams passes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::CompositorRenderPassDataView>>(
        in_passes, passes_fragment, &passes_validate_params);
    fragment->passes.Set(
        passes_fragment.is_null() ? nullptr : passes_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->passes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null passes in CompositorFrame struct");
  }

  static bool Deserialize(::viz::mojom::internal::CompositorFrame_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::CompositorFrameDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void CompositorFrameDataView::GetMetadataDataView(
    ::viz::mojom::CompositorFrameMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::viz::mojom::CompositorFrameMetadataDataView(pointer, message_);
}
inline void CompositorFrameDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>(pointer, message_);
}
inline void CompositorFrameDataView::GetPassesDataView(
    mojo::ArrayDataView<::viz::mojom::CompositorRenderPassDataView>* output) {
  auto pointer = data_->passes.Get();
  *output = mojo::ArrayDataView<::viz::mojom::CompositorRenderPassDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace viz

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_H_