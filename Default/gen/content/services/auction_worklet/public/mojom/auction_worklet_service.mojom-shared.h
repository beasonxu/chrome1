// content/services/auction_worklet/public/mojom/auction_worklet_service.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_AUCTION_WORKLET_SERVICE_MOJOM_SHARED_H_
#define CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_AUCTION_WORKLET_SERVICE_MOJOM_SHARED_H_

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

#include "content/services/auction_worklet/public/mojom/auction_worklet_service.mojom-shared-internal.h"
#include "content/services/auction_worklet/public/mojom/bidder_worklet.mojom-shared.h"
#include "content/services/auction_worklet/public/mojom/seller_worklet.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "sandbox/policy/mojom/sandbox.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "third_party/blink/public/mojom/interest_group/interest_group_types.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "base/component_export.h"




namespace auction_worklet {
namespace mojom {
class BrowserSignalsDataView;



}  // namespace mojom
}  // namespace auction_worklet

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::auction_worklet::mojom::BrowserSignalsDataView> {
  using Data = ::auction_worklet::mojom::internal::BrowserSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace auction_worklet {
namespace mojom {
// Interface base classes. They are used for type safety check.
class AuctionWorkletServiceInterfaceBase {};

using AuctionWorkletServicePtrDataView =
    mojo::InterfacePtrDataView<AuctionWorkletServiceInterfaceBase>;
using AuctionWorkletServiceRequestDataView =
    mojo::InterfaceRequestDataView<AuctionWorkletServiceInterfaceBase>;
using AuctionWorkletServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AuctionWorkletServiceInterfaceBase>;
using AuctionWorkletServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AuctionWorkletServiceInterfaceBase>;


class BrowserSignalsDataView {
 public:
  BrowserSignalsDataView() = default;

  BrowserSignalsDataView(
      internal::BrowserSignals_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTopFrameOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTopFrameOrigin(UserType* output) {
    
    auto* pointer = data_->top_frame_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, message_);
  }
  inline void GetSellerDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSeller(UserType* output) {
    
    auto* pointer = data_->seller.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, message_);
  }
 private:
  internal::BrowserSignals_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace auction_worklet

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::auction_worklet::mojom::BrowserSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::auction_worklet::mojom::BrowserSignalsDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::auction_worklet::mojom::internal::BrowserSignals_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::top_frame_origin(input)) in_top_frame_origin = Traits::top_frame_origin(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->top_frame_origin)::BaseType> top_frame_origin_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_top_frame_origin, top_frame_origin_fragment);
    fragment->top_frame_origin.Set(
        top_frame_origin_fragment.is_null() ? nullptr : top_frame_origin_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->top_frame_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null top_frame_origin in BrowserSignals struct");
    decltype(Traits::seller(input)) in_seller = Traits::seller(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->seller)::BaseType> seller_fragment(
            fragment.message());
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_seller, seller_fragment);
    fragment->seller.Set(
        seller_fragment.is_null() ? nullptr : seller_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->seller.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null seller in BrowserSignals struct");
  }

  static bool Deserialize(::auction_worklet::mojom::internal::BrowserSignals_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::auction_worklet::mojom::BrowserSignalsDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace auction_worklet {
namespace mojom {

inline void BrowserSignalsDataView::GetTopFrameOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->top_frame_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, message_);
}
inline void BrowserSignalsDataView::GetSellerDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->seller.Get();
  *output = ::url::mojom::OriginDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace auction_worklet

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_AUCTION_WORKLET_SERVICE_MOJOM_SHARED_H_